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
#include "org/allbinary/image/opengles/OpenGLESImageTranslate.h"

typedef struct OpenGLESDeviceImageTranslate OpenGLESDeviceImageTranslate;
struct OpenGLESDeviceImageTranslate {
    OpenGLESImageTranslate base;
    float translateX;
    float translateY;
    float translateX2;
    float translateY2;
};


OpenGLESDeviceImageTranslate* OpenGLESDeviceImageTranslate_new(void);
void OpenGLESDeviceImageTranslate_translate(OpenGLESDeviceImageTranslate* this, GL10* gl, OpenGLESImage* openGLESImage, float x, float y);
void OpenGLESDeviceImageTranslate_translate2(OpenGLESDeviceImageTranslate* this, GL10* gl, OpenGLESImage* openGLESImage);

static void OpenGLESDeviceImageTranslate_initFields(OpenGLESDeviceImageTranslate* this) {
    this->translateX = 0.0f;
    this->translateY = 0.0f;
    this->translateX2 = 0.0f;
    this->translateY2 = 0.0f;
}

void OpenGLESDeviceImageTranslate_init(OpenGLESDeviceImageTranslate* this) {
    OpenGLESImageTranslate_init(&this->base);
    OpenGLESDeviceImageTranslate_initFields(this);
}

OpenGLESDeviceImageTranslate* OpenGLESDeviceImageTranslate_new(void) {
    OpenGLESDeviceImageTranslate* this = calloc(1, sizeof(OpenGLESDeviceImageTranslate));
    OpenGLESDeviceImageTranslate_init(this);
    return this;
}


void OpenGLESDeviceImageTranslate_translate(OpenGLESDeviceImageTranslate* this, GL10* gl, OpenGLESImage* openGLESImage, float x, float y) {
        JAVA_CALL(openGLESImage->imageProcessor, translate, gl, this->translateX + (openGLESImage->openGLESImageProperties->scaleX * x), this->translateY + (openGLESImage->openGLESImageProperties->scaleY * y));
}


void OpenGLESDeviceImageTranslate_translate2(OpenGLESDeviceImageTranslate* this, GL10* gl, OpenGLESImage* openGLESImage) {
        JAVA_CALL(openGLESImage->imageProcessor, translate, gl, this->translateX2, this->translateY2);
}

