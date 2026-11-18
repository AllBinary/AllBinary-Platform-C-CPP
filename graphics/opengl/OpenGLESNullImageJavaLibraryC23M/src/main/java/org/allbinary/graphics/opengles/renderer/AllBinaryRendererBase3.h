#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_RENDERER_ALLBINARYRENDERERBASE3_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLES_RENDERER_ALLBINARYRENDERERBASE3_H
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
// package org.allbinary.graphics.opengles.renderer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GL10 GL10;
typedef struct Image Image;
typedef struct OpenGLESImage OpenGLESImage;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct AllBinaryRendererBase3 AllBinaryRendererBase3;
struct AllBinaryRendererBase3 {
    BasicArrayList* list;
};


AllBinaryRendererBase3* AllBinaryRendererBase3_new(void);
void AllBinaryRendererBase3_init(AllBinaryRendererBase3* this);

void AllBinaryRendererBase3_update(AllBinaryRendererBase3* this, GL10* gl);

void AllBinaryRendererBase3_add(AllBinaryRendererBase3* this, Image* image);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllBinaryRendererBase3_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AllBinaryRendererBase3_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_OPENGLES_RENDERER_ALLBINARYRENDERERBASE3_H
