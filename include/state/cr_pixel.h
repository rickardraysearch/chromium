/* Copyright (c) 2001, Stanford University
 * All rights reserved.
 *
 * See the file LICENSE.txt for information on redistributing this software.
 */

#ifndef CR_STATE_PIXEL_H
#define CR_STATE_PIXEL_H

#include "cr_glwrapper.h"
#include "state/cr_statetypes.h"
#include "state/cr_limits.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
	GLbitvalue dirty[CR_MAX_BITARRAY];
	GLbitvalue transfer[CR_MAX_BITARRAY];
	GLbitvalue zoom[CR_MAX_BITARRAY];
	GLbitvalue maps[CR_MAX_BITARRAY];
} CRPixelBits;

typedef struct {
	GLboolean	mapColor;
	GLboolean	mapStencil;
	GLint			indexShift;
	GLint			indexOffset;
	GLcolorf	scale;
	GLfloat		depthScale;
	GLcolorf	bias;
	GLfloat		depthBias;
	GLfloat		xZoom;
	GLfloat		yZoom;

	GLint			mapItoI[CR_MAX_PIXEL_MAP_TABLE];
	GLint			mapStoS[CR_MAX_PIXEL_MAP_TABLE];
	GLfloat		mapItoR[CR_MAX_PIXEL_MAP_TABLE];
	GLfloat		mapItoG[CR_MAX_PIXEL_MAP_TABLE];
	GLfloat		mapItoB[CR_MAX_PIXEL_MAP_TABLE];
	GLfloat		mapItoA[CR_MAX_PIXEL_MAP_TABLE];
	GLfloat		mapRtoR[CR_MAX_PIXEL_MAP_TABLE];
	GLfloat		mapGtoG[CR_MAX_PIXEL_MAP_TABLE];
	GLfloat		mapBtoB[CR_MAX_PIXEL_MAP_TABLE];
	GLfloat		mapAtoA[CR_MAX_PIXEL_MAP_TABLE];

	GLint		mapItoIsize;
	GLint		mapStoSsize;
	GLint		mapItoRsize;
	GLint		mapItoGsize;
	GLint		mapItoBsize;
	GLint		mapItoAsize;
	GLint		mapRtoRsize;
	GLint		mapGtoGsize;
	GLint		mapBtoBsize;
	GLint		mapAtoAsize;
} CRPixelState;

void crStatePixelInit( CRPixelState *pixel );
void crStatePixelInitBits( CRPixelBits *pixelbits );

void crStatePixelDiff(CRPixelBits *bb, GLbitvalue *bitID, 
		CRPixelState *from, CRPixelState *to);
void crStatePixelSwitch(CRPixelBits *bb, GLbitvalue *bitID, 
		CRPixelState *from, CRPixelState *to);

#ifdef __cplusplus
}
#endif


#endif /* CR_STATE_PIXEL_H */
