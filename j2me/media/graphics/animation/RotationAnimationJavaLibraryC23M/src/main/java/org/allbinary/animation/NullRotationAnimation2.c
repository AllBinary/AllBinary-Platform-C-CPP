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
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/animation/NullRotationAnimation.h"

typedef struct NullRotationAnimation2 NullRotationAnimation2;
struct NullRotationAnimation2 {
    NullRotationAnimation base;
};


NullRotationAnimation2* NullRotationAnimation2_new(void);

void NullRotationAnimation2_init(NullRotationAnimation2* this);
void NullRotationAnimation2_paintXY(NullRotationAnimation2* this, Graphics* graphics, int32_t x, int32_t y);


void NullRotationAnimation2_init(NullRotationAnimation2* this) {
        NullRotationAnimation_init(&this->base, AngleInfo_getInstance(AngleFactory_getInstance()->QUARTER_TOTAL_ANGLE), CircularIndexUtil_createInstance(4), IndexedAnimationBehavior_new(1, 250));
}

NullRotationAnimation2* NullRotationAnimation2_new(void) {
    NullRotationAnimation2* this = calloc(1, sizeof(NullRotationAnimation2));
    NullRotationAnimation2_init(this);
    return this;
}


void NullRotationAnimation2_paintXY(NullRotationAnimation2* this, Graphics* graphics, int32_t x, int32_t y) {
}

