/* Copyright (c) 2001, Stanford University
 * All rights reserved.
 *
 * See the file LICENSE.txt for information on redistributing this software.
 */

#ifndef READBACK_SPU_H
#define READBACK_SPU_H

#ifdef WINDOWS
#define READBACKSPU_APIENTRY __stdcall
#else
#define READBACKSPU_APIENTRY
#endif

#include "cr_hash.h"
#include "cr_spu.h"
#include "cr_server.h"
#include "cr_threads.h"

typedef struct {
	GLint index;         /**< my window number */
	GLint renderWindow;  /**< the super (render SPU) window */
	GLint childWindow;   /**< the child SPU's window handle */
	GLint width, height;
	GLint childWidth, childHeight;
	GLubyte *colorBuffer;
	GLvoid *depthBuffer;
	GLint bytesPerColor, bytesPerDepth;  /**< bytes per pixel */
	GLenum depthType;  /**< GL_UNSIGNED_SHORT or GL_FLOAT */
	GLenum rgbaFormat; /**< GL_RGBA or GL_BGRA */
	GLenum rgbFormat;  /**< GL_RGB or GL_BGR */
	CRrecti bboxUnion; /**< window-space union of all bounding boxes */
} WindowInfo;

typedef struct {
	GLboolean inUse;
	GLint renderContext;
	GLint childContext;
	CRContext *tracker;  /**< for tracking matrix state */
	WindowInfo *currentWindow;
} ContextInfo;

typedef struct {
	int id;
	int has_child;
	SPUDispatchTable self, child, super;
	CRServer *server;

	/** config options */
	/*@{*/
	int extract_depth;
	int extract_alpha;
	int local_visualization;
	int visualize_depth;
	int resizable;
	char *gather_url;
	int gather_mtu;
	int readSizeX, readSizeY;
	int drawOffsetX, drawOffsetY;
	int drawBboxOutlines;
	/*@}*/

	CRConnection *gather_conn;

	CRHashTable *contextTable;
	CRHashTable *windowTable;

#ifndef CHROMIUM_THREADSAFE
	ContextInfo *currentContext;
#endif

	GLint barrierSize;

} ReadbackSPU;

#define CLEAR_BARRIER   1
#define SWAP_BARRIER    2
#define MUTEX_SEMAPHORE 3

extern ReadbackSPU readback_spu;

#ifdef CHROMIUM_THREADSAFE
extern CRtsd _ReadbackTSD;
#define GET_CONTEXT(T)  ContextInfo *T = crGetTSD(&_ReadbackTSD)
#else
#define GET_CONTEXT(T)  ContextInfo *T = readback_spu.currentContext
#endif


extern void readbackspuGatherConfiguration( ReadbackSPU *spu );

#endif /* READBACK_SPU_H */
