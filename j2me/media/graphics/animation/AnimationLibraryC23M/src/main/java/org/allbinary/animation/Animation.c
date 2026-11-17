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
// package org.allbinary.animation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/khronos/opengles/GL.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#include "org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h"
#include "org/allbinary/animation/AnimationInterface.h"

typedef struct Animation Animation;
struct Animation {
    AnimationInterface AnimationInterface_interface;
    OpenGLSurfaceChangedInterface OpenGLSurfaceChangedInterface_interface;
    BasicColorSetUtil* basicSetColorUtil;
    BasicColor* basicColor;
    int32_t colorP;
    BasicColor* changeBasicColorP;
    int32_t changeColorP;
    int32_t alphaP;
};


Animation* Animation_new(void);

void Animation_init(Animation* this);
void Animation_setAlpha(Animation* this, int32_t alpha);
void Animation_nextFrame(Animation* this);
void Animation_paintXY(Animation* this, Graphics* graphics, int32_t x, int32_t y);
void Animation_paintThreedXYZ(Animation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z);
bool Animation_isThreed(Animation* this);
BasicColor* Animation_getBasicColorP(Animation* this);
void Animation_setBasicColorP(Animation* this, BasicColor* basicColor);
void Animation_setBackgroundBasicColorP(Animation* this, BasicColor* basicColor);
BasicColor* Animation_getChangeBasicColor(Animation* this);
void Animation_changeBasicColor(Animation* this, BasicColor* basicColor);
int32_t Animation_getChangeColor(Animation* this);
int32_t Animation_getColor(Animation* this);
void Animation_setScale(Animation* this, float scaleX, float scaleY);
void Animation_setMaxScale(Animation* this, float maxScaleX, float maxScaleY);
void Animation_set(Animation* this, GL* gl);
void Animation_setDx(Animation* this, int32_t dx);
int32_t Animation_getDx(Animation* this);
void Animation_setDy(Animation* this, int32_t dy);
int32_t Animation_getDy(Animation* this);

static void Animation_initFields(Animation* this) {
    this->basicSetColorUtil = BasicColorSetUtil_getInstance();
    this->basicColor = BasicColorFactory_getInstance()->WHITE;
    this->colorP = 0;
    this->changeBasicColorP = BasicColorFactory_getInstance()->NULL_COLOR;
    this->changeColorP = 0;
    this->alphaP = 0;
}


void Animation_init(Animation* this) {
    Animation_initFields(this);
}

Animation* Animation_new(void) {
    Animation* this = calloc(1, sizeof(Animation));
    Animation_init(this);
    return this;
}


void Animation_setAlpha(Animation* this, int32_t alpha) {
        this->alphaP = alpha;
}


// throws Exception
void Animation_nextFrame(Animation* this) {
}


void Animation_paintXY(Animation* this, Graphics* graphics, int32_t x, int32_t y) {
        BasicColorSetUtil_setBasicColorP3(this->basicSetColorUtil, graphics, Animation_getBasicColorP(this), Animation_getColor(this));
}


void Animation_paintThreedXYZ(Animation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z) {
}


bool Animation_isThreed(Animation* this) {
        return false;
}


BasicColor* Animation_getBasicColorP(Animation* this) {
        return this->basicColor;
}


void Animation_setBasicColorP(Animation* this, BasicColor* basicColor) {
        this->basicColor = basicColor;
        this->colorP = BasicColor_intValue(this->basicColor);
}


void Animation_setBackgroundBasicColorP(Animation* this, BasicColor* basicColor) {
}


BasicColor* Animation_getChangeBasicColor(Animation* this) {
        return this->changeBasicColorP;
}


void Animation_changeBasicColor(Animation* this, BasicColor* basicColor) {
        this->changeBasicColorP = basicColor;
        this->changeColorP = BasicColor_intValue(this->changeBasicColorP);
}


int32_t Animation_getChangeColor(Animation* this) {
        return this->changeColorP;
}


int32_t Animation_getColor(Animation* this) {
        return this->colorP;
}


void Animation_setScale(Animation* this, float scaleX, float scaleY) {
}


void Animation_setMaxScale(Animation* this, float maxScaleX, float maxScaleY) {
}


// throws Exception
void Animation_set(Animation* this, GL* gl) {
}


void Animation_setDx(Animation* this, int32_t dx) {
}


int32_t Animation_getDx(Animation* this) {
        return 0;
}


void Animation_setDy(Animation* this, int32_t dy) {
}


int32_t Animation_getDy(Animation* this) {
        return 0;
}

