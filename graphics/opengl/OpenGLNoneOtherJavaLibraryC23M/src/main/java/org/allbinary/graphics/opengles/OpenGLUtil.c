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
// #include "javax/microedition/lcdui/Image.h"

typedef struct OpenGLUtil OpenGLUtil;
struct OpenGLUtil {
    char unused;
};

static OpenGLUtil* OpenGLUtil_instance;

OpenGLUtil* OpenGLUtil_new(void);
OpenGLUtil* OpenGLUtil_getInstance(void);
Image* OpenGLUtil_addImage(OpenGLUtil* this, Image* image);
void OpenGLUtil_clear(OpenGLUtil* this);
void OpenGLUtil_addRunnable(OpenGLUtil* this, Runnable* runnable);

// Static fields with runtime initializers: call this once at startup
void OpenGLUtil_staticInit(void) {
    OpenGLUtil_instance = OpenGLUtil_new();
}

void OpenGLUtil_init(OpenGLUtil* this) {
}

OpenGLUtil* OpenGLUtil_new(void) {
    OpenGLUtil* this = calloc(1, sizeof(OpenGLUtil));
    OpenGLUtil_init(this);
    return this;
}


OpenGLUtil* OpenGLUtil_getInstance(void) {
        return OpenGLUtil_instance;
}


Image* OpenGLUtil_addImage(OpenGLUtil* this, Image* image) {
        return image;
}


void OpenGLUtil_clear(OpenGLUtil* this) {
}


void OpenGLUtil_addRunnable(OpenGLUtil* this, Runnable* runnable) {
}

