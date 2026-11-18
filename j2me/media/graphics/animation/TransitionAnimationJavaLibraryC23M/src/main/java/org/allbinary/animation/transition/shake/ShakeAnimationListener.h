#ifndef ORG_ALLBINARY_ANIMATION_TRANSITION_SHAKE_SHAKEANIMATIONLISTENER_H
#define ORG_ALLBINARY_ANIMATION_TRANSITION_SHAKE_SHAKEANIMATIONLISTENER_H
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
typedef struct ShakeEvent ShakeEvent;

typedef struct ShakeAnimationListener ShakeAnimationListener;
struct ShakeAnimationListener {
    char unused;
};


ShakeAnimationListener* ShakeAnimationListener_new(void);
void ShakeAnimationListener_init(ShakeAnimationListener* this);

void ShakeAnimationListener_onSmallShakeEvent(ShakeAnimationListener* this);

void ShakeAnimationListener_onMediumShakeEvent(ShakeAnimationListener* this);

void ShakeAnimationListener_onLargeShakeEvent(ShakeAnimationListener* this);

void ShakeAnimationListener_onShakeEvent(ShakeAnimationListener* this, ShakeEvent* shakeEvent);

int32_t ShakeAnimationListener_getType(ShakeAnimationListener* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ShakeAnimationListener_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ShakeAnimationListener_register(void);


#endif // ORG_ALLBINARY_ANIMATION_TRANSITION_SHAKE_SHAKEANIMATIONLISTENER_H
