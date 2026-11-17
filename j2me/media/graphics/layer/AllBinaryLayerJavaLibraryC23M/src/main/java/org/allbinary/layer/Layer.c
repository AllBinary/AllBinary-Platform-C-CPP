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
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"

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

int32_t Layer_ID;

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

// Static fields with runtime initializers: call this once at startup
void Layer_staticInit(void) {
    Layer_ID = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 0);
}

static void Layer_initFields(Layer* this) {
    this->logUtil = LogUtil_getInstance();
    this->x = 0;
    this->y = 0;
    this->z = 3;
    this->width = 0;
    this->height = 0;
    this->visible = true;
}


void Layer_init(Layer* this, int32_t width, int32_t height) {
    Layer_initFields(this);
        Layer_setLayerWidth(this, width);
        Layer_setLayerHeight(this, height);
}

Layer* Layer_new(int32_t width, int32_t height) {
    Layer* this = calloc(1, sizeof(Layer));
    Layer_init(this, width, height);
    return this;
}


void Layer_setPosition(Layer* this, int32_t x, int32_t y, int32_t z) {
        this->x = x;
        this->y = y;
        this->z = z;
}


void Layer_moveDXY(Layer* this, int32_t dx, int32_t dy) {
        this->x += dx;
        this->y += dy;
}


void Layer_moveDXYZ(Layer* this, int32_t dx, int32_t dy, int32_t dz) {
        this->x += dx;
        this->y += dy;
        this->z += dz;
}


int32_t Layer_getXP(Layer* this) {
        return this->x;
}


int32_t Layer_getYP(Layer* this) {
        return this->y;
}


int32_t Layer_getZP(Layer* this) {
        return this->z;
}


int32_t Layer_getWidth(Layer* this) {
        return this->width;
}


int32_t Layer_getHeight(Layer* this) {
        return this->height;
}


int64_t Layer_getDepth(Layer* this) {
        return 0LL;
}


void Layer_setVisible(Layer* this, bool visible) {
        this->visible = visible;
}


bool Layer_isVisible(Layer* this) {
        return this->visible;
}


void Layer_paint(Layer* this, Graphics* graphics) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        CanvasStrings* canvasStrings = CanvasStrings_getInstance();
        LogUtil_putF(this->logUtil, commonStrings->NOT_IMPLEMENTED, this, canvasStrings->PAINT);
}


void Layer_setLayerWidth(Layer* this, int32_t width) {
        if (width < 0) {
            java_throw(java_exception_new("IllegalArgumentException", ""));
        }
        this->width = width;
}


void Layer_setLayerHeight(Layer* this, int32_t height) {
        if (height < 0) {
            java_throw(java_exception_new("IllegalArgumentException", ""));
        }
        this->height = height;
}


void Layer_toStringAppend(Layer* this, StringMaker* stringBuffer) {
}

