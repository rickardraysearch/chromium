# Copyright (c) 2001, Stanford University
# All rights reserved.
#
# See the file LICENSE.txt for information on redistributing this software.

# This script generates the packer_bbox.c file from gl_header.parsed

import sys
import cPickle
import string

sys.path.append( "../glapi_parser" )
import apiutil


apiutil.CopyrightC()

print """
/* DO NOT EDIT - THIS FILE GENERATED BY THE packer_bbox.py SCRIPT */

/* These functions pack glVertex functions and also update the bounding box
 * if the cr_packer_globals.updateBBOX variable is non-zero.
 */

#include "packer.h"
#include "cr_opcodes.h"
#include "pack_bbox.h"

#include <float.h>

void crPackResetBBOX( CRPackContext *pc )
{
	pc->bounds_min.x =  FLT_MAX;
	pc->bounds_min.y =  FLT_MAX;
	pc->bounds_min.z =  FLT_MAX;
	pc->bounds_max.x = -FLT_MAX;
	pc->bounds_max.y = -FLT_MAX;
	pc->bounds_max.z = -FLT_MAX;
	pc->updateBBOX = 1;
}
"""

def WriteData( offset, arg_type, arg_name, is_swapped ):
	if string.find( arg_type, '*' ) != -1:
		retval = "\tWRITE_NETWORK_POINTER( %d, (void *) %s );" % (offset, arg_name )
	else:	
		if is_swapped:
			if arg_type == "GLfloat" or arg_type == "GLclampf":
				retval = "\tWRITE_DATA( %d, GLuint, SWAPFLOAT(%s) );" % (offset, arg_name)
			elif arg_type == "GLdouble" or arg_type == "GLclampd":
				retval = "\tWRITE_SWAPPED_DOUBLE( %d, %s );" % (offset, arg_name)
			elif apiutil.sizeof(arg_type) == 1:
				retval = "\tWRITE_DATA( %d, %s, %s );" % (offset, arg_type, arg_name)
			elif apiutil.sizeof(arg_type) == 2:
				retval = "\tWRITE_DATA( %d, %s, SWAP16(%s) );" % (offset, arg_type, arg_name)
			elif apiutil.sizeof(arg_type) == 4:
				retval = "\tWRITE_DATA( %d, %s, SWAP32(%s) );" % (offset, arg_type, arg_name)
		else:
			if arg_type == "GLdouble" or arg_type == "GLclampd":
				retval = "\tWRITE_DOUBLE( %d, %s );" % (offset, arg_name)
			else:
				retval = "\tWRITE_DATA( %d, %s, %s );" % (offset, arg_type, arg_name)
	return retval


def PrintFunction( func_name, extSuffix, num_coords, argtype,
				   do_swapped, do_count, do_vector ):
	"""
	Generate all the functions named crPackVertex[234][dfis][v]BBOX() and
	crPackVertex[234][dfis][v]BBOX_COUNT().
	We also handle glVertexAttrib*ARB.
	Note: func_name should not have an ARB suffix.
	"""

	if do_count:
		countSuffix = "_COUNT"
	else:
		countSuffix = ""

	if do_swapped:
		swapSuffix = "SWAP"
	else:
		swapSuffix = ""

	if func_name[0:12] == "VertexAttrib":
		isVertexAttrib = 1
	else:
		isVertexAttrib = 0

	if argtype[0] == "N":
		normalized = 1
	else:
		normalized = 0;

	if argtype == "b" or argtype == "Nb":
		vector_type = "GLbyte"
	elif argtype == "ub" or argtype == "Nub":
		vector_type = "GLubyte"
	elif argtype == "s" or argtype == "Ns":
		vector_type = "GLshort"
	elif argtype == "us" or argtype == "Nus":
		vector_type = "GLushort"
	elif argtype == "i" or argtype == "Ni":
		vector_type = "GLint"
	elif argtype == "ui" or argtype == "Nui":
		vector_type = "GLuint"
	elif argtype == "f":
		vector_type = "GLfloat"
	elif argtype == "d":
		vector_type = "GLdouble"
	else:
		print "type is %s" % argtype
		abort()

	if do_vector:
		if isVertexAttrib:
			func_name = 'VertexAttrib%d%sv' % (num_coords, argtype)
		else:
			func_name = 'Vertex%d%sv' % (num_coords,argtype)

	params = apiutil.Parameters(func_name + extSuffix)

	print 'void PACK_APIENTRY crPack%sBBOX%s%s( %s )' % (func_name + extSuffix, countSuffix,
			 swapSuffix, apiutil.MakeDeclarationString(params))
	print '{'

	if do_vector:
		# vector version
		packet_length = num_coords * apiutil.sizeof(vector_type)
		if isVertexAttrib:
			packet_length += 4  # for index
		if packet_length % 4 != 0:
			packet_length += 2

	else:
		# non-vector
		packet_length = apiutil.PacketLength( params )
		if isVertexAttrib:
			packet_length += 0  # for index
		if packet_length % 4 != 0:
			packet_length += 2


	print "\tGET_PACKER_CONTEXT(pc);"
	print "\tunsigned char *data_ptr;"

	if normalized:
		if argtype == "Nb":
			t = "B"
		elif argtype == "Ni":
			t = "I"
		elif argtype == "Nui":
			t = "UI"
		elif argtype == "Nub":
			t = "UB"
		elif argtype == "Ns":
			t = "S"
		elif argtype == "Nus":
			t = "US"
		else:
			abort()
		if do_vector:
			print "\tCREATE_%dD_VFLOATS_%s_NORMALIZED();" % (num_coords, t)
		else:
			print "\tCREATE_%dD_FLOATS_%s_NORMALIZED();" % (num_coords, t)
	else:
		if do_vector:
			print "\tCREATE_%dD_VFLOATS();" % num_coords
		else:
			print "\tCREATE_%dD_FLOATS();" % num_coords

	print "\tGET_BUFFERED%s_POINTER( pc, %d );" % (countSuffix, packet_length)

	# Bounding box code
	if isVertexAttrib:
		print "\tif (pc->updateBBOX && index == 0)"
	else:
		print "\tif (pc->updateBBOX)"
	print "\t{"
	if num_coords < 4:
		print "\t\tUPDATE_%dD_BBOX();" % num_coords
	else:
		print "\t\tUPDATE_3D_BBOX();"
	print "\t}"

	if isVertexAttrib:
		print "\tif (index > 0) {"
		t = argtype
		print "\t\tpc->current.vertexAttrib.%s%d[index] = data_ptr + 4;" % (t, num_coords)
		print "\t\tpc->current.attribsUsedMask |= (1 << index);"
		if do_count:
			print "\t\tpc->current.vtx_count--;"

		print "\t}"

		fname = func_name + extSuffix
		if do_vector:
			# use non-vector opcode
			opcode = apiutil.OpcodeName( func_name[:-1] + extSuffix )
		else:
			opcode = apiutil.OpcodeName( func_name + extSuffix )
	counter = 0

	if do_vector:
		if isVertexAttrib:
			if do_swapped:
				print "\tWRITE_DATA( 0, GLuint, SWAP32(index) );"
			else:
				print "\tWRITE_DATA( 0, GLuint, index );"
			counter += 4
			argname = params[1][0]  # skip 'index' parameter
		else:
			argname = params[0][0]

		for index in range(num_coords):
			print WriteData( counter, vector_type, "%s[%d]" % (argname, index), do_swapped )
			counter += apiutil.sizeof(vector_type)

		if isVertexAttrib:
			if do_vector == 2:
				# this is a bit of a hack
				print "\tWRITE_OPCODE( pc, %s );" % apiutil.OpcodeName( func_name + "ARB" )
			else:
				print "\tWRITE_OPCODE( pc, %s );" % apiutil.OpcodeName( func_name[:-1] + "ARB" )
		else:
			print "\tWRITE_OPCODE( pc, %s );" % apiutil.OpcodeName( func_name[:-1] )
	else:
		for index in range(0,len(params)):
			(name, type, vecSize) = params[index]
			print WriteData( counter, type, name, do_swapped )
			counter += apiutil.sizeof(type)

		if isVertexAttrib:
			print "\tWRITE_OPCODE( pc, %s );" % apiutil.OpcodeName( func_name + "ARB" )
		else:
			print "\tWRITE_OPCODE( pc, %s );" % apiutil.OpcodeName( func_name )

	print '}\n'

#end PrintFunction()


for num_coords in [2,3,4]:
	for argtype in ['d', 'f', 'i', 's']:
		func_name = 'Vertex%d%s' % (num_coords, argtype)
		for swap in range(0, 2):
			for count in range(0, 2):
				for vec in range(0, 2):
					PrintFunction( func_name, "", num_coords, argtype, swap,
								   count, vec )

for num_coords in [1,2,3,4]:
	for argtype in ['d', 'f', 's']:
		func_name = 'VertexAttrib%d%s' % (num_coords, argtype)
		for swap in range(0, 2):
			for count in range(0, 2):
				for vec in range(0, 2):
					PrintFunction( func_name, "ARB", num_coords, argtype, swap,
								   count, vec )

# Special vector functions
moreFuncs = [ [ "VertexAttrib4ubv", "ub" ],
			  [ "VertexAttrib4usv", "us" ],
			  [ "VertexAttrib4uiv", "ui" ],
			  [ "VertexAttrib4bv", "b" ],
			  [ "VertexAttrib4iv", "i" ],
			  [ "VertexAttrib4Nbv", "Nb" ],
			  [ "VertexAttrib4Nsv", "Ns" ],
			  [ "VertexAttrib4Niv", "Ni" ],
			  [ "VertexAttrib4Nubv", "Nub" ],
			  [ "VertexAttrib4Nusv", "Nus" ],
			  [ "VertexAttrib4Nuiv", "Nui" ]
			]
for (func_name, argtype) in moreFuncs:
	vec = 2  # special, hacked value
	num_coords = 4
	for swap in range(0, 2):
		for count in range(0, 2):
			PrintFunction( func_name, "ARB", num_coords, argtype, swap, count, vec )

# Special non-vector functions
moreFuncs = [ [ "VertexAttrib4Nub", "Nub" ] ]
for (func_name, argtype) in moreFuncs:
	vec = 0
	num_coords = 4
	for swap in range(0, 2):
		for count in range(0, 2):
			PrintFunction( func_name, "ARB", num_coords, argtype, swap, count, vec )
