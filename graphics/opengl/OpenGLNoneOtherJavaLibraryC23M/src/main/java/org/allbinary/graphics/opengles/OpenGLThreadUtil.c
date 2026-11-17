// Generated Code Do Not Modify
// package org.allbinary.graphics.opengles

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct OpenGLThreadUtil OpenGLThreadUtil;
struct OpenGLThreadUtil {
    char unused;
};

static OpenGLThreadUtil* OpenGLThreadUtil_instance;

OpenGLThreadUtil* OpenGLThreadUtil_new(void);
OpenGLThreadUtil* OpenGLThreadUtil_getInstance(void);
void OpenGLThreadUtil_set(OpenGLThreadUtil* this, Any* glSurfaceView);
void OpenGLThreadUtil_onPause(OpenGLThreadUtil* this);
void OpenGLThreadUtil_onResume(OpenGLThreadUtil* this);

// Static fields with runtime initializers: call this once at startup
void OpenGLThreadUtil_staticInit(void) {
    OpenGLThreadUtil_instance = OpenGLThreadUtil_new();
}

void OpenGLThreadUtil_init(OpenGLThreadUtil* this) {
}

OpenGLThreadUtil* OpenGLThreadUtil_new(void) {
    OpenGLThreadUtil* this = calloc(1, sizeof(OpenGLThreadUtil));
    OpenGLThreadUtil_init(this);
    return this;
}


OpenGLThreadUtil* OpenGLThreadUtil_getInstance(void) {
        return OpenGLThreadUtil_instance;
}


void OpenGLThreadUtil_set(OpenGLThreadUtil* this, Any* glSurfaceView) {
}


void OpenGLThreadUtil_onPause(OpenGLThreadUtil* this) {
}


void OpenGLThreadUtil_onResume(OpenGLThreadUtil* this) {
}

