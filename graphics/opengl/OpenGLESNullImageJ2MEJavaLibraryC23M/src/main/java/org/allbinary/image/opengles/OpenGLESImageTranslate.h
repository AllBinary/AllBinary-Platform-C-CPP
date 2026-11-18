#ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGETRANSLATE_H
#define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGETRANSLATE_H
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
typedef struct OpenGLESImage OpenGLESImage;
typedef struct GL10 GL10;

typedef struct OpenGLESImageTranslate OpenGLESImageTranslate;
struct OpenGLESImageTranslate {
    char unused;
};


OpenGLESImageTranslate* OpenGLESImageTranslate_new(void);
void OpenGLESImageTranslate_init(OpenGLESImageTranslate* this);

OpenGLESImageTranslate* OpenGLESImageTranslate_getInstance(void);

void OpenGLESImageTranslate_translate(OpenGLESImageTranslate* this, GL10* gl, OpenGLESImage* openGLESImage, float x, float y);

void OpenGLESImageTranslate_translate2(OpenGLESImageTranslate* this, GL10* gl, OpenGLESImage* openGLESImage);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OpenGLESImageTranslate_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OpenGLESImageTranslate_register(void);


#endif // ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGETRANSLATE_H
