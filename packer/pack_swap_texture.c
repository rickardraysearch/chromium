/* Copyright (c) 2001, Stanford University
 * All rights reserved
 *
 * See the file LICENSE.txt for information on redistributing this software.
 */

#include "packer.h"
#include "cr_pixeldata.h"
#include "cr_error.h"
#include "cr_string.h"
#include "cr_version.h"

void PACK_APIENTRY crPackTexImage1DSWAP(GLenum target, GLint level, 
		GLint internalformat, GLsizei width, GLint border, GLenum format, 
		GLenum type, const GLvoid *pixels, const CRPixelPackState *unpackstate )
{
	unsigned char *data_ptr;
	int packet_length;
	int isnull = (pixels == NULL);

	packet_length = 
		sizeof( target ) +
		sizeof( level ) +
		sizeof( internalformat ) +
		sizeof( width ) + 
		sizeof( border ) +
		sizeof( format ) +
		sizeof( type ) +
		sizeof( int );

	if (pixels)
	{
		packet_length += crImageSize( format, type, width, 1 );
	}

	data_ptr = (unsigned char *) crPackAlloc( packet_length );
	WRITE_DATA( 0, GLenum, SWAP32(target) );
	WRITE_DATA( 4, GLint, SWAP32(level) );
	WRITE_DATA( 8, GLint, SWAP32(internalformat) );
	WRITE_DATA( 12, GLsizei, SWAP32(width) );
	WRITE_DATA( 16, GLint, SWAP32(border) );
	WRITE_DATA( 20, GLenum, SWAP32(format) );
	WRITE_DATA( 24, GLenum, SWAP32(type) );
	WRITE_DATA( 28, int, SWAP32(isnull) );

	if (pixels) {
		crPixelCopy1D( (void *)(data_ptr + 32), format, type,
									 pixels, format, type, width, unpackstate );
	}

	crHugePacket( CR_TEXIMAGE1D_OPCODE, data_ptr );
	crPackFree( data_ptr );
}

void PACK_APIENTRY crPackTexImage2DSWAP(GLenum target, GLint level, 
		GLint internalformat, GLsizei width, GLsizei height, GLint border, 
		GLenum format, GLenum type, const GLvoid *pixels,
		const CRPixelPackState *unpackstate )
{
	unsigned char *data_ptr;
	int packet_length;
	int isnull = (pixels == NULL);

	packet_length = 
		sizeof( target ) +
		sizeof( level ) +
		sizeof( internalformat ) +
		sizeof( width ) +
		sizeof( height ) + 
		sizeof( border ) +
		sizeof( format ) +
		sizeof( type ) +
		sizeof( int );

	if (pixels)
	{
		packet_length += crImageSize( format, type, width, height );
	}

	data_ptr = (unsigned char *) crPackAlloc( packet_length );
	WRITE_DATA( 0, GLenum, SWAP32(target) );
	WRITE_DATA( 4, GLint, SWAP32(level) );
	WRITE_DATA( 8, GLint, SWAP32(internalformat) );
	WRITE_DATA( 12, GLsizei, SWAP32(width) );
	WRITE_DATA( 16, GLsizei, SWAP32(height) );
	WRITE_DATA( 20, GLint, SWAP32(border) );
	WRITE_DATA( 24, GLenum, SWAP32(format) );
	WRITE_DATA( 28, GLenum, SWAP32(type) );
	WRITE_DATA( 32, int, SWAP32(isnull) );

	if (pixels)
	{
		crPixelCopy2D( width, height,
									 (void *)(data_ptr + 36), format, type, NULL,  /* dst */
									 pixels, format, type, unpackstate );  /* src */
	}

	crHugePacket( CR_TEXIMAGE2D_OPCODE, data_ptr );
	crPackFree( data_ptr );
}

#if defined( GL_EXT_texture3D ) 
void PACK_APIENTRY crPackTexImage3DEXTSWAP(GLenum target, GLint level,
																					 GLenum internalformat,
                GLsizei width, GLsizei height, GLsizei depth, GLint border,
                GLenum format, GLenum type, const GLvoid *pixels,
                const CRPixelPackState *unpackstate )
{
	unsigned char *data_ptr;
	int packet_length;
	int isnull = (pixels == NULL);
	int is_distrib = ( (type == GL_TRUE) || (type == GL_FALSE) ) ;
	int distrib_buf_len = 0;
	int tex_size = 0;

	packet_length =
		sizeof( target ) +
		sizeof( level ) +
		sizeof( internalformat ) +
		sizeof( width ) +
		sizeof( height ) +
		sizeof( depth ) +
		sizeof( border ) +
		sizeof( format ) +
		sizeof( type ) +
		sizeof( int );

	if (pixels)
	{
		if ( is_distrib )
		{
			distrib_buf_len = crStrlen( pixels ) + 1 +
				( (type == GL_TRUE) ? width*height*3 : 0 ) ;
			packet_length += distrib_buf_len ;
		}
		else
		{
			tex_size = crTextureSize( format, type, width, height, depth );
			packet_length += tex_size;
		}
	}

	data_ptr = (unsigned char *) crPackAlloc( packet_length );
	WRITE_DATA( 0, GLenum, SWAP32( target ) );
	WRITE_DATA( 4, GLint, SWAP32( level ) );
	WRITE_DATA( 8, GLint, SWAP32( internalformat ) );
	WRITE_DATA( 12, GLsizei, SWAP32( width ) );
	WRITE_DATA( 16, GLsizei, SWAP32( height ) );
	WRITE_DATA( 20, GLsizei, SWAP32( depth ) );
	WRITE_DATA( 24, GLint, SWAP32( border ) );
	WRITE_DATA( 28, GLenum, SWAP32( format ) );
	WRITE_DATA( 32, GLenum, SWAP32( type ) );
	WRITE_DATA( 36, int, SWAP32( isnull ) );

	if (pixels)
	{
		if ( is_distrib )
		{
			crMemcpy( (void*)(data_ptr + 40), pixels, distrib_buf_len ) ;
		}
		else
		{
			crPixelCopy3D( width, height, depth,
										 (void *)(data_ptr + 40), format, type, NULL,
										 pixels, format, type, unpackstate );
		}
	}

	crHugePacket( CR_TEXIMAGE3DEXT_OPCODE, data_ptr );
}
#endif /* GL_EXT_texture3D */

#ifdef CR_OPENGL_VERSION_1_2
void PACK_APIENTRY crPackTexImage3DSWAP(GLenum target, GLint level,
																				GLint internalformat,
																				GLsizei width, GLsizei height,
																				GLsizei depth, GLint border,
																				GLenum format, GLenum type,
																				const GLvoid *pixels,
																				const CRPixelPackState *unpackstate )
{
	unsigned char *data_ptr;
	int packet_length;
	int isnull = (pixels == NULL);
	int is_distrib = ( (type == GL_TRUE) || (type == GL_FALSE) ) ;
	int distrib_buf_len = 0;
	int tex_size = 0;

	packet_length =
		sizeof( target ) +
		sizeof( level ) +
		sizeof( internalformat ) +
		sizeof( width ) +
		sizeof( height ) +
		sizeof( depth ) +
		sizeof( border ) +
		sizeof( format ) +
		sizeof( type ) +
		sizeof( int );

	if (pixels)
	{
		if ( is_distrib )
		{
			distrib_buf_len = crStrlen( pixels ) + 1 +
				( (type == GL_TRUE) ? width*height*3 : 0 ) ;
			packet_length += distrib_buf_len ;
		}
		else
		{
			tex_size = crTextureSize( format, type, width, height, depth );
			packet_length += tex_size;
		}
	}

	data_ptr = (unsigned char *) crPackAlloc( packet_length );
	WRITE_DATA( 0, GLenum, SWAP32( target ) );
	WRITE_DATA( 4, GLint, SWAP32( level ) );
	WRITE_DATA( 8, GLint, SWAP32( internalformat ) );
	WRITE_DATA( 12, GLsizei, SWAP32( width ) );
	WRITE_DATA( 16, GLsizei, SWAP32( height ) );
	WRITE_DATA( 20, GLsizei, SWAP32( depth ) );
	WRITE_DATA( 24, GLint, SWAP32( border ) );
	WRITE_DATA( 28, GLenum, SWAP32( format ) );
	WRITE_DATA( 32, GLenum, SWAP32( type ) );
	WRITE_DATA( 36, int, SWAP32( isnull ) );

	if (pixels)
	{
		if ( is_distrib )
		{
			crMemcpy( (void*)(data_ptr + 40), pixels, distrib_buf_len ) ;
		}
		else
		{
			crPixelCopy3D( width, height, depth,
										 (void *)(data_ptr + 40), format, type, NULL,
										 pixels, format, type, unpackstate );
		}
	}

	crHugePacket( CR_TEXIMAGE3D_OPCODE, data_ptr );
}
#endif /* CR_OPENGL_VERSION_1_2 */


void PACK_APIENTRY crPackDeleteTexturesSWAP( GLsizei n, const GLuint *textures )
{
	unsigned char *data_ptr;
	int i;
	int packet_length = 
		sizeof( int ) + 
		sizeof( n ) + 
		n*sizeof( *textures );

	data_ptr = (unsigned char *) crPackAlloc( packet_length );
	WRITE_DATA( 0, int, packet_length );
	WRITE_DATA( sizeof( int ) + 0, GLsizei, n );
	for ( i = 0 ; i < n ; i++)
	{
		WRITE_DATA( (i+1)*sizeof( int ) + 4, GLint, SWAP32(textures[i]) );
	}
	crHugePacket( CR_DELETETEXTURES_OPCODE, data_ptr );
	crPackFree( data_ptr );
}

static void __handleTexEnvData( GLenum target, GLenum pname, const GLfloat *params )
{
	GET_PACKER_CONTEXT(pc);
	unsigned char *data_ptr;
	int num_params;
	int i;

	int packet_length = 
		sizeof( int ) + 
		sizeof( target ) + 
		sizeof( pname );

	num_params = 1;
	if ( pname == GL_TEXTURE_ENV_COLOR )
	{
		num_params = 4;
	}

	packet_length += num_params*sizeof(*params);

	GET_BUFFERED_POINTER(pc, packet_length );
	WRITE_DATA( 0, int, SWAP32(packet_length) );
	WRITE_DATA( sizeof( int ) + 0, GLenum, SWAP32(target) );
	WRITE_DATA( sizeof( int ) + 4, GLenum, SWAP32(pname) );
	for ( i = 0 ; i < num_params ; i++)
	{
		WRITE_DATA( (i+1)*sizeof( int ) + 8, GLuint, SWAPFLOAT( params[i] ) );
	}
}


void PACK_APIENTRY crPackTexEnvfvSWAP( GLenum target, GLenum pname,
		const GLfloat *params )
{
	GET_PACKER_CONTEXT(pc);
	__handleTexEnvData( target, pname, params );
	WRITE_OPCODE( pc, CR_TEXENVFV_OPCODE );
}

void PACK_APIENTRY crPackTexEnvivSWAP( GLenum target, GLenum pname,
		const GLint *params )
{
	/* floats and ints are the same size, so the packing should be the same */
	GET_PACKER_CONTEXT(pc);
	__handleTexEnvData( target, pname, (const GLfloat *) params );
	WRITE_OPCODE( pc, CR_TEXENVIV_OPCODE );
}

void PACK_APIENTRY crPackTexEnviSWAP( GLenum target, GLenum pname, GLint param )
{
	crPackTexEnvivSWAP( target, pname, &param );
}

void PACK_APIENTRY crPackTexEnvfSWAP( GLenum target, GLenum pname, GLfloat param )
{
	crPackTexEnvfvSWAP( target, pname, &param );
}

void PACK_APIENTRY crPackPrioritizeTexturesSWAP( GLsizei n,
		const GLuint *textures, const GLclampf *priorities )
{
	unsigned char *data_ptr;
	int packet_length = 
		sizeof(int) +
		sizeof( n ) + 
		n*sizeof( *textures ) + 
		n*sizeof( *priorities );
	int i;

	data_ptr = (unsigned char *) crPackAlloc( packet_length );

	WRITE_DATA( 0, GLsizei, packet_length );
	WRITE_DATA( sizeof( int ) + 0, GLsizei, n );
	for ( i = 0 ; i < n ; i++)
	{
		WRITE_DATA( (i+1)*sizeof( int ) + 4, GLint, SWAP32(textures[i]));
	}
	for ( i = 0 ; i < n ; i++)
	{
		WRITE_DATA( (i+1)*sizeof( int ) + 4 + n*sizeof( *textures ),
				GLuint, SWAPFLOAT(priorities[i]));
	}

	crHugePacket( CR_PRIORITIZETEXTURES_OPCODE, data_ptr );
	crPackFree( data_ptr );
}

static void __handleTexGenData( GLenum coord, GLenum pname, 
		int sizeof_param, const GLvoid *params )
{
	GET_PACKER_CONTEXT(pc);
	unsigned char *data_ptr;
	int packet_length = sizeof( int ) + sizeof( coord ) + sizeof( pname );
	int num_params = 1;
	int i;
	if (pname == GL_OBJECT_PLANE || pname == GL_EYE_PLANE)
	{
		num_params = 4;
	}
	packet_length += num_params * sizeof_param;
	
	GET_BUFFERED_POINTER(pc, packet_length );
	WRITE_DATA( 0, int, SWAP32(packet_length) );
	WRITE_DATA( sizeof( int ) + 0, GLenum, SWAP32(coord) );
	WRITE_DATA( sizeof( int ) + 4, GLenum, SWAP32(pname) );
	for ( i = 0 ; i < num_params ; i++)
	{
		WRITE_DATA( (i+1)*sizeof( int ) + 8, GLint, SWAP32(((GLint *)params)[i]) );
	}
}

void PACK_APIENTRY crPackTexGendvSWAP( GLenum coord, GLenum pname,
		const GLdouble *params )
{
	GET_PACKER_CONTEXT(pc);
	__handleTexGenData( coord, pname, sizeof( *params ), params );
	WRITE_OPCODE( pc, CR_TEXGENDV_OPCODE );
}

void PACK_APIENTRY crPackTexGenfvSWAP( GLenum coord, GLenum pname,
		const GLfloat *params )
{
	GET_PACKER_CONTEXT(pc);
	__handleTexGenData( coord, pname, sizeof( *params ), params );
	WRITE_OPCODE( pc, CR_TEXGENFV_OPCODE );
}

void PACK_APIENTRY crPackTexGenivSWAP( GLenum coord, GLenum pname,
		const GLint *params )
{
	GET_PACKER_CONTEXT(pc);
	__handleTexGenData( coord, pname, sizeof( *params ), params );
	WRITE_OPCODE( pc, CR_TEXGENIV_OPCODE );
}

void PACK_APIENTRY crPackTexGendSWAP( GLenum coord, GLenum pname, GLdouble param )
{
	crPackTexGendvSWAP( coord, pname, &param );
}

void PACK_APIENTRY crPackTexGenfSWAP( GLenum coord, GLenum pname, GLfloat param )
{
	crPackTexGenfvSWAP( coord, pname, &param );
}

void PACK_APIENTRY crPackTexGeniSWAP( GLenum coord, GLenum pname, GLint param )
{
	crPackTexGenivSWAP( coord, pname, &param );
}

static GLboolean __handleTexParameterData( GLenum target, GLenum pname, const GLfloat *params )
{
	GET_PACKER_CONTEXT(pc);
	unsigned char *data_ptr;
	int packet_length = sizeof( int ) + sizeof( target ) + sizeof( pname );
	int num_params = 0;
	int i;

	switch( pname )
	{
		case GL_TEXTURE_MIN_FILTER:
		case GL_TEXTURE_MAG_FILTER:
		case GL_TEXTURE_WRAP_S:
		case GL_TEXTURE_WRAP_T:
		case GL_TEXTURE_WRAP_R:
#ifdef GL_TEXTURE_PRIORITY
		case GL_TEXTURE_PRIORITY:
#endif
		case GL_TEXTURE_MAX_ANISOTROPY_EXT:
		case GL_TEXTURE_MIN_LOD:
		case GL_TEXTURE_MAX_LOD:
		case GL_TEXTURE_BASE_LEVEL:
		case GL_TEXTURE_MAX_LEVEL:
			num_params = 1;
			break;
		case GL_TEXTURE_BORDER_COLOR:
			num_params = 4;
			break;
		default:
			num_params = __packTexParameterNumParams( pname );
			if (!num_params)
			{
				__PackError( __LINE__, __FILE__, GL_INVALID_ENUM,
										 "crPackTexParameter(bad pname)" );
				return GL_FALSE;
			}
	}
	packet_length += num_params * sizeof(*params);

	GET_BUFFERED_POINTER(pc, packet_length );
	WRITE_DATA( 0, int, SWAP32(packet_length) );
	WRITE_DATA( sizeof( int ) + 0, GLenum, SWAP32(target) );
	WRITE_DATA( sizeof( int ) + 4, GLenum, SWAP32(pname) );
	for ( i = 0 ; i < num_params ; i++)
	{
		WRITE_DATA( (i+1)*sizeof( int ) + 8, GLuint, SWAPFLOAT(params[i]) );
	}
	return GL_TRUE;
}

void PACK_APIENTRY crPackTexParameterfvSWAP( GLenum target, GLenum pname, 
		const GLfloat *params )
{
	GET_PACKER_CONTEXT(pc);
	if (__handleTexParameterData( target, pname, params ))
		WRITE_OPCODE( pc, CR_TEXPARAMETERFV_OPCODE );
}

void PACK_APIENTRY crPackTexParameterivSWAP( GLenum target, GLenum pname, 
		const GLint *params )
{
	GET_PACKER_CONTEXT(pc);
	if (__handleTexParameterData( target, pname, (GLfloat *) params ))
		WRITE_OPCODE( pc, CR_TEXPARAMETERIV_OPCODE );
}

void PACK_APIENTRY crPackTexParameterfSWAP( GLenum target, GLenum pname, GLfloat param )
{
	crPackTexParameterfvSWAP( target, pname, &param );
}

void PACK_APIENTRY crPackTexParameteriSWAP( GLenum target, GLenum pname, GLint param )
{
	crPackTexParameterivSWAP( target, pname, &param );
}

#ifdef CR_OPENGL_VERSION_1_2
void PACK_APIENTRY crPackTexSubImage3DSWAP (GLenum target, GLint level,
                GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth,
                GLenum format, GLenum type, const GLvoid *pixels,
                const CRPixelPackState *unpackstate )
{
        unsigned char *data_ptr;
        int packet_length;

        packet_length =
                sizeof( target ) +
                sizeof( level ) +
                sizeof( xoffset ) +
                sizeof( yoffset ) +
		sizeof( zoffset ) +
                sizeof( width ) +
                sizeof( height ) +
		sizeof( depth ) +
                sizeof( format ) +
                sizeof( type ) +
                crTextureSize( format, type, width, height, depth );

        data_ptr = (unsigned char *) crPackAlloc( packet_length );
        WRITE_DATA( 0, GLenum, SWAP32(target) );
        WRITE_DATA( 4, GLint, SWAP32(level) );
        WRITE_DATA( 8, GLint, SWAP32(xoffset) );
        WRITE_DATA( 12, GLint, SWAP32(yoffset) );
	WRITE_DATA( 16, GLint, SWAP32(zoffset) );
        WRITE_DATA( 20, GLsizei, SWAP32(width) );
        WRITE_DATA( 24, GLsizei, SWAP32(height) );
	WRITE_DATA( 28, GLsizei, SWAP32(depth) );
        WRITE_DATA( 32, GLenum, SWAP32(format) );
        WRITE_DATA( 36, GLenum, SWAP32(type) );

        crPixelCopy3D( width, height, depth,
                                                                 (GLvoid *) (data_ptr + 36), format, type, NULL,  /* dst */
                                                                 pixels, format, type, unpackstate );  /* src */

        crHugePacket( CR_TEXSUBIMAGE3D_OPCODE, data_ptr );
        crPackFree( data_ptr );
}
#endif /* CR_OPENGL_VERSION_1_2 */

void PACK_APIENTRY crPackTexSubImage2DSWAP (GLenum target, GLint level, 
		GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, 
		GLenum format, GLenum type, const GLvoid *pixels,
		const CRPixelPackState *unpackstate )
{
	unsigned char *data_ptr;
	int packet_length;

	packet_length = 
		sizeof( target ) +
		sizeof( level ) +
		sizeof( xoffset ) +
		sizeof( yoffset ) +
		sizeof( width ) +
		sizeof( height ) +
		sizeof( format ) +
		sizeof( type ) +
		crImageSize( format, type, width, height );

	data_ptr = (unsigned char *) crPackAlloc( packet_length );
	WRITE_DATA( 0, GLenum, SWAP32(target) );
	WRITE_DATA( 4, GLint, SWAP32(level) );
	WRITE_DATA( 8, GLint, SWAP32(xoffset) );
	WRITE_DATA( 12, GLint, SWAP32(yoffset) );
	WRITE_DATA( 16, GLsizei, SWAP32(width) );
	WRITE_DATA( 20, GLsizei, SWAP32(height) );
	WRITE_DATA( 24, GLenum, SWAP32(format) );
	WRITE_DATA( 28, GLenum, SWAP32(type) );

	crPixelCopy2D( width, height,
								 (GLvoid *) (data_ptr + 32), format, type, NULL,  /* dst */
								 pixels, format, type, unpackstate );  /* src */

	crHugePacket( CR_TEXSUBIMAGE2D_OPCODE, data_ptr );
	crPackFree( data_ptr );
}

void PACK_APIENTRY crPackTexSubImage1DSWAP (GLenum target, GLint level, 
		GLint xoffset, GLsizei width, GLenum format, GLenum type,
		const GLvoid *pixels, const CRPixelPackState *unpackstate )
{
	unsigned char *data_ptr;
	int packet_length;

	packet_length = 
		sizeof( target ) +
		sizeof( level ) +
		sizeof( xoffset ) +
		sizeof( width ) +
		sizeof( format ) +
		sizeof( type ) +
		crImageSize( format, type, width, 1 );

	data_ptr = (unsigned char *) crPackAlloc( packet_length );
	WRITE_DATA( 0, GLenum, SWAP32(target) );
	WRITE_DATA( 4, GLint, SWAP32(level) );
	WRITE_DATA( 8, GLint, SWAP32(xoffset) );
	WRITE_DATA( 12, GLsizei, SWAP32(width) );
	WRITE_DATA( 16, GLenum, SWAP32(format) );
	WRITE_DATA( 20, GLenum, SWAP32(type) );

	crPixelCopy1D((GLvoid *) (data_ptr + 24), format, type,
								pixels, format, type, width, unpackstate );

	crHugePacket( CR_TEXSUBIMAGE1D_OPCODE, data_ptr );
	crPackFree( data_ptr );
}

void PACK_APIENTRY crPackAreTexturesResidentSWAP( GLsizei n, const GLuint *textures, GLboolean *residences, GLboolean *return_val, int *writeback )
{
	GET_PACKER_CONTEXT(pc);
	unsigned char *data_ptr;
	int packet_length;
	int i;

	packet_length = 
		sizeof( int ) +            /* packet length */
		sizeof( GLenum ) +       /* extend-o opcode */
		sizeof( n ) +            /* num_textures */
		n*sizeof( *textures ) +  /* textures */
		8 + 8 + 8;               /* return pointers */

	GET_BUFFERED_POINTER(pc, packet_length);
	WRITE_DATA( 0, int, SWAP32(packet_length) );
	WRITE_DATA( sizeof( int ) + 0, GLenum, SWAP32(CR_ARETEXTURESRESIDENT_EXTEND_OPCODE) );
	WRITE_DATA( sizeof( int ) + 4, GLsizei, SWAP32(n) );
	for (i = 0 ; i < n ; i++)
	{
		WRITE_DATA( (i+1)*sizeof( int ) + 8, GLuint, SWAP32(textures[i]) );
	}
	WRITE_NETWORK_POINTER( sizeof( int ) + 8 + n*sizeof( *textures ), (void *) residences );
	WRITE_NETWORK_POINTER( sizeof( int ) + 16 + n*sizeof( *textures ), (void *) return_val );
	WRITE_NETWORK_POINTER( sizeof( int ) + 24 + n*sizeof( *textures ), (void *) writeback );
	WRITE_OPCODE( pc, CR_EXTEND_OPCODE );
}


/**********************************************************************
 * Texture compression
 */

void PACK_APIENTRY crPackCompressedTexImage1DARBSWAP( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imagesize, const GLvoid *data )
{
	GET_PACKER_CONTEXT(pc);
	crError ( "CompressedTexImage1DARB needs to be special cased!");
	(void) pc;
	(void) target;
	(void) level;
	(void) internalformat;
	(void) width;
	(void) border;
	(void) imagesize;
	(void) data;
}

void PACK_APIENTRY crPackCompressedTexImage2DARBSWAP( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imagesize, const GLvoid *data )
{
	GET_PACKER_CONTEXT(pc);
	crError ( "CompressedTexImage2DARB needs to be special cased!");
	(void) pc;
	(void) target;
	(void) level;
	(void) internalformat;
	(void) width;
	(void) height;
	(void) border;
	(void) imagesize;
	(void) data;
}

void PACK_APIENTRY crPackCompressedTexImage3DARBSWAP( GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imagesize, const GLvoid *data )
{
	GET_PACKER_CONTEXT(pc);
	crError ( "CompressedTexImage3DARB needs to be special cased!");
	(void) pc;
	(void) target;
	(void) level;
	(void) internalformat;
	(void) width;
	(void) height;
	(void) depth;
	(void) border;
	(void) imagesize;
	(void) data;
}

void PACK_APIENTRY crPackCompressedTexSubImage1DARBSWAP( GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imagesize, const GLvoid *data )
{
	GET_PACKER_CONTEXT(pc);
	crError ( "CompressedTexSubImage1DARB needs to be special cased!");
	(void) pc;
	(void) target;
	(void) level;
	(void) xoffset;
	(void) width;
	(void) format;
	(void) imagesize;
	(void) data;
}

void PACK_APIENTRY crPackCompressedTexSubImage2DARBSWAP( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imagesize, const GLvoid *data )
{
	GET_PACKER_CONTEXT(pc);
	crError ( "CompressedTexSubImage2DARB needs to be special cased!");
	(void) pc;
	(void) target;
	(void) level;
	(void) xoffset;
	(void) yoffset;
	(void) width;
	(void) height;
	(void) format;
	(void) imagesize;
	(void) data;
}

void PACK_APIENTRY crPackCompressedTexSubImage3DARBSWAP( GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imagesize, const GLvoid *data )
{
	GET_PACKER_CONTEXT(pc);
	crError ( "CompressedTexSubImage3DARB needs to be special cased!");
	(void) pc;
	(void) target;
	(void) level;
	(void) xoffset;
	(void) yoffset;
	(void) zoffset;
	(void) width;
	(void) height;
	(void) depth;
	(void) format;
	(void) imagesize;
	(void) data;
}

void PACK_APIENTRY crPackGetCompressedTexImageARBSWAP( GLenum target, GLint level, GLvoid *img )
{
	GET_PACKER_CONTEXT(pc);
	crError ( "GetCompressedTexImageARB needs to be special cased!");
	(void) pc;
	(void) target;
	(void) level;
	(void) img;
}
