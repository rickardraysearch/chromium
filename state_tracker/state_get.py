# Copyright (c) 2001, Stanford University
# All rights reserved.
#
# See the file LICENSE.txt for information on redistributing this software.

import sys, re, string
sys.path.append( "../opengl_stub" )
import stub_common;

line_re = re.compile           (r'^(\S+)\s+(GL_\S+)\s+(.*)\s*$')
extensions_line_re = re.compile(r'^(\S+)\s+(GL_\S+)\s+(GL_\S+)\s+(.*)\s*$')

params = {}
extended_params = {}

input = open( "state_get.txt", 'r' )
for line in input.readlines():
	if line[0] == '#': continue
	match = line_re.match( line )
	if match:
		type = match.group(1)
		pname = match.group(2)
		fields = string.split( match.group(3) )
		params[pname] = ( type, fields )

input = open( "state_extensions_get.txt", 'r' )
for line in input.readlines():
	if line[0] == '#': continue
	match = extensions_line_re.match( line )
	if match:
		type = match.group(1)
		pname = match.group(2)
		ifdef = match.group(3)
		fields = string.split( match.group(4) )
		extended_params[pname] = ( type, ifdef, fields )

convert = {
	       'GLenum' : {
			  'Boolean' : '(GLboolean) ( %s != 0 )',
			  'Double'  : '(GLdouble) %s',
			  'Float'   : '(GLfloat) %s',
			  'Integer' : '(GLint) %s'
			 },
	       'GLboolean' : {
			  'Boolean' : '(GLboolean) ( %s != 0 )',
			  'Double'  : '(GLdouble) %s',
			  'Float'   : '(GLfloat) %s',
			  'Integer' : '(GLint) %s'
			 },
	       'GLint'  : {
			  'Boolean' : '(GLboolean) ( %s != 0 )',
			  'Double'  : '(GLdouble) %s',
			  'Float'   : '(GLfloat) %s',
			  'Integer' : '(GLint) %s'
			 },
	       'GLuint'  : {
			  'Boolean' : '(GLboolean) ( %s != 0 )',
			  'Double'  : '(GLdouble) %s',
			  'Float'   : '(GLfloat) %s',
			  'Integer' : '(GLint) %s'
			 },
	       'GLfloat' : {
			  'Boolean' : '(GLboolean) ( %s != 0.0f )',
			  'Double'  : '(GLdouble) %s',
			  'Float'   : '%s',
			  'Integer' : '(GLint) %s'
			 },
	       'GLdouble' : {
			  'Boolean' : '(GLboolean) ( %s != 0.0 )',
			  'Double'  : '%s',
			  'Float'   : '(GLfloat) %s',
			  'Integer' : '(GLint) %s'
			 },
	       'GLdefault' : {
			  'Boolean' : '(GLboolean) ( %s != (GLdefault) 0.0 )',
			  'Double'  : '(GLdouble) %s',
			  'Float'   : '(GLfloat) %s',
			  'Integer' : '(GLint) %s'
			 },
	       'GLclampd' : {
			  'Boolean' : '(GLboolean) ( %s != 0.0 )',
			  'Double'  : '%s',
			  'Float'   : '(GLfloat) %s',
			  'Integer' : '__clampd_to_int(%s)'
			 },
	       'GLclampf' : {
			  'Boolean' : '(GLboolean) ( %s != 0.0f )',
			  'Double'  : '(GLdouble) %s',
			  'Float'   : '%s',
			  'Integer' : '__clampf_to_int(%s)'
			 }
	      }

types = [ "Boolean", "Double", "Float", "Integer" ]

ctypes = { 
	      'Boolean' : 'GLboolean',
	      'Double'  : 'GLdouble',
	      'Float'   : 'GLfloat',
	      'Integer' : 'GLint'
	     }

stub_common.CopyrightC()

print """
/* DO NOT EDIT - THIS FILE GENERATED BY state_get.txt AND THE state_get.py SCRIPT */
#include <stdio.h>
#include <math.h>

#include "state.h"
#include "state/cr_statetypes.h"

static GLint __clampd_to_int( GLdouble d )
{
	/* -1.0 -> MIN_INT, 1.0 -> MAX_INT */
	if ( d > 1.0 )
		return 0x7fffffff;
	if ( d < -1.0 )
		return 0x80000000;
	return (GLint) floor( d * 2147483647.5 );
}

static GLint __clampf_to_int( GLfloat f )
{
	/* -1.0f -> MIN_INT, 1.0f -> MAX_INT */
	if ( f > 1.0f )
		return 0x7fffffff;
	if ( f < -1.0f )
		return 0x80000000;
	return (GLint) floor( f * 2147483647.5f );
}
"""

header = """
{
	CRContext *g = GetCurrentContext();

	if (g->current.inBeginEnd)
	{
		crStateError(__LINE__, __FILE__, GL_INVALID_OPERATION,
			"glGet called in Begin/End");
		return;
	}

	if ( pname == GL_CURRENT_INDEX || pname == GL_CURRENT_COLOR ||
		pname == GL_CURRENT_NORMAL || pname == GL_EDGE_FLAG ||
		pname == GL_CURRENT_TEXTURE_COORDS )
	{
#if 0
		crStateError(__LINE__,__FILE__, GL_INVALID_OPERATION,
			"Unimplemented glGet of a 'current' value" );
#else
		crStateCurrentRecover();/* &g->current, &sb->current, g->bitID );*/
		
#endif
	}

	switch ( pname ) {
"""

for rettype in types:
	print ''
	print 'void STATE_APIENTRY crStateGet%sv( GLenum pname, %s *params )' % ( rettype, ctypes[rettype] )
	print header

	keys = params.keys()
	keys.sort()
  	for pname in keys:
		print '\t\tcase %s:' % pname
		(srctype,fields) = params[pname]
		try:
			cvt = convert[srctype][rettype]
			i = 0
			for field in fields:
				expr = cvt % field
				print '\t\t\tparams[%d] = %s;' % (i,expr)
				i += 1
		except:
			print '\t\t\tcrStateError(__LINE__,__FILE__,GL_INVALID_OPERATION, "Unimplemented glGet!");'
		print "\t\t\tbreak;"


	keys = extended_params.keys();
	keys.sort()
  	for pname in keys:
		(srctype,ifdef,fields) = extended_params[pname]
		ext = ifdef[3:]  # the extension name with the "GL_" prefix removed
		#print '#ifdef %s' % ifdef
		print '#ifdef CR_%s' % ext
		print '\t\tcase %s:' % pname
		if ext != 'OPENGL_VERSION_1_2':
			print '\t\t\tif (g->extensions.%s) {' % ext
		try:
			cvt = convert[srctype][rettype]
			i = 0
			for field in fields:
				expr = cvt % field
				if field[0] == '%':
					command = string.split(field, '%')
					print '\t\t\t\t%s;' % command[1]
					continue
				elif ext != 'OPENGL_VERSION_1_2':
					print '\t\t\t\tparams[%d] = %s;' % (i,expr)
				else:
					print '\t\t\tparams[%d] = %s;' % (i,expr)
				i += 1
		except:
			print '\t\t\tcrStateError(__LINE__,__FILE__,GL_INVALID_OPERATION, "Unimplemented glGet!");'
		if ext != 'OPENGL_VERSION_1_2':
			print "\t\t\t}"
			print "\t\t\telse {"
			print '\t\t\t\tcrStateError(__LINE__,__FILE__,GL_INVALID_ENUM, "glGet%sv");' % rettype
			print "\t\t\t}"
		print "\t\t\tbreak;"
		#print '#endif /* %s */' % ifdef
		print '#endif /* CR_%s */' % ext
  
	print '\t\tdefault:'
	print '\t\t\tcrStateError(__LINE__, __FILE__, GL_INVALID_ENUM, "glGet: Unknown enum: 0x%x", pname);'
	print '\t\t\treturn;'
	print '\t}'
	print '}'
