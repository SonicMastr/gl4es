#include "../gles.h"

EXPORT //GLint APIENTRY_GL4ES gl4es_glRenderMode(GLenum mode);
EXPORT //void APIENTRY_GL4ES gl4es_glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha);
EXPORT void APIENTRY_GL4ES gl4es_glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
EXPORT //void APIENTRY_GL4ES gl4es_glBlendFuncSeparate(GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
EXPORT void APIENTRY_GL4ES gl4es_glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
EXPORT //void APIENTRY_GL4ES gl4es_glColorMaterial(GLenum face, GLenum mode);
EXPORT void APIENTRY_GL4ES gl4es_glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);
EXPORT void APIENTRY_GL4ES gl4es_glDrawBuffer(GLenum mode);
EXPORT void APIENTRY_GL4ES gl4es_glEdgeFlag(GLboolean flag);
EXPORT //void APIENTRY_GL4ES gl4es_glFogCoordd(GLdouble coord);
EXPORT //void APIENTRY_GL4ES gl4es_glFogCoorddv(const GLdouble *coord);
EXPORT //void APIENTRY_GL4ES gl4es_glFogCoordf(GLfloat coord);
EXPORT //void APIENTRY_GL4ES gl4es_glFogCoordfv(const GLfloat *coord);
EXPORT //void APIENTRY_GL4ES gl4es_glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLvoid * img);
EXPORT //void APIENTRY_GL4ES gl4es_glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat *params);
EXPORT //void APIENTRY_GL4ES gl4es_glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint *params);
EXPORT void APIENTRY_GL4ES gl4es_glIndexf(GLfloat c);
EXPORT void APIENTRY_GL4ES gl4es_glLightModeli(GLenum pname, GLint param);
EXPORT void APIENTRY_GL4ES gl4es_glPolygonStipple(const GLubyte *mask);
EXPORT void APIENTRY_GL4ES gl4es_glReadBuffer(GLenum mode);
EXPORT void APIENTRY_GL4ES gl4es_glSecondaryColor3f(GLfloat r, GLfloat g, GLfloat b);
EXPORT void APIENTRY_GL4ES gl4es_glColorTable (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table);
EXPORT //void APIENTRY_GL4ES gl4es_glIndexPointer(GLenum  type,  GLsizei  stride,  const GLvoid *  pointer);

EXPORT void APIENTRY_GL4ES gl4es_glAccum(GLenum op, GLfloat value);
EXPORT void APIENTRY_GL4ES gl4es_glPrioritizeTextures(GLsizei n, const GLuint *textures, const GLclampf *priorities);
EXPORT void APIENTRY_GL4ES gl4es_glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat *values);
EXPORT void APIENTRY_GL4ES gl4es_glPixelMapuiv(GLenum map,GLsizei mapsize, const GLuint *values);
EXPORT void APIENTRY_GL4ES gl4es_glPixelMapusv(GLenum map,GLsizei mapsize, const GLushort *values);
EXPORT void APIENTRY_GL4ES gl4es_glPassThrough(GLfloat token);
EXPORT void APIENTRY_GL4ES gl4es_glIndexMask(GLuint mask);
EXPORT void APIENTRY_GL4ES gl4es_glGetPixelMapfv(GLenum map, GLfloat *data);
EXPORT void APIENTRY_GL4ES gl4es_glGetPixelMapuiv(GLenum map, GLuint *data);
EXPORT void APIENTRY_GL4ES gl4es_glGetPixelMapusv(GLenum map, GLushort *data);
EXPORT void APIENTRY_GL4ES gl4es_glClearIndex(GLfloat c);
EXPORT void APIENTRY_GL4ES gl4es_glGetPolygonStipple(GLubyte *pattern);
EXPORT void APIENTRY_GL4ES gl4es_glFeedbackBuffer(GLsizei size, GLenum type, GLfloat *buffer);
EXPORT void APIENTRY_GL4ES gl4es_glEdgeFlagv(GLboolean *flag);
