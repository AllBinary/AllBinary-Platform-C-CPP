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
#include "org/allbinary/animation/NullIndexedAnimation.h"

typedef struct NullIndexedAnimationInner NullIndexedAnimationInner;
struct NullIndexedAnimationInner {
    NullIndexedAnimation base;
};


NullIndexedAnimationInner* NullIndexedAnimationInner_new(void);

void NullIndexedAnimationInner_init(NullIndexedAnimationInner* this);
void NullIndexedAnimationInner_paintXY(NullIndexedAnimationInner* this, Graphics* graphics, int32_t x, int32_t y);


void NullIndexedAnimationInner_init(NullIndexedAnimationInner* this) {
        NullIndexedAnimation_init(&this->base, IndexedAnimationBehavior_new(1, 250));
}

NullIndexedAnimationInner* NullIndexedAnimationInner_new(void) {
    NullIndexedAnimationInner* this = calloc(1, sizeof(NullIndexedAnimationInner));
    NullIndexedAnimationInner_init(this);
    return this;
}


void NullIndexedAnimationInner_paintXY(NullIndexedAnimationInner* this, Graphics* graphics, int32_t x, int32_t y) {
}

