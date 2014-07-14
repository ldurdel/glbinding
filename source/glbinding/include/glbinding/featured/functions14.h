#pragma once

#include <glbinding/nogl.h>
#include <glbinding/featured/gl14.h>

#include <glbinding/FunctionObjects.h>


namespace gl14
{

using namespace gl;


inline void glAccum(GLenum op, GLfloat value)
{
    return FunctionObjects::Accum(op, value);
}

inline void glActiveTexture(GLenum texture)
{
    return FunctionObjects::ActiveTexture(texture);
}

inline void glAlphaFunc(GLenum func, GLfloat ref)
{
    return FunctionObjects::AlphaFunc(func, ref);
}

inline GLboolean glAreTexturesResident(GLsizei n, const GLuint * textures, GLboolean * residences)
{
    return FunctionObjects::AreTexturesResident(n, textures, residences);
}

inline void glArrayElement(GLint i)
{
    return FunctionObjects::ArrayElement(i);
}

inline void glBegin(GLenum mode)
{
    return FunctionObjects::Begin(mode);
}

inline void glBindTexture(GLenum target, GLuint texture)
{
    return FunctionObjects::BindTexture(target, texture);
}

inline void glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap)
{
    return FunctionObjects::Bitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

inline void glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return FunctionObjects::BlendColor(red, green, blue, alpha);
}

inline void glBlendEquation(GLenum mode)
{
    return FunctionObjects::BlendEquation(mode);
}

inline void glBlendFunc(GLenum sfactor, GLenum dfactor)
{
    return FunctionObjects::BlendFunc(sfactor, dfactor);
}

inline void glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
    return FunctionObjects::BlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

inline void glCallList(GLuint list)
{
    return FunctionObjects::CallList(list);
}

inline void glCallLists(GLsizei n, GLenum type, const void * lists)
{
    return FunctionObjects::CallLists(n, type, lists);
}

inline void glClear(GLbitfield mask)
{
    return FunctionObjects::Clear(mask);
}

inline void glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return FunctionObjects::ClearAccum(red, green, blue, alpha);
}

inline void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return FunctionObjects::ClearColor(red, green, blue, alpha);
}

inline void glClearDepth(GLdouble depth)
{
    return FunctionObjects::ClearDepth(depth);
}

inline void glClearIndex(GLfloat c)
{
    return FunctionObjects::ClearIndex(c);
}

inline void glClearStencil(GLint s)
{
    return FunctionObjects::ClearStencil(s);
}

inline void glClientActiveTexture(GLenum texture)
{
    return FunctionObjects::ClientActiveTexture(texture);
}

inline void glClipPlane(GLenum plane, const GLdouble * equation)
{
    return FunctionObjects::ClipPlane(plane, equation);
}

inline void glColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
    return FunctionObjects::Color3b(red, green, blue);
}

inline void glColor3bv(const GLbyte * v)
{
    return FunctionObjects::Color3bv(v);
}

inline void glColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
    return FunctionObjects::Color3d(red, green, blue);
}

inline void glColor3dv(const GLdouble * v)
{
    return FunctionObjects::Color3dv(v);
}

inline void glColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
    return FunctionObjects::Color3f(red, green, blue);
}

inline void glColor3fv(const GLfloat * v)
{
    return FunctionObjects::Color3fv(v);
}

inline void glColor3i(GLint red, GLint green, GLint blue)
{
    return FunctionObjects::Color3i(red, green, blue);
}

inline void glColor3iv(const GLint * v)
{
    return FunctionObjects::Color3iv(v);
}

inline void glColor3s(GLshort red, GLshort green, GLshort blue)
{
    return FunctionObjects::Color3s(red, green, blue);
}

inline void glColor3sv(const GLshort * v)
{
    return FunctionObjects::Color3sv(v);
}

inline void glColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
    return FunctionObjects::Color3ub(red, green, blue);
}

inline void glColor3ubv(const GLubyte * v)
{
    return FunctionObjects::Color3ubv(v);
}

inline void glColor3ui(GLuint red, GLuint green, GLuint blue)
{
    return FunctionObjects::Color3ui(red, green, blue);
}

inline void glColor3uiv(const GLuint * v)
{
    return FunctionObjects::Color3uiv(v);
}

inline void glColor3us(GLushort red, GLushort green, GLushort blue)
{
    return FunctionObjects::Color3us(red, green, blue);
}

inline void glColor3usv(const GLushort * v)
{
    return FunctionObjects::Color3usv(v);
}

inline void glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
{
    return FunctionObjects::Color4b(red, green, blue, alpha);
}

inline void glColor4bv(const GLbyte * v)
{
    return FunctionObjects::Color4bv(v);
}

inline void glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
{
    return FunctionObjects::Color4d(red, green, blue, alpha);
}

inline void glColor4dv(const GLdouble * v)
{
    return FunctionObjects::Color4dv(v);
}

inline void glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return FunctionObjects::Color4f(red, green, blue, alpha);
}

inline void glColor4fv(const GLfloat * v)
{
    return FunctionObjects::Color4fv(v);
}

inline void glColor4i(GLint red, GLint green, GLint blue, GLint alpha)
{
    return FunctionObjects::Color4i(red, green, blue, alpha);
}

inline void glColor4iv(const GLint * v)
{
    return FunctionObjects::Color4iv(v);
}

inline void glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha)
{
    return FunctionObjects::Color4s(red, green, blue, alpha);
}

inline void glColor4sv(const GLshort * v)
{
    return FunctionObjects::Color4sv(v);
}

inline void glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
    return FunctionObjects::Color4ub(red, green, blue, alpha);
}

inline void glColor4ubv(const GLubyte * v)
{
    return FunctionObjects::Color4ubv(v);
}

inline void glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
    return FunctionObjects::Color4ui(red, green, blue, alpha);
}

inline void glColor4uiv(const GLuint * v)
{
    return FunctionObjects::Color4uiv(v);
}

inline void glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha)
{
    return FunctionObjects::Color4us(red, green, blue, alpha);
}

inline void glColor4usv(const GLushort * v)
{
    return FunctionObjects::Color4usv(v);
}

inline void glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    return FunctionObjects::ColorMask(red, green, blue, alpha);
}

inline void glColorMaterial(GLenum face, GLenum mode)
{
    return FunctionObjects::ColorMaterial(face, mode);
}

inline void glColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return FunctionObjects::ColorPointer(size, type, stride, pointer);
}

inline void glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data)
{
    return FunctionObjects::CompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
}

inline void glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data)
{
    return FunctionObjects::CompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

inline void glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data)
{
    return FunctionObjects::CompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

inline void glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data)
{
    return FunctionObjects::CompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
}

inline void glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data)
{
    return FunctionObjects::CompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

inline void glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data)
{
    return FunctionObjects::CompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

inline void glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
{
    return FunctionObjects::CopyPixels(x, y, width, height, type);
}

inline void glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{
    return FunctionObjects::CopyTexImage1D(target, level, internalformat, x, y, width, border);
}

inline void glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    return FunctionObjects::CopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

inline void glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    return FunctionObjects::CopyTexSubImage1D(target, level, xoffset, x, y, width);
}

inline void glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return FunctionObjects::CopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

inline void glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    return FunctionObjects::CopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

inline void glCullFace(GLenum mode)
{
    return FunctionObjects::CullFace(mode);
}

inline void glDeleteLists(GLuint list, GLsizei range)
{
    return FunctionObjects::DeleteLists(list, range);
}

inline void glDeleteTextures(GLsizei n, const GLuint * textures)
{
    return FunctionObjects::DeleteTextures(n, textures);
}

inline void glDepthFunc(GLenum func)
{
    return FunctionObjects::DepthFunc(func);
}

inline void glDepthMask(GLboolean flag)
{
    return FunctionObjects::DepthMask(flag);
}

inline void glDepthRange(GLdouble near_, GLdouble far_)
{
    return FunctionObjects::DepthRange(near_, far_);
}

inline void glDisable(GLenum cap)
{
    return FunctionObjects::Disable(cap);
}

inline void glDisableClientState(GLenum array)
{
    return FunctionObjects::DisableClientState(array);
}

inline void glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
    return FunctionObjects::DrawArrays(mode, first, count);
}

inline void glDrawBuffer(GLenum mode)
{
    return FunctionObjects::DrawBuffer(mode);
}

inline void glDrawElements(GLenum mode, GLsizei count, GLenum type, const void * indices)
{
    return FunctionObjects::DrawElements(mode, count, type, indices);
}

inline void glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return FunctionObjects::DrawPixels(width, height, format, type, pixels);
}

inline void glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices)
{
    return FunctionObjects::DrawRangeElements(mode, start, end, count, type, indices);
}

inline void glEdgeFlag(GLboolean flag)
{
    return FunctionObjects::EdgeFlag(flag);
}

inline void glEdgeFlagPointer(GLsizei stride, const void * pointer)
{
    return FunctionObjects::EdgeFlagPointer(stride, pointer);
}

inline void glEdgeFlagv(const GLboolean * flag)
{
    return FunctionObjects::EdgeFlagv(flag);
}

inline void glEnable(GLenum cap)
{
    return FunctionObjects::Enable(cap);
}

inline void glEnableClientState(GLenum array)
{
    return FunctionObjects::EnableClientState(array);
}

inline void glEnd()
{
    return FunctionObjects::End();
}

inline void glEndList()
{
    return FunctionObjects::EndList();
}

inline void glEvalCoord1d(GLdouble u)
{
    return FunctionObjects::EvalCoord1d(u);
}

inline void glEvalCoord1dv(const GLdouble * u)
{
    return FunctionObjects::EvalCoord1dv(u);
}

inline void glEvalCoord1f(GLfloat u)
{
    return FunctionObjects::EvalCoord1f(u);
}

inline void glEvalCoord1fv(const GLfloat * u)
{
    return FunctionObjects::EvalCoord1fv(u);
}

inline void glEvalCoord2d(GLdouble u, GLdouble v)
{
    return FunctionObjects::EvalCoord2d(u, v);
}

inline void glEvalCoord2dv(const GLdouble * u)
{
    return FunctionObjects::EvalCoord2dv(u);
}

inline void glEvalCoord2f(GLfloat u, GLfloat v)
{
    return FunctionObjects::EvalCoord2f(u, v);
}

inline void glEvalCoord2fv(const GLfloat * u)
{
    return FunctionObjects::EvalCoord2fv(u);
}

inline void glEvalMesh1(GLenum mode, GLint i1, GLint i2)
{
    return FunctionObjects::EvalMesh1(mode, i1, i2);
}

inline void glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
{
    return FunctionObjects::EvalMesh2(mode, i1, i2, j1, j2);
}

inline void glEvalPoint1(GLint i)
{
    return FunctionObjects::EvalPoint1(i);
}

inline void glEvalPoint2(GLint i, GLint j)
{
    return FunctionObjects::EvalPoint2(i, j);
}

inline void glFeedbackBuffer(GLsizei size, GLenum type, GLfloat * buffer)
{
    return FunctionObjects::FeedbackBuffer(size, type, buffer);
}

inline void glFinish()
{
    return FunctionObjects::Finish();
}

inline void glFlush()
{
    return FunctionObjects::Flush();
}

inline void glFogCoordPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return FunctionObjects::FogCoordPointer(type, stride, pointer);
}

inline void glFogCoordd(GLdouble coord)
{
    return FunctionObjects::FogCoordd(coord);
}

inline void glFogCoorddv(const GLdouble * coord)
{
    return FunctionObjects::FogCoorddv(coord);
}

inline void glFogCoordf(GLfloat coord)
{
    return FunctionObjects::FogCoordf(coord);
}

inline void glFogCoordfv(const GLfloat * coord)
{
    return FunctionObjects::FogCoordfv(coord);
}

inline void glFogf(GLenum pname, GLfloat param)
{
    return FunctionObjects::Fogf(pname, param);
}

inline void glFogfv(GLenum pname, const GLfloat * params)
{
    return FunctionObjects::Fogfv(pname, params);
}

inline void glFogi(GLenum pname, GLint param)
{
    return FunctionObjects::Fogi(pname, param);
}

inline void glFogiv(GLenum pname, const GLint * params)
{
    return FunctionObjects::Fogiv(pname, params);
}

inline void glFrontFace(GLenum mode)
{
    return FunctionObjects::FrontFace(mode);
}

inline void glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return FunctionObjects::Frustum(left, right, bottom, top, zNear, zFar);
}

inline GLuint glGenLists(GLsizei range)
{
    return FunctionObjects::GenLists(range);
}

inline void glGenTextures(GLsizei n, GLuint * textures)
{
    return FunctionObjects::GenTextures(n, textures);
}

inline void glGetBooleanv(GLenum pname, GLboolean * data)
{
    return FunctionObjects::GetBooleanv(pname, data);
}

inline void glGetClipPlane(GLenum plane, GLdouble * equation)
{
    return FunctionObjects::GetClipPlane(plane, equation);
}

inline void glGetCompressedTexImage(GLenum target, GLint level, void * img)
{
    return FunctionObjects::GetCompressedTexImage(target, level, img);
}

inline void glGetDoublev(GLenum pname, GLdouble * data)
{
    return FunctionObjects::GetDoublev(pname, data);
}

inline GLenum glGetError()
{
    return static_cast<gl14::GLenum>(FunctionObjects::GetError());
}

inline void glGetFloatv(GLenum pname, GLfloat * data)
{
    return FunctionObjects::GetFloatv(pname, data);
}

inline void glGetIntegerv(GLenum pname, GLint * data)
{
    return FunctionObjects::GetIntegerv(pname, data);
}

inline void glGetLightfv(GLenum light, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetLightfv(light, pname, params);
}

inline void glGetLightiv(GLenum light, GLenum pname, GLint * params)
{
    return FunctionObjects::GetLightiv(light, pname, params);
}

inline void glGetMapdv(GLenum target, GLenum query, GLdouble * v)
{
    return FunctionObjects::GetMapdv(target, query, v);
}

inline void glGetMapfv(GLenum target, GLenum query, GLfloat * v)
{
    return FunctionObjects::GetMapfv(target, query, v);
}

inline void glGetMapiv(GLenum target, GLenum query, GLint * v)
{
    return FunctionObjects::GetMapiv(target, query, v);
}

inline void glGetMaterialfv(GLenum face, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetMaterialfv(face, pname, params);
}

inline void glGetMaterialiv(GLenum face, GLenum pname, GLint * params)
{
    return FunctionObjects::GetMaterialiv(face, pname, params);
}

inline void glGetPixelMapfv(GLenum map, GLfloat * values)
{
    return FunctionObjects::GetPixelMapfv(map, values);
}

inline void glGetPixelMapuiv(GLenum map, GLuint * values)
{
    return FunctionObjects::GetPixelMapuiv(map, values);
}

inline void glGetPixelMapusv(GLenum map, GLushort * values)
{
    return FunctionObjects::GetPixelMapusv(map, values);
}

inline void glGetPointerv(GLenum pname, void ** params)
{
    return FunctionObjects::GetPointerv(pname, params);
}

inline void glGetPolygonStipple(GLubyte * mask)
{
    return FunctionObjects::GetPolygonStipple(mask);
}

inline const GLubyte * glGetString(GLenum name)
{
    return FunctionObjects::GetString(name);
}

inline void glGetTexEnvfv(GLenum target, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetTexEnvfv(target, pname, params);
}

inline void glGetTexEnviv(GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetTexEnviv(target, pname, params);
}

inline void glGetTexGendv(GLenum coord, GLenum pname, GLdouble * params)
{
    return FunctionObjects::GetTexGendv(coord, pname, params);
}

inline void glGetTexGenfv(GLenum coord, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetTexGenfv(coord, pname, params);
}

inline void glGetTexGeniv(GLenum coord, GLenum pname, GLint * params)
{
    return FunctionObjects::GetTexGeniv(coord, pname, params);
}

inline void glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
{
    return FunctionObjects::GetTexImage(target, level, format, type, pixels);
}

inline void glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetTexLevelParameterfv(target, level, pname, params);
}

inline void glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint * params)
{
    return FunctionObjects::GetTexLevelParameteriv(target, level, pname, params);
}

inline void glGetTexParameterfv(GLenum target, GLenum pname, GLfloat * params)
{
    return FunctionObjects::GetTexParameterfv(target, pname, params);
}

inline void glGetTexParameteriv(GLenum target, GLenum pname, GLint * params)
{
    return FunctionObjects::GetTexParameteriv(target, pname, params);
}

inline void glHint(GLenum target, GLenum mode)
{
    return FunctionObjects::Hint(target, mode);
}

inline void glIndexMask(GLuint mask)
{
    return FunctionObjects::IndexMask(mask);
}

inline void glIndexPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return FunctionObjects::IndexPointer(type, stride, pointer);
}

inline void glIndexd(GLdouble c)
{
    return FunctionObjects::Indexd(c);
}

inline void glIndexdv(const GLdouble * c)
{
    return FunctionObjects::Indexdv(c);
}

inline void glIndexf(GLfloat c)
{
    return FunctionObjects::Indexf(c);
}

inline void glIndexfv(const GLfloat * c)
{
    return FunctionObjects::Indexfv(c);
}

inline void glIndexi(GLint c)
{
    return FunctionObjects::Indexi(c);
}

inline void glIndexiv(const GLint * c)
{
    return FunctionObjects::Indexiv(c);
}

inline void glIndexs(GLshort c)
{
    return FunctionObjects::Indexs(c);
}

inline void glIndexsv(const GLshort * c)
{
    return FunctionObjects::Indexsv(c);
}

inline void glIndexub(GLubyte c)
{
    return FunctionObjects::Indexub(c);
}

inline void glIndexubv(const GLubyte * c)
{
    return FunctionObjects::Indexubv(c);
}

inline void glInitNames()
{
    return FunctionObjects::InitNames();
}

inline void glInterleavedArrays(GLenum format, GLsizei stride, const void * pointer)
{
    return FunctionObjects::InterleavedArrays(format, stride, pointer);
}

inline GLboolean glIsEnabled(GLenum cap)
{
    return FunctionObjects::IsEnabled(cap);
}

inline GLboolean glIsList(GLuint list)
{
    return FunctionObjects::IsList(list);
}

inline GLboolean glIsTexture(GLuint texture)
{
    return FunctionObjects::IsTexture(texture);
}

inline void glLightModelf(GLenum pname, GLfloat param)
{
    return FunctionObjects::LightModelf(pname, param);
}

inline void glLightModelfv(GLenum pname, const GLfloat * params)
{
    return FunctionObjects::LightModelfv(pname, params);
}

inline void glLightModeli(GLenum pname, GLint param)
{
    return FunctionObjects::LightModeli(pname, param);
}

inline void glLightModeliv(GLenum pname, const GLint * params)
{
    return FunctionObjects::LightModeliv(pname, params);
}

inline void glLightf(GLenum light, GLenum pname, GLfloat param)
{
    return FunctionObjects::Lightf(light, pname, param);
}

inline void glLightfv(GLenum light, GLenum pname, const GLfloat * params)
{
    return FunctionObjects::Lightfv(light, pname, params);
}

inline void glLighti(GLenum light, GLenum pname, GLint param)
{
    return FunctionObjects::Lighti(light, pname, param);
}

inline void glLightiv(GLenum light, GLenum pname, const GLint * params)
{
    return FunctionObjects::Lightiv(light, pname, params);
}

inline void glLineStipple(GLint factor, GLushort pattern)
{
    return FunctionObjects::LineStipple(factor, pattern);
}

inline void glLineWidth(GLfloat width)
{
    return FunctionObjects::LineWidth(width);
}

inline void glListBase(GLuint base)
{
    return FunctionObjects::ListBase(base);
}

inline void glLoadIdentity()
{
    return FunctionObjects::LoadIdentity();
}

inline void glLoadMatrixd(const GLdouble * m)
{
    return FunctionObjects::LoadMatrixd(m);
}

inline void glLoadMatrixf(const GLfloat * m)
{
    return FunctionObjects::LoadMatrixf(m);
}

inline void glLoadName(GLuint name)
{
    return FunctionObjects::LoadName(name);
}

inline void glLoadTransposeMatrixd(const GLdouble * m)
{
    return FunctionObjects::LoadTransposeMatrixd(m);
}

inline void glLoadTransposeMatrixf(const GLfloat * m)
{
    return FunctionObjects::LoadTransposeMatrixf(m);
}

inline void glLogicOp(GLenum opcode)
{
    return FunctionObjects::LogicOp(opcode);
}

inline void glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
{
    return FunctionObjects::Map1d(target, u1, u2, stride, order, points);
}

inline void glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
{
    return FunctionObjects::Map1f(target, u1, u2, stride, order, points);
}

inline void glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
{
    return FunctionObjects::Map2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
{
    return FunctionObjects::Map2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

inline void glMapGrid1d(GLint un, GLdouble u1, GLdouble u2)
{
    return FunctionObjects::MapGrid1d(un, u1, u2);
}

inline void glMapGrid1f(GLint un, GLfloat u1, GLfloat u2)
{
    return FunctionObjects::MapGrid1f(un, u1, u2);
}

inline void glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
{
    return FunctionObjects::MapGrid2d(un, u1, u2, vn, v1, v2);
}

inline void glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
{
    return FunctionObjects::MapGrid2f(un, u1, u2, vn, v1, v2);
}

inline void glMaterialf(GLenum face, GLenum pname, GLfloat param)
{
    return FunctionObjects::Materialf(face, pname, param);
}

inline void glMaterialfv(GLenum face, GLenum pname, const GLfloat * params)
{
    return FunctionObjects::Materialfv(face, pname, params);
}

inline void glMateriali(GLenum face, GLenum pname, GLint param)
{
    return FunctionObjects::Materiali(face, pname, param);
}

inline void glMaterialiv(GLenum face, GLenum pname, const GLint * params)
{
    return FunctionObjects::Materialiv(face, pname, params);
}

inline void glMatrixMode(GLenum mode)
{
    return FunctionObjects::MatrixMode(mode);
}

inline void glMultMatrixd(const GLdouble * m)
{
    return FunctionObjects::MultMatrixd(m);
}

inline void glMultMatrixf(const GLfloat * m)
{
    return FunctionObjects::MultMatrixf(m);
}

inline void glMultTransposeMatrixd(const GLdouble * m)
{
    return FunctionObjects::MultTransposeMatrixd(m);
}

inline void glMultTransposeMatrixf(const GLfloat * m)
{
    return FunctionObjects::MultTransposeMatrixf(m);
}

inline void glMultiDrawArrays(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount)
{
    return FunctionObjects::MultiDrawArrays(mode, first, count, drawcount);
}

inline void glMultiDrawElements(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount)
{
    return FunctionObjects::MultiDrawElements(mode, count, type, indices, drawcount);
}

inline void glMultiTexCoord1d(GLenum target, GLdouble s)
{
    return FunctionObjects::MultiTexCoord1d(target, s);
}

inline void glMultiTexCoord1dv(GLenum target, const GLdouble * v)
{
    return FunctionObjects::MultiTexCoord1dv(target, v);
}

inline void glMultiTexCoord1f(GLenum target, GLfloat s)
{
    return FunctionObjects::MultiTexCoord1f(target, s);
}

inline void glMultiTexCoord1fv(GLenum target, const GLfloat * v)
{
    return FunctionObjects::MultiTexCoord1fv(target, v);
}

inline void glMultiTexCoord1i(GLenum target, GLint s)
{
    return FunctionObjects::MultiTexCoord1i(target, s);
}

inline void glMultiTexCoord1iv(GLenum target, const GLint * v)
{
    return FunctionObjects::MultiTexCoord1iv(target, v);
}

inline void glMultiTexCoord1s(GLenum target, GLshort s)
{
    return FunctionObjects::MultiTexCoord1s(target, s);
}

inline void glMultiTexCoord1sv(GLenum target, const GLshort * v)
{
    return FunctionObjects::MultiTexCoord1sv(target, v);
}

inline void glMultiTexCoord2d(GLenum target, GLdouble s, GLdouble t)
{
    return FunctionObjects::MultiTexCoord2d(target, s, t);
}

inline void glMultiTexCoord2dv(GLenum target, const GLdouble * v)
{
    return FunctionObjects::MultiTexCoord2dv(target, v);
}

inline void glMultiTexCoord2f(GLenum target, GLfloat s, GLfloat t)
{
    return FunctionObjects::MultiTexCoord2f(target, s, t);
}

inline void glMultiTexCoord2fv(GLenum target, const GLfloat * v)
{
    return FunctionObjects::MultiTexCoord2fv(target, v);
}

inline void glMultiTexCoord2i(GLenum target, GLint s, GLint t)
{
    return FunctionObjects::MultiTexCoord2i(target, s, t);
}

inline void glMultiTexCoord2iv(GLenum target, const GLint * v)
{
    return FunctionObjects::MultiTexCoord2iv(target, v);
}

inline void glMultiTexCoord2s(GLenum target, GLshort s, GLshort t)
{
    return FunctionObjects::MultiTexCoord2s(target, s, t);
}

inline void glMultiTexCoord2sv(GLenum target, const GLshort * v)
{
    return FunctionObjects::MultiTexCoord2sv(target, v);
}

inline void glMultiTexCoord3d(GLenum target, GLdouble s, GLdouble t, GLdouble r)
{
    return FunctionObjects::MultiTexCoord3d(target, s, t, r);
}

inline void glMultiTexCoord3dv(GLenum target, const GLdouble * v)
{
    return FunctionObjects::MultiTexCoord3dv(target, v);
}

inline void glMultiTexCoord3f(GLenum target, GLfloat s, GLfloat t, GLfloat r)
{
    return FunctionObjects::MultiTexCoord3f(target, s, t, r);
}

inline void glMultiTexCoord3fv(GLenum target, const GLfloat * v)
{
    return FunctionObjects::MultiTexCoord3fv(target, v);
}

inline void glMultiTexCoord3i(GLenum target, GLint s, GLint t, GLint r)
{
    return FunctionObjects::MultiTexCoord3i(target, s, t, r);
}

inline void glMultiTexCoord3iv(GLenum target, const GLint * v)
{
    return FunctionObjects::MultiTexCoord3iv(target, v);
}

inline void glMultiTexCoord3s(GLenum target, GLshort s, GLshort t, GLshort r)
{
    return FunctionObjects::MultiTexCoord3s(target, s, t, r);
}

inline void glMultiTexCoord3sv(GLenum target, const GLshort * v)
{
    return FunctionObjects::MultiTexCoord3sv(target, v);
}

inline void glMultiTexCoord4d(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return FunctionObjects::MultiTexCoord4d(target, s, t, r, q);
}

inline void glMultiTexCoord4dv(GLenum target, const GLdouble * v)
{
    return FunctionObjects::MultiTexCoord4dv(target, v);
}

inline void glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return FunctionObjects::MultiTexCoord4f(target, s, t, r, q);
}

inline void glMultiTexCoord4fv(GLenum target, const GLfloat * v)
{
    return FunctionObjects::MultiTexCoord4fv(target, v);
}

inline void glMultiTexCoord4i(GLenum target, GLint s, GLint t, GLint r, GLint q)
{
    return FunctionObjects::MultiTexCoord4i(target, s, t, r, q);
}

inline void glMultiTexCoord4iv(GLenum target, const GLint * v)
{
    return FunctionObjects::MultiTexCoord4iv(target, v);
}

inline void glMultiTexCoord4s(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q)
{
    return FunctionObjects::MultiTexCoord4s(target, s, t, r, q);
}

inline void glMultiTexCoord4sv(GLenum target, const GLshort * v)
{
    return FunctionObjects::MultiTexCoord4sv(target, v);
}

inline void glNewList(GLuint list, GLenum mode)
{
    return FunctionObjects::NewList(list, mode);
}

inline void glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz)
{
    return FunctionObjects::Normal3b(nx, ny, nz);
}

inline void glNormal3bv(const GLbyte * v)
{
    return FunctionObjects::Normal3bv(v);
}

inline void glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz)
{
    return FunctionObjects::Normal3d(nx, ny, nz);
}

inline void glNormal3dv(const GLdouble * v)
{
    return FunctionObjects::Normal3dv(v);
}

inline void glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
    return FunctionObjects::Normal3f(nx, ny, nz);
}

inline void glNormal3fv(const GLfloat * v)
{
    return FunctionObjects::Normal3fv(v);
}

inline void glNormal3i(GLint nx, GLint ny, GLint nz)
{
    return FunctionObjects::Normal3i(nx, ny, nz);
}

inline void glNormal3iv(const GLint * v)
{
    return FunctionObjects::Normal3iv(v);
}

inline void glNormal3s(GLshort nx, GLshort ny, GLshort nz)
{
    return FunctionObjects::Normal3s(nx, ny, nz);
}

inline void glNormal3sv(const GLshort * v)
{
    return FunctionObjects::Normal3sv(v);
}

inline void glNormalPointer(GLenum type, GLsizei stride, const void * pointer)
{
    return FunctionObjects::NormalPointer(type, stride, pointer);
}

inline void glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    return FunctionObjects::Ortho(left, right, bottom, top, zNear, zFar);
}

inline void glPassThrough(GLfloat token)
{
    return FunctionObjects::PassThrough(token);
}

inline void glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat * values)
{
    return FunctionObjects::PixelMapfv(map, mapsize, values);
}

inline void glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint * values)
{
    return FunctionObjects::PixelMapuiv(map, mapsize, values);
}

inline void glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort * values)
{
    return FunctionObjects::PixelMapusv(map, mapsize, values);
}

inline void glPixelStoref(GLenum pname, GLfloat param)
{
    return FunctionObjects::PixelStoref(pname, param);
}

inline void glPixelStorei(GLenum pname, GLint param)
{
    return FunctionObjects::PixelStorei(pname, param);
}

inline void glPixelTransferf(GLenum pname, GLfloat param)
{
    return FunctionObjects::PixelTransferf(pname, param);
}

inline void glPixelTransferi(GLenum pname, GLint param)
{
    return FunctionObjects::PixelTransferi(pname, param);
}

inline void glPixelZoom(GLfloat xfactor, GLfloat yfactor)
{
    return FunctionObjects::PixelZoom(xfactor, yfactor);
}

inline void glPointParameterf(GLenum pname, GLfloat param)
{
    return FunctionObjects::PointParameterf(pname, param);
}

inline void glPointParameterfv(GLenum pname, const GLfloat * params)
{
    return FunctionObjects::PointParameterfv(pname, params);
}

inline void glPointParameteri(GLenum pname, GLint param)
{
    return FunctionObjects::PointParameteri(pname, param);
}

inline void glPointParameteriv(GLenum pname, const GLint * params)
{
    return FunctionObjects::PointParameteriv(pname, params);
}

inline void glPointSize(GLfloat size)
{
    return FunctionObjects::PointSize(size);
}

inline void glPolygonMode(GLenum face, GLenum mode)
{
    return FunctionObjects::PolygonMode(face, mode);
}

inline void glPolygonOffset(GLfloat factor, GLfloat units)
{
    return FunctionObjects::PolygonOffset(factor, units);
}

inline void glPolygonStipple(const GLubyte * mask)
{
    return FunctionObjects::PolygonStipple(mask);
}

inline void glPopAttrib()
{
    return FunctionObjects::PopAttrib();
}

inline void glPopClientAttrib()
{
    return FunctionObjects::PopClientAttrib();
}

inline void glPopMatrix()
{
    return FunctionObjects::PopMatrix();
}

inline void glPopName()
{
    return FunctionObjects::PopName();
}

inline void glPrioritizeTextures(GLsizei n, const GLuint * textures, const GLfloat * priorities)
{
    return FunctionObjects::PrioritizeTextures(n, textures, priorities);
}

inline void glPushAttrib(GLbitfield mask)
{
    return FunctionObjects::PushAttrib(mask);
}

inline void glPushClientAttrib(GLbitfield mask)
{
    return FunctionObjects::PushClientAttrib(mask);
}

inline void glPushMatrix()
{
    return FunctionObjects::PushMatrix();
}

inline void glPushName(GLuint name)
{
    return FunctionObjects::PushName(name);
}

inline void glRasterPos2d(GLdouble x, GLdouble y)
{
    return FunctionObjects::RasterPos2d(x, y);
}

inline void glRasterPos2dv(const GLdouble * v)
{
    return FunctionObjects::RasterPos2dv(v);
}

inline void glRasterPos2f(GLfloat x, GLfloat y)
{
    return FunctionObjects::RasterPos2f(x, y);
}

inline void glRasterPos2fv(const GLfloat * v)
{
    return FunctionObjects::RasterPos2fv(v);
}

inline void glRasterPos2i(GLint x, GLint y)
{
    return FunctionObjects::RasterPos2i(x, y);
}

inline void glRasterPos2iv(const GLint * v)
{
    return FunctionObjects::RasterPos2iv(v);
}

inline void glRasterPos2s(GLshort x, GLshort y)
{
    return FunctionObjects::RasterPos2s(x, y);
}

inline void glRasterPos2sv(const GLshort * v)
{
    return FunctionObjects::RasterPos2sv(v);
}

inline void glRasterPos3d(GLdouble x, GLdouble y, GLdouble z)
{
    return FunctionObjects::RasterPos3d(x, y, z);
}

inline void glRasterPos3dv(const GLdouble * v)
{
    return FunctionObjects::RasterPos3dv(v);
}

inline void glRasterPos3f(GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::RasterPos3f(x, y, z);
}

inline void glRasterPos3fv(const GLfloat * v)
{
    return FunctionObjects::RasterPos3fv(v);
}

inline void glRasterPos3i(GLint x, GLint y, GLint z)
{
    return FunctionObjects::RasterPos3i(x, y, z);
}

inline void glRasterPos3iv(const GLint * v)
{
    return FunctionObjects::RasterPos3iv(v);
}

inline void glRasterPos3s(GLshort x, GLshort y, GLshort z)
{
    return FunctionObjects::RasterPos3s(x, y, z);
}

inline void glRasterPos3sv(const GLshort * v)
{
    return FunctionObjects::RasterPos3sv(v);
}

inline void glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return FunctionObjects::RasterPos4d(x, y, z, w);
}

inline void glRasterPos4dv(const GLdouble * v)
{
    return FunctionObjects::RasterPos4dv(v);
}

inline void glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return FunctionObjects::RasterPos4f(x, y, z, w);
}

inline void glRasterPos4fv(const GLfloat * v)
{
    return FunctionObjects::RasterPos4fv(v);
}

inline void glRasterPos4i(GLint x, GLint y, GLint z, GLint w)
{
    return FunctionObjects::RasterPos4i(x, y, z, w);
}

inline void glRasterPos4iv(const GLint * v)
{
    return FunctionObjects::RasterPos4iv(v);
}

inline void glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return FunctionObjects::RasterPos4s(x, y, z, w);
}

inline void glRasterPos4sv(const GLshort * v)
{
    return FunctionObjects::RasterPos4sv(v);
}

inline void glReadBuffer(GLenum mode)
{
    return FunctionObjects::ReadBuffer(mode);
}

inline void glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels)
{
    return FunctionObjects::ReadPixels(x, y, width, height, format, type, pixels);
}

inline void glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
{
    return FunctionObjects::Rectd(x1, y1, x2, y2);
}

inline void glRectdv(const GLdouble * v1, const GLdouble * v2)
{
    return FunctionObjects::Rectdv(v1, v2);
}

inline void glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{
    return FunctionObjects::Rectf(x1, y1, x2, y2);
}

inline void glRectfv(const GLfloat * v1, const GLfloat * v2)
{
    return FunctionObjects::Rectfv(v1, v2);
}

inline void glRecti(GLint x1, GLint y1, GLint x2, GLint y2)
{
    return FunctionObjects::Recti(x1, y1, x2, y2);
}

inline void glRectiv(const GLint * v1, const GLint * v2)
{
    return FunctionObjects::Rectiv(v1, v2);
}

inline void glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2)
{
    return FunctionObjects::Rects(x1, y1, x2, y2);
}

inline void glRectsv(const GLshort * v1, const GLshort * v2)
{
    return FunctionObjects::Rectsv(v1, v2);
}

inline GLint glRenderMode(GLenum mode)
{
    return FunctionObjects::RenderMode(mode);
}

inline void glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
    return FunctionObjects::Rotated(angle, x, y, z);
}

inline void glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::Rotatef(angle, x, y, z);
}

inline void glSampleCoverage(GLfloat value, GLboolean invert)
{
    return FunctionObjects::SampleCoverage(value, invert);
}

inline void glScaled(GLdouble x, GLdouble y, GLdouble z)
{
    return FunctionObjects::Scaled(x, y, z);
}

inline void glScalef(GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::Scalef(x, y, z);
}

inline void glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return FunctionObjects::Scissor(x, y, width, height);
}

inline void glSecondaryColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
    return FunctionObjects::SecondaryColor3b(red, green, blue);
}

inline void glSecondaryColor3bv(const GLbyte * v)
{
    return FunctionObjects::SecondaryColor3bv(v);
}

inline void glSecondaryColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
    return FunctionObjects::SecondaryColor3d(red, green, blue);
}

inline void glSecondaryColor3dv(const GLdouble * v)
{
    return FunctionObjects::SecondaryColor3dv(v);
}

inline void glSecondaryColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
    return FunctionObjects::SecondaryColor3f(red, green, blue);
}

inline void glSecondaryColor3fv(const GLfloat * v)
{
    return FunctionObjects::SecondaryColor3fv(v);
}

inline void glSecondaryColor3i(GLint red, GLint green, GLint blue)
{
    return FunctionObjects::SecondaryColor3i(red, green, blue);
}

inline void glSecondaryColor3iv(const GLint * v)
{
    return FunctionObjects::SecondaryColor3iv(v);
}

inline void glSecondaryColor3s(GLshort red, GLshort green, GLshort blue)
{
    return FunctionObjects::SecondaryColor3s(red, green, blue);
}

inline void glSecondaryColor3sv(const GLshort * v)
{
    return FunctionObjects::SecondaryColor3sv(v);
}

inline void glSecondaryColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
    return FunctionObjects::SecondaryColor3ub(red, green, blue);
}

inline void glSecondaryColor3ubv(const GLubyte * v)
{
    return FunctionObjects::SecondaryColor3ubv(v);
}

inline void glSecondaryColor3ui(GLuint red, GLuint green, GLuint blue)
{
    return FunctionObjects::SecondaryColor3ui(red, green, blue);
}

inline void glSecondaryColor3uiv(const GLuint * v)
{
    return FunctionObjects::SecondaryColor3uiv(v);
}

inline void glSecondaryColor3us(GLushort red, GLushort green, GLushort blue)
{
    return FunctionObjects::SecondaryColor3us(red, green, blue);
}

inline void glSecondaryColor3usv(const GLushort * v)
{
    return FunctionObjects::SecondaryColor3usv(v);
}

inline void glSecondaryColorPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return FunctionObjects::SecondaryColorPointer(size, type, stride, pointer);
}

inline void glSelectBuffer(GLsizei size, GLuint * buffer)
{
    return FunctionObjects::SelectBuffer(size, buffer);
}

inline void glShadeModel(GLenum mode)
{
    return FunctionObjects::ShadeModel(mode);
}

inline void glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
    return FunctionObjects::StencilFunc(func, ref, mask);
}

inline void glStencilMask(GLuint mask)
{
    return FunctionObjects::StencilMask(mask);
}

inline void glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
    return FunctionObjects::StencilOp(fail, zfail, zpass);
}

inline void glTexCoord1d(GLdouble s)
{
    return FunctionObjects::TexCoord1d(s);
}

inline void glTexCoord1dv(const GLdouble * v)
{
    return FunctionObjects::TexCoord1dv(v);
}

inline void glTexCoord1f(GLfloat s)
{
    return FunctionObjects::TexCoord1f(s);
}

inline void glTexCoord1fv(const GLfloat * v)
{
    return FunctionObjects::TexCoord1fv(v);
}

inline void glTexCoord1i(GLint s)
{
    return FunctionObjects::TexCoord1i(s);
}

inline void glTexCoord1iv(const GLint * v)
{
    return FunctionObjects::TexCoord1iv(v);
}

inline void glTexCoord1s(GLshort s)
{
    return FunctionObjects::TexCoord1s(s);
}

inline void glTexCoord1sv(const GLshort * v)
{
    return FunctionObjects::TexCoord1sv(v);
}

inline void glTexCoord2d(GLdouble s, GLdouble t)
{
    return FunctionObjects::TexCoord2d(s, t);
}

inline void glTexCoord2dv(const GLdouble * v)
{
    return FunctionObjects::TexCoord2dv(v);
}

inline void glTexCoord2f(GLfloat s, GLfloat t)
{
    return FunctionObjects::TexCoord2f(s, t);
}

inline void glTexCoord2fv(const GLfloat * v)
{
    return FunctionObjects::TexCoord2fv(v);
}

inline void glTexCoord2i(GLint s, GLint t)
{
    return FunctionObjects::TexCoord2i(s, t);
}

inline void glTexCoord2iv(const GLint * v)
{
    return FunctionObjects::TexCoord2iv(v);
}

inline void glTexCoord2s(GLshort s, GLshort t)
{
    return FunctionObjects::TexCoord2s(s, t);
}

inline void glTexCoord2sv(const GLshort * v)
{
    return FunctionObjects::TexCoord2sv(v);
}

inline void glTexCoord3d(GLdouble s, GLdouble t, GLdouble r)
{
    return FunctionObjects::TexCoord3d(s, t, r);
}

inline void glTexCoord3dv(const GLdouble * v)
{
    return FunctionObjects::TexCoord3dv(v);
}

inline void glTexCoord3f(GLfloat s, GLfloat t, GLfloat r)
{
    return FunctionObjects::TexCoord3f(s, t, r);
}

inline void glTexCoord3fv(const GLfloat * v)
{
    return FunctionObjects::TexCoord3fv(v);
}

inline void glTexCoord3i(GLint s, GLint t, GLint r)
{
    return FunctionObjects::TexCoord3i(s, t, r);
}

inline void glTexCoord3iv(const GLint * v)
{
    return FunctionObjects::TexCoord3iv(v);
}

inline void glTexCoord3s(GLshort s, GLshort t, GLshort r)
{
    return FunctionObjects::TexCoord3s(s, t, r);
}

inline void glTexCoord3sv(const GLshort * v)
{
    return FunctionObjects::TexCoord3sv(v);
}

inline void glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    return FunctionObjects::TexCoord4d(s, t, r, q);
}

inline void glTexCoord4dv(const GLdouble * v)
{
    return FunctionObjects::TexCoord4dv(v);
}

inline void glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    return FunctionObjects::TexCoord4f(s, t, r, q);
}

inline void glTexCoord4fv(const GLfloat * v)
{
    return FunctionObjects::TexCoord4fv(v);
}

inline void glTexCoord4i(GLint s, GLint t, GLint r, GLint q)
{
    return FunctionObjects::TexCoord4i(s, t, r, q);
}

inline void glTexCoord4iv(const GLint * v)
{
    return FunctionObjects::TexCoord4iv(v);
}

inline void glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q)
{
    return FunctionObjects::TexCoord4s(s, t, r, q);
}

inline void glTexCoord4sv(const GLshort * v)
{
    return FunctionObjects::TexCoord4sv(v);
}

inline void glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return FunctionObjects::TexCoordPointer(size, type, stride, pointer);
}

inline void glTexEnvf(GLenum target, GLenum pname, GLfloat param)
{
    return FunctionObjects::TexEnvf(target, pname, param);
}

inline void glTexEnvfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return FunctionObjects::TexEnvfv(target, pname, params);
}

inline void glTexEnvi(GLenum target, GLenum pname, GLint param)
{
    return FunctionObjects::TexEnvi(target, pname, param);
}

inline void glTexEnviv(GLenum target, GLenum pname, const GLint * params)
{
    return FunctionObjects::TexEnviv(target, pname, params);
}

inline void glTexGend(GLenum coord, GLenum pname, GLdouble param)
{
    return FunctionObjects::TexGend(coord, pname, param);
}

inline void glTexGendv(GLenum coord, GLenum pname, const GLdouble * params)
{
    return FunctionObjects::TexGendv(coord, pname, params);
}

inline void glTexGenf(GLenum coord, GLenum pname, GLfloat param)
{
    return FunctionObjects::TexGenf(coord, pname, param);
}

inline void glTexGenfv(GLenum coord, GLenum pname, const GLfloat * params)
{
    return FunctionObjects::TexGenfv(coord, pname, params);
}

inline void glTexGeni(GLenum coord, GLenum pname, GLint param)
{
    return FunctionObjects::TexGeni(coord, pname, param);
}

inline void glTexGeniv(GLenum coord, GLenum pname, const GLint * params)
{
    return FunctionObjects::TexGeniv(coord, pname, params);
}

inline void glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return FunctionObjects::TexImage1D(target, level, internalformat, width, border, format, type, pixels);
}

inline void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return FunctionObjects::TexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

inline void glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return FunctionObjects::TexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

inline void glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
    return FunctionObjects::TexParameterf(target, pname, param);
}

inline void glTexParameterfv(GLenum target, GLenum pname, const GLfloat * params)
{
    return FunctionObjects::TexParameterfv(target, pname, params);
}

inline void glTexParameteri(GLenum target, GLenum pname, GLint param)
{
    return FunctionObjects::TexParameteri(target, pname, param);
}

inline void glTexParameteriv(GLenum target, GLenum pname, const GLint * params)
{
    return FunctionObjects::TexParameteriv(target, pname, params);
}

inline void glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
{
    return FunctionObjects::TexSubImage1D(target, level, xoffset, width, format, type, pixels);
}

inline void glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
{
    return FunctionObjects::TexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

inline void glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels)
{
    return FunctionObjects::TexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}

inline void glTranslated(GLdouble x, GLdouble y, GLdouble z)
{
    return FunctionObjects::Translated(x, y, z);
}

inline void glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::Translatef(x, y, z);
}

inline void glVertex2d(GLdouble x, GLdouble y)
{
    return FunctionObjects::Vertex2d(x, y);
}

inline void glVertex2dv(const GLdouble * v)
{
    return FunctionObjects::Vertex2dv(v);
}

inline void glVertex2f(GLfloat x, GLfloat y)
{
    return FunctionObjects::Vertex2f(x, y);
}

inline void glVertex2fv(const GLfloat * v)
{
    return FunctionObjects::Vertex2fv(v);
}

inline void glVertex2i(GLint x, GLint y)
{
    return FunctionObjects::Vertex2i(x, y);
}

inline void glVertex2iv(const GLint * v)
{
    return FunctionObjects::Vertex2iv(v);
}

inline void glVertex2s(GLshort x, GLshort y)
{
    return FunctionObjects::Vertex2s(x, y);
}

inline void glVertex2sv(const GLshort * v)
{
    return FunctionObjects::Vertex2sv(v);
}

inline void glVertex3d(GLdouble x, GLdouble y, GLdouble z)
{
    return FunctionObjects::Vertex3d(x, y, z);
}

inline void glVertex3dv(const GLdouble * v)
{
    return FunctionObjects::Vertex3dv(v);
}

inline void glVertex3f(GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::Vertex3f(x, y, z);
}

inline void glVertex3fv(const GLfloat * v)
{
    return FunctionObjects::Vertex3fv(v);
}

inline void glVertex3i(GLint x, GLint y, GLint z)
{
    return FunctionObjects::Vertex3i(x, y, z);
}

inline void glVertex3iv(const GLint * v)
{
    return FunctionObjects::Vertex3iv(v);
}

inline void glVertex3s(GLshort x, GLshort y, GLshort z)
{
    return FunctionObjects::Vertex3s(x, y, z);
}

inline void glVertex3sv(const GLshort * v)
{
    return FunctionObjects::Vertex3sv(v);
}

inline void glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    return FunctionObjects::Vertex4d(x, y, z, w);
}

inline void glVertex4dv(const GLdouble * v)
{
    return FunctionObjects::Vertex4dv(v);
}

inline void glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    return FunctionObjects::Vertex4f(x, y, z, w);
}

inline void glVertex4fv(const GLfloat * v)
{
    return FunctionObjects::Vertex4fv(v);
}

inline void glVertex4i(GLint x, GLint y, GLint z, GLint w)
{
    return FunctionObjects::Vertex4i(x, y, z, w);
}

inline void glVertex4iv(const GLint * v)
{
    return FunctionObjects::Vertex4iv(v);
}

inline void glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
    return FunctionObjects::Vertex4s(x, y, z, w);
}

inline void glVertex4sv(const GLshort * v)
{
    return FunctionObjects::Vertex4sv(v);
}

inline void glVertexPointer(GLint size, GLenum type, GLsizei stride, const void * pointer)
{
    return FunctionObjects::VertexPointer(size, type, stride, pointer);
}

inline void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return FunctionObjects::Viewport(x, y, width, height);
}

inline void glWindowPos2d(GLdouble x, GLdouble y)
{
    return FunctionObjects::WindowPos2d(x, y);
}

inline void glWindowPos2dv(const GLdouble * v)
{
    return FunctionObjects::WindowPos2dv(v);
}

inline void glWindowPos2f(GLfloat x, GLfloat y)
{
    return FunctionObjects::WindowPos2f(x, y);
}

inline void glWindowPos2fv(const GLfloat * v)
{
    return FunctionObjects::WindowPos2fv(v);
}

inline void glWindowPos2i(GLint x, GLint y)
{
    return FunctionObjects::WindowPos2i(x, y);
}

inline void glWindowPos2iv(const GLint * v)
{
    return FunctionObjects::WindowPos2iv(v);
}

inline void glWindowPos2s(GLshort x, GLshort y)
{
    return FunctionObjects::WindowPos2s(x, y);
}

inline void glWindowPos2sv(const GLshort * v)
{
    return FunctionObjects::WindowPos2sv(v);
}

inline void glWindowPos3d(GLdouble x, GLdouble y, GLdouble z)
{
    return FunctionObjects::WindowPos3d(x, y, z);
}

inline void glWindowPos3dv(const GLdouble * v)
{
    return FunctionObjects::WindowPos3dv(v);
}

inline void glWindowPos3f(GLfloat x, GLfloat y, GLfloat z)
{
    return FunctionObjects::WindowPos3f(x, y, z);
}

inline void glWindowPos3fv(const GLfloat * v)
{
    return FunctionObjects::WindowPos3fv(v);
}

inline void glWindowPos3i(GLint x, GLint y, GLint z)
{
    return FunctionObjects::WindowPos3i(x, y, z);
}

inline void glWindowPos3iv(const GLint * v)
{
    return FunctionObjects::WindowPos3iv(v);
}

inline void glWindowPos3s(GLshort x, GLshort y, GLshort z)
{
    return FunctionObjects::WindowPos3s(x, y, z);
}

inline void glWindowPos3sv(const GLshort * v)
{
    return FunctionObjects::WindowPos3sv(v);
}


} // namespace gl14
