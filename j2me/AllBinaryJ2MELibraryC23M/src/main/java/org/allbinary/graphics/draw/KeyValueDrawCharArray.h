#ifndef ORG_ALLBINARY_GRAPHICS_DRAW_KEYVALUEDRAWCHARARRAY_H
#define ORG_ALLBINARY_GRAPHICS_DRAW_KEYVALUEDRAWCHARARRAY_H
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
typedef struct CharArrayFactory CharArrayFactory;
typedef struct MyFontProcessor MyFontProcessor;
typedef struct UpdateMyFontInterface UpdateMyFontInterface;
typedef struct UpdateMyFontProcessor UpdateMyFontProcessor;
#if __has_include("org/allbinary/graphics/font/MyFontProcessor.h")
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#endif
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"

typedef struct KeyValueDrawCharArray KeyValueDrawCharArray;
struct KeyValueDrawCharArray {
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    MyFontProcessor* myFontProcessor;
    const char* LABEL;
    int32_t labelX;
    int32_t valueX;
    uint16_t* value;
    int32_t len;
};


KeyValueDrawCharArray* KeyValueDrawCharArray_new(const char* label, int32_t x);

void KeyValueDrawCharArray_init(KeyValueDrawCharArray* this, const char* label, int32_t x);

void KeyValueDrawCharArray_updateMeasurement(KeyValueDrawCharArray* this, Graphics* graphics);

void KeyValueDrawCharArray_paint(KeyValueDrawCharArray* this, Graphics* graphics, int32_t y);

void KeyValueDrawCharArray_update(KeyValueDrawCharArray* this, uint16_t* value, int32_t len);
#define KeyValueDrawCharArray_new2 KeyValueDrawCharArray_new
#define KeyValueDrawCharArray_init2 KeyValueDrawCharArray_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void KeyValueDrawCharArray_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void KeyValueDrawCharArray_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_DRAW_KEYVALUEDRAWCHARARRAY_H
