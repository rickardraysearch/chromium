# Copyright (c) 2001, Stanford University
# All rights reserved.
#
# See the file LICENSE.txt for information on redistributing this software.

import sys,os;
import cPickle;
import types;
import string;
import re;
import alias_exports;
import stub_common;

parsed_file = open( "../glapi_parser/gl_header.parsed", "rb" )
gl_mapping = cPickle.load( parsed_file )

keys = gl_mapping.keys()
keys.sort();

stub_common.CopyrightC()

print """
/* DO NOT EDIT - THIS FILE GENERATED BY THE getprocaddress.py SCRIPT */
#include "chromium.h"
#include "api_templates.h"
#include "cr_string.h"
#include "cr_error.h"
#include "cr_spu.h"
#include "stub.h"

#include <stdio.h>

#ifdef WINDOWS
#pragma warning( disable: 4055 )
#endif
"""

#for func_name in stub_common.AllSpecials( "getprocaddress" ):
#	( return_type, arg_names, arg_types ) = gl_mapping[func_name];
#	print 'extern %s APIENTRY stub_%s%s;' % (return_type, func_name, stub_common.ArgumentString( arg_names, arg_types ) )

print """
CR_PROC CR_APIENTRY crGetProcAddress( const char *name )
{
	stubInit();
"""

bonus_functions = [
	"crCreateContext",
	"crDestroyContext",
	"crMakeCurrent",
	"crGetCurrentContext",
	"crGetCurrentWindow",
	"crSwapBuffers",
	"crWindowCreate",
	"crWindowDestroy",
	"crWindowSize",
	"crWindowPosition",
	"crWindowShow"
]

for func_name in keys:
	if stub_common.FindSpecial( "noexport", func_name ):
		continue
	if stub_common.FindSpecial( "getprocaddress", func_name ):
		print '\tif (!crStrcmp( name, "gl%s" )) return (CR_PROC) stub_%s;' % ( func_name, func_name )
		continue
	print '\tif (!crStrcmp( name, "gl%s" )) return (CR_PROC) glim.%s;' % ( func_name, func_name )
	real_func_name = alias_exports.AliasMap( func_name )
	if real_func_name:
		print '\tif (!crStrcmp( name, "gl%s" )) return (CR_PROC) glim.%s;' % ( real_func_name, func_name )

for func_name in bonus_functions:
	print '\tif (!crStrcmp( name, "%s" )) return (CR_PROC) %s;' % ( func_name, func_name )

print """
/* As these are Windows specific (i.e. wgl), define these now.... */
#ifdef WINDOWS
	{
		wglGetExtensionsStringEXTFunc_t wglGetExtensionsStringEXT = NULL;
		wglChoosePixelFormatFunc_t wglChoosePixelFormatEXT = NULL;
		wglGetPixelFormatAttribivEXTFunc_t wglGetPixelFormatAttribivEXT = NULL;
		wglGetPixelFormatAttribfvEXTFunc_t wglGetPixelFormatAttribfvEXT = NULL;
		if (!crStrcmp( name, "wglGetExtensionsStringEXT" )) return (CR_PROC) wglGetExtensionsStringEXT;
		if (!crStrcmp( name, "wglChoosePixelFormatEXT" )) return (CR_PROC) wglChoosePixelFormatEXT;
		if (!crStrcmp( name, "wglGetPixelFormatAttribivEXT" )) return (CR_PROC) wglGetPixelFormatAttribivEXT;
		if (!crStrcmp( name, "wglGetPixelFormatAttribfvEXT" )) return (CR_PROC) wglGetPixelFormatAttribfvEXT;
	}
#endif
"""
print '\treturn NULL;'
print '}'
