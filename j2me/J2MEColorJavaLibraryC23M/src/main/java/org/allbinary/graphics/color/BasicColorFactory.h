#ifndef ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORFACTORY_H
#define ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORFACTORY_H
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
// package org.allbinary.graphics.color

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BasicColor BasicColor;
typedef struct BasicColorUtil BasicColorUtil;
typedef struct StringUtil StringUtil;
// #include "jsinterop/annotations/JsType.h"
// #include "jsinterop/annotations/JsMethod.h"
// #include "jsinterop/annotations/JsProperty.h"
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

typedef struct BasicColorFactory BasicColorFactory;
struct BasicColorFactory {
    BasicColor* NULL_COLOR;
    BasicColor* TAN;
    BasicColor* SKIN_PINK;
    BasicColor* RED;
    BasicColor* LIGHT_RED;
    BasicColor* DARK_GREEN;
    BasicColor* GREEN;
    BasicColor* LIGHT_GREEN;
    BasicColor* PURPLE;
    BasicColor* BLUE;
    BasicColor* LIGHT_BLUE;
    BasicColor* VERY_LIGHT_BLUE;
    BasicColor* PUCE;
    BasicColor* AQUA;
    BasicColor* YELLOW;
    BasicColor* PINK;
    BasicColor* BLACK;
    BasicColor* GREY;
    BasicColor* LIGHT_GREY;
    BasicColor* DARK_GREY;
    BasicColor* ORANGE;
    BasicColor* BROWN;
    BasicColor* WHITE;
    BasicColor* TRANSPARENT_COLOR;
    BasicColor* TRANSPARENT_GREY;
    BasicColor* TRANSPARENT_BLACK;
    BasicColor* TRANSPARENT_RED;
    BasicColor* CLEAR_COLOR;
    BasicColor* BORDER_COLOR;
};


BasicColorFactory* BasicColorFactory_new(void);
void BasicColorFactory_init(BasicColorFactory* this);

BasicColorFactory* BasicColorFactory_getInstance(void);

BasicColor* BasicColorFactory_createInstance(BasicColorFactory* this, int32_t value);

BasicColor* BasicColorFactory_createInstanceA(BasicColorFactory* this, int32_t alphaValue, int32_t value);

BasicColor* BasicColorFactory_createInstanceAN(BasicColorFactory* this, int32_t alphaValue, int32_t value, const char* name);

BasicColor* BasicColorFactory_createInstanceARGB(BasicColorFactory* this, int32_t alphaValue, int32_t r, int32_t g, int32_t b, const char* name);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicColorFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicColorFactory_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORFACTORY_H
