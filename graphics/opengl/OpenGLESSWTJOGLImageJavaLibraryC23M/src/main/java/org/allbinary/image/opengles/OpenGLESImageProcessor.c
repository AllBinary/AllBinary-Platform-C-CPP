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

typedef struct OpenGLESImageProcessor OpenGLESImageProcessor;
struct OpenGLESImageProcessor {
    char unused;
};

static OpenGLESImageProcessor* OpenGLESImageProcessor_instance;

OpenGLESImageProcessor* OpenGLESImageProcessor_new(void);
OpenGLESImageProcessor* OpenGLESImageProcessor_getInstance(void);
void OpenGLESImageProcessor_translate(OpenGLESImageProcessor* this, GL10* gl, float translateX, float translateY);
void OpenGLESImageProcessor_rotate(OpenGLESImageProcessor* this, GL10* gl, float angle);
void OpenGLESImageProcessor_scale(OpenGLESImageProcessor* this, GL10* gl, float scaleX, float scaleY);
void OpenGLESImageProcessor_colorMask(OpenGLESImageProcessor* this, GL10* gl, float red, float green, float blue, float alpha);

// Static fields with runtime initializers: call this once at startup
void OpenGLESImageProcessor_staticInit(void) {
    OpenGLESImageProcessor_instance = OpenGLESImageProcessor_new();
}

void OpenGLESImageProcessor_init(OpenGLESImageProcessor* this) {
}

OpenGLESImageProcessor* OpenGLESImageProcessor_new(void) {
    OpenGLESImageProcessor* this = calloc(1, sizeof(OpenGLESImageProcessor));
    OpenGLESImageProcessor_init(this);
    return this;
}


OpenGLESImageProcessor* OpenGLESImageProcessor_getInstance(void) {
        return OpenGLESImageProcessor_instance;
}


void OpenGLESImageProcessor_translate(OpenGLESImageProcessor* this, GL10* gl, float translateX, float translateY) {
        GL10_glTranslatef(gl, translateX, translateY, 0);
}


void OpenGLESImageProcessor_rotate(OpenGLESImageProcessor* this, GL10* gl, float angle) {
        GL10_glRotatef(gl, -angle, 0, 0, 1);
}


void OpenGLESImageProcessor_scale(OpenGLESImageProcessor* this, GL10* gl, float scaleX, float scaleY) {
        GL10_glScalef(gl, scaleX, scaleY, 1);
}


void OpenGLESImageProcessor_colorMask(OpenGLESImageProcessor* this, GL10* gl, float red, float green, float blue, float alpha) {
}

