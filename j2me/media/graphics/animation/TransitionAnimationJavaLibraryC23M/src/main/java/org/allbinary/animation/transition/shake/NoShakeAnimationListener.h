#ifndef ORG_ALLBINARY_ANIMATION_TRANSITION_SHAKE_NOSHAKEANIMATIONLISTENER_H
#define ORG_ALLBINARY_ANIMATION_TRANSITION_SHAKE_NOSHAKEANIMATIONLISTENER_H
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
#include "org/allbinary/animation/transition/shake/ShakeAnimationListener.h"

typedef struct NoShakeAnimationListener NoShakeAnimationListener;
struct NoShakeAnimationListener {
    ShakeAnimationListener base;
};

extern ShakeAnimationListener* NoShakeAnimationListener_NO_SHAKE_ANIMATION_LISTENER;

NoShakeAnimationListener* NoShakeAnimationListener_new(void);
void NoShakeAnimationListener_init(NoShakeAnimationListener* this);
#ifndef NoShakeAnimationListener_onSmallShakeEvent
#define NoShakeAnimationListener_onSmallShakeEvent ShakeAnimationListener_onSmallShakeEvent
#endif
#ifndef NoShakeAnimationListener_onMediumShakeEvent
#define NoShakeAnimationListener_onMediumShakeEvent ShakeAnimationListener_onMediumShakeEvent
#endif
#ifndef NoShakeAnimationListener_onLargeShakeEvent
#define NoShakeAnimationListener_onLargeShakeEvent ShakeAnimationListener_onLargeShakeEvent
#endif
#ifndef NoShakeAnimationListener_onShakeEvent
#define NoShakeAnimationListener_onShakeEvent ShakeAnimationListener_onShakeEvent
#endif
#ifndef NoShakeAnimationListener_getType
#define NoShakeAnimationListener_getType ShakeAnimationListener_getType
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NoShakeAnimationListener_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NoShakeAnimationListener_register(void);


#endif // ORG_ALLBINARY_ANIMATION_TRANSITION_SHAKE_NOSHAKEANIMATIONLISTENER_H
