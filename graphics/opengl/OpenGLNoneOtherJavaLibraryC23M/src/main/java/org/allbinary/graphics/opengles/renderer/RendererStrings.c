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

static RendererStrings* RendererStrings_instance;

RendererStrings* RendererStrings_new(void);
RendererStrings* RendererStrings_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void RendererStrings_staticInit(void) {
    RendererStrings_instance = RendererStrings_new();
}

static void RendererStrings_initFields(RendererStrings* this) {
    this->ON_SURFACE_CREATED = "onSurfaceCreated";
    this->ON_SURFACE_CHANGED = "onSurfaceChanged";
    this->ON_DRAW_FRAME = "onDrawFrame";
    this->ON_DRAW_FRAME_THREED = "onDrawFrameThreed";
    this->ON_DRAW_FRAME_2D = "onDrawFrame2d";
}

void RendererStrings_init(RendererStrings* this) {
    RendererStrings_initFields(this);
}

RendererStrings* RendererStrings_new(void) {
    RendererStrings* this = calloc(1, sizeof(RendererStrings));
    RendererStrings_init(this);
    return this;
}


RendererStrings* RendererStrings_getInstance(void) {
        return RendererStrings_instance;
}

