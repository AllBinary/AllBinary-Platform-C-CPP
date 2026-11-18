#ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGEPROCESSOR_H
#define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGEPROCESSOR_H
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
typedef struct GL10 GL10;

typedef struct OpenGLESImageProcessor OpenGLESImageProcessor;
struct OpenGLESImageProcessor {
    char unused;
};


OpenGLESImageProcessor* OpenGLESImageProcessor_new(void);
void OpenGLESImageProcessor_init(OpenGLESImageProcessor* this);

OpenGLESImageProcessor* OpenGLESImageProcessor_getInstance(void);

void OpenGLESImageProcessor_translate(OpenGLESImageProcessor* this, GL10* gl, float translateX, float translateY);

void OpenGLESImageProcessor_rotate(OpenGLESImageProcessor* this, GL10* gl, float angle);

void OpenGLESImageProcessor_scale(OpenGLESImageProcessor* this, GL10* gl, float scaleX, float scaleY);

void OpenGLESImageProcessor_colorMask(OpenGLESImageProcessor* this, GL10* gl, float red, float green, float blue, float alpha);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OpenGLESImageProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OpenGLESImageProcessor_register(void);


#endif // ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGEPROCESSOR_H
