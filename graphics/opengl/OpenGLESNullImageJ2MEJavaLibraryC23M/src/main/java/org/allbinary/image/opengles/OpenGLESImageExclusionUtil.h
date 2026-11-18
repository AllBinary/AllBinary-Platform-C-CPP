#ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGEEXCLUSIONUTIL_H
#define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGEEXCLUSIONUTIL_H
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
typedef struct Image Image;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct OpenGLESImageExclusionUtil OpenGLESImageExclusionUtil;
struct OpenGLESImageExclusionUtil {
    BasicArrayList* list;
};


OpenGLESImageExclusionUtil* OpenGLESImageExclusionUtil_new(void);
void OpenGLESImageExclusionUtil_init(OpenGLESImageExclusionUtil* this);

OpenGLESImageExclusionUtil* OpenGLESImageExclusionUtil_getInstance(void);

bool OpenGLESImageExclusionUtil_isCustomScaling(OpenGLESImageExclusionUtil* this, Image* image);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OpenGLESImageExclusionUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OpenGLESImageExclusionUtil_register(void);


#endif // ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGEEXCLUSIONUTIL_H
