#ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_RENDERER_RENDERERSTRINGS_H
#define ORG_ALLBINARY_GRAPHICS_OPENGLES_RENDERER_RENDERERSTRINGS_H
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

typedef struct RendererStrings RendererStrings;
struct RendererStrings {
    const char* ON_SURFACE_CREATED;
    const char* ON_SURFACE_CHANGED;
    const char* ON_DRAW_FRAME;
    const char* ON_DRAW_FRAME_THREED;
    const char* ON_DRAW_FRAME_2D;
};


RendererStrings* RendererStrings_new(void);
void RendererStrings_init(RendererStrings* this);

RendererStrings* RendererStrings_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RendererStrings_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RendererStrings_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_OPENGLES_RENDERER_RENDERERSTRINGS_H
