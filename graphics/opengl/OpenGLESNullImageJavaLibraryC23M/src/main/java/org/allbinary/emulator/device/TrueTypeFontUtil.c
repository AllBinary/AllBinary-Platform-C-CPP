/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2011 AllBinary 
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
// package org.allbinary.emulator.device

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/khronos/opengles/GL10.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/image/opengles/OpenGLESImage.h"
#include "org/allbinary/emulator/device/TrueTypeFontUtilBase.h"

typedef struct TrueTypeFontUtil TrueTypeFontUtil;
struct TrueTypeFontUtil {
    TrueTypeFontUtilBase base;
    OpenGLESImage* fontImage;
};

static TrueTypeFontUtil* TrueTypeFontUtil_instance;

TrueTypeFontUtil* TrueTypeFontUtil_new(void);
TrueTypeFontUtil* TrueTypeFontUtil_getInstance(void);

void TrueTypeFontUtil_init(TrueTypeFontUtil* this);
int32_t TrueTypeFontUtil_getAsTextureSize(TrueTypeFontUtil* this, int32_t textureSize);
int32_t TrueTypeFontUtil_getCellSize(TrueTypeFontUtil* this, int32_t cellSize);
Image* TrueTypeFontUtil_getFontBitmap(TrueTypeFontUtil* this, const char* filename, int32_t fontSize, int32_t cellSize, BasicColor* basicColor);
void TrueTypeFontUtil_saveFontAtlasAsFile(TrueTypeFontUtil* this);
Image* TrueTypeFontUtil_getFontBitmapGL(TrueTypeFontUtil* this, GL10* gl, const char* filename, int32_t cellSize, BasicColor* basicColor);
int32_t* TrueTypeFontUtil_getFontWidths(TrueTypeFontUtil* this, const char* filename, int32_t fontSize);

// Static fields with runtime initializers: call this once at startup
void TrueTypeFontUtil_staticInit(void) {
    TrueTypeFontUtil_instance = TrueTypeFontUtil_new();
}

static void TrueTypeFontUtil_initFields(TrueTypeFontUtil* this) {
    this->fontImage = OpenGLESImage_NULL_OPENGL_IMAGE;
}


TrueTypeFontUtil* TrueTypeFontUtil_getInstance(void) {
        return TrueTypeFontUtil_instance;
}


void TrueTypeFontUtil_init(TrueTypeFontUtil* this) {
        TrueTypeFontUtilBase_init(&this->base, 1);
        TrueTypeFontUtil_initFields(this);
}

TrueTypeFontUtil* TrueTypeFontUtil_new(void) {
    TrueTypeFontUtil* this = calloc(1, sizeof(TrueTypeFontUtil));
    TrueTypeFontUtil_init(this);
    return this;
}


int32_t TrueTypeFontUtil_getAsTextureSize(TrueTypeFontUtil* this, int32_t textureSize) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t TrueTypeFontUtil_getCellSize(TrueTypeFontUtil* this, int32_t cellSize) {
        java_throw(java_exception_new("RuntimeException", ""));
}


Image* TrueTypeFontUtil_getFontBitmap(TrueTypeFontUtil* this, const char* filename, int32_t fontSize, int32_t cellSize, BasicColor* basicColor) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void TrueTypeFontUtil_saveFontAtlasAsFile(TrueTypeFontUtil* this) {
}


Image* TrueTypeFontUtil_getFontBitmapGL(TrueTypeFontUtil* this, GL10* gl, const char* filename, int32_t cellSize, BasicColor* basicColor) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t* TrueTypeFontUtil_getFontWidths(TrueTypeFontUtil* this, const char* filename, int32_t fontSize) {
        java_throw(java_exception_new("RuntimeException", ""));
}

