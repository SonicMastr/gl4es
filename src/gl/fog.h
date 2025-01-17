#ifndef _GL4ES_FOG_H_
#define _GL4ES_FOG_H_

#include "gles.h"

typedef struct {
    GLenum          mode;
    GLfloat         density;
    GLenum          distance;
    GLfloat         start;
    GLfloat         end;
    GLfloat         index;
    GLfloat         color[4];
    GLenum          coord_src;
} fog_t;

EXPORT void APIENTRY_GL4ES gl4es_glFogfv(GLenum pname, const GLfloat* params);
EXPORT void APIENTRY_GL4ES gl4es_glFogf(GLenum pname, GLfloat param);

EXPORT void APIENTRY_GL4ES gl4es_glFogCoordf(GLfloat coord);
EXPORT void APIENTRY_GL4ES gl4es_glFogCoordfv(const GLfloat *coord);

#endif // _GL4ES_FOG_H_
