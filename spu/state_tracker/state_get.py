import sys, re, string

line_re = re.compile(r'^(\S+)\s+(GL_\S+)\s+(.*)\s*$')
input = open( "state_get.txt", 'r' )

params = {}

for line in input.readlines():
	match = line_re.match( line )
	if match:
		type = match.group(1)
		pname = match.group(2)
		fields = string.split( match.group(3) )
		params[pname] = ( type, fields )

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

print """
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "cr_glstate.h"
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
	CRContext   *g = GetCurrentContext( );

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
		crStateError(__LINE__,__FILE__, GL_INVALID_OPERATION,
			"Unimplemented glGet of a 'current' value" );
#if 0
		GLstatebits *sb = GetStateBits( );
		__glcurrent_recover( &g->current, &sb->current, g->bitID );
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
			print '\t\t\tcrStateError(__LINE__,__FILE__,GL_INVALID_OPERATION, "Unimplemented GLGet!");'
		print "\t\t\tbreak;"
  
	print '\t\tdefault:'
	print '\t\t\tcrStateError(__LINE__, __FILE__, GL_INVALID_ENUM, "glGet: Unknown enum: 0x%x", pname);'
	print '\t\t\treturn;'
	print '\t}'
	print '}'
