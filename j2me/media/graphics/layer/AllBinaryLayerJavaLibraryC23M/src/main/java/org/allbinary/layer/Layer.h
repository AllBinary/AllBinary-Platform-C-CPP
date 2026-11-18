#ifndef ORG_ALLBINARY_LAYER_LAYER_H
#define ORG_ALLBINARY_LAYER_LAYER_H
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
// package org.allbinary.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Graphics Graphics;
typedef struct CanvasStrings CanvasStrings;
typedef struct LogUtil LogUtil;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct StringMaker StringMaker;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#include "java/lang/Integer.h"

typedef struct Layer Layer;
struct Layer {
    LogUtil* logUtil;
    int32_t x;
    int32_t y;
    int32_t z;
    int32_t width;
    int32_t height;
    bool visible;
};

extern int32_t Layer_ID;

Layer* Layer_new(int32_t width, int32_t height);

void Layer_init(Layer* this, int32_t width, int32_t height);

void Layer_setPosition(Layer* this, int32_t x, int32_t y, int32_t z);

void Layer_moveDXY(Layer* this, int32_t dx, int32_t dy);

void Layer_moveDXYZ(Layer* this, int32_t dx, int32_t dy, int32_t dz);

int32_t Layer_getXP(Layer* this);

int32_t Layer_getYP(Layer* this);

int32_t Layer_getZP(Layer* this);

int32_t Layer_getWidth(Layer* this);

int32_t Layer_getHeight(Layer* this);

int64_t Layer_getDepth(Layer* this);

void Layer_setVisible(Layer* this, bool visible);

bool Layer_isVisible(Layer* this);

void Layer_paint(Layer* this, Graphics* graphics);

void Layer_setLayerWidth(Layer* this, int32_t width);

void Layer_setLayerHeight(Layer* this, int32_t height);

void Layer_toStringAppend(Layer* this, StringMaker* stringBuffer);
#define Layer_new2 Layer_new
#define Layer_init2 Layer_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Layer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Layer_register(void);


#endif // ORG_ALLBINARY_LAYER_LAYER_H
