/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
 *  
 * By agreeing to this license you and any business entity you represent are 
 * legally bound to the AllBinary Open License Version 1 legal agreement. 
 *  
 * You may obtain the AllBinary Open License Version 1 legal agreement from 
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
 *  
 * Created By: Travis Berthelot 
 *   
 */
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
// #include "javax/microedition/khronos/opengles/GL10.h"

typedef struct OpenGLESImageDraw OpenGLESImageDraw;
struct OpenGLESImageDraw {
    char unused;
};

static OpenGLESImageDraw* OpenGLESImageDraw_instance;

OpenGLESImageDraw* OpenGLESImageDraw_new(void);
OpenGLESImageDraw* OpenGLESImageDraw_getInstance(void);
void OpenGLESImageDraw_drawRegion(OpenGLESImageDraw* this, GL10* gl, int32_t viewHeight, float x_src, float y_src, float width, float height, int32_t x, int32_t y, int32_t z);
void OpenGLESImageDraw_draw(OpenGLESImageDraw* this, GL10* gl, int32_t x, int32_t y, int32_t z);

// Static fields with runtime initializers: call this once at startup
void OpenGLESImageDraw_staticInit(void) {
    OpenGLESImageDraw_instance = OpenGLESImageDraw_new();
}

void OpenGLESImageDraw_init(OpenGLESImageDraw* this) {
}

OpenGLESImageDraw* OpenGLESImageDraw_new(void) {
    OpenGLESImageDraw* this = calloc(1, sizeof(OpenGLESImageDraw));
    OpenGLESImageDraw_init(this);
    return this;
}


OpenGLESImageDraw* OpenGLESImageDraw_getInstance(void) {
        return OpenGLESImageDraw_instance;
}


void OpenGLESImageDraw_drawRegion(OpenGLESImageDraw* this, GL10* gl, int32_t viewHeight, float x_src, float y_src, float width, float height, int32_t x, int32_t y, int32_t z) {
}


void OpenGLESImageDraw_draw(OpenGLESImageDraw* this, GL10* gl, int32_t x, int32_t y, int32_t z) {
}

