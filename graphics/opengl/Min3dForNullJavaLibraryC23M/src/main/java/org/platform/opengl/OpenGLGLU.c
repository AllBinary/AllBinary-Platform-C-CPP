// Generated Code Do Not Modify
// package org.platform.opengl

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/khronos/opengles/GL10.h"

typedef struct OpenGLGLU OpenGLGLU;
struct OpenGLGLU {
    char unused;
};

static OpenGLGLU* OpenGLGLU_instance;

OpenGLGLU* OpenGLGLU_new(void);
OpenGLGLU* OpenGLGLU_getInstance(void);
void OpenGLGLU_gluLookAt(OpenGLGLU* this, GL10* gl, float eyeX, float eyeY, float eyeZ, float centerX, float centerY, float centerZ, float upX, float upY, float upZ);
int32_t OpenGLGLU_gluProject(OpenGLGLU* this, GL10* gl, float objX, float objY, float objZ, float* model, int32_t modelOffset, float* project, int32_t projectOffset, int32_t* view, int32_t viewOffset, float* win, int32_t winOffset);
int32_t OpenGLGLU_gluUnProject(OpenGLGLU* this, GL10* gl, float winX, float winY, float winZ, float* model, int32_t modelOffset, float* project, int32_t projectOffset, int32_t* view, int32_t viewOffset, float* obj, int32_t objOffset);
void OpenGLGLU_glFrustumf(OpenGLGLU* this, GL10* gl, float lt, float rt, float btm, float top, float zNear, float zFar);

// Static fields with runtime initializers: call this once at startup
void OpenGLGLU_staticInit(void) {
    OpenGLGLU_instance = OpenGLGLU_new();
}

void OpenGLGLU_init(OpenGLGLU* this) {
}

OpenGLGLU* OpenGLGLU_new(void) {
    OpenGLGLU* this = calloc(1, sizeof(OpenGLGLU));
    OpenGLGLU_init(this);
    return this;
}


OpenGLGLU* OpenGLGLU_getInstance(void) {
        return OpenGLGLU_instance;
}


void OpenGLGLU_gluLookAt(OpenGLGLU* this, GL10* gl, float eyeX, float eyeY, float eyeZ, float centerX, float centerY, float centerZ, float upX, float upY, float upZ) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t OpenGLGLU_gluProject(OpenGLGLU* this, GL10* gl, float objX, float objY, float objZ, float* model, int32_t modelOffset, float* project, int32_t projectOffset, int32_t* view, int32_t viewOffset, float* win, int32_t winOffset) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t OpenGLGLU_gluUnProject(OpenGLGLU* this, GL10* gl, float winX, float winY, float winZ, float* model, int32_t modelOffset, float* project, int32_t projectOffset, int32_t* view, int32_t viewOffset, float* obj, int32_t objOffset) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void OpenGLGLU_glFrustumf(OpenGLGLU* this, GL10* gl, float lt, float rt, float btm, float top, float zNear, float zFar) {
        java_throw(java_exception_new("RuntimeException", ""));
}

