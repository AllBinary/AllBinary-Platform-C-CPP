#ifndef ORG_ALLBINARY_GRAPHICS_DRAW_DRAWSTRINGUTIL_H
#define ORG_ALLBINARY_GRAPHICS_DRAW_DRAWSTRINGUTIL_H
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
// package org.allbinary.graphics.draw

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Graphics Graphics;
typedef struct Anchor Anchor;
typedef struct PreLogUtil PreLogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
// #include "javax/microedition/lcdui/Font.h"
// #include "org/allbinary/AndroidUtil.h"
// #include "org/allbinary/J2MEUtil.h"
// #include "org/allbinary/graphics/opengles/OpenGLFeatureUtil.h"
// #include "org/allbinary/logic/NullUtil.h"

typedef struct DrawStringUtil DrawStringUtil;
struct DrawStringUtil {
    const char* EMPTY_STRING;
    int32_t anchor;
};


DrawStringUtil* DrawStringUtil_new(void);
void DrawStringUtil_init(DrawStringUtil* this);

DrawStringUtil* DrawStringUtil_getInstance(void);

void DrawStringUtil_drawCenterString(DrawStringUtil* this, Graphics* graphics, const char* string, int32_t offset, int32_t length, int32_t x, int32_t y);

void DrawStringUtil_drawCenterStrings(DrawStringUtil* this, Graphics* graphics, const char** stringArray, int32_t maxWidth, int32_t charHeight, int32_t x, int32_t y);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DrawStringUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DrawStringUtil_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_DRAW_DRAWSTRINGUTIL_H
