/* Copyright (c) 2001, Stanford University
 * All rights reserved
 *
 * See the file LICENSE.txt for information on redistributing this software.
 */

#include "cr_packfunctions.h"
#include "state/cr_statefuncs.h"
#include "tilesortspu.h"

void TILESORTSPU_APIENTRY tilesortspu_Materiali(GLenum face, GLenum mode, GLint param)
{
	crStateMateriali( face, mode, param );
	if (tilesort_spu.currentContext->current.inBeginEnd)
	{
		if (tilesort_spu.swap)
		{
			crPackMaterialiSWAP( face, mode, param );
		}
		else
		{
			crPackMateriali( face, mode, param );
		}
	}
}

void TILESORTSPU_APIENTRY tilesortspu_Materialf(GLenum face, GLenum mode, GLfloat param)
{
	crStateMaterialf( face, mode, param );
	if (tilesort_spu.currentContext->current.inBeginEnd)
	{
		if (tilesort_spu.swap)
		{
			crPackMaterialfSWAP( face, mode, param );
		}
		else
		{
			crPackMaterialf( face, mode, param );
		}	
	}
}

void TILESORTSPU_APIENTRY tilesortspu_Materialiv(GLenum face, GLenum mode, const GLint *param)
{
	crStateMaterialiv( face, mode, param );
	if (tilesort_spu.currentContext->current.inBeginEnd)
	{
		if (tilesort_spu.swap)
		{
			crPackMaterialivSWAP( face, mode, param );
		}
		else
		{
			crPackMaterialiv( face, mode, param );
		}
	}
}

void TILESORTSPU_APIENTRY tilesortspu_Materialfv(GLenum face, GLenum mode, const GLfloat *param)
{
	crStateMaterialfv( face, mode, param );
	if (tilesort_spu.currentContext->current.inBeginEnd)
	{
		if (tilesort_spu.swap)
		{
			crPackMaterialfvSWAP( face, mode, param );
		}
		else
		{
			crPackMaterialfv( face, mode, param );
		}
	}
}
