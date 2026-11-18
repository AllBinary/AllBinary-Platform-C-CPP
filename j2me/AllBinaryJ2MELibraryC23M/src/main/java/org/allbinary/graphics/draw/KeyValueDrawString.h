#ifndef ORG_ALLBINARY_GRAPHICS_DRAW_KEYVALUEDRAWSTRING_H
#define ORG_ALLBINARY_GRAPHICS_DRAW_KEYVALUEDRAWSTRING_H
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
typedef struct MyFontProcessor MyFontProcessor;
typedef struct UpdateMyFontInterface UpdateMyFontInterface;
typedef struct UpdateMyFontProcessor UpdateMyFontProcessor;
typedef struct StringUtil StringUtil;
#if __has_include("org/allbinary/graphics/font/MyFontProcessor.h")
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#endif
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"

typedef struct KeyValueDrawString KeyValueDrawString;
struct KeyValueDrawString {
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    MyFontProcessor* myFontProcessor;
    const char* LABEL;
    int32_t labelX;
    int32_t valueX;
    const char* value;
};


KeyValueDrawString* KeyValueDrawString_new(const char* label, int32_t x);

void KeyValueDrawString_init(KeyValueDrawString* this, const char* label, int32_t x);

void KeyValueDrawString_updateMeasurement(KeyValueDrawString* this, Graphics* graphics);

void KeyValueDrawString_paint(KeyValueDrawString* this, Graphics* graphics, int32_t y);

void KeyValueDrawString_update(KeyValueDrawString* this, const char* value);
#define KeyValueDrawString_new2 KeyValueDrawString_new
#define KeyValueDrawString_init2 KeyValueDrawString_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void KeyValueDrawString_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void KeyValueDrawString_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_DRAW_KEYVALUEDRAWSTRING_H
