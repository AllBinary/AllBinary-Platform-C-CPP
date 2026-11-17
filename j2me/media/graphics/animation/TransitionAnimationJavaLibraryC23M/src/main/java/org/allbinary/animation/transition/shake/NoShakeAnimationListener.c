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
#include "org/allbinary/animation/transition/shake/ShakeAnimationListener.h"

typedef struct NoShakeAnimationListener NoShakeAnimationListener;
struct NoShakeAnimationListener {
    ShakeAnimationListener base;
};

ShakeAnimationListener* NoShakeAnimationListener_NO_SHAKE_ANIMATION_LISTENER;

NoShakeAnimationListener* NoShakeAnimationListener_new(void);

// Static fields with runtime initializers: call this once at startup
void NoShakeAnimationListener_staticInit(void) {
    NoShakeAnimationListener_NO_SHAKE_ANIMATION_LISTENER = NoShakeAnimationListener_new();
}

void NoShakeAnimationListener_init(NoShakeAnimationListener* this) {
    ShakeAnimationListener_init(&this->base);
}

NoShakeAnimationListener* NoShakeAnimationListener_new(void) {
    NoShakeAnimationListener* this = calloc(1, sizeof(NoShakeAnimationListener));
    NoShakeAnimationListener_init(this);
    return this;
}

