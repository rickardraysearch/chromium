/* Copyright (c) 2001, Stanford University
 * All rights reserved.
 *
 * See the file LICENSE.txt for information on redistributing this software.
 */

#ifndef CR_STATE_LIGHTING_H
#define CR_STATE_LIGHTING_H

#include "state/cr_statetypes.h"

#ifdef __cplusplus
extern "C" {
#endif

#define CR_NUM_LIGHTS 8

typedef struct {
	GLbitvalue dirty[CR_MAX_BITARRAY];
	GLbitvalue enable[CR_MAX_BITARRAY];
	GLbitvalue ambient[CR_MAX_BITARRAY];
	GLbitvalue diffuse[CR_MAX_BITARRAY];
	GLbitvalue specular[CR_MAX_BITARRAY];
	GLbitvalue position[CR_MAX_BITARRAY];
	GLbitvalue attenuation[CR_MAX_BITARRAY];
	GLbitvalue spot[CR_MAX_BITARRAY];
} CRLightBits;

typedef struct {
	GLbitvalue dirty[CR_MAX_BITARRAY];
	GLbitvalue shadeModel[CR_MAX_BITARRAY];
	GLbitvalue colorMaterial[CR_MAX_BITARRAY];
	GLbitvalue lightModel[CR_MAX_BITARRAY];
	GLbitvalue material[CR_MAX_BITARRAY];
	GLbitvalue enable[CR_MAX_BITARRAY];
	CRLightBits *light;
} CRLightingBits;

typedef struct {
	GLboolean	enable;
	GLcolorf	ambient;
	GLcolorf	diffuse;
	GLcolorf	specular;
	GLvectorf	position;
	GLvectorf	objPosition;
	GLfloat		constantAttenuation;
	GLfloat		linearAttenuation;
	GLfloat		quadraticAttenuation;
	GLvectorf	spotDirection;
	GLfloat 	spotExponent;
	GLfloat		spotCutoff;
} CRLight;

typedef struct {
	GLboolean	lighting;
	GLboolean	colorMaterial;
	GLenum		shadeModel;
	GLenum		colorMaterialMode;
	GLenum		colorMaterialFace;
	GLcolorf	ambient[2];     /* material front/back */
	GLcolorf	diffuse[2];     /* material front/back */
	GLcolorf	specular[2];     /* material front/back */
	GLcolorf	emission[2];     /* material front/back */
	GLfloat		shininess[2];     /* material front/back */
	GLint       indexes[2][3];    /* material front/back amb/diff/spec */
	GLcolorf	lightModelAmbient;
	GLboolean	lightModelLocalViewer;
	GLboolean	lightModelTwoSide;
#if defined(CR_EXT_separate_specular_color) || defined(CR_OPENGL_VERSION_1_2)
	GLenum		lightModelColorControlEXT; /* CR_EXT_separate_specular_color */
#endif
	GLboolean	colorSumEXT; /* CR_EXT_secondary_color */
	CRLight		*light;
} CRLightingState;

void crStateLightingInitBits (CRLightingBits *l);
void crStateLightingInit (CRLightingState *l);

void crStateLightingDiff(CRLightingBits *bb, GLbitvalue *bitID,
		CRLightingState *from, CRLightingState *to);
void crStateLightingSwitch(CRLightingBits *bb, GLbitvalue *bitID,
		CRLightingState *from, CRLightingState *to);

void crStateColorMaterialRecover( void );

#ifdef __cplusplus
}
#endif

#endif /* CR_STATE_LIGHTING_H */
