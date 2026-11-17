/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.animation.caption

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/graphics/color/BasicColor.h"

typedef struct CaptionAnimationHelperBase CaptionAnimationHelperBase;
struct CaptionAnimationHelperBase {
    Animation base;
};

CaptionAnimationHelperBase* CaptionAnimationHelperBase_INSTANCE;

CaptionAnimationHelperBase* CaptionAnimationHelperBase_new(void);
bool CaptionAnimationHelperBase_isShowing(CaptionAnimationHelperBase* this);
void CaptionAnimationHelperBase_tick(CaptionAnimationHelperBase* this);
void CaptionAnimationHelperBase_update(CaptionAnimationHelperBase* this, const char* message, BasicColor* basicColor);
void CaptionAnimationHelperBase_paintXY(CaptionAnimationHelperBase* this, Graphics* graphics, int32_t x, int32_t y);

// Static fields with runtime initializers: call this once at startup
void CaptionAnimationHelperBase_staticInit(void) {
    CaptionAnimationHelperBase_INSTANCE = CaptionAnimationHelperBase_new();
}

void CaptionAnimationHelperBase_init(CaptionAnimationHelperBase* this) {
    Animation_init(&this->base);
}

CaptionAnimationHelperBase* CaptionAnimationHelperBase_new(void) {
    CaptionAnimationHelperBase* this = calloc(1, sizeof(CaptionAnimationHelperBase));
    CaptionAnimationHelperBase_init(this);
    return this;
}


bool CaptionAnimationHelperBase_isShowing(CaptionAnimationHelperBase* this) {
        return false;
}


void CaptionAnimationHelperBase_tick(CaptionAnimationHelperBase* this) {
}


void CaptionAnimationHelperBase_update(CaptionAnimationHelperBase* this, const char* message, BasicColor* basicColor) {
}


void CaptionAnimationHelperBase_paintXY(CaptionAnimationHelperBase* this, Graphics* graphics, int32_t x, int32_t y) {
}

