/* Copyright (c) 2001, Stanford University
 * All rights reserved
 *
 * See the file LICENSE.txt for information on redistributing this software.
 */

#include "chromium.h"
#include "cr_error.h" 
#include "server_dispatch.h"
#include "server.h"

const GLubyte * SERVER_DISPATCH_APIENTRY crServerDispatchGetString( GLenum name )
{
	crError( "glGetString isn't *ever* allowed to be on the wire!" );
	(void) name;
	return NULL;
}
