#ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESDEVICEIMAGETRANSLATE_H
#define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESDEVICEIMAGETRANSLATE_H
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
typedef struct OpenGLESImageTranslate OpenGLESImageTranslate;
typedef struct OpenGLESImage OpenGLESImage;
typedef struct GL10 GL10;
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
void OpenGLESDeviceImageTranslate_init(OpenGLESDeviceImageTranslate* this);

void OpenGLESDeviceImageTranslate_translate(OpenGLESDeviceImageTranslate* this, GL10* gl, OpenGLESImage* openGLESImage, float x, float y);

void OpenGLESDeviceImageTranslate_translate2(OpenGLESDeviceImageTranslate* this, GL10* gl, OpenGLESImage* openGLESImage);
#ifndef OpenGLESDeviceImageTranslate_getInstance
#define OpenGLESDeviceImageTranslate_getInstance OpenGLESImageTranslate_getInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OpenGLESDeviceImageTranslate_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OpenGLESDeviceImageTranslate_register(void);


#endif // ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESDEVICEIMAGETRANSLATE_H
