/* Copyright (c) 2001, Stanford University
 * All rights reserved
 *
 * See the file LICENSE.txt for information on redistributing this software.
 */

#include <stdio.h>
#include "cr_spu.h"
#include "cr_error.h"
#include "apichangespu.h"

ApichangeSPU apichange_spu;

void APICHANGESPU_APIENTRY halfVertex3fv( const GLfloat *v )
{
	apichange_spu.child.Vertex3f( v[0]*.5f, v[1]*.5f, v[2]*.5f );
}

void APICHANGESPU_APIENTRY doubleVertex3fv( const GLfloat *v )
{
	apichange_spu.child.Vertex3f( v[0]*2, v[1]*2, v[2]*2 );
}

void APICHANGESPU_APIENTRY apichangeSwapBuffers( GLint window )
{
	static int frame_counter = 0;
	frame_counter++;

	(void) window;

	if (!(frame_counter % apichange_spu.changeFrequency))
	{
		if (apichange_spu.self.Vertex3fv == doubleVertex3fv)
		{
			crSPUChangeInterface( &(apichange_spu.self), apichange_spu.self.Vertex3fv, halfVertex3fv );
		}
		else
		{
			crSPUChangeInterface( &(apichange_spu.self), apichange_spu.self.Vertex3fv, doubleVertex3fv);
		}
	}
	apichange_spu.child.SwapBuffers();
}

SPUNamedFunctionTable apichange_table[] = {
	{ "SwapBuffers", (SPUGenericFunction) apichangeSwapBuffers },
	{ "Vertex3fv", (SPUGenericFunction) doubleVertex3fv },
	{ NULL, NULL }
};
