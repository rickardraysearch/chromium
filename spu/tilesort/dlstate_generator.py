# Copyright (c) 2001, Stanford University
# All rights reserved.
#
# See the file LICENSE.txt for information on redistributing this software.

import sys, os

sys.path.append( "../../glapi_parser" )
import apiutil

# "mode" can only be header or table here; we don't need to actually
# generate any state functions.
mode = sys.argv[1]

keys = apiutil.GetDispatchedFunctions("../../glapi_parser/APIspec.txt")
num_funcs = len(keys)

apiutil.CopyrightC()

print '/* DO NOT EDIT.  This code is generated by %s. */' % os.path.basename(sys.argv[0])
print

# Print the appropriate header. 
if mode == 'table':
    print """
#include <stdio.h>
#include "cr_string.h"
#include "cr_spu.h"
#include "cr_packfunctions.h"
#include "cr_glstate.h"
#include "tilesortspu.h"
#include "tilesortspu_dlstate_gen.h"

void tilesortspuLoadStateTable(SPUDispatchTable *t)
{"""
elif mode == 'header':
    pass
else:
    raise "unknown generation mode '%s'" % mode

for func_name in keys:
    return_type = apiutil.ReturnType(func_name)
    chromiumProps = apiutil.ChromiumProps(func_name)
    params = apiutil.Parameters(func_name)
    declarationString = apiutil.MakeDeclarationString(params)
    basicCallString = apiutil.MakeCallString(params)

    # The two "special" state functions have real state implementations;
    # they don't need generated implementations, but should still
    # appear in headers.
    if func_name in ['CallList', 'CallLists']:
	if mode == 'table':
	    print '\tt->%s = tilesortspu_State%s;' % (func_name, func_name)
	elif mode == 'header':
	    print 'extern %s TILESORTSPU_APIENTRY tilesortspu_State%s( %s );' % (return_type, func_name, declarationString)
	continue


    # This dispatch table is used only for replaying display lists state.
    # It can safely have NULL entries in all the non-compilable or non-state functions.
    if not apiutil.CanCompile(func_name):
	if mode == 'table':
	    print '\tt->%s = NULL;' % func_name
	elif mode == 'header':
	    pass
	continue

    # The only entries left are those that manage tracked state.  Everything
    # else gets a NULL.
    if not apiutil.SetsTrackedState(func_name):
	if mode == 'table':
	    print '\tt->%s = NULL;' % func_name
	elif mode == 'header':
	    pass
    else:
	if mode == 'table':
	    print '\tt->%s = crState%s;' % (func_name, func_name)
	elif mode == 'header':
	    pass


# Done with the whole file.  Print out any ending necessary.
if mode == 'table':
    print '}'
elif mode == 'header':
    pass