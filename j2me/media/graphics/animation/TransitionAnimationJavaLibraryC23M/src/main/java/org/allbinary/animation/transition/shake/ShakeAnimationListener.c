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
// package org.allbinary.animation.transition.shake

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ShakeAnimationListener ShakeAnimationListener;
struct ShakeAnimationListener {
    char unused;
};


ShakeAnimationListener* ShakeAnimationListener_new(void);
void ShakeAnimationListener_onSmallShakeEvent(ShakeAnimationListener* this);
void ShakeAnimationListener_onMediumShakeEvent(ShakeAnimationListener* this);
void ShakeAnimationListener_onLargeShakeEvent(ShakeAnimationListener* this);
void ShakeAnimationListener_onShakeEvent(ShakeAnimationListener* this, ShakeEvent* shakeEvent);
int32_t ShakeAnimationListener_getType(ShakeAnimationListener* this);

void ShakeAnimationListener_init(ShakeAnimationListener* this) {
}

ShakeAnimationListener* ShakeAnimationListener_new(void) {
    ShakeAnimationListener* this = calloc(1, sizeof(ShakeAnimationListener));
    ShakeAnimationListener_init(this);
    return this;
}


void ShakeAnimationListener_onSmallShakeEvent(ShakeAnimationListener* this) {
}


void ShakeAnimationListener_onMediumShakeEvent(ShakeAnimationListener* this) {
}


void ShakeAnimationListener_onLargeShakeEvent(ShakeAnimationListener* this) {
}


void ShakeAnimationListener_onShakeEvent(ShakeAnimationListener* this, ShakeEvent* shakeEvent) {
}


int32_t ShakeAnimationListener_getType(ShakeAnimationListener* this) {
        return 0;
}

