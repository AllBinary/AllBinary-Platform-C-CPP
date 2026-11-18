#ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLSURFACECHANGEDINTERFACE_H
#define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLSURFACECHANGEDINTERFACE_H
// Generated Code Do Not Modify
// package org.allbinary.image.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GL GL;

typedef struct OpenGLSurfaceChangedInterface OpenGLSurfaceChangedInterface;
struct OpenGLSurfaceChangedInterface {
    void (*set)(void* this, GL* gl);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OpenGLSurfaceChangedInterface_staticInit(void);

static inline void OpenGLSurfaceChangedInterface_set(void* this, GL* gl) {
    ((__typeof__(((OpenGLSurfaceChangedInterface*) nullptr)->set)) java_method_of(this, "set"))(this, gl);
}


#endif // ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLSURFACECHANGEDINTERFACE_H
