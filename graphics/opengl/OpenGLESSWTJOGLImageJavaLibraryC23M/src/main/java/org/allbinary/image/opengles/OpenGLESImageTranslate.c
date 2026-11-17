/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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

typedef struct OpenGLESImageTranslate OpenGLESImageTranslate;
struct OpenGLESImageTranslate {
    char unused;
};

static OpenGLESImageTranslate* OpenGLESImageTranslate_instance;

OpenGLESImageTranslate* OpenGLESImageTranslate_new(void);
OpenGLESImageTranslate* OpenGLESImageTranslate_getInstance(void);
void OpenGLESImageTranslate_translate(OpenGLESImageTranslate* this, GL10* gl, OpenGLESImage* openGLESImage, float x, float y);
void OpenGLESImageTranslate_translate2(OpenGLESImageTranslate* this, GL10* gl, OpenGLESImage* openGLESImage);

// Static fields with runtime initializers: call this once at startup
void OpenGLESImageTranslate_staticInit(void) {
    OpenGLESImageTranslate_instance = OpenGLESImageTranslate_new();
}

void OpenGLESImageTranslate_init(OpenGLESImageTranslate* this) {
}

OpenGLESImageTranslate* OpenGLESImageTranslate_new(void) {
    OpenGLESImageTranslate* this = calloc(1, sizeof(OpenGLESImageTranslate));
    OpenGLESImageTranslate_init(this);
    return this;
}


OpenGLESImageTranslate* OpenGLESImageTranslate_getInstance(void) {
        return OpenGLESImageTranslate_instance;
}


void OpenGLESImageTranslate_translate(OpenGLESImageTranslate* this, GL10* gl, OpenGLESImage* openGLESImage, float x, float y) {
        JAVA_CALL(openGLESImage->imageProcessor, translate, gl, x, y);
}


void OpenGLESImageTranslate_translate2(OpenGLESImageTranslate* this, GL10* gl, OpenGLESImage* openGLESImage) {
}

