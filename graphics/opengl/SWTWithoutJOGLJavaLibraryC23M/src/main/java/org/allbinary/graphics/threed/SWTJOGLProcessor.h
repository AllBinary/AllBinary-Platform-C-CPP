#ifndef ORG_ALLBINARY_GRAPHICS_THREED_SWTJOGLPROCESSOR_H
#define ORG_ALLBINARY_GRAPHICS_THREED_SWTJOGLPROCESSOR_H
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
// package org.allbinary.graphics.threed

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GLHolder GLHolder;
typedef struct RatioProcessor RatioProcessor;
typedef struct Font Font;
typedef struct MIDlet MIDlet;
#include "java/lang/Runnable.h"
#if __has_include("org/allbinary/graphics/threed/GLHolder.h")
#include "org/allbinary/graphics/threed/GLHolder.h"
#endif

//SWTWithoutJOGL
typedef struct SWTJOGLProcessor SWTJOGLProcessor;
struct SWTJOGLProcessor {
    Runnable Runnable_interface;
    GLHolder* glHolder;
};


SWTJOGLProcessor* SWTJOGLProcessor_new(void);
void SWTJOGLProcessor_init(SWTJOGLProcessor* this);

SWTJOGLProcessor* SWTJOGLProcessor_getInstance(void);

void SWTJOGLProcessor_initMethod(SWTJOGLProcessor* this, void* display, void* comp);

bool SWTJOGLProcessor_isHolderCreated(SWTJOGLProcessor* this);

void SWTJOGLProcessor_setRenderer(SWTJOGLProcessor* this, void* renderer);

bool SWTJOGLProcessor_isJOGL(SWTJOGLProcessor* this);

void SWTJOGLProcessor_createSurface(SWTJOGLProcessor* this);

void SWTJOGLProcessor_onSurfaceCreated(SWTJOGLProcessor* this);

void SWTJOGLProcessor_onSurfaceChangedForEvent(SWTJOGLProcessor* this, void* event);

void SWTJOGLProcessor_onSurfaceChanged(SWTJOGLProcessor* this);

void SWTJOGLProcessor_onSurfaceChangedWH(SWTJOGLProcessor* this, int32_t width, int32_t height);

void SWTJOGLProcessor_addListener(SWTJOGLProcessor* this);

void SWTJOGLProcessor_addListeners(SWTJOGLProcessor* this, MIDlet* midlet);

void SWTJOGLProcessor_run(SWTJOGLProcessor* this);

void SWTJOGLProcessor_clear(SWTJOGLProcessor* this);

void SWTJOGLProcessor_setCustom(SWTJOGLProcessor* this, int32_t width, int32_t height, float ratio);

void SWTJOGLProcessor_setRatioProcessor(SWTJOGLProcessor* this, RatioProcessor* ratioProcessor);

int32_t SWTJOGLProcessor_charWidth(SWTJOGLProcessor* this, Font* font, uint16_t ch);

int32_t SWTJOGLProcessor_charsWidth(SWTJOGLProcessor* this, Font* font, uint16_t* ch, int32_t offset, int32_t length);

int32_t SWTJOGLProcessor_stringWidth(SWTJOGLProcessor* this, Font* font, const char* str);

int32_t SWTJOGLProcessor_substringWidth(SWTJOGLProcessor* this, Font* font, const char* str, int32_t offset, int32_t len);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SWTJOGLProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SWTJOGLProcessor_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_THREED_SWTJOGLPROCESSOR_H
