#include <stdlib.h>
#include <stdio.h>
#include "cr_glstate.h"
#include "state/cr_statetypes.h"

void crStateLineInit (CRLineState *l) {
	l->lineSmooth = GL_FALSE;
	l->lineStipple = GL_FALSE;
	l->pointSmooth = GL_FALSE;
	l->pointSize = 1.0f;
	l->width = 1.0f;
	l->pattern = 0xFFFF;
	l->repeat = 1;
	//l->aliasedpointsizerange_min = c->aliasedpointsizerange_min;
	//l->aliasedpointsizerange_max = c->aliasedpointsizerange_max;
	//l->aliasedpointsizegranularity = c->aliasedpointsizegranularity;
	//l->smoothpointsizerange_min = c->smoothpointsizerange_min;
	//l->smoothpointsizerange_max = c->smoothpointsizerange_max;
	//l->smoothpointgranularity = c->smoothpointgranularity;
	//l->aliasedlinewidth_min = c->aliasedlinewidth_min;
	//l->aliasedlinewidth_max = c->aliasedlinewidth_max;
	//l->aliasedlinegranularity = c->aliasedlinegranularity;
	//l->smoothlinewidth_min = c->smoothlinewidth_min;
	//l->smoothlinewidth_max = c->smoothlinewidth_max;
	//l->smoothlinegranularity = c->smoothlinegranularity;
}

void STATE_APIENTRY crStatePointSize(GLfloat size) 
{
	CRContext *g = GetCurrentContext();
	CRLineState *l = &(g->line);
	CRStateBits *sb = GetCurrentBits();
	CRLineBits *lb = &(sb->line);

	if (g->current.inBeginEnd)
	{
		crStateError(__LINE__, __FILE__, GL_INVALID_OPERATION, "glPointSize called in begin/end");
		return;
	}

	if (size <= 0.0f) 
	{
		crStateError(__LINE__, __FILE__, GL_INVALID_VALUE, "glPointSize called with size <= 0.0: %f", size);
		return;
	}
		
	l->pointSize = size;
	lb->size = g->neg_bitid;
	lb->dirty = g->neg_bitid;
}

void STATE_APIENTRY crStateLineWidth(GLfloat width) 
{
	CRContext *g = GetCurrentContext();
	CRLineState *l = &(g->line);
	CRStateBits *sb = GetCurrentBits();
	CRLineBits *lb = &(sb->line);

	if (g->current.inBeginEnd)
	{
		crStateError(__LINE__, __FILE__, GL_INVALID_OPERATION, "glLineWidth called in begin/end");
		return;
	}

	if (width <= 0.0f) 
	{
		crStateError(__LINE__, __FILE__, GL_INVALID_VALUE, "glLineWidth called with size <= 0.0: %f", width);
		return;
	}

	l->width = width;
	lb->width = g->neg_bitid;
	lb->dirty = g->neg_bitid;
}

void STATE_APIENTRY crStateLineStipple(GLint factor, GLushort pattern) 
{
	CRContext *g = GetCurrentContext();
	CRLineState *l = &(g->line);
	CRStateBits *sb = GetCurrentBits();
	CRLineBits *lb = &(sb->line);

	if (g->current.inBeginEnd)
	{
		crStateError(__LINE__, __FILE__, GL_INVALID_OPERATION,
			"glLineStipple called in begin/end");
		return;
	}

	if (factor < 1) factor = 1;
	if (factor > 256) factor = 256;

	l->pattern = pattern;
	l->repeat = factor;
	lb->stipple = g->neg_bitid;
	lb->dirty = g->neg_bitid;
}

