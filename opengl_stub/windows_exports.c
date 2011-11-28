/* Copyright (c) 2001, Stanford University
   All rights reserved.

   See the file LICENSE.txt for information on redistributing this software. */
 
#include "chromium.h"
#include "stub.h"

void cr_glAccum(GLenum op, GLfloat value)
{
        glim.Accum(op, value);
}

void cr_glActiveStencilFaceEXT(GLenum face)
{
        glim.ActiveStencilFaceEXT(face);
}

void cr_glActiveTextureARB(GLenum texture)
{
        glim.ActiveTextureARB(texture);
}

void cr_glAlphaFunc(GLenum func, GLclampf ref)
{
        glim.AlphaFunc(func, ref);
}

GLboolean cr_glAreProgramsResidentNV(GLsizei n, const GLuint * ids, GLboolean * residences)
{
        return glim.AreProgramsResidentNV(n, ids, residences);
}

GLboolean cr_glAreTexturesResident(GLsizei n, const GLuint * textures, GLboolean * residences)
{
        return glim.AreTexturesResident(n, textures, residences);
}

void cr_glArrayElement(GLint i)
{
        glim.ArrayElement(i);
}

void cr_glAttachShader(GLuint program, GLuint shader)
{
        glim.AttachShader(program, shader);
}

void cr_glBarrierCreateCR(GLuint name, GLuint count)
{
        glim.BarrierCreateCR(name, count);
}

void cr_glBarrierDestroyCR(GLuint name)
{
        glim.BarrierDestroyCR(name);
}

void cr_glBarrierExecCR(GLuint name)
{
        glim.BarrierExecCR(name);
}

void cr_glBegin(GLenum mode)
{
        glim.Begin(mode);
}

void cr_glBeginQueryARB(GLenum target, GLuint id)
{
        glim.BeginQueryARB(target, id);
}

void cr_glBindAttribLocation(GLuint program, GLuint index, const char * name)
{
        glim.BindAttribLocation(program, index, name);
}

void cr_glBindBufferARB(GLenum target, GLuint buffer)
{
        glim.BindBufferARB(target, buffer);
}

void cr_glBindFramebufferEXT(GLenum target, GLuint framebuffer)
{
        glim.BindFramebufferEXT(target, framebuffer);
}

void cr_glBindProgramARB(GLenum target, GLuint program)
{
        glim.BindProgramARB(target, program);
}

void cr_glBindProgramNV(GLenum target, GLuint id)
{
        glim.BindProgramNV(target, id);
}

void cr_glBindRenderbufferEXT(GLenum target, GLuint renderbuffer)
{
        glim.BindRenderbufferEXT(target, renderbuffer);
}

void cr_glBindTexture(GLenum target, GLuint texture)
{
        glim.BindTexture(target, texture);
}

void cr_glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap)
{
        glim.Bitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

void cr_glBlendColorEXT(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
        glim.BlendColorEXT(red, green, blue, alpha);
}

void cr_glBlendEquationEXT(GLenum mode)
{
        glim.BlendEquationEXT(mode);
}

void cr_glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
        glim.BlendEquationSeparate(modeRGB, modeAlpha);
}

void cr_glBlendFunc(GLenum sfactor, GLenum dfactor)
{
        glim.BlendFunc(sfactor, dfactor);
}

void cr_glBlendFuncSeparateEXT(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorA, GLenum dfactorA)
{
        glim.BlendFuncSeparateEXT(sfactorRGB, dfactorRGB, sfactorA, dfactorA);
}

void cr_glBlitFramebufferEXT(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
        glim.BlitFramebufferEXT(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

void cr_glBoundsInfoCR(const CRrecti * bounds, const GLbyte * payload, GLint len, GLint num_opcodes)
{
        glim.BoundsInfoCR(bounds, payload, len, num_opcodes);
}

void cr_glBufferDataARB(GLenum target, GLsizeiptrARB size, const GLvoid * data, GLenum usage)
{
        glim.BufferDataARB(target, size, data, usage);
}

void cr_glBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid * data)
{
        glim.BufferSubDataARB(target, offset, size, data);
}

void cr_glCallList(GLuint list)
{
        glim.CallList(list);
}

void cr_glCallLists(GLsizei n, GLenum type, const GLvoid * lists)
{
        glim.CallLists(n, type, lists);
}

GLenum cr_glCheckFramebufferStatusEXT(GLenum target)
{
        return glim.CheckFramebufferStatusEXT(target);
}

void cr_glChromiumParameterfCR(GLenum target, GLfloat value)
{
        glim.ChromiumParameterfCR(target, value);
}

void cr_glChromiumParameteriCR(GLenum target, GLint value)
{
        glim.ChromiumParameteriCR(target, value);
}

void cr_glChromiumParametervCR(GLenum target, GLenum type, GLsizei count, const GLvoid * values)
{
        glim.ChromiumParametervCR(target, type, count, values);
}

void cr_glClear(GLbitfield mask)
{
        glim.Clear(mask);
}

void cr_glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
        glim.ClearAccum(red, green, blue, alpha);
}

void cr_glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
        glim.ClearColor(red, green, blue, alpha);
}

void cr_glClearDepth(GLclampd depth)
{
        glim.ClearDepth(depth);
}

void cr_glClearIndex(GLfloat c)
{
        glim.ClearIndex(c);
}

void cr_glClearStencil(GLint s)
{
        glim.ClearStencil(s);
}

void cr_glClientActiveTextureARB(GLenum texture)
{
        glim.ClientActiveTextureARB(texture);
}

void cr_glClipPlane(GLenum plane, const GLdouble * equation)
{
        glim.ClipPlane(plane, equation);
}

void cr_glColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
        glim.Color3b(red, green, blue);
}

void cr_glColor3bv(const GLbyte * v)
{
        glim.Color3bv(v);
}

void cr_glColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
        glim.Color3d(red, green, blue);
}

void cr_glColor3dv(const GLdouble * v)
{
        glim.Color3dv(v);
}

void cr_glColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
        glim.Color3f(red, green, blue);
}

void cr_glColor3fv(const GLfloat * v)
{
        glim.Color3fv(v);
}

void cr_glColor3i(GLint red, GLint green, GLint blue)
{
        glim.Color3i(red, green, blue);
}

void cr_glColor3iv(const GLint * v)
{
        glim.Color3iv(v);
}

void cr_glColor3s(GLshort red, GLshort green, GLshort blue)
{
        glim.Color3s(red, green, blue);
}

void cr_glColor3sv(const GLshort * v)
{
        glim.Color3sv(v);
}

void cr_glColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
        glim.Color3ub(red, green, blue);
}

void cr_glColor3ubv(const GLubyte * v)
{
        glim.Color3ubv(v);
}

void cr_glColor3ui(GLuint red, GLuint green, GLuint blue)
{
        glim.Color3ui(red, green, blue);
}

void cr_glColor3uiv(const GLuint * v)
{
        glim.Color3uiv(v);
}

void cr_glColor3us(GLushort red, GLushort green, GLushort blue)
{
        glim.Color3us(red, green, blue);
}

void cr_glColor3usv(const GLushort * v)
{
        glim.Color3usv(v);
}

void cr_glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
{
        glim.Color4b(red, green, blue, alpha);
}

void cr_glColor4bv(const GLbyte * v)
{
        glim.Color4bv(v);
}

void cr_glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
{
        glim.Color4d(red, green, blue, alpha);
}

void cr_glColor4dv(const GLdouble * v)
{
        glim.Color4dv(v);
}

void cr_glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
        glim.Color4f(red, green, blue, alpha);
}

void cr_glColor4fv(const GLfloat * v)
{
        glim.Color4fv(v);
}

void cr_glColor4i(GLint red, GLint green, GLint blue, GLint alpha)
{
        glim.Color4i(red, green, blue, alpha);
}

void cr_glColor4iv(const GLint * v)
{
        glim.Color4iv(v);
}

void cr_glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha)
{
        glim.Color4s(red, green, blue, alpha);
}

void cr_glColor4sv(const GLshort * v)
{
        glim.Color4sv(v);
}

void cr_glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
        glim.Color4ub(red, green, blue, alpha);
}

void cr_glColor4ubv(const GLubyte * v)
{
        glim.Color4ubv(v);
}

void cr_glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
        glim.Color4ui(red, green, blue, alpha);
}

void cr_glColor4uiv(const GLuint * v)
{
        glim.Color4uiv(v);
}

void cr_glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha)
{
        glim.Color4us(red, green, blue, alpha);
}

void cr_glColor4usv(const GLushort * v)
{
        glim.Color4usv(v);
}

void cr_glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
        glim.ColorMask(red, green, blue, alpha);
}

void cr_glColorMaterial(GLenum face, GLenum mode)
{
        glim.ColorMaterial(face, mode);
}

void cr_glColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer)
{
        glim.ColorPointer(size, type, stride, pointer);
}

void cr_glCombinerInputNV(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
        glim.CombinerInputNV(stage, portion, variable, input, mapping, componentUsage);
}

void cr_glCombinerOutputNV(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum)
{
        glim.CombinerOutputNV(stage, portion, abOutput, cdOutput, sumOutput, scale, bias, abDotProduct, cdDotProduct, muxSum);
}

void cr_glCombinerParameterfNV(GLenum pname, GLfloat param)
{
        glim.CombinerParameterfNV(pname, param);
}

void cr_glCombinerParameterfvNV(GLenum pname, const GLfloat * params)
{
        glim.CombinerParameterfvNV(pname, params);
}

void cr_glCombinerParameteriNV(GLenum pname, GLint param)
{
        glim.CombinerParameteriNV(pname, param);
}

void cr_glCombinerParameterivNV(GLenum pname, const GLint * params)
{
        glim.CombinerParameterivNV(pname, params);
}

void cr_glCombinerStageParameterfvNV(GLenum stage, GLenum pname, const GLfloat * params)
{
        glim.CombinerStageParameterfvNV(stage, pname, params);
}

void cr_glCompileShader(GLuint shader)
{
        glim.CompileShader(shader);
}

void cr_glCompressedTexImage1DARB(GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLint border, GLsizei imagesize, const GLvoid * data)
{
        glim.CompressedTexImage1DARB(target, level, internalFormat, width, border, imagesize, data);
}

void cr_glCompressedTexImage2DARB(GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLint border, GLsizei imagesize, const GLvoid * data)
{
        glim.CompressedTexImage2DARB(target, level, internalFormat, width, height, border, imagesize, data);
}

void cr_glCompressedTexImage3DARB(GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imagesize, const GLvoid * data)
{
        glim.CompressedTexImage3DARB(target, level, internalFormat, width, height, depth, border, imagesize, data);
}

void cr_glCompressedTexSubImage1DARB(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imagesize, const GLvoid * data)
{
        glim.CompressedTexSubImage1DARB(target, level, xoffset, width, format, imagesize, data);
}

void cr_glCompressedTexSubImage2DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imagesize, const GLvoid * data)
{
        glim.CompressedTexSubImage2DARB(target, level, xoffset, yoffset, width, height, format, imagesize, data);
}

void cr_glCompressedTexSubImage3DARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imagesize, const GLvoid * data)
{
        glim.CompressedTexSubImage3DARB(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imagesize, data);
}

void cr_glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
{
        glim.CopyPixels(x, y, width, height, type);
}

void cr_glCopyTexImage1D(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border)
{
        glim.CopyTexImage1D(target, level, internalFormat, x, y, width, border);
}

void cr_glCopyTexImage2D(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
        glim.CopyTexImage2D(target, level, internalFormat, x, y, width, height, border);
}

void cr_glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
        glim.CopyTexSubImage1D(target, level, xoffset, x, y, width);
}

void cr_glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
        glim.CopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void cr_glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
        glim.CopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

GLuint cr_glCreateProgram(void)
{
        return glim.CreateProgram();
}

GLuint cr_glCreateShader(GLenum type)
{
        return glim.CreateShader(type);
}

void cr_glCullFace(GLenum mode)
{
        glim.CullFace(mode);
}

void cr_glDeleteBuffersARB(GLsizei n, const GLuint * buffer)
{
        glim.DeleteBuffersARB(n, buffer);
}

void cr_glDeleteFencesNV(GLsizei n, const GLuint * fences)
{
        glim.DeleteFencesNV(n, fences);
}

void cr_glDeleteFramebuffersEXT(GLsizei n, const GLuint * framebuffers)
{
        glim.DeleteFramebuffersEXT(n, framebuffers);
}

void cr_glDeleteLists(GLuint list, GLsizei range)
{
        glim.DeleteLists(list, range);
}

void cr_glDeleteObjectARB(GLhandleARB obj)
{
        glim.DeleteObjectARB(obj);
}

void cr_glDeleteProgram(GLuint program)
{
        glim.DeleteProgram(program);
}

void cr_glDeleteProgramsARB(GLsizei n, const GLuint * programs)
{
        glim.DeleteProgramsARB(n, programs);
}

void cr_glDeleteQueriesARB(GLsizei n, const GLuint * ids)
{
        glim.DeleteQueriesARB(n, ids);
}

void cr_glDeleteRenderbuffersEXT(GLsizei n, const GLuint * renderbuffers)
{
        glim.DeleteRenderbuffersEXT(n, renderbuffers);
}

void cr_glDeleteShader(GLuint shader)
{
        glim.DeleteShader(shader);
}

void cr_glDeleteTextures(GLsizei n, const GLuint * textures)
{
        glim.DeleteTextures(n, textures);
}

void cr_glDepthFunc(GLenum func)
{
        glim.DepthFunc(func);
}

void cr_glDepthMask(GLboolean flag)
{
        glim.DepthMask(flag);
}

void cr_glDepthRange(GLclampd zNear, GLclampd zFar)
{
        glim.DepthRange(zNear, zFar);
}

void cr_glDetachShader(GLuint program, GLuint shader)
{
        glim.DetachShader(program, shader);
}

void cr_glDisable(GLenum cap)
{
        glim.Disable(cap);
}

void cr_glDisableClientState(GLenum array)
{
        glim.DisableClientState(array);
}

void cr_glDisableVertexAttribArrayARB(GLuint index)
{
        glim.DisableVertexAttribArrayARB(index);
}

void cr_glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
        glim.DrawArrays(mode, first, count);
}

void cr_glDrawBuffer(GLenum mode)
{
        glim.DrawBuffer(mode);
}

void cr_glDrawBuffers(GLsizei n, const GLenum* bufs)
{
        glim.DrawBuffers(n, bufs);
}

void cr_glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid * indices)
{
        glim.DrawElements(mode, count, type, indices);
}

void cr_glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels)
{
        glim.DrawPixels(width, height, format, type, pixels);
}

void cr_glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid * indices)
{
        glim.DrawRangeElements(mode, start, end, count, type, indices);
}

void cr_glEdgeFlag(GLboolean flag)
{
        glim.EdgeFlag(flag);
}

void cr_glEdgeFlagPointer(GLsizei stride, const GLvoid * pointer)
{
        glim.EdgeFlagPointer(stride, pointer);
}

void cr_glEdgeFlagv(const GLboolean * flag)
{
        glim.EdgeFlagv(flag);
}

void cr_glEnable(GLenum cap)
{
        glim.Enable(cap);
}

void cr_glEnableClientState(GLenum array)
{
        glim.EnableClientState(array);
}

void cr_glEnableVertexAttribArrayARB(GLuint index)
{
        glim.EnableVertexAttribArrayARB(index);
}

void cr_glEnd(void)
{
        glim.End();
}

void cr_glEndList(void)
{
        glim.EndList();
}

void cr_glEndQueryARB(GLenum target)
{
        glim.EndQueryARB(target);
}

void cr_glEvalCoord1d(GLdouble u)
{
        glim.EvalCoord1d(u);
}

void cr_glEvalCoord1dv(const GLdouble * u)
{
        glim.EvalCoord1dv(u);
}

void cr_glEvalCoord1f(GLfloat u)
{
        glim.EvalCoord1f(u);
}

void cr_glEvalCoord1fv(const GLfloat * u)
{
        glim.EvalCoord1fv(u);
}

void cr_glEvalCoord2d(GLdouble u, GLdouble v)
{
        glim.EvalCoord2d(u, v);
}

void cr_glEvalCoord2dv(const GLdouble * u)
{
        glim.EvalCoord2dv(u);
}

void cr_glEvalCoord2f(GLfloat u, GLfloat v)
{
        glim.EvalCoord2f(u, v);
}

void cr_glEvalCoord2fv(const GLfloat * u)
{
        glim.EvalCoord2fv(u);
}

void cr_glEvalMesh1(GLenum mode, GLint i1, GLint i2)
{
        glim.EvalMesh1(mode, i1, i2);
}

void cr_glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
{
        glim.EvalMesh2(mode, i1, i2, j1, j2);
}

void cr_glEvalPoint1(GLint i)
{
        glim.EvalPoint1(i);
}

void cr_glEvalPoint2(GLint i, GLint j)
{
        glim.EvalPoint2(i, j);
}

void cr_glExecuteProgramNV(GLenum target, GLuint id, const GLfloat * params)
{
        glim.ExecuteProgramNV(target, id, params);
}

void cr_glFeedbackBuffer(GLsizei size, GLenum type, GLfloat * buffer)
{
        glim.FeedbackBuffer(size, type, buffer);
}

void cr_glFinalCombinerInputNV(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage)
{
        glim.FinalCombinerInputNV(variable, input, mapping, componentUsage);
}

void cr_glFinish(void)
{
        glim.Finish();
}

void cr_glFinishFenceNV(GLuint fence)
{
        glim.FinishFenceNV(fence);
}

void cr_glFlush(void)
{
        glim.Flush();
}

void cr_glFlushVertexArrayRangeNV(void)
{
        glim.FlushVertexArrayRangeNV();
}

void cr_glFogCoordPointerEXT(GLenum type, GLsizei stride, const GLvoid * pointer)
{
        glim.FogCoordPointerEXT(type, stride, pointer);
}

void cr_glFogCoorddEXT(GLdouble coord)
{
        glim.FogCoorddEXT(coord);
}

void cr_glFogCoorddvEXT(const GLdouble * coord)
{
        glim.FogCoorddvEXT(coord);
}

void cr_glFogCoordfEXT(GLfloat coord)
{
        glim.FogCoordfEXT(coord);
}

void cr_glFogCoordfvEXT(const GLfloat * coord)
{
        glim.FogCoordfvEXT(coord);
}

void cr_glFogf(GLenum pname, GLfloat param)
{
        glim.Fogf(pname, param);
}

void cr_glFogfv(GLenum pname, const GLfloat * params)
{
        glim.Fogfv(pname, params);
}

void cr_glFogi(GLenum pname, GLint param)
{
        glim.Fogi(pname, param);
}

void cr_glFogiv(GLenum pname, const GLint * params)
{
        glim.Fogiv(pname, params);
}

void cr_glFramebufferRenderbufferEXT(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
        glim.FramebufferRenderbufferEXT(target, attachment, renderbuffertarget, renderbuffer);
}

void cr_glFramebufferTexture1DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
        glim.FramebufferTexture1DEXT(target, attachment, textarget, texture, level);
}

void cr_glFramebufferTexture2DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
        glim.FramebufferTexture2DEXT(target, attachment, textarget, texture, level);
}

void cr_glFramebufferTexture3DEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
        glim.FramebufferTexture3DEXT(target, attachment, textarget, texture, level, zoffset);
}

void cr_glFrontFace(GLenum mode)
{
        glim.FrontFace(mode);
}

void cr_glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
        glim.Frustum(left, right, bottom, top, zNear, zFar);
}

void cr_glGenBuffersARB(GLsizei n, GLuint * buffer)
{
        glim.GenBuffersARB(n, buffer);
}

void cr_glGenFencesNV(GLsizei n, GLuint * fences)
{
        glim.GenFencesNV(n, fences);
}

void cr_glGenFramebuffersEXT(GLsizei n, GLuint * framebuffers)
{
        glim.GenFramebuffersEXT(n, framebuffers);
}

GLuint cr_glGenLists(GLsizei range)
{
        return glim.GenLists(range);
}

void cr_glGenProgramsARB(GLsizei n, GLuint * programs)
{
        glim.GenProgramsARB(n, programs);
}

void cr_glGenProgramsNV(GLsizei n, GLuint * ids)
{
        glim.GenProgramsNV(n, ids);
}

void cr_glGenQueriesARB(GLsizei n, GLuint * ids)
{
        glim.GenQueriesARB(n, ids);
}

void cr_glGenRenderbuffersEXT(GLsizei n, GLuint * renderbuffers)
{
        glim.GenRenderbuffersEXT(n, renderbuffers);
}

void cr_glGenTextures(GLsizei n, GLuint * textures)
{
        glim.GenTextures(n, textures);
}

void cr_glGenerateMipmapEXT(GLenum target)
{
        glim.GenerateMipmapEXT(target);
}

void cr_glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, char * name)
{
        glim.GetActiveAttrib(program, index, bufSize, length, size, type, name);
}

void cr_glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, char * name)
{
        glim.GetActiveUniform(program, index, bufSize, length, size, type, name);
}

void cr_glGetAttachedObjectsARB(GLhandleARB containerObj, GLsizei maxCount, GLsizei * count, GLhandleARB * obj)
{
        glim.GetAttachedObjectsARB(containerObj, maxCount, count, obj);
}

void cr_glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders)
{
        glim.GetAttachedShaders(program, maxCount, count, shaders);
}

GLint cr_glGetAttribLocation(GLuint program, const char * name)
{
        return glim.GetAttribLocation(program, name);
}

void cr_glGetBooleanv(GLenum pname, GLboolean * params)
{
        glim.GetBooleanv(pname, params);
}

void cr_glGetBufferParameterivARB(GLenum target, GLenum pname, GLint * params)
{
        glim.GetBufferParameterivARB(target, pname, params);
}

void cr_glGetBufferPointervARB(GLenum target, GLenum pname, GLvoid ** params)
{
        glim.GetBufferPointervARB(target, pname, params);
}

void cr_glGetBufferSubDataARB(GLenum target, GLintptrARB offset, GLsizeiptrARB size, void * data)
{
        glim.GetBufferSubDataARB(target, offset, size, data);
}

void cr_glGetChromiumParametervCR(GLenum target, GLuint index, GLenum type, GLsizei count, GLvoid * values)
{
        glim.GetChromiumParametervCR(target, index, type, count, values);
}

void cr_glGetClipPlane(GLenum plane, GLdouble * equation)
{
        glim.GetClipPlane(plane, equation);
}

void cr_glGetCombinerInputParameterfvNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat * params)
{
        glim.GetCombinerInputParameterfvNV(stage, portion, variable, pname, params);
}

void cr_glGetCombinerInputParameterivNV(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint * params)
{
        glim.GetCombinerInputParameterivNV(stage, portion, variable, pname, params);
}

void cr_glGetCombinerOutputParameterfvNV(GLenum stage, GLenum portion, GLenum pname, GLfloat * params)
{
        glim.GetCombinerOutputParameterfvNV(stage, portion, pname, params);
}

void cr_glGetCombinerOutputParameterivNV(GLenum stage, GLenum portion, GLenum pname, GLint * params)
{
        glim.GetCombinerOutputParameterivNV(stage, portion, pname, params);
}

void cr_glGetCombinerStageParameterfvNV(GLenum stage, GLenum pname, GLfloat * params)
{
        glim.GetCombinerStageParameterfvNV(stage, pname, params);
}

void cr_glGetCompressedTexImageARB(GLenum target, GLint level, GLvoid * img)
{
        glim.GetCompressedTexImageARB(target, level, img);
}

void cr_glGetDoublev(GLenum pname, GLdouble * params)
{
        glim.GetDoublev(pname, params);
}

GLenum cr_glGetError(void)
{
        return glim.GetError();
}

void cr_glGetFenceivNV(GLuint fence, GLenum pname, GLint * params)
{
        glim.GetFenceivNV(fence, pname, params);
}

void cr_glGetFinalCombinerInputParameterfvNV(GLenum variable, GLenum pname, GLfloat * params)
{
        glim.GetFinalCombinerInputParameterfvNV(variable, pname, params);
}

void cr_glGetFinalCombinerInputParameterivNV(GLenum variable, GLenum pname, GLint * params)
{
        glim.GetFinalCombinerInputParameterivNV(variable, pname, params);
}

void cr_glGetFloatv(GLenum pname, GLfloat * params)
{
        glim.GetFloatv(pname, params);
}

void cr_glGetFramebufferAttachmentParameterivEXT(GLenum target, GLenum attachment, GLenum pname, GLint * params)
{
        glim.GetFramebufferAttachmentParameterivEXT(target, attachment, pname, params);
}

GLhandleARB cr_glGetHandleARB(GLenum pname)
{
        return glim.GetHandleARB(pname);
}

void cr_glGetInfoLogARB(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * infoLog)
{
        glim.GetInfoLogARB(obj, maxLength, length, infoLog);
}

void cr_glGetIntegerv(GLenum pname, GLint * params)
{
        glim.GetIntegerv(pname, params);
}

void cr_glGetLightfv(GLenum light, GLenum pname, GLfloat * params)
{
        glim.GetLightfv(light, pname, params);
}

void cr_glGetLightiv(GLenum light, GLenum pname, GLint * params)
{
        glim.GetLightiv(light, pname, params);
}

void cr_glGetMapdv(GLenum target, GLenum query, GLdouble * v)
{
        glim.GetMapdv(target, query, v);
}

void cr_glGetMapfv(GLenum target, GLenum query, GLfloat * v)
{
        glim.GetMapfv(target, query, v);
}

void cr_glGetMapiv(GLenum target, GLenum query, GLint * v)
{
        glim.GetMapiv(target, query, v);
}

void cr_glGetMaterialfv(GLenum face, GLenum pname, GLfloat * params)
{
        glim.GetMaterialfv(face, pname, params);
}

void cr_glGetMaterialiv(GLenum face, GLenum pname, GLint * params)
{
        glim.GetMaterialiv(face, pname, params);
}

void cr_glGetObjectParameterfvARB(GLhandleARB obj, GLenum pname, GLfloat * params)
{
        glim.GetObjectParameterfvARB(obj, pname, params);
}

void cr_glGetObjectParameterivARB(GLhandleARB obj, GLenum pname, GLint * params)
{
        glim.GetObjectParameterivARB(obj, pname, params);
}

void cr_glGetPixelMapfv(GLenum map, GLfloat * values)
{
        glim.GetPixelMapfv(map, values);
}

void cr_glGetPixelMapuiv(GLenum map, GLuint * values)
{
        glim.GetPixelMapuiv(map, values);
}

void cr_glGetPixelMapusv(GLenum map, GLushort * values)
{
        glim.GetPixelMapusv(map, values);
}

void cr_glGetPointerv(GLenum pname, GLvoid ** params)
{
        glim.GetPointerv(pname, params);
}

void cr_glGetPolygonStipple(GLubyte * mask)
{
        glim.GetPolygonStipple(mask);
}

void cr_glGetProgramEnvParameterdvARB(GLenum target, GLuint index, GLdouble * params)
{
        glim.GetProgramEnvParameterdvARB(target, index, params);
}

void cr_glGetProgramEnvParameterfvARB(GLenum target, GLuint index, GLfloat * params)
{
        glim.GetProgramEnvParameterfvARB(target, index, params);
}

void cr_glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, char * infoLog)
{
        glim.GetProgramInfoLog(program, bufSize, length, infoLog);
}

void cr_glGetProgramLocalParameterdvARB(GLenum target, GLuint index, GLdouble * params)
{
        glim.GetProgramLocalParameterdvARB(target, index, params);
}

void cr_glGetProgramLocalParameterfvARB(GLenum target, GLuint index, GLfloat * params)
{
        glim.GetProgramLocalParameterfvARB(target, index, params);
}

void cr_glGetProgramNamedParameterdvNV(GLuint id, GLsizei len, const GLubyte * name, GLdouble * params)
{
        glim.GetProgramNamedParameterdvNV(id, len, name, params);
}

void cr_glGetProgramNamedParameterfvNV(GLuint id, GLsizei len, const GLubyte * name, GLfloat * params)
{
        glim.GetProgramNamedParameterfvNV(id, len, name, params);
}

void cr_glGetProgramParameterdvNV(GLenum target, GLuint index, GLenum pname, GLdouble * params)
{
        glim.GetProgramParameterdvNV(target, index, pname, params);
}

void cr_glGetProgramParameterfvNV(GLenum target, GLuint index, GLenum pname, GLfloat * params)
{
        glim.GetProgramParameterfvNV(target, index, pname, params);
}

void cr_glGetProgramStringARB(GLenum target, GLenum pname, GLvoid * string)
{
        glim.GetProgramStringARB(target, pname, string);
}

void cr_glGetProgramStringNV(GLuint id, GLenum pname, GLubyte * program)
{
        glim.GetProgramStringNV(id, pname, program);
}

void cr_glGetProgramiv(GLuint program, GLenum pname, GLint * params)
{
        glim.GetProgramiv(program, pname, params);
}

void cr_glGetProgramivARB(GLenum target, GLenum pname, GLint * params)
{
        glim.GetProgramivARB(target, pname, params);
}

void cr_glGetProgramivNV(GLuint id, GLenum pname, GLint * params)
{
        glim.GetProgramivNV(id, pname, params);
}

void cr_glGetQueryObjectivARB(GLuint id, GLenum pname, GLint * params)
{
        glim.GetQueryObjectivARB(id, pname, params);
}

void cr_glGetQueryObjectuivARB(GLuint id, GLenum pname, GLuint * params)
{
        glim.GetQueryObjectuivARB(id, pname, params);
}

void cr_glGetQueryivARB(GLenum target, GLenum pname, GLint * params)
{
        glim.GetQueryivARB(target, pname, params);
}

void cr_glGetRenderbufferParameterivEXT(GLenum target, GLenum pname, GLint * params)
{
        glim.GetRenderbufferParameterivEXT(target, pname, params);
}

void cr_glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, char * infoLog)
{
        glim.GetShaderInfoLog(shader, bufSize, length, infoLog);
}

void cr_glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei * length, char * source)
{
        glim.GetShaderSource(shader, bufSize, length, source);
}

void cr_glGetShaderiv(GLuint shader, GLenum pname, GLint * params)
{
        glim.GetShaderiv(shader, pname, params);
}

const GLubyte * cr_glGetString(GLenum name)
{
        return glim.GetString(name);
}

void cr_glGetTexEnvfv(GLenum target, GLenum pname, GLfloat * params)
{
        glim.GetTexEnvfv(target, pname, params);
}

void cr_glGetTexEnviv(GLenum target, GLenum pname, GLint * params)
{
        glim.GetTexEnviv(target, pname, params);
}

void cr_glGetTexGendv(GLenum coord, GLenum pname, GLdouble * params)
{
        glim.GetTexGendv(coord, pname, params);
}

void cr_glGetTexGenfv(GLenum coord, GLenum pname, GLfloat * params)
{
        glim.GetTexGenfv(coord, pname, params);
}

void cr_glGetTexGeniv(GLenum coord, GLenum pname, GLint * params)
{
        glim.GetTexGeniv(coord, pname, params);
}

void cr_glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLvoid * pixels)
{
        glim.GetTexImage(target, level, format, type, pixels);
}

void cr_glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params)
{
        glim.GetTexLevelParameterfv(target, level, pname, params);
}

void cr_glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params)
{
        glim.GetTexLevelParameteriv(target, level, pname, params);
}

void cr_glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
        glim.GetTexParameterfv(target, pname, params);
}

void cr_glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
        glim.GetTexParameteriv(target, pname, params);
}

void cr_glGetTrackMatrixivNV(GLenum target, GLuint address, GLenum pname, GLint * params)
{
        glim.GetTrackMatrixivNV(target, address, pname, params);
}

GLint cr_glGetUniformLocation(GLuint program, const char * name)
{
        return glim.GetUniformLocation(program, name);
}

void cr_glGetUniformfv(GLuint program, GLint location, GLfloat * params)
{
        glim.GetUniformfv(program, location, params);
}

void cr_glGetUniformiv(GLuint program, GLint location, GLint * params)
{
        glim.GetUniformiv(program, location, params);
}

void cr_glGetVertexAttribPointervARB(GLuint index, GLenum pname, GLvoid ** pointer)
{
        glim.GetVertexAttribPointervARB(index, pname, pointer);
}

void cr_glGetVertexAttribPointervNV(GLuint index, GLenum pname, GLvoid ** pointer)
{
        glim.GetVertexAttribPointervNV(index, pname, pointer);
}

void cr_glGetVertexAttribdvARB(GLuint index, GLenum pname, GLdouble * params)
{
        glim.GetVertexAttribdvARB(index, pname, params);
}

void cr_glGetVertexAttribdvNV(GLuint index, GLenum pname, GLdouble * params)
{
        glim.GetVertexAttribdvNV(index, pname, params);
}

void cr_glGetVertexAttribfvARB(GLuint index, GLenum pname, GLfloat * params)
{
        glim.GetVertexAttribfvARB(index, pname, params);
}

void cr_glGetVertexAttribfvNV(GLuint index, GLenum pname, GLfloat * params)
{
        glim.GetVertexAttribfvNV(index, pname, params);
}

void cr_glGetVertexAttribivARB(GLuint index, GLenum pname, GLint * params)
{
        glim.GetVertexAttribivARB(index, pname, params);
}

void cr_glGetVertexAttribivNV(GLuint index, GLenum pname, GLint * params)
{
        glim.GetVertexAttribivNV(index, pname, params);
}

void cr_glHint(GLenum target, GLenum mode)
{
        glim.Hint(target, mode);
}

void cr_glIndexMask(GLuint mask)
{
        glim.IndexMask(mask);
}

void cr_glIndexPointer(GLenum type, GLsizei stride, const GLvoid * pointer)
{
        glim.IndexPointer(type, stride, pointer);
}

void cr_glIndexd(GLdouble c)
{
        glim.Indexd(c);
}

void cr_glIndexdv(const GLdouble * c)
{
        glim.Indexdv(c);
}

void cr_glIndexf(GLfloat c)
{
        glim.Indexf(c);
}

void cr_glIndexfv(const GLfloat * c)
{
        glim.Indexfv(c);
}

void cr_glIndexi(GLint c)
{
        glim.Indexi(c);
}

void cr_glIndexiv(const GLint * c)
{
        glim.Indexiv(c);
}

void cr_glIndexs(GLshort c)
{
        glim.Indexs(c);
}

void cr_glIndexsv(const GLshort * c)
{
        glim.Indexsv(c);
}

void cr_glIndexub(GLubyte c)
{
        glim.Indexub(c);
}

void cr_glIndexubv(const GLubyte * c)
{
        glim.Indexubv(c);
}

void cr_glInitNames(void)
{
        glim.InitNames();
}

void cr_glInterleavedArrays(GLenum format, GLsizei stride, const GLvoid * pointer)
{
        glim.InterleavedArrays(format, stride, pointer);
}

GLboolean cr_glIsBufferARB(GLuint buffer)
{
        return glim.IsBufferARB(buffer);
}

GLboolean cr_glIsEnabled(GLenum cap)
{
        return glim.IsEnabled(cap);
}

GLboolean cr_glIsFenceNV(GLuint fence)
{
        return glim.IsFenceNV(fence);
}

GLboolean cr_glIsFramebufferEXT(GLuint framebuffer)
{
        return glim.IsFramebufferEXT(framebuffer);
}

GLboolean cr_glIsList(GLuint list)
{
        return glim.IsList(list);
}

GLboolean cr_glIsProgram(GLuint program)
{
        return glim.IsProgram(program);
}

GLboolean cr_glIsProgramARB(GLuint program)
{
        return glim.IsProgramARB(program);
}

GLboolean cr_glIsQueryARB(GLuint id)
{
        return glim.IsQueryARB(id);
}

GLboolean cr_glIsRenderbufferEXT(GLuint renderbuffer)
{
        return glim.IsRenderbufferEXT(renderbuffer);
}

GLboolean cr_glIsShader(GLuint shader)
{
        return glim.IsShader(shader);
}

GLboolean cr_glIsTexture(GLuint texture)
{
        return glim.IsTexture(texture);
}

void cr_glLightModelf(GLenum pname, GLfloat param)
{
        glim.LightModelf(pname, param);
}

void cr_glLightModelfv(GLenum pname, const GLfloat * params)
{
        glim.LightModelfv(pname, params);
}

void cr_glLightModeli(GLenum pname, GLint param)
{
        glim.LightModeli(pname, param);
}

void cr_glLightModeliv(GLenum pname, const GLint * params)
{
        glim.LightModeliv(pname, params);
}

void cr_glLightf(GLenum light, GLenum pname, GLfloat param)
{
        glim.Lightf(light, pname, param);
}

void cr_glLightfv(GLenum light, GLenum pname, const GLfloat * params)
{
        glim.Lightfv(light, pname, params);
}

void cr_glLighti(GLenum light, GLenum pname, GLint param)
{
        glim.Lighti(light, pname, param);
}

void cr_glLightiv(GLenum light, GLenum pname, const GLint * params)
{
        glim.Lightiv(light, pname, params);
}

void cr_glLineStipple(GLint factor, GLushort pattern)
{
        glim.LineStipple(factor, pattern);
}

void cr_glLineWidth(GLfloat width)
{
        glim.LineWidth(width);
}

void cr_glLinkProgram(GLuint program)
{
        glim.LinkProgram(program);
}

void cr_glListBase(GLuint base)
{
        glim.ListBase(base);
}

void cr_glLoadIdentity(void)
{
        glim.LoadIdentity();
}

void cr_glLoadMatrixd(const GLdouble * m)
{
        glim.LoadMatrixd(m);
}

void cr_glLoadMatrixf(const GLfloat * m)
{
        glim.LoadMatrixf(m);
}

void cr_glLoadName(GLuint name)
{
        glim.LoadName(name);
}

void cr_glLoadProgramNV(GLenum target, GLuint id, GLsizei len, const GLubyte * program)
{
        glim.LoadProgramNV(target, id, len, program);
}

void cr_glLoadTransposeMatrixdARB(const GLdouble * m)
{
        glim.LoadTransposeMatrixdARB(m);
}

void cr_glLoadTransposeMatrixfARB(const GLfloat * m)
{
        glim.LoadTransposeMatrixfARB(m);
}

void cr_glLockArraysEXT(GLint first, GLint count)
{
        glim.LockArraysEXT(first, count);
}

void cr_glLogicOp(GLenum opcode)
{
        glim.LogicOp(opcode);
}

void cr_glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
        glim.Map1d(target, u1, u2, stride, order, points);
}

void cr_glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
        glim.Map1f(target, u1, u2, stride, order, points);
}

void cr_glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
        glim.Map2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void cr_glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
        glim.Map2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void * cr_glMapBufferARB(GLenum target, GLenum access)
{
        return glim.MapBufferARB(target, access);
}

void cr_glMapGrid1d(GLint un, GLdouble u1, GLdouble u2)
{
        glim.MapGrid1d(un, u1, u2);
}

void cr_glMapGrid1f(GLint un, GLfloat u1, GLfloat u2)
{
        glim.MapGrid1f(un, u1, u2);
}

void cr_glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
{
        glim.MapGrid2d(un, u1, u2, vn, v1, v2);
}

void cr_glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
{
        glim.MapGrid2f(un, u1, u2, vn, v1, v2);
}

void cr_glMaterialf(GLenum face, GLenum pname, GLfloat param)
{
        glim.Materialf(face, pname, param);
}

void cr_glMaterialfv(GLenum face, GLenum pname, const GLfloat * params)
{
        glim.Materialfv(face, pname, params);
}

void cr_glMateriali(GLenum face, GLenum pname, GLint param)
{
        glim.Materiali(face, pname, param);
}

void cr_glMaterialiv(GLenum face, GLenum pname, const GLint * params)
{
        glim.Materialiv(face, pname, params);
}

void cr_glMatrixMode(GLenum mode)
{
        glim.MatrixMode(mode);
}

void cr_glMultMatrixd(const GLdouble * m)
{
        glim.MultMatrixd(m);
}

void cr_glMultMatrixf(const GLfloat * m)
{
        glim.MultMatrixf(m);
}

void cr_glMultTransposeMatrixdARB(const GLdouble * m)
{
        glim.MultTransposeMatrixdARB(m);
}

void cr_glMultTransposeMatrixfARB(const GLfloat * m)
{
        glim.MultTransposeMatrixfARB(m);
}

void cr_glMultiDrawArraysEXT(GLenum mode, GLint * first, GLsizei * count, GLsizei primcount)
{
        glim.MultiDrawArraysEXT(mode, first, count, primcount);
}

void cr_glMultiDrawElementsEXT(GLenum mode, const GLsizei * count, GLenum type, const GLvoid ** indices, GLsizei primcount)
{
        glim.MultiDrawElementsEXT(mode, count, type, indices, primcount);
}

void cr_glMultiTexCoord1dARB(GLenum texture, GLdouble s)
{
        glim.MultiTexCoord1dARB(texture, s);
}

void cr_glMultiTexCoord1dvARB(GLenum texture, const GLdouble * t)
{
        glim.MultiTexCoord1dvARB(texture, t);
}

void cr_glMultiTexCoord1fARB(GLenum texture, GLfloat s)
{
        glim.MultiTexCoord1fARB(texture, s);
}

void cr_glMultiTexCoord1fvARB(GLenum texture, const GLfloat * t)
{
        glim.MultiTexCoord1fvARB(texture, t);
}

void cr_glMultiTexCoord1iARB(GLenum texture, GLint s)
{
        glim.MultiTexCoord1iARB(texture, s);
}

void cr_glMultiTexCoord1ivARB(GLenum texture, const GLint * t)
{
        glim.MultiTexCoord1ivARB(texture, t);
}

void cr_glMultiTexCoord1sARB(GLenum texture, GLshort s)
{
        glim.MultiTexCoord1sARB(texture, s);
}

void cr_glMultiTexCoord1svARB(GLenum texture, const GLshort * t)
{
        glim.MultiTexCoord1svARB(texture, t);
}

void cr_glMultiTexCoord2dARB(GLenum texture, GLdouble s, GLdouble t)
{
        glim.MultiTexCoord2dARB(texture, s, t);
}

void cr_glMultiTexCoord2dvARB(GLenum texture, const GLdouble * t)
{
        glim.MultiTexCoord2dvARB(texture, t);
}

void cr_glMultiTexCoord2fARB(GLenum texture, GLfloat s, GLfloat t)
{
        glim.MultiTexCoord2fARB(texture, s, t);
}

void cr_glMultiTexCoord2fvARB(GLenum texture, const GLfloat * t)
{
        glim.MultiTexCoord2fvARB(texture, t);
}

void cr_glMultiTexCoord2iARB(GLenum texture, GLint s, GLint t)
{
        glim.MultiTexCoord2iARB(texture, s, t);
}

void cr_glMultiTexCoord2ivARB(GLenum texture, const GLint * t)
{
        glim.MultiTexCoord2ivARB(texture, t);
}

void cr_glMultiTexCoord2sARB(GLenum texture, GLshort s, GLshort t)
{
        glim.MultiTexCoord2sARB(texture, s, t);
}

void cr_glMultiTexCoord2svARB(GLenum texture, const GLshort * t)
{
        glim.MultiTexCoord2svARB(texture, t);
}

void cr_glMultiTexCoord3dARB(GLenum texture, GLdouble s, GLdouble t, GLdouble r)
{
        glim.MultiTexCoord3dARB(texture, s, t, r);
}

void cr_glMultiTexCoord3dvARB(GLenum texture, const GLdouble * t)
{
        glim.MultiTexCoord3dvARB(texture, t);
}

void cr_glMultiTexCoord3fARB(GLenum texture, GLfloat s, GLfloat t, GLfloat r)
{
        glim.MultiTexCoord3fARB(texture, s, t, r);
}

void cr_glMultiTexCoord3fvARB(GLenum texture, const GLfloat * t)
{
        glim.MultiTexCoord3fvARB(texture, t);
}

void cr_glMultiTexCoord3iARB(GLenum texture, GLint s, GLint t, GLint r)
{
        glim.MultiTexCoord3iARB(texture, s, t, r);
}

void cr_glMultiTexCoord3ivARB(GLenum texture, const GLint * t)
{
        glim.MultiTexCoord3ivARB(texture, t);
}

void cr_glMultiTexCoord3sARB(GLenum texture, GLshort s, GLshort t, GLshort r)
{
        glim.MultiTexCoord3sARB(texture, s, t, r);
}

void cr_glMultiTexCoord3svARB(GLenum texture, const GLshort * t)
{
        glim.MultiTexCoord3svARB(texture, t);
}

void cr_glMultiTexCoord4dARB(GLenum texture, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
        glim.MultiTexCoord4dARB(texture, s, t, r, q);
}

void cr_glMultiTexCoord4dvARB(GLenum texture, const GLdouble * t)
{
        glim.MultiTexCoord4dvARB(texture, t);
}

void cr_glMultiTexCoord4fARB(GLenum texture, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
        glim.MultiTexCoord4fARB(texture, s, t, r, q);
}

void cr_glMultiTexCoord4fvARB(GLenum texture, const GLfloat * t)
{
        glim.MultiTexCoord4fvARB(texture, t);
}

void cr_glMultiTexCoord4iARB(GLenum texture, GLint s, GLint t, GLint r, GLint q)
{
        glim.MultiTexCoord4iARB(texture, s, t, r, q);
}

void cr_glMultiTexCoord4ivARB(GLenum texture, const GLint * t)
{
        glim.MultiTexCoord4ivARB(texture, t);
}

void cr_glMultiTexCoord4sARB(GLenum texture, GLshort s, GLshort t, GLshort r, GLshort q)
{
        glim.MultiTexCoord4sARB(texture, s, t, r, q);
}

void cr_glMultiTexCoord4svARB(GLenum texture, const GLshort * t)
{
        glim.MultiTexCoord4svARB(texture, t);
}

void cr_glNewList(GLuint list, GLenum mode)
{
        glim.NewList(list, mode);
}

void cr_glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz)
{
        glim.Normal3b(nx, ny, nz);
}

void cr_glNormal3bv(const GLbyte * v)
{
        glim.Normal3bv(v);
}

void cr_glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz)
{
        glim.Normal3d(nx, ny, nz);
}

void cr_glNormal3dv(const GLdouble * v)
{
        glim.Normal3dv(v);
}

void cr_glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
        glim.Normal3f(nx, ny, nz);
}

void cr_glNormal3fv(const GLfloat * v)
{
        glim.Normal3fv(v);
}

void cr_glNormal3i(GLint nx, GLint ny, GLint nz)
{
        glim.Normal3i(nx, ny, nz);
}

void cr_glNormal3iv(const GLint * v)
{
        glim.Normal3iv(v);
}

void cr_glNormal3s(GLshort nx, GLshort ny, GLshort nz)
{
        glim.Normal3s(nx, ny, nz);
}

void cr_glNormal3sv(const GLshort * v)
{
        glim.Normal3sv(v);
}

void cr_glNormalPointer(GLenum type, GLsizei stride, const GLvoid * pointer)
{
        glim.NormalPointer(type, stride, pointer);
}

void cr_glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
        glim.Ortho(left, right, bottom, top, zNear, zFar);
}

void cr_glPassThrough(GLfloat token)
{
        glim.PassThrough(token);
}

void cr_glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat * values)
{
        glim.PixelMapfv(map, mapsize, values);
}

void cr_glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint * values)
{
        glim.PixelMapuiv(map, mapsize, values);
}

void cr_glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort * values)
{
        glim.PixelMapusv(map, mapsize, values);
}

void cr_glPixelStoref(GLenum pname, GLfloat param)
{
        glim.PixelStoref(pname, param);
}

void cr_glPixelStorei(GLenum pname, GLint param)
{
        glim.PixelStorei(pname, param);
}

void cr_glPixelTransferf(GLenum pname, GLfloat param)
{
        glim.PixelTransferf(pname, param);
}

void cr_glPixelTransferi(GLenum pname, GLint param)
{
        glim.PixelTransferi(pname, param);
}

void cr_glPixelZoom(GLfloat xfactor, GLfloat yfactor)
{
        glim.PixelZoom(xfactor, yfactor);
}

void cr_glPointParameterfARB(GLenum pname, GLfloat param)
{
        glim.PointParameterfARB(pname, param);
}

void cr_glPointParameterfvARB(GLenum pname, const GLfloat * params)
{
        glim.PointParameterfvARB(pname, params);
}

void cr_glPointParameteri(GLenum pname, GLint param)
{
        glim.PointParameteri(pname, param);
}

void cr_glPointParameteriv(GLenum pname, const GLint * param)
{
        glim.PointParameteriv(pname, param);
}

void cr_glPointSize(GLfloat size)
{
        glim.PointSize(size);
}

void cr_glPolygonMode(GLenum face, GLenum mode)
{
        glim.PolygonMode(face, mode);
}

void cr_glPolygonOffset(GLfloat factor, GLfloat units)
{
        glim.PolygonOffset(factor, units);
}

void cr_glPolygonStipple(const GLubyte * mask)
{
        glim.PolygonStipple(mask);
}

void cr_glPopAttrib(void)
{
        glim.PopAttrib();
}

void cr_glPopClientAttrib(void)
{
        glim.PopClientAttrib();
}

void cr_glPopMatrix(void)
{
        glim.PopMatrix();
}

void cr_glPopName(void)
{
        glim.PopName();
}

void cr_glPrioritizeTextures(GLsizei n, const GLuint * textures, const GLclampf * priorities)
{
        glim.PrioritizeTextures(n, textures, priorities);
}

void cr_glProgramEnvParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
        glim.ProgramEnvParameter4dARB(target, index, x, y, z, w);
}

void cr_glProgramEnvParameter4dvARB(GLenum target, GLuint index, const GLdouble * params)
{
        glim.ProgramEnvParameter4dvARB(target, index, params);
}

void cr_glProgramEnvParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
        glim.ProgramEnvParameter4fARB(target, index, x, y, z, w);
}

void cr_glProgramEnvParameter4fvARB(GLenum target, GLuint index, const GLfloat * params)
{
        glim.ProgramEnvParameter4fvARB(target, index, params);
}

void cr_glProgramLocalParameter4dARB(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
        glim.ProgramLocalParameter4dARB(target, index, x, y, z, w);
}

void cr_glProgramLocalParameter4dvARB(GLenum target, GLuint index, const GLdouble * params)
{
        glim.ProgramLocalParameter4dvARB(target, index, params);
}

void cr_glProgramLocalParameter4fARB(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
        glim.ProgramLocalParameter4fARB(target, index, x, y, z, w);
}

void cr_glProgramLocalParameter4fvARB(GLenum target, GLuint index, const GLfloat * params)
{
        glim.ProgramLocalParameter4fvARB(target, index, params);
}

void cr_glProgramNamedParameter4dNV(GLuint id, GLsizei len, const GLubyte * name, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
        glim.ProgramNamedParameter4dNV(id, len, name, x, y, z, w);
}

void cr_glProgramNamedParameter4dvNV(GLuint id, GLsizei len, const GLubyte * name, const GLdouble * v)
{
        glim.ProgramNamedParameter4dvNV(id, len, name, v);
}

void cr_glProgramNamedParameter4fNV(GLuint id, GLsizei len, const GLubyte * name, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
        glim.ProgramNamedParameter4fNV(id, len, name, x, y, z, w);
}

void cr_glProgramNamedParameter4fvNV(GLuint id, GLsizei len, const GLubyte * name, const GLfloat * v)
{
        glim.ProgramNamedParameter4fvNV(id, len, name, v);
}

void cr_glProgramParameter4dNV(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
        glim.ProgramParameter4dNV(target, index, x, y, z, w);
}

void cr_glProgramParameter4dvNV(GLenum target, GLuint index, const GLdouble * params)
{
        glim.ProgramParameter4dvNV(target, index, params);
}

void cr_glProgramParameter4fNV(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
        glim.ProgramParameter4fNV(target, index, x, y, z, w);
}

void cr_glProgramParameter4fvNV(GLenum target, GLuint index, const GLfloat * params)
{
        glim.ProgramParameter4fvNV(target, index, params);
}

void cr_glProgramParameters4dvNV(GLenum target, GLuint index, GLuint num, const GLdouble * params)
{
        glim.ProgramParameters4dvNV(target, index, num, params);
}

void cr_glProgramParameters4fvNV(GLenum target, GLuint index, GLuint num, const GLfloat * params)
{
        glim.ProgramParameters4fvNV(target, index, num, params);
}

void cr_glProgramStringARB(GLenum target, GLenum format, GLsizei len, const GLvoid * string)
{
        glim.ProgramStringARB(target, format, len, string);
}

void cr_glPushAttrib(GLbitfield mask)
{
        glim.PushAttrib(mask);
}

void cr_glPushClientAttrib(GLbitfield mask)
{
        glim.PushClientAttrib(mask);
}

void cr_glPushMatrix(void)
{
        glim.PushMatrix();
}

void cr_glPushName(GLuint name)
{
        glim.PushName(name);
}

void cr_glRasterPos2d(GLdouble x, GLdouble y)
{
        glim.RasterPos2d(x, y);
}

void cr_glRasterPos2dv(const GLdouble * v)
{
        glim.RasterPos2dv(v);
}

void cr_glRasterPos2f(GLfloat x, GLfloat y)
{
        glim.RasterPos2f(x, y);
}

void cr_glRasterPos2fv(const GLfloat * v)
{
        glim.RasterPos2fv(v);
}

void cr_glRasterPos2i(GLint x, GLint y)
{
        glim.RasterPos2i(x, y);
}

void cr_glRasterPos2iv(const GLint * v)
{
        glim.RasterPos2iv(v);
}

void cr_glRasterPos2s(GLshort x, GLshort y)
{
        glim.RasterPos2s(x, y);
}

void cr_glRasterPos2sv(const GLshort * v)
{
        glim.RasterPos2sv(v);
}

void cr_glRasterPos3d(GLdouble x, GLdouble y, GLdouble z)
{
        glim.RasterPos3d(x, y, z);
}

void cr_glRasterPos3dv(const GLdouble * v)
{
        glim.RasterPos3dv(v);
}

void cr_glRasterPos3f(GLfloat x, GLfloat y, GLfloat z)
{
        glim.RasterPos3f(x, y, z);
}

void cr_glRasterPos3fv(const GLfloat * v)
{
        glim.RasterPos3fv(v);
}

void cr_glRasterPos3i(GLint x, GLint y, GLint z)
{
        glim.RasterPos3i(x, y, z);
}

void cr_glRasterPos3iv(const GLint * v)
{
        glim.RasterPos3iv(v);
}

void cr_glRasterPos3s(GLshort x, GLshort y, GLshort z)
{
        glim.RasterPos3s(x, y, z);
}

void cr_glRasterPos3sv(const GLshort * v)
{
        glim.RasterPos3sv(v);
}

void cr_glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
        glim.RasterPos4d(x, y, z, w);
}

void cr_glRasterPos4dv(const GLdouble * v)
{
        glim.RasterPos4dv(v);
}

void cr_glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
        glim.RasterPos4f(x, y, z, w);
}

void cr_glRasterPos4fv(const GLfloat * v)
{
        glim.RasterPos4fv(v);
}

void cr_glRasterPos4i(GLint x, GLint y, GLint z, GLint w)
{
        glim.RasterPos4i(x, y, z, w);
}

void cr_glRasterPos4iv(const GLint * v)
{
        glim.RasterPos4iv(v);
}

void cr_glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
        glim.RasterPos4s(x, y, z, w);
}

void cr_glRasterPos4sv(const GLshort * v)
{
        glim.RasterPos4sv(v);
}

void cr_glReadBuffer(GLenum mode)
{
        glim.ReadBuffer(mode);
}

void cr_glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid * pixels)
{
        glim.ReadPixels(x, y, width, height, format, type, pixels);
}

void cr_glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
{
        glim.Rectd(x1, y1, x2, y2);
}

void cr_glRectdv(const GLdouble * v1, const GLdouble * v2)
{
        glim.Rectdv(v1, v2);
}

void cr_glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{
        glim.Rectf(x1, y1, x2, y2);
}

void cr_glRectfv(const GLfloat * v1, const GLfloat * v2)
{
        glim.Rectfv(v1, v2);
}

void cr_glRecti(GLint x1, GLint y1, GLint x2, GLint y2)
{
        glim.Recti(x1, y1, x2, y2);
}

void cr_glRectiv(const GLint * v1, const GLint * v2)
{
        glim.Rectiv(v1, v2);
}

void cr_glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2)
{
        glim.Rects(x1, y1, x2, y2);
}

void cr_glRectsv(const GLshort * v1, const GLshort * v2)
{
        glim.Rectsv(v1, v2);
}

GLint cr_glRenderMode(GLenum mode)
{
        return glim.RenderMode(mode);
}

void cr_glRenderbufferStorageEXT(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
        glim.RenderbufferStorageEXT(target, internalformat, width, height);
}

void cr_glRequestResidentProgramsNV(GLsizei n, const GLuint * ids)
{
        glim.RequestResidentProgramsNV(n, ids);
}

void cr_glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
        glim.Rotated(angle, x, y, z);
}

void cr_glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
        glim.Rotatef(angle, x, y, z);
}

void cr_glSampleCoverageARB(GLclampf value, GLboolean invert)
{
        glim.SampleCoverageARB(value, invert);
}

void cr_glScaled(GLdouble x, GLdouble y, GLdouble z)
{
        glim.Scaled(x, y, z);
}

void cr_glScalef(GLfloat x, GLfloat y, GLfloat z)
{
        glim.Scalef(x, y, z);
}

void cr_glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
        glim.Scissor(x, y, width, height);
}

void cr_glSecondaryColor3bEXT(GLbyte red, GLbyte green, GLbyte blue)
{
        glim.SecondaryColor3bEXT(red, green, blue);
}

void cr_glSecondaryColor3bvEXT(const GLbyte * v)
{
        glim.SecondaryColor3bvEXT(v);
}

void cr_glSecondaryColor3dEXT(GLdouble red, GLdouble green, GLdouble blue)
{
        glim.SecondaryColor3dEXT(red, green, blue);
}

void cr_glSecondaryColor3dvEXT(const GLdouble * v)
{
        glim.SecondaryColor3dvEXT(v);
}

void cr_glSecondaryColor3fEXT(GLfloat red, GLfloat green, GLfloat blue)
{
        glim.SecondaryColor3fEXT(red, green, blue);
}

void cr_glSecondaryColor3fvEXT(const GLfloat * v)
{
        glim.SecondaryColor3fvEXT(v);
}

void cr_glSecondaryColor3iEXT(GLint red, GLint green, GLint blue)
{
        glim.SecondaryColor3iEXT(red, green, blue);
}

void cr_glSecondaryColor3ivEXT(const GLint * v)
{
        glim.SecondaryColor3ivEXT(v);
}

void cr_glSecondaryColor3sEXT(GLshort red, GLshort green, GLshort blue)
{
        glim.SecondaryColor3sEXT(red, green, blue);
}

void cr_glSecondaryColor3svEXT(const GLshort * v)
{
        glim.SecondaryColor3svEXT(v);
}

void cr_glSecondaryColor3ubEXT(GLubyte red, GLubyte green, GLubyte blue)
{
        glim.SecondaryColor3ubEXT(red, green, blue);
}

void cr_glSecondaryColor3ubvEXT(const GLubyte * v)
{
        glim.SecondaryColor3ubvEXT(v);
}

void cr_glSecondaryColor3uiEXT(GLuint red, GLuint green, GLuint blue)
{
        glim.SecondaryColor3uiEXT(red, green, blue);
}

void cr_glSecondaryColor3uivEXT(const GLuint * v)
{
        glim.SecondaryColor3uivEXT(v);
}

void cr_glSecondaryColor3usEXT(GLushort red, GLushort green, GLushort blue)
{
        glim.SecondaryColor3usEXT(red, green, blue);
}

void cr_glSecondaryColor3usvEXT(const GLushort * v)
{
        glim.SecondaryColor3usvEXT(v);
}

void cr_glSecondaryColorPointerEXT(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer)
{
        glim.SecondaryColorPointerEXT(size, type, stride, pointer);
}

void cr_glSelectBuffer(GLsizei size, GLuint * buffer)
{
        glim.SelectBuffer(size, buffer);
}

void cr_glSemaphoreCreateCR(GLuint name, GLuint count)
{
        glim.SemaphoreCreateCR(name, count);
}

void cr_glSemaphoreDestroyCR(GLuint name)
{
        glim.SemaphoreDestroyCR(name);
}

void cr_glSemaphorePCR(GLuint name)
{
        glim.SemaphorePCR(name);
}

void cr_glSemaphoreVCR(GLuint name)
{
        glim.SemaphoreVCR(name);
}

void cr_glSetFenceNV(GLuint fence, GLenum condition)
{
        glim.SetFenceNV(fence, condition);
}

void cr_glShadeModel(GLenum mode)
{
        glim.ShadeModel(mode);
}

void cr_glShaderSource(GLuint shader, GLsizei count, const char ** string, const GLint * length)
{
        glim.ShaderSource(shader, count, string, length);
}

void cr_glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
        glim.StencilFunc(func, ref, mask);
}

void cr_glStencilFuncSeparate(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask)
{
        glim.StencilFuncSeparate(frontfunc, backfunc, ref, mask);
}

void cr_glStencilMask(GLuint mask)
{
        glim.StencilMask(mask);
}

void cr_glStencilMaskSeparate(GLenum face, GLuint mask)
{
        glim.StencilMaskSeparate(face, mask);
}

void cr_glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
        glim.StencilOp(fail, zfail, zpass);
}

void cr_glStencilOpSeparate(GLenum face, GLenum fail, GLenum zfail, GLenum zpass)
{
        glim.StencilOpSeparate(face, fail, zfail, zpass);
}

GLboolean cr_glTestFenceNV(GLuint fence)
{
        return glim.TestFenceNV(fence);
}

void cr_glTexCoord1d(GLdouble s)
{
        glim.TexCoord1d(s);
}

void cr_glTexCoord1dv(const GLdouble * v)
{
        glim.TexCoord1dv(v);
}

void cr_glTexCoord1f(GLfloat s)
{
        glim.TexCoord1f(s);
}

void cr_glTexCoord1fv(const GLfloat * v)
{
        glim.TexCoord1fv(v);
}

void cr_glTexCoord1i(GLint s)
{
        glim.TexCoord1i(s);
}

void cr_glTexCoord1iv(const GLint * v)
{
        glim.TexCoord1iv(v);
}

void cr_glTexCoord1s(GLshort s)
{
        glim.TexCoord1s(s);
}

void cr_glTexCoord1sv(const GLshort * v)
{
        glim.TexCoord1sv(v);
}

void cr_glTexCoord2d(GLdouble s, GLdouble t)
{
        glim.TexCoord2d(s, t);
}

void cr_glTexCoord2dv(const GLdouble * v)
{
        glim.TexCoord2dv(v);
}

void cr_glTexCoord2f(GLfloat s, GLfloat t)
{
        glim.TexCoord2f(s, t);
}

void cr_glTexCoord2fv(const GLfloat * v)
{
        glim.TexCoord2fv(v);
}

void cr_glTexCoord2i(GLint s, GLint t)
{
        glim.TexCoord2i(s, t);
}

void cr_glTexCoord2iv(const GLint * v)
{
        glim.TexCoord2iv(v);
}

void cr_glTexCoord2s(GLshort s, GLshort t)
{
        glim.TexCoord2s(s, t);
}

void cr_glTexCoord2sv(const GLshort * v)
{
        glim.TexCoord2sv(v);
}

void cr_glTexCoord3d(GLdouble s, GLdouble t, GLdouble r)
{
        glim.TexCoord3d(s, t, r);
}

void cr_glTexCoord3dv(const GLdouble * v)
{
        glim.TexCoord3dv(v);
}

void cr_glTexCoord3f(GLfloat s, GLfloat t, GLfloat r)
{
        glim.TexCoord3f(s, t, r);
}

void cr_glTexCoord3fv(const GLfloat * v)
{
        glim.TexCoord3fv(v);
}

void cr_glTexCoord3i(GLint s, GLint t, GLint r)
{
        glim.TexCoord3i(s, t, r);
}

void cr_glTexCoord3iv(const GLint * v)
{
        glim.TexCoord3iv(v);
}

void cr_glTexCoord3s(GLshort s, GLshort t, GLshort r)
{
        glim.TexCoord3s(s, t, r);
}

void cr_glTexCoord3sv(const GLshort * v)
{
        glim.TexCoord3sv(v);
}

void cr_glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
        glim.TexCoord4d(s, t, r, q);
}

void cr_glTexCoord4dv(const GLdouble * v)
{
        glim.TexCoord4dv(v);
}

void cr_glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
        glim.TexCoord4f(s, t, r, q);
}

void cr_glTexCoord4fv(const GLfloat * v)
{
        glim.TexCoord4fv(v);
}

void cr_glTexCoord4i(GLint s, GLint t, GLint r, GLint q)
{
        glim.TexCoord4i(s, t, r, q);
}

void cr_glTexCoord4iv(const GLint * v)
{
        glim.TexCoord4iv(v);
}

void cr_glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q)
{
        glim.TexCoord4s(s, t, r, q);
}

void cr_glTexCoord4sv(const GLshort * v)
{
        glim.TexCoord4sv(v);
}

void cr_glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer)
{
        glim.TexCoordPointer(size, type, stride, pointer);
}

void cr_glTexEnvf(GLenum target, GLenum pname, GLfloat param)
{
        glim.TexEnvf(target, pname, param);
}

void cr_glTexEnvfv(GLenum target, GLenum pname, const GLfloat * params)
{
        glim.TexEnvfv(target, pname, params);
}

void cr_glTexEnvi(GLenum target, GLenum pname, GLint param)
{
        glim.TexEnvi(target, pname, param);
}

void cr_glTexEnviv(GLenum target, GLenum pname, const GLint * params)
{
        glim.TexEnviv(target, pname, params);
}

void cr_glTexGend(GLenum coord, GLenum pname, GLdouble param)
{
        glim.TexGend(coord, pname, param);
}

void cr_glTexGendv(GLenum coord, GLenum pname, const GLdouble * params)
{
        glim.TexGendv(coord, pname, params);
}

void cr_glTexGenf(GLenum coord, GLenum pname, GLfloat param)
{
        glim.TexGenf(coord, pname, param);
}

void cr_glTexGenfv(GLenum coord, GLenum pname, const GLfloat * params)
{
        glim.TexGenfv(coord, pname, params);
}

void cr_glTexGeni(GLenum coord, GLenum pname, GLint param)
{
        glim.TexGeni(coord, pname, param);
}

void cr_glTexGeniv(GLenum coord, GLenum pname, const GLint * params)
{
        glim.TexGeniv(coord, pname, params);
}

void cr_glTexImage1D(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid * pixels)
{
        glim.TexImage1D(target, level, internalFormat, width, border, format, type, pixels);
}

void cr_glTexImage2D(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid * pixels)
{
        glim.TexImage2D(target, level, internalFormat, width, height, border, format, type, pixels);
}

void cr_glTexImage3D(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid * pixels)
{
        glim.TexImage3D(target, level, internalFormat, width, height, depth, border, format, type, pixels);
}

void cr_glTexImage3DEXT(GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid * pixels)
{
        glim.TexImage3DEXT(target, level, internalFormat, width, height, depth, border, format, type, pixels);
}

void cr_glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
        glim.TexParameterf(target, pname, param);
}

void cr_glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
        glim.TexParameterfv(target, pname, params);
}

void cr_glTexParameteri(GLenum target, GLenum pname, GLint param)
{
        glim.TexParameteri(target, pname, param);
}

void cr_glTexParameteriv(GLenum target, GLenum pname, const GLint * params)
{
        glim.TexParameteriv(target, pname, params);
}

void cr_glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid * pixels)
{
        glim.TexSubImage1D(target, level, xoffset, width, format, type, pixels);
}

void cr_glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels)
{
        glim.TexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void cr_glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid * pixels)
{
        glim.TexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void cr_glTrackMatrixNV(GLenum target, GLuint address, GLenum matrix, GLenum transform)
{
        glim.TrackMatrixNV(target, address, matrix, transform);
}

void cr_glTranslated(GLdouble x, GLdouble y, GLdouble z)
{
        glim.Translated(x, y, z);
}

void cr_glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
        glim.Translatef(x, y, z);
}

void cr_glUniform1f(GLint location, GLfloat v0)
{
        glim.Uniform1f(location, v0);
}

void cr_glUniform1fv(GLint location, GLsizei count, const GLfloat * value)
{
        glim.Uniform1fv(location, count, value);
}

void cr_glUniform1i(GLint location, GLint v0)
{
        glim.Uniform1i(location, v0);
}

void cr_glUniform1iv(GLint location, GLsizei count, const GLint * value)
{
        glim.Uniform1iv(location, count, value);
}

void cr_glUniform2f(GLint location, GLfloat v0, GLfloat v1)
{
        glim.Uniform2f(location, v0, v1);
}

void cr_glUniform2fv(GLint location, GLsizei count, const GLfloat * value)
{
        glim.Uniform2fv(location, count, value);
}

void cr_glUniform2i(GLint location, GLint v0, GLint v1)
{
        glim.Uniform2i(location, v0, v1);
}

void cr_glUniform2iv(GLint location, GLsizei count, const GLint * value)
{
        glim.Uniform2iv(location, count, value);
}

void cr_glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
        glim.Uniform3f(location, v0, v1, v2);
}

void cr_glUniform3fv(GLint location, GLsizei count, const GLfloat * value)
{
        glim.Uniform3fv(location, count, value);
}

void cr_glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
        glim.Uniform3i(location, v0, v1, v2);
}

void cr_glUniform3iv(GLint location, GLsizei count, const GLint * value)
{
        glim.Uniform3iv(location, count, value);
}

void cr_glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
        glim.Uniform4f(location, v0, v1, v2, v3);
}

void cr_glUniform4fv(GLint location, GLsizei count, const GLfloat * value)
{
        glim.Uniform4fv(location, count, value);
}

void cr_glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
        glim.Uniform4i(location, v0, v1, v2, v3);
}

void cr_glUniform4iv(GLint location, GLsizei count, const GLint * value)
{
        glim.Uniform4iv(location, count, value);
}

void cr_glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
        glim.UniformMatrix2fv(location, count, transpose, value);
}

void cr_glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
        glim.UniformMatrix2x3fv(location, count, transpose, value);
}

void cr_glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
        glim.UniformMatrix2x4fv(location, count, transpose, value);
}

void cr_glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
        glim.UniformMatrix3fv(location, count, transpose, value);
}

void cr_glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
        glim.UniformMatrix3x2fv(location, count, transpose, value);
}

void cr_glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
        glim.UniformMatrix3x4fv(location, count, transpose, value);
}

void cr_glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
        glim.UniformMatrix4fv(location, count, transpose, value);
}

void cr_glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
        glim.UniformMatrix4x2fv(location, count, transpose, value);
}

void cr_glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
        glim.UniformMatrix4x3fv(location, count, transpose, value);
}

void cr_glUnlockArraysEXT(void)
{
        glim.UnlockArraysEXT();
}

GLboolean cr_glUnmapBufferARB(GLenum target)
{
        return glim.UnmapBufferARB(target);
}

void cr_glUseProgram(GLuint program)
{
        glim.UseProgram(program);
}

void cr_glValidateProgram(GLuint program)
{
        glim.ValidateProgram(program);
}

void cr_glVertex2d(GLdouble x, GLdouble y)
{
        glim.Vertex2d(x, y);
}

void cr_glVertex2dv(const GLdouble * v)
{
        glim.Vertex2dv(v);
}

void cr_glVertex2f(GLfloat x, GLfloat y)
{
        glim.Vertex2f(x, y);
}

void cr_glVertex2fv(const GLfloat * v)
{
        glim.Vertex2fv(v);
}

void cr_glVertex2i(GLint x, GLint y)
{
        glim.Vertex2i(x, y);
}

void cr_glVertex2iv(const GLint * v)
{
        glim.Vertex2iv(v);
}

void cr_glVertex2s(GLshort x, GLshort y)
{
        glim.Vertex2s(x, y);
}

void cr_glVertex2sv(const GLshort * v)
{
        glim.Vertex2sv(v);
}

void cr_glVertex3d(GLdouble x, GLdouble y, GLdouble z)
{
        glim.Vertex3d(x, y, z);
}

void cr_glVertex3dv(const GLdouble * v)
{
        glim.Vertex3dv(v);
}

void cr_glVertex3f(GLfloat x, GLfloat y, GLfloat z)
{
        glim.Vertex3f(x, y, z);
}

void cr_glVertex3fv(const GLfloat * v)
{
        glim.Vertex3fv(v);
}

void cr_glVertex3i(GLint x, GLint y, GLint z)
{
        glim.Vertex3i(x, y, z);
}

void cr_glVertex3iv(const GLint * v)
{
        glim.Vertex3iv(v);
}

void cr_glVertex3s(GLshort x, GLshort y, GLshort z)
{
        glim.Vertex3s(x, y, z);
}

void cr_glVertex3sv(const GLshort * v)
{
        glim.Vertex3sv(v);
}

void cr_glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
        glim.Vertex4d(x, y, z, w);
}

void cr_glVertex4dv(const GLdouble * v)
{
        glim.Vertex4dv(v);
}

void cr_glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
        glim.Vertex4f(x, y, z, w);
}

void cr_glVertex4fv(const GLfloat * v)
{
        glim.Vertex4fv(v);
}

void cr_glVertex4i(GLint x, GLint y, GLint z, GLint w)
{
        glim.Vertex4i(x, y, z, w);
}

void cr_glVertex4iv(const GLint * v)
{
        glim.Vertex4iv(v);
}

void cr_glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
        glim.Vertex4s(x, y, z, w);
}

void cr_glVertex4sv(const GLshort * v)
{
        glim.Vertex4sv(v);
}

void cr_glVertexArrayRangeNV(GLsizei length, const GLvoid * pointer)
{
        glim.VertexArrayRangeNV(length, pointer);
}

void cr_glVertexAttrib1dARB(GLuint index, GLdouble x)
{
        glim.VertexAttrib1dARB(index, x);
}

void cr_glVertexAttrib1dvARB(GLuint index, const GLdouble * v)
{
        glim.VertexAttrib1dvARB(index, v);
}

void cr_glVertexAttrib1fARB(GLuint index, GLfloat x)
{
        glim.VertexAttrib1fARB(index, x);
}

void cr_glVertexAttrib1fvARB(GLuint index, const GLfloat * v)
{
        glim.VertexAttrib1fvARB(index, v);
}

void cr_glVertexAttrib1sARB(GLuint index, GLshort x)
{
        glim.VertexAttrib1sARB(index, x);
}

void cr_glVertexAttrib1svARB(GLuint index, const GLshort * v)
{
        glim.VertexAttrib1svARB(index, v);
}

void cr_glVertexAttrib2dARB(GLuint index, GLdouble x, GLdouble y)
{
        glim.VertexAttrib2dARB(index, x, y);
}

void cr_glVertexAttrib2dvARB(GLuint index, const GLdouble * v)
{
        glim.VertexAttrib2dvARB(index, v);
}

void cr_glVertexAttrib2fARB(GLuint index, GLfloat x, GLfloat y)
{
        glim.VertexAttrib2fARB(index, x, y);
}

void cr_glVertexAttrib2fvARB(GLuint index, const GLfloat * v)
{
        glim.VertexAttrib2fvARB(index, v);
}

void cr_glVertexAttrib2sARB(GLuint index, GLshort x, GLshort y)
{
        glim.VertexAttrib2sARB(index, x, y);
}

void cr_glVertexAttrib2svARB(GLuint index, const GLshort * v)
{
        glim.VertexAttrib2svARB(index, v);
}

void cr_glVertexAttrib3dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
        glim.VertexAttrib3dARB(index, x, y, z);
}

void cr_glVertexAttrib3dvARB(GLuint index, const GLdouble * v)
{
        glim.VertexAttrib3dvARB(index, v);
}

void cr_glVertexAttrib3fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
        glim.VertexAttrib3fARB(index, x, y, z);
}

void cr_glVertexAttrib3fvARB(GLuint index, const GLfloat * v)
{
        glim.VertexAttrib3fvARB(index, v);
}

void cr_glVertexAttrib3sARB(GLuint index, GLshort x, GLshort y, GLshort z)
{
        glim.VertexAttrib3sARB(index, x, y, z);
}

void cr_glVertexAttrib3svARB(GLuint index, const GLshort * v)
{
        glim.VertexAttrib3svARB(index, v);
}

void cr_glVertexAttrib4NbvARB(GLuint index, const GLbyte * v)
{
        glim.VertexAttrib4NbvARB(index, v);
}

void cr_glVertexAttrib4NivARB(GLuint index, const GLint * v)
{
        glim.VertexAttrib4NivARB(index, v);
}

void cr_glVertexAttrib4NsvARB(GLuint index, const GLshort * v)
{
        glim.VertexAttrib4NsvARB(index, v);
}

void cr_glVertexAttrib4NubARB(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
        glim.VertexAttrib4NubARB(index, x, y, z, w);
}

void cr_glVertexAttrib4NubvARB(GLuint index, const GLubyte * v)
{
        glim.VertexAttrib4NubvARB(index, v);
}

void cr_glVertexAttrib4NuivARB(GLuint index, const GLuint * v)
{
        glim.VertexAttrib4NuivARB(index, v);
}

void cr_glVertexAttrib4NusvARB(GLuint index, const GLushort * v)
{
        glim.VertexAttrib4NusvARB(index, v);
}

void cr_glVertexAttrib4bvARB(GLuint index, const GLbyte * v)
{
        glim.VertexAttrib4bvARB(index, v);
}

void cr_glVertexAttrib4dARB(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
        glim.VertexAttrib4dARB(index, x, y, z, w);
}

void cr_glVertexAttrib4dvARB(GLuint index, const GLdouble * v)
{
        glim.VertexAttrib4dvARB(index, v);
}

void cr_glVertexAttrib4fARB(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
        glim.VertexAttrib4fARB(index, x, y, z, w);
}

void cr_glVertexAttrib4fvARB(GLuint index, const GLfloat * v)
{
        glim.VertexAttrib4fvARB(index, v);
}

void cr_glVertexAttrib4ivARB(GLuint index, const GLint * v)
{
        glim.VertexAttrib4ivARB(index, v);
}

void cr_glVertexAttrib4sARB(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
        glim.VertexAttrib4sARB(index, x, y, z, w);
}

void cr_glVertexAttrib4svARB(GLuint index, const GLshort * v)
{
        glim.VertexAttrib4svARB(index, v);
}

void cr_glVertexAttrib4ubvARB(GLuint index, const GLubyte * v)
{
        glim.VertexAttrib4ubvARB(index, v);
}

void cr_glVertexAttrib4uivARB(GLuint index, const GLuint * v)
{
        glim.VertexAttrib4uivARB(index, v);
}

void cr_glVertexAttrib4usvARB(GLuint index, const GLushort * v)
{
        glim.VertexAttrib4usvARB(index, v);
}

void cr_glVertexAttribPointerARB(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer)
{
        glim.VertexAttribPointerARB(index, size, type, normalized, stride, pointer);
}

void cr_glVertexAttribPointerNV(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid * pointer)
{
        glim.VertexAttribPointerNV(index, size, type, stride, pointer);
}

void cr_glVertexAttribs1dvNV(GLuint index, GLsizei n, const GLdouble * v)
{
        glim.VertexAttribs1dvNV(index, n, v);
}

void cr_glVertexAttribs1fvNV(GLuint index, GLsizei n, const GLfloat * v)
{
        glim.VertexAttribs1fvNV(index, n, v);
}

void cr_glVertexAttribs1svNV(GLuint index, GLsizei n, const GLshort * v)
{
        glim.VertexAttribs1svNV(index, n, v);
}

void cr_glVertexAttribs2dvNV(GLuint index, GLsizei n, const GLdouble * v)
{
        glim.VertexAttribs2dvNV(index, n, v);
}

void cr_glVertexAttribs2fvNV(GLuint index, GLsizei n, const GLfloat * v)
{
        glim.VertexAttribs2fvNV(index, n, v);
}

void cr_glVertexAttribs2svNV(GLuint index, GLsizei n, const GLshort * v)
{
        glim.VertexAttribs2svNV(index, n, v);
}

void cr_glVertexAttribs3dvNV(GLuint index, GLsizei n, const GLdouble * v)
{
        glim.VertexAttribs3dvNV(index, n, v);
}

void cr_glVertexAttribs3fvNV(GLuint index, GLsizei n, const GLfloat * v)
{
        glim.VertexAttribs3fvNV(index, n, v);
}

void cr_glVertexAttribs3svNV(GLuint index, GLsizei n, const GLshort * v)
{
        glim.VertexAttribs3svNV(index, n, v);
}

void cr_glVertexAttribs4dvNV(GLuint index, GLsizei n, const GLdouble * v)
{
        glim.VertexAttribs4dvNV(index, n, v);
}

void cr_glVertexAttribs4fvNV(GLuint index, GLsizei n, const GLfloat * v)
{
        glim.VertexAttribs4fvNV(index, n, v);
}

void cr_glVertexAttribs4svNV(GLuint index, GLsizei n, const GLshort * v)
{
        glim.VertexAttribs4svNV(index, n, v);
}

void cr_glVertexAttribs4ubvNV(GLuint index, GLsizei n, const GLubyte * v)
{
        glim.VertexAttribs4ubvNV(index, n, v);
}

void cr_glVertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer)
{
        glim.VertexPointer(size, type, stride, pointer);
}

void cr_glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
        glim.Viewport(x, y, width, height);
}

void cr_glWindowPos2dARB(GLdouble x, GLdouble y)
{
        glim.WindowPos2dARB(x, y);
}

void cr_glWindowPos2dvARB(const GLdouble * v)
{
        glim.WindowPos2dvARB(v);
}

void cr_glWindowPos2fARB(GLfloat x, GLfloat y)
{
        glim.WindowPos2fARB(x, y);
}

void cr_glWindowPos2fvARB(const GLfloat * v)
{
        glim.WindowPos2fvARB(v);
}

void cr_glWindowPos2iARB(GLint x, GLint y)
{
        glim.WindowPos2iARB(x, y);
}

void cr_glWindowPos2ivARB(const GLint * v)
{
        glim.WindowPos2ivARB(v);
}

void cr_glWindowPos2sARB(GLshort x, GLshort y)
{
        glim.WindowPos2sARB(x, y);
}

void cr_glWindowPos2svARB(const GLshort * v)
{
        glim.WindowPos2svARB(v);
}

void cr_glWindowPos3dARB(GLdouble x, GLdouble y, GLdouble z)
{
        glim.WindowPos3dARB(x, y, z);
}

void cr_glWindowPos3dvARB(const GLdouble * v)
{
        glim.WindowPos3dvARB(v);
}

void cr_glWindowPos3fARB(GLfloat x, GLfloat y, GLfloat z)
{
        glim.WindowPos3fARB(x, y, z);
}

void cr_glWindowPos3fvARB(const GLfloat * v)
{
        glim.WindowPos3fvARB(v);
}

void cr_glWindowPos3iARB(GLint x, GLint y, GLint z)
{
        glim.WindowPos3iARB(x, y, z);
}

void cr_glWindowPos3ivARB(const GLint * v)
{
        glim.WindowPos3ivARB(v);
}

void cr_glWindowPos3sARB(GLshort x, GLshort y, GLshort z)
{
        glim.WindowPos3sARB(x, y, z);
}

void cr_glWindowPos3svARB(const GLshort * v)
{
        glim.WindowPos3svARB(v);
}

void cr_glZPixCR(GLsizei width, GLsizei height, GLenum format, GLenum type, GLenum ztype, GLint zparm, GLint length, const GLvoid * pixels)
{
        glim.ZPixCR(width, height, format, type, ztype, zparm, length, pixels);
}

/*
 * Aliases
 */
void cr_glActiveTexture(GLenum texture)
{
        glim.ActiveTextureARB(texture);
}

GLboolean cr_glAreTexturesResidentEXT(GLsizei n, const GLuint * textures, GLboolean * residences)
{
        return glim.AreTexturesResident(n, textures, residences);
}

void cr_glAttachObjectARB(GLhandleARB containerObj, GLhandleARB obj)
{
        glim.AttachShader(containerObj, obj);
}

void cr_glBindAttribLocationARB(GLhandleARB programObj, GLuint index, const GLcharARB * name)
{
        glim.BindAttribLocation(programObj, index, name);
}

void cr_glBindBuffer(GLenum target, GLuint buffer)
{
        glim.BindBufferARB(target, buffer);
}

void cr_glBindTextureEXT(GLenum target, GLuint texture)
{
        glim.BindTexture(target, texture);
}

void cr_glBlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
        glim.BlendColorEXT(red, green, blue, alpha);
}

void cr_glBlendEquation(GLenum mode)
{
        glim.BlendEquationEXT(mode);
}

void cr_glBlendEquationSeparateEXT(GLenum modeRGB, GLenum modeAlpha)
{
        glim.BlendEquationSeparate(modeRGB, modeAlpha);
}

void cr_glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorA, GLenum dfactorA)
{
        glim.BlendFuncSeparateEXT(sfactorRGB, dfactorRGB, sfactorA, dfactorA);
}

void cr_glBufferData(GLenum target, GLsizeiptrARB size, const GLvoid * data, GLenum usage)
{
        glim.BufferDataARB(target, size, data, usage);
}

void cr_glBufferSubData(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid * data)
{
        glim.BufferSubDataARB(target, offset, size, data);
}

void cr_glClientActiveTexture(GLenum texture)
{
        glim.ClientActiveTextureARB(texture);
}

void cr_glCompileShaderARB(GLhandleARB shaderObj)
{
        glim.CompileShader(shaderObj);
}

void cr_glCompressedTexImage1D(GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid * data)
{
        glim.CompressedTexImage1DARB(target, level, internalFormat, width, border, imageSize, data);
}

void cr_glCompressedTexImage2D(GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid * data)
{
        glim.CompressedTexImage2DARB(target, level, internalFormat, width, height, border, imageSize, data);
}

void cr_glCompressedTexImage3D(GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid * data)
{
        glim.CompressedTexImage3DARB(target, level, internalFormat, width, height, depth, border, imageSize, data);
}

void cr_glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid * data)
{
        glim.CompressedTexSubImage1DARB(target, level, xoffset, width, format, imageSize, data);
}

void cr_glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid * data)
{
        glim.CompressedTexSubImage2DARB(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void cr_glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid * data)
{
        glim.CompressedTexSubImage3DARB(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

void cr_glCopyTexImage1DEXT(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border)
{
        glim.CopyTexImage1D(target, level, internalFormat, x, y, width, border);
}

void cr_glCopyTexImage2DEXT(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
        glim.CopyTexImage2D(target, level, internalFormat, x, y, width, height, border);
}

void cr_glCopyTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
        glim.CopyTexSubImage1D(target, level, xoffset, x, y, width);
}

void cr_glCopyTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
        glim.CopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void cr_glCopyTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
        glim.CopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

GLhandleARB cr_glCreateProgramObjectARB(void)
{
        return glim.CreateProgram();
}

GLhandleARB cr_glCreateShaderObjectARB(GLenum shaderType)
{
        return glim.CreateShader(shaderType);
}

void cr_glDeleteBuffers(GLsizei n, const GLuint * buffer)
{
        glim.DeleteBuffersARB(n, buffer);
}

void cr_glDeleteProgramsNV(GLsizei n, const GLuint * ids)
{
        glim.DeleteProgramsARB(n, ids);
}

void cr_glDeleteTexturesEXT(GLsizei n, const GLuint * textures)
{
        glim.DeleteTextures(n, textures);
}

void cr_glDetachObjectARB(GLhandleARB containerObj, GLhandleARB attachedObj)
{
        glim.DetachShader(containerObj, attachedObj);
}

void cr_glDisableVertexAttribArray(GLuint index)
{
        glim.DisableVertexAttribArrayARB(index);
}

void cr_glDrawRangeElementsEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid * indices)
{
        glim.DrawRangeElements(mode, start, end, count, type, indices);
}

void cr_glEnableVertexAttribArray(GLuint index)
{
        glim.EnableVertexAttribArrayARB(index);
}

void cr_glFogCoordPointer(GLenum type, GLsizei stride, const GLvoid * pointer)
{
        glim.FogCoordPointerEXT(type, stride, pointer);
}

void cr_glFogCoordd(GLdouble coord)
{
        glim.FogCoorddEXT(coord);
}

void cr_glFogCoorddv(const GLdouble * coord)
{
        glim.FogCoorddvEXT(coord);
}

void cr_glFogCoordf(GLfloat coord)
{
        glim.FogCoordfEXT(coord);
}

void cr_glFogCoordfv(const GLfloat * coord)
{
        glim.FogCoordfvEXT(coord);
}

void cr_glGenBuffers(GLsizei n, GLuint * buffer)
{
        glim.GenBuffersARB(n, buffer);
}

void cr_glGenTexturesEXT(GLsizei n, GLuint * textures)
{
        glim.GenTextures(n, textures);
}

void cr_glGetActiveAttribARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{
        glim.GetActiveAttrib(programObj, index, maxLength, length, size, type, name);
}

void cr_glGetActiveUniformARB(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei * length, GLint * size, GLenum * type, GLcharARB * name)
{
        glim.GetActiveUniform(programObj, index, maxLength, length, size, type, name);
}

GLint cr_glGetAttribLocationARB(GLhandleARB programObj, const GLcharARB * name)
{
        return glim.GetAttribLocation(programObj, name);
}

void cr_glGetBufferParameteriv(GLenum target, GLenum pname, GLint * params)
{
        glim.GetBufferParameterivARB(target, pname, params);
}

void cr_glGetBufferPointerv(GLenum target, GLenum pname, GLvoid ** params)
{
        glim.GetBufferPointervARB(target, pname, params);
}

void cr_glGetBufferSubData(GLenum target, GLintptrARB offset, GLsizeiptrARB size, void * data)
{
        glim.GetBufferSubDataARB(target, offset, size, data);
}

void cr_glGetCompressedTexImage(GLenum target, GLint level, GLvoid * img)
{
        glim.GetCompressedTexImageARB(target, level, img);
}

void cr_glGetShaderSourceARB(GLhandleARB obj, GLsizei maxLength, GLsizei * length, GLcharARB * source)
{
        glim.GetShaderSource(obj, maxLength, length, source);
}

GLint cr_glGetUniformLocationARB(GLhandleARB programObj, const GLcharARB * name)
{
        return glim.GetUniformLocation(programObj, name);
}

void cr_glGetUniformfvARB(GLhandleARB programObj, GLint location, GLfloat * params)
{
        glim.GetUniformfv(programObj, location, params);
}

void cr_glGetUniformivARB(GLhandleARB programObj, GLint location, GLint * params)
{
        glim.GetUniformiv(programObj, location, params);
}

void cr_glGetVertexAttribPointerv(GLuint index, GLenum pname, GLvoid ** pointer)
{
        glim.GetVertexAttribPointervARB(index, pname, pointer);
}

void cr_glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble * params)
{
        glim.GetVertexAttribdvARB(index, pname, params);
}

void cr_glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat * params)
{
        glim.GetVertexAttribfvARB(index, pname, params);
}

void cr_glGetVertexAttribiv(GLuint index, GLenum pname, GLint * params)
{
        glim.GetVertexAttribivARB(index, pname, params);
}

GLboolean cr_glIsBuffer(GLuint buffer)
{
        return glim.IsBufferARB(buffer);
}

GLboolean cr_glIsProgramNV(GLuint id)
{
        return glim.IsProgramARB(id);
}

GLboolean cr_glIsTextureEXT(GLuint texture)
{
        return glim.IsTexture(texture);
}

void cr_glLinkProgramARB(GLhandleARB programObj)
{
        glim.LinkProgram(programObj);
}

void cr_glLoadTransposeMatrixd(const GLdouble * m)
{
        glim.LoadTransposeMatrixdARB(m);
}

void cr_glLoadTransposeMatrixf(const GLfloat * m)
{
        glim.LoadTransposeMatrixfARB(m);
}

void * cr_glMapBuffer(GLenum target, GLenum access)
{
        return glim.MapBufferARB(target, access);
}

void cr_glMultTransposeMatrixd(const GLdouble * m)
{
        glim.MultTransposeMatrixdARB(m);
}

void cr_glMultTransposeMatrixf(const GLfloat * m)
{
        glim.MultTransposeMatrixfARB(m);
}

void cr_glMultiDrawArrays(GLenum mode, GLint * first, GLsizei * count, GLsizei primcount)
{
        glim.MultiDrawArraysEXT(mode, first, count, primcount);
}

void cr_glMultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const GLvoid ** indices, GLsizei primcount)
{
        glim.MultiDrawElementsEXT(mode, count, type, indices, primcount);
}

void cr_glMultiTexCoord1d(GLenum texture, GLdouble s)
{
        glim.MultiTexCoord1dARB(texture, s);
}

void cr_glMultiTexCoord1dv(GLenum texture, const GLdouble * v)
{
        glim.MultiTexCoord1dvARB(texture, v);
}

void cr_glMultiTexCoord1f(GLenum texture, GLfloat s)
{
        glim.MultiTexCoord1fARB(texture, s);
}

void cr_glMultiTexCoord1fv(GLenum texture, const GLfloat * v)
{
        glim.MultiTexCoord1fvARB(texture, v);
}

void cr_glMultiTexCoord1i(GLenum texture, GLint s)
{
        glim.MultiTexCoord1iARB(texture, s);
}

void cr_glMultiTexCoord1iv(GLenum texture, const GLint * v)
{
        glim.MultiTexCoord1ivARB(texture, v);
}

void cr_glMultiTexCoord1s(GLenum texture, GLshort s)
{
        glim.MultiTexCoord1sARB(texture, s);
}

void cr_glMultiTexCoord1sv(GLenum texture, const GLshort * v)
{
        glim.MultiTexCoord1svARB(texture, v);
}

void cr_glMultiTexCoord2d(GLenum texture, GLdouble s, GLdouble t)
{
        glim.MultiTexCoord2dARB(texture, s, t);
}

void cr_glMultiTexCoord2dv(GLenum texture, const GLdouble * v)
{
        glim.MultiTexCoord2dvARB(texture, v);
}

void cr_glMultiTexCoord2f(GLenum texture, GLfloat s, GLfloat t)
{
        glim.MultiTexCoord2fARB(texture, s, t);
}

void cr_glMultiTexCoord2fv(GLenum texture, const GLfloat * v)
{
        glim.MultiTexCoord2fvARB(texture, v);
}

void cr_glMultiTexCoord2i(GLenum texture, GLint s, GLint t)
{
        glim.MultiTexCoord2iARB(texture, s, t);
}

void cr_glMultiTexCoord2iv(GLenum texture, const GLint * v)
{
        glim.MultiTexCoord2ivARB(texture, v);
}

void cr_glMultiTexCoord2s(GLenum texture, GLshort s, GLshort t)
{
        glim.MultiTexCoord2sARB(texture, s, t);
}

void cr_glMultiTexCoord2sv(GLenum texture, const GLshort * v)
{
        glim.MultiTexCoord2svARB(texture, v);
}

void cr_glMultiTexCoord3d(GLenum texture, GLdouble s, GLdouble t, GLdouble r)
{
        glim.MultiTexCoord3dARB(texture, s, t, r);
}

void cr_glMultiTexCoord3dv(GLenum texture, const GLdouble * v)
{
        glim.MultiTexCoord3dvARB(texture, v);
}

void cr_glMultiTexCoord3f(GLenum texture, GLfloat s, GLfloat t, GLfloat r)
{
        glim.MultiTexCoord3fARB(texture, s, t, r);
}

void cr_glMultiTexCoord3fv(GLenum texture, const GLfloat * v)
{
        glim.MultiTexCoord3fvARB(texture, v);
}

void cr_glMultiTexCoord3i(GLenum texture, GLint s, GLint t, GLint r)
{
        glim.MultiTexCoord3iARB(texture, s, t, r);
}

void cr_glMultiTexCoord3iv(GLenum texture, const GLint * v)
{
        glim.MultiTexCoord3ivARB(texture, v);
}

void cr_glMultiTexCoord3s(GLenum texture, GLshort s, GLshort t, GLshort r)
{
        glim.MultiTexCoord3sARB(texture, s, t, r);
}

void cr_glMultiTexCoord3sv(GLenum texture, const GLshort * v)
{
        glim.MultiTexCoord3svARB(texture, v);
}

void cr_glMultiTexCoord4d(GLenum texture, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
        glim.MultiTexCoord4dARB(texture, s, t, r, q);
}

void cr_glMultiTexCoord4dv(GLenum texture, const GLdouble * v)
{
        glim.MultiTexCoord4dvARB(texture, v);
}

void cr_glMultiTexCoord4f(GLenum texture, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
        glim.MultiTexCoord4fARB(texture, s, t, r, q);
}

void cr_glMultiTexCoord4fv(GLenum texture, const GLfloat * v)
{
        glim.MultiTexCoord4fvARB(texture, v);
}

void cr_glMultiTexCoord4i(GLenum texture, GLint s, GLint t, GLint r, GLint q)
{
        glim.MultiTexCoord4iARB(texture, s, t, r, q);
}

void cr_glMultiTexCoord4iv(GLenum texture, const GLint * v)
{
        glim.MultiTexCoord4ivARB(texture, v);
}

void cr_glMultiTexCoord4s(GLenum texture, GLshort s, GLshort t, GLshort r, GLshort q)
{
        glim.MultiTexCoord4sARB(texture, s, t, r, q);
}

void cr_glMultiTexCoord4sv(GLenum texture, const GLshort * v)
{
        glim.MultiTexCoord4svARB(texture, v);
}

void cr_glPointParameterf(GLenum pname, GLfloat param)
{
        glim.PointParameterfARB(pname, param);
}

void cr_glPointParameterfEXT(GLenum pname, GLfloat param)
{
        glim.PointParameterfARB(pname, param);
}

void cr_glPointParameterfv(GLenum pname, const GLfloat * params)
{
        glim.PointParameterfvARB(pname, params);
}

void cr_glPointParameterfvEXT(GLenum pname, const GLfloat * params)
{
        glim.PointParameterfvARB(pname, params);
}

void cr_glPointParameteriNV(GLenum pname, GLint params)
{
        glim.PointParameteri(pname, params);
}

void cr_glPointParameterivNV(GLenum pname, const GLint * params)
{
        glim.PointParameteriv(pname, params);
}

void cr_glPrioritizeTexturesEXT(GLsizei n, const GLuint * textures, const GLclampf * priorities)
{
        glim.PrioritizeTextures(n, textures, priorities);
}

void cr_glSampleCoverage(GLclampf value, GLboolean invert)
{
        glim.SampleCoverageARB(value, invert);
}

void cr_glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
        glim.SecondaryColor3bEXT(red, green, blue);
}

void cr_glSecondaryColor3bv(const GLbyte * v)
{
        glim.SecondaryColor3bvEXT(v);
}

void cr_glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
        glim.SecondaryColor3dEXT(red, green, blue);
}

void cr_glSecondaryColor3dv(const GLdouble * v)
{
        glim.SecondaryColor3dvEXT(v);
}

void cr_glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
        glim.SecondaryColor3fEXT(red, green, blue);
}

void cr_glSecondaryColor3fv(const GLfloat * v)
{
        glim.SecondaryColor3fvEXT(v);
}

void cr_glSecondaryColor3i(GLint red, GLint green, GLint blue)
{
        glim.SecondaryColor3iEXT(red, green, blue);
}

void cr_glSecondaryColor3iv(const GLint * v)
{
        glim.SecondaryColor3ivEXT(v);
}

void cr_glSecondaryColor3s(GLshort red, GLshort green, GLshort blue)
{
        glim.SecondaryColor3sEXT(red, green, blue);
}

void cr_glSecondaryColor3sv(const GLshort * v)
{
        glim.SecondaryColor3svEXT(v);
}

void cr_glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
        glim.SecondaryColor3ubEXT(red, green, blue);
}

void cr_glSecondaryColor3ubv(const GLubyte * v)
{
        glim.SecondaryColor3ubvEXT(v);
}

void cr_glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue)
{
        glim.SecondaryColor3uiEXT(red, green, blue);
}

void cr_glSecondaryColor3uiv(const GLuint * v)
{
        glim.SecondaryColor3uivEXT(v);
}

void cr_glSecondaryColor3us(GLushort red, GLushort green, GLushort blue)
{
        glim.SecondaryColor3usEXT(red, green, blue);
}

void cr_glSecondaryColor3usv(const GLushort * v)
{
        glim.SecondaryColor3usvEXT(v);
}

void cr_glSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid * pointer)
{
        glim.SecondaryColorPointerEXT(size, type, stride, pointer);
}

void cr_glShaderSourceARB(GLhandleARB shaderObj, GLsizei count, const GLcharARB ** string, const GLint * length)
{
        glim.ShaderSource(shaderObj, count, string, length);
}

void cr_glTexSubImage1DEXT(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid * pixels)
{
        glim.TexSubImage1D(target, level, xoffset, width, format, type, pixels);
}

void cr_glTexSubImage2DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * pixels)
{
        glim.TexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void cr_glTexSubImage3DEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid * pixels)
{
        glim.TexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

void cr_glUniform1fARB(GLint location, GLfloat v0)
{
        glim.Uniform1f(location, v0);
}

void cr_glUniform1fvARB(GLint location, GLsizei count, const GLfloat * value)
{
        glim.Uniform1fv(location, count, value);
}

void cr_glUniform1iARB(GLint location, GLint v0)
{
        glim.Uniform1i(location, v0);
}

void cr_glUniform1ivARB(GLint location, GLsizei count, const GLint * value)
{
        glim.Uniform1iv(location, count, value);
}

void cr_glUniform2fARB(GLint location, GLfloat v0, GLfloat v1)
{
        glim.Uniform2f(location, v0, v1);
}

void cr_glUniform2fvARB(GLint location, GLsizei count, const GLfloat * value)
{
        glim.Uniform2fv(location, count, value);
}

void cr_glUniform2iARB(GLint location, GLint v0, GLint v1)
{
        glim.Uniform2i(location, v0, v1);
}

void cr_glUniform2ivARB(GLint location, GLsizei count, const GLint * value)
{
        glim.Uniform2iv(location, count, value);
}

void cr_glUniform3fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
        glim.Uniform3f(location, v0, v1, v2);
}

void cr_glUniform3fvARB(GLint location, GLsizei count, const GLfloat * value)
{
        glim.Uniform3fv(location, count, value);
}

void cr_glUniform3iARB(GLint location, GLint v0, GLint v1, GLint v2)
{
        glim.Uniform3i(location, v0, v1, v2);
}

void cr_glUniform3ivARB(GLint location, GLsizei count, const GLint * value)
{
        glim.Uniform3iv(location, count, value);
}

void cr_glUniform4fARB(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
        glim.Uniform4f(location, v0, v1, v2, v3);
}

void cr_glUniform4fvARB(GLint location, GLsizei count, const GLfloat * value)
{
        glim.Uniform4fv(location, count, value);
}

void cr_glUniform4iARB(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
        glim.Uniform4i(location, v0, v1, v2, v3);
}

void cr_glUniform4ivARB(GLint location, GLsizei count, const GLint * value)
{
        glim.Uniform4iv(location, count, value);
}

void cr_glUniformMatrix2fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
        glim.UniformMatrix2fv(location, count, transpose, value);
}

void cr_glUniformMatrix3fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
        glim.UniformMatrix3fv(location, count, transpose, value);
}

void cr_glUniformMatrix4fvARB(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
        glim.UniformMatrix4fv(location, count, transpose, value);
}

GLboolean cr_glUnmapBuffer(GLenum target)
{
        return glim.UnmapBufferARB(target);
}

void cr_glUseProgramObjectARB(GLhandleARB programObj)
{
        glim.UseProgram(programObj);
}

void cr_glValidateProgramARB(GLhandleARB programObj)
{
        glim.ValidateProgram(programObj);
}

void cr_glVertexAttrib1d(GLuint index, GLdouble x)
{
        glim.VertexAttrib1dARB(index, x);
}

void cr_glVertexAttrib1dNV(GLuint index, GLdouble x)
{
        glim.VertexAttrib1dARB(index, x);
}

void cr_glVertexAttrib1dv(GLuint index, const GLdouble * v)
{
        glim.VertexAttrib1dvARB(index, v);
}

void cr_glVertexAttrib1dvNV(GLuint index, const GLdouble * v)
{
        glim.VertexAttrib1dvARB(index, v);
}

void cr_glVertexAttrib1f(GLuint index, GLfloat x)
{
        glim.VertexAttrib1fARB(index, x);
}

void cr_glVertexAttrib1fNV(GLuint index, GLfloat x)
{
        glim.VertexAttrib1fARB(index, x);
}

void cr_glVertexAttrib1fv(GLuint index, const GLfloat * v)
{
        glim.VertexAttrib1fvARB(index, v);
}

void cr_glVertexAttrib1fvNV(GLuint index, const GLfloat * v)
{
        glim.VertexAttrib1fvARB(index, v);
}

void cr_glVertexAttrib1s(GLuint index, GLshort x)
{
        glim.VertexAttrib1sARB(index, x);
}

void cr_glVertexAttrib1sNV(GLuint index, GLshort x)
{
        glim.VertexAttrib1sARB(index, x);
}

void cr_glVertexAttrib1sv(GLuint index, const GLshort * v)
{
        glim.VertexAttrib1svARB(index, v);
}

void cr_glVertexAttrib1svNV(GLuint index, const GLshort * v)
{
        glim.VertexAttrib1svARB(index, v);
}

void cr_glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y)
{
        glim.VertexAttrib2dARB(index, x, y);
}

void cr_glVertexAttrib2dNV(GLuint index, GLdouble x, GLdouble y)
{
        glim.VertexAttrib2dARB(index, x, y);
}

void cr_glVertexAttrib2dv(GLuint index, const GLdouble * v)
{
        glim.VertexAttrib2dvARB(index, v);
}

void cr_glVertexAttrib2dvNV(GLuint index, const GLdouble * v)
{
        glim.VertexAttrib2dvARB(index, v);
}

void cr_glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
        glim.VertexAttrib2fARB(index, x, y);
}

void cr_glVertexAttrib2fNV(GLuint index, GLfloat x, GLfloat y)
{
        glim.VertexAttrib2fARB(index, x, y);
}

void cr_glVertexAttrib2fv(GLuint index, const GLfloat * v)
{
        glim.VertexAttrib2fvARB(index, v);
}

void cr_glVertexAttrib2fvNV(GLuint index, const GLfloat * v)
{
        glim.VertexAttrib2fvARB(index, v);
}

void cr_glVertexAttrib2s(GLuint index, GLshort x, GLshort y)
{
        glim.VertexAttrib2sARB(index, x, y);
}

void cr_glVertexAttrib2sNV(GLuint index, GLshort x, GLshort y)
{
        glim.VertexAttrib2sARB(index, x, y);
}

void cr_glVertexAttrib2sv(GLuint index, const GLshort * v)
{
        glim.VertexAttrib2svARB(index, v);
}

void cr_glVertexAttrib2svNV(GLuint index, const GLshort * v)
{
        glim.VertexAttrib2svARB(index, v);
}

void cr_glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
        glim.VertexAttrib3dARB(index, x, y, z);
}

void cr_glVertexAttrib3dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z)
{
        glim.VertexAttrib3dARB(index, x, y, z);
}

void cr_glVertexAttrib3dv(GLuint index, const GLdouble * v)
{
        glim.VertexAttrib3dvARB(index, v);
}

void cr_glVertexAttrib3dvNV(GLuint index, const GLdouble * v)
{
        glim.VertexAttrib3dvARB(index, v);
}

void cr_glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
        glim.VertexAttrib3fARB(index, x, y, z);
}

void cr_glVertexAttrib3fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
        glim.VertexAttrib3fARB(index, x, y, z);
}

void cr_glVertexAttrib3fv(GLuint index, const GLfloat * v)
{
        glim.VertexAttrib3fvARB(index, v);
}

void cr_glVertexAttrib3fvNV(GLuint index, const GLfloat * v)
{
        glim.VertexAttrib3fvARB(index, v);
}

void cr_glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z)
{
        glim.VertexAttrib3sARB(index, x, y, z);
}

void cr_glVertexAttrib3sNV(GLuint index, GLshort x, GLshort y, GLshort z)
{
        glim.VertexAttrib3sARB(index, x, y, z);
}

void cr_glVertexAttrib3sv(GLuint index, const GLshort * v)
{
        glim.VertexAttrib3svARB(index, v);
}

void cr_glVertexAttrib3svNV(GLuint index, const GLshort * v)
{
        glim.VertexAttrib3svARB(index, v);
}

void cr_glVertexAttrib4Nbv(GLuint index, const GLbyte * v)
{
        glim.VertexAttrib4NbvARB(index, v);
}

void cr_glVertexAttrib4Niv(GLuint index, const GLint * v)
{
        glim.VertexAttrib4NivARB(index, v);
}

void cr_glVertexAttrib4Nsv(GLuint index, const GLshort * v)
{
        glim.VertexAttrib4NsvARB(index, v);
}

void cr_glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
        glim.VertexAttrib4NubARB(index, x, y, z, w);
}

void cr_glVertexAttrib4Nubv(GLuint index, const GLubyte * v)
{
        glim.VertexAttrib4NubvARB(index, v);
}

void cr_glVertexAttrib4Nuiv(GLuint index, const GLuint * v)
{
        glim.VertexAttrib4NuivARB(index, v);
}

void cr_glVertexAttrib4Nusv(GLuint index, const GLushort * v)
{
        glim.VertexAttrib4NusvARB(index, v);
}

void cr_glVertexAttrib4bv(GLuint index, const GLbyte * v)
{
        glim.VertexAttrib4bvARB(index, v);
}

void cr_glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
        glim.VertexAttrib4dARB(index, x, y, z, w);
}

void cr_glVertexAttrib4dNV(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
        glim.VertexAttrib4dARB(index, x, y, z, w);
}

void cr_glVertexAttrib4dv(GLuint index, const GLdouble * v)
{
        glim.VertexAttrib4dvARB(index, v);
}

void cr_glVertexAttrib4dvNV(GLuint index, const GLdouble * v)
{
        glim.VertexAttrib4dvARB(index, v);
}

void cr_glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
        glim.VertexAttrib4fARB(index, x, y, z, w);
}

void cr_glVertexAttrib4fNV(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
        glim.VertexAttrib4fARB(index, x, y, z, w);
}

void cr_glVertexAttrib4fv(GLuint index, const GLfloat * v)
{
        glim.VertexAttrib4fvARB(index, v);
}

void cr_glVertexAttrib4fvNV(GLuint index, const GLfloat * v)
{
        glim.VertexAttrib4fvARB(index, v);
}

void cr_glVertexAttrib4iv(GLuint index, const GLint * v)
{
        glim.VertexAttrib4ivARB(index, v);
}

void cr_glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
        glim.VertexAttrib4sARB(index, x, y, z, w);
}

void cr_glVertexAttrib4sNV(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w)
{
        glim.VertexAttrib4sARB(index, x, y, z, w);
}

void cr_glVertexAttrib4sv(GLuint index, const GLshort * v)
{
        glim.VertexAttrib4svARB(index, v);
}

void cr_glVertexAttrib4svNV(GLuint index, const GLshort * v)
{
        glim.VertexAttrib4svARB(index, v);
}

void cr_glVertexAttrib4ubNV(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w)
{
        glim.VertexAttrib4NubARB(index, x, y, z, w);
}

void cr_glVertexAttrib4ubv(GLuint index, const GLubyte * v)
{
        glim.VertexAttrib4ubvARB(index, v);
}

void cr_glVertexAttrib4ubvNV(GLuint index, const GLubyte * v)
{
        glim.VertexAttrib4NubvARB(index, v);
}

void cr_glVertexAttrib4uiv(GLuint index, const GLuint * v)
{
        glim.VertexAttrib4uivARB(index, v);
}

void cr_glVertexAttrib4usv(GLuint index, const GLushort * v)
{
        glim.VertexAttrib4usvARB(index, v);
}

void cr_glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid * pointer)
{
        glim.VertexAttribPointerARB(index, size, type, normalized, stride, pointer);
}

void cr_glWindowPos2d(GLdouble x, GLdouble y)
{
        glim.WindowPos2dARB(x, y);
}

void cr_glWindowPos2dv(const GLdouble * v)
{
        glim.WindowPos2dvARB(v);
}

void cr_glWindowPos2f(GLfloat x, GLfloat y)
{
        glim.WindowPos2fARB(x, y);
}

void cr_glWindowPos2fv(const GLfloat * v)
{
        glim.WindowPos2fvARB(v);
}

void cr_glWindowPos2i(GLint x, GLint y)
{
        glim.WindowPos2iARB(x, y);
}

void cr_glWindowPos2iv(const GLint * v)
{
        glim.WindowPos2ivARB(v);
}

void cr_glWindowPos2s(GLshort x, GLshort y)
{
        glim.WindowPos2sARB(x, y);
}

void cr_glWindowPos2sv(const GLshort * v)
{
        glim.WindowPos2svARB(v);
}

void cr_glWindowPos3d(GLdouble x, GLdouble y, GLdouble z)
{
        glim.WindowPos3dARB(x, y, z);
}

void cr_glWindowPos3dv(const GLdouble * v)
{
        glim.WindowPos3dvARB(v);
}

void cr_glWindowPos3f(GLfloat x, GLfloat y, GLfloat z)
{
        glim.WindowPos3fARB(x, y, z);
}

void cr_glWindowPos3fv(const GLfloat * v)
{
        glim.WindowPos3fvARB(v);
}

void cr_glWindowPos3i(GLint x, GLint y, GLint z)
{
        glim.WindowPos3iARB(x, y, z);
}

void cr_glWindowPos3iv(const GLint * v)
{
        glim.WindowPos3ivARB(v);
}

void cr_glWindowPos3s(GLshort x, GLshort y, GLshort z)
{
        glim.WindowPos3sARB(x, y, z);
}

void cr_glWindowPos3sv(const GLshort * v)
{
        glim.WindowPos3svARB(v);
}

/*
 * No-op stubs
 */
void cr_glColorSubTable(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid * data)
{
}

void cr_glColorTable(GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const GLvoid * table)
{
}

void cr_glColorTableParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
}

void cr_glColorTableParameteriv(GLenum target, GLenum pname, const GLint * params)
{
}

void cr_glConvolutionFilter1D(GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const GLvoid * image)
{
}

void cr_glConvolutionFilter2D(GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * image)
{
}

void cr_glConvolutionParameterf(GLenum target, GLenum pname, GLfloat params)
{
}

void cr_glConvolutionParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
}

void cr_glConvolutionParameteri(GLenum target, GLenum pname, GLint params)
{
}

void cr_glConvolutionParameteriv(GLenum target, GLenum pname, const GLint * params)
{
}

void cr_glCopyColorSubTable(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width)
{
}

void cr_glCopyColorTable(GLenum target, GLenum internalFormat, GLint x, GLint y, GLsizei width)
{
}

void cr_glCopyConvolutionFilter1D(GLenum target, GLenum internalFormat, GLint x, GLint y, GLsizei width)
{
}

void cr_glCopyConvolutionFilter2D(GLenum target, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height)
{
}

void cr_glGetColorTable(GLenum target, GLenum format, GLenum type, GLvoid * table)
{
}

void cr_glGetColorTableParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
}

void cr_glGetColorTableParameteriv(GLenum target, GLenum pname, GLint * params)
{
}

void cr_glGetConvolutionFilter(GLenum target, GLenum format, GLenum type, GLvoid * image)
{
}

void cr_glGetConvolutionParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
}

void cr_glGetConvolutionParameteriv(GLenum target, GLenum pname, GLint * params)
{
}

void cr_glGetHistogram(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid * values)
{
}

void cr_glGetHistogramParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
}

void cr_glGetHistogramParameteriv(GLenum target, GLenum pname, GLint * params)
{
}

void cr_glGetMinmax(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid * values)
{
}

void cr_glGetMinmaxParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
}

void cr_glGetMinmaxParameteriv(GLenum target, GLenum pname, GLint * params)
{
}

void cr_glGetSeparableFilter(GLenum target, GLenum format, GLenum type, GLvoid * row, GLvoid * column, GLvoid * span)
{
}

void cr_glHistogram(GLenum target, GLsizei width, GLenum internalFormat, GLboolean sink)
{
}

void cr_glMinmax(GLenum target, GLenum internalFormat, GLboolean sink)
{
}

void cr_glResetHistogram(GLenum target)
{
}

void cr_glResetMinmax(GLenum target)
{
}

void cr_glSampleMaskEXT(GLclampf value, GLboolean invert)
{
}

void cr_glSamplePatternEXT(GLenum pattern)
{
}

void cr_glSeparableFilter2D(GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid * row, const GLvoid * column)
{
}

