#ifndef ORG_ALLBINARY_EMULATOR_DEVICE_TRUETYPEFONTUTILBASE_H
#define ORG_ALLBINARY_EMULATOR_DEVICE_TRUETYPEFONTUTILBASE_H
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
// package org.allbinary.emulator.device

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Font Font;
typedef struct AvianUtil AvianUtil;
typedef struct StringUtil StringUtil;
#if __has_include("javax/microedition/lcdui/Font.h")
#include "javax/microedition/lcdui/Font.h"
#endif

typedef struct TrueTypeFontUtilBase TrueTypeFontUtilBase;
struct TrueTypeFontUtilBase {
    const char* shortPattern;
    int8_t* patternAsBytes;
    const char* pattern;
    int16_t* charArray;
    int32_t* _characterWidth;
    uint16_t* characterArray;
    int32_t size;
    int32_t lastCapIndex;
    Font* currentFont;
    int32_t scale;
    int32_t CELLS_PER_ROW;
    int32_t fontSize;
    int32_t baseCharWidth;
    int32_t cellSize;
    int32_t textureSize;
    int32_t actualCellsPerRow;
};


TrueTypeFontUtilBase* TrueTypeFontUtilBase_new(int32_t scale);

void TrueTypeFontUtilBase_init(TrueTypeFontUtilBase* this, int32_t scale);

int32_t TrueTypeFontUtilBase_getAsTextureSize(TrueTypeFontUtilBase* this, int32_t textureSize);

int32_t TrueTypeFontUtilBase_getCellSize(TrueTypeFontUtilBase* this, int32_t cellSize);

int32_t TrueTypeFontUtilBase_getYOffset(TrueTypeFontUtilBase* this);
#define TrueTypeFontUtilBase_new1 TrueTypeFontUtilBase_new
#define TrueTypeFontUtilBase_init1 TrueTypeFontUtilBase_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TrueTypeFontUtilBase_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TrueTypeFontUtilBase_register(void);


#endif // ORG_ALLBINARY_EMULATOR_DEVICE_TRUETYPEFONTUTILBASE_H
