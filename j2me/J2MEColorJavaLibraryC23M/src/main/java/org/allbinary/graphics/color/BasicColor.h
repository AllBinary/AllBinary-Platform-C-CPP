#ifndef ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLOR_H
#define ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLOR_H
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
typedef struct BasicColorUtil BasicColorUtil;
typedef struct StringMaker StringMaker;
// #include "jsinterop/annotations/JsType.h"
// #include "jsinterop/annotations/JsMethod.h"
// #include "jsinterop/annotations/JsConstructor.h"
// #include "jsinterop/annotations/JsProperty.h"

typedef struct BasicColor BasicColor;
struct BasicColor {
    const char* name;
    int32_t value;
    float redComponent;
    float greenComponent;
    float blueComponent;
    float alphaComponent;
    int16_t red;
    int16_t green;
    int16_t blue;
    int16_t alpha;
};


BasicColor* BasicColor_new(int32_t alphaValue, int32_t value, const char* name);

void BasicColor_init(BasicColor* this, int32_t alphaValue, int32_t value, const char* name);

int32_t BasicColor_intValue(BasicColor* this);

int32_t BasicColor_toInt(BasicColor* this);

const char* BasicColor_toString(BasicColor* this);

const char* BasicColor_getName(BasicColor* this);

float BasicColor_getRedComponent(BasicColor* this);

float BasicColor_getGreenComponent(BasicColor* this);

float BasicColor_getBlueComponent(BasicColor* this);

float BasicColor_getAlphaComponent(BasicColor* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicColor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicColor_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLOR_H
