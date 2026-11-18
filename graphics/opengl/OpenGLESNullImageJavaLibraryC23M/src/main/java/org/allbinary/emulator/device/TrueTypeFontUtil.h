#ifndef ORG_ALLBINARY_EMULATOR_DEVICE_TRUETYPEFONTUTIL_H
#define ORG_ALLBINARY_EMULATOR_DEVICE_TRUETYPEFONTUTIL_H
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
typedef struct TrueTypeFontUtilBase TrueTypeFontUtilBase;
typedef struct GL10 GL10;
typedef struct Image Image;
typedef struct BasicColor BasicColor;
typedef struct OpenGLESImage OpenGLESImage;
#if __has_include("org/allbinary/image/opengles/OpenGLESImage.h")
#include "org/allbinary/image/opengles/OpenGLESImage.h"
#endif
#include "org/allbinary/emulator/device/TrueTypeFontUtilBase.h"

typedef struct TrueTypeFontUtil TrueTypeFontUtil;
struct TrueTypeFontUtil {
    TrueTypeFontUtilBase base;
    OpenGLESImage* fontImage;
};


TrueTypeFontUtil* TrueTypeFontUtil_new(void);

TrueTypeFontUtil* TrueTypeFontUtil_getInstance(void);

void TrueTypeFontUtil_init(TrueTypeFontUtil* this);

int32_t TrueTypeFontUtil_getAsTextureSize(TrueTypeFontUtil* this, int32_t textureSize);

int32_t TrueTypeFontUtil_getCellSize(TrueTypeFontUtil* this, int32_t cellSize);

Image* TrueTypeFontUtil_getFontBitmap(TrueTypeFontUtil* this, const char* filename, int32_t fontSize, int32_t cellSize, BasicColor* basicColor);

void TrueTypeFontUtil_saveFontAtlasAsFile(TrueTypeFontUtil* this);

Image* TrueTypeFontUtil_getFontBitmapGL(TrueTypeFontUtil* this, GL10* gl, const char* filename, int32_t cellSize, BasicColor* basicColor);

int32_t* TrueTypeFontUtil_getFontWidths(TrueTypeFontUtil* this, const char* filename, int32_t fontSize);
#define TrueTypeFontUtil_new0 TrueTypeFontUtil_new
#define TrueTypeFontUtil_init0 TrueTypeFontUtil_init
#ifndef TrueTypeFontUtil_getYOffset
#define TrueTypeFontUtil_getYOffset TrueTypeFontUtilBase_getYOffset
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TrueTypeFontUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TrueTypeFontUtil_register(void);

#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif

#endif // ORG_ALLBINARY_EMULATOR_DEVICE_TRUETYPEFONTUTIL_H
