/* Copyright (c) 2001, Stanford University
 * All rights reserved.
 *
 * See the file LICENSE.txt for information on redistributing this software.
 */

#ifndef CR_STATE_TEXTURE_H
#define CR_STATE_TEXTURE_H

#include "cr_hash.h"
#include "state/cr_statetypes.h"
#include "state/cr_limits.h"

#define CRTEXTURE_HASHSIZE 1047
#define CRTEXTURE_NAMEOFFSET 4

#ifdef __cplusplus
extern "C" {
#endif

struct CRTextureFormat {
	GLubyte redbits;
	GLubyte greenbits;
	GLubyte bluebits;
	GLubyte alphabits;
	GLubyte luminancebits;
	GLubyte intensitybits;
	GLubyte indexbits;
};

typedef struct {
	GLubyte *img;
	int bytes;
	GLint width;
	GLint height;
	GLint depth;
	GLint internalFormat;
	GLint border;
	GLenum format;
	GLenum type;
	int bytesPerPixel;
#if CR_ARB_texture_compression
	GLboolean compressed;
#endif
	const struct CRTextureFormat *texFormat;

	CRbitvalue dirty[CR_MAX_TEXTURE_UNITS][CR_MAX_BITARRAY];
} CRTextureLevel;

typedef struct __CRTextureObj {
	GLenum                 target;
	GLuint                 name;

	/* The mipmap levels */
	CRTextureLevel        *level;
#ifdef CR_ARB_texture_cube_map
	CRTextureLevel        *negativeXlevel;
	CRTextureLevel        *positiveYlevel;
	CRTextureLevel        *negativeYlevel;
	CRTextureLevel        *positiveZlevel;
	CRTextureLevel        *negativeZlevel;
#endif

	GLcolorf               borderColor;
	GLenum                 minFilter, magFilter;
	GLenum                 wrapS, wrapT;
#ifdef CR_OPENGL_VERSION_1_2
	GLenum                 wrapR;
	GLfloat                priority;
	GLfloat                minLod;
	GLfloat                maxLod;
	GLint                  baseLevel;
	GLint                  maxLevel;
#endif
#ifdef CR_EXT_texture_filter_anisotropic
	GLfloat                maxAnisotropy;
#endif
#ifdef CR_ARB_depth_texture
	GLenum                 depthMode;
#endif
#ifdef CR_ARB_shadow
	GLenum                 compareMode;
	GLenum                 compareFunc;
#endif
#ifdef CR_ARB_shadow_ambient
	GLfloat                compareFailValue;
#endif
#ifdef CR_SGIS_generate_mipmap
	GLboolean              generateMipmap;
#endif
	CRbitvalue	           dirty[CR_MAX_BITARRAY];
	CRbitvalue             paramsBit[CR_MAX_TEXTURE_UNITS][CR_MAX_BITARRAY];
	CRbitvalue             imageBit[CR_MAX_TEXTURE_UNITS][CR_MAX_BITARRAY];
} CRTextureObj;

typedef struct {
	CRbitvalue dirty[CR_MAX_BITARRAY];
	CRbitvalue enable[CR_MAX_TEXTURE_UNITS][CR_MAX_BITARRAY];
	CRbitvalue current[CR_MAX_TEXTURE_UNITS][CR_MAX_BITARRAY];
	CRbitvalue objGen[CR_MAX_TEXTURE_UNITS][CR_MAX_BITARRAY];
	CRbitvalue eyeGen[CR_MAX_TEXTURE_UNITS][CR_MAX_BITARRAY];
	/* XXX someday create more bits for texture env state */
	CRbitvalue envBit[CR_MAX_TEXTURE_UNITS][CR_MAX_BITARRAY];
	CRbitvalue gen[CR_MAX_TEXTURE_UNITS][CR_MAX_BITARRAY];
} CRTextureBits;

typedef struct {
	/* Current texture objects (in terms of glBindTexture and glActiveTexture) */
	CRTextureObj *currentTexture1D;
	CRTextureObj *currentTexture2D;
	CRTextureObj *currentTexture3D;
#ifdef CR_ARB_texture_cube_map
	CRTextureObj *currentTextureCubeMap;
#endif

	GLboolean	enabled1D;
	GLboolean	enabled2D;
	GLboolean	enabled3D;
#ifdef CR_ARB_texture_cube_map
	GLboolean	enabledCubeMap;
#endif
#ifdef CR_EXT_texture_lod_bias
	GLfloat     lodBias;
#endif

	GLenum		envMode;
	GLcolorf	envColor;
	
	/* GL_ARB_texture_env_combine */
	GLenum combineModeRGB;       /* GL_REPLACE, GL_DECAL, GL_ADD, etc. */
	GLenum combineModeA;         /* GL_REPLACE, GL_DECAL, GL_ADD, etc. */
	GLenum combineSourceRGB[3];  /* GL_PRIMARY_COLOR, GL_TEXTURE, etc. */
	GLenum combineSourceA[3];    /* GL_PRIMARY_COLOR, GL_TEXTURE, etc. */
	GLenum combineOperandRGB[3]; /* SRC_COLOR, ONE_MINUS_SRC_COLOR, etc */
	GLenum combineOperandA[3];   /* SRC_ALPHA, ONE_MINUS_SRC_ALPHA, etc */
	GLfloat combineScaleRGB;     /* 1 or 2 or 4 */
	GLfloat combineScaleA;       /* 1 or 2 or 4 */

	GLtexcoordb	textureGen;
	GLvectorf	objSCoeff;
	GLvectorf	objTCoeff;
	GLvectorf	objRCoeff;
	GLvectorf	objQCoeff;
	GLvectorf	eyeSCoeff;
	GLvectorf	eyeTCoeff;
	GLvectorf	eyeRCoeff;
	GLvectorf	eyeQCoeff;
	GLtexcoorde	gen;

	/* These are only used for glPush/PopAttrib */
	CRTextureObj Saved1D;
	CRTextureObj Saved2D;
	CRTextureObj Saved3D;
#ifdef CR_ARB_texture_cube_map
	CRTextureObj SavedCubeMap;
#endif
} CRTextureUnit;

typedef struct {
	CRHashTable       *idHash;  /* to map IDs to CRTextureObj objects */

	/* Default texture objects (name = 0) */
	CRTextureObj base1D;
	CRTextureObj base2D;
	CRTextureObj base3D;
#ifdef CR_ARB_texture_cube_map
	CRTextureObj baseCubeMap;
#endif
	
	/* Proxy texture objects */
	CRTextureObj proxy1D;
	CRTextureObj proxy2D;
	CRTextureObj proxy3D;
#ifdef CR_ARB_texture_cube_map
	CRTextureObj proxyCubeMap;
#endif

	GLuint		curTextureUnit; /* GL_ACTIVE_TEXTURE */

	GLint		maxLevel;
	GLint		max3DLevel;
	GLint		maxCubeMapLevel;
	
	GLboolean	broadcastTextures;

	/* Per-texture unit state: */
	CRTextureUnit	unit[CR_MAX_TEXTURE_UNITS];
} CRTextureState;

void crStateTextureInit(CRContext *ctx);
void crStateTextureDestroy(CRContext *ctx);
void crStateTextureFree(CRTextureState *t);

void crStateTextureInitTexture(GLuint name);
CRTextureObj *crStateTextureAllocate(GLuint name);
void crStateTextureDelete(GLuint name);
CRTextureObj *crStateTextureGet(GLenum target, GLuint textureid);
int crStateTextureGetSize(GLenum target, GLenum level);
const GLvoid * crStateTextureGetData(GLenum target, GLenum level);

int crStateTextureCheckDirtyImages(CRContext *from, CRContext *to, GLenum target, int textureUnit);

void crStateTextureDiff(CRTextureBits *t, CRbitvalue *bitID,
                        CRContext *fromCtx, CRContext *toCtx);
void crStateTextureSwitch(CRTextureBits *t, CRbitvalue *bitID, 
                          CRContext *fromCtx, CRContext *toCtx);

#ifdef __cplusplus
}
#endif

#endif /* CR_STATE_TEXTURE_H */
