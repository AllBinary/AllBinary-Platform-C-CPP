#ifndef ORG_ALLBINARY_ANIMATION_TRANSITION_ANIMATIONLISTENERINTERFACE_H
#define ORG_ALLBINARY_ANIMATION_TRANSITION_ANIMATIONLISTENERINTERFACE_H
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
// package org.allbinary.animation.transition

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct AnimationListenerInterface AnimationListenerInterface;
struct AnimationListenerInterface {
    void (*onPlatformAnimationStart)(void* this);
    void (*onPlatformAnimationEnd)(void* this);
    void (*onPlatformAnimationRepeat)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AnimationListenerInterface_staticInit(void);

static inline void AnimationListenerInterface_onPlatformAnimationStart(void* this) {
    ((__typeof__(((AnimationListenerInterface*) nullptr)->onPlatformAnimationStart)) java_method_of(this, "onPlatformAnimationStart"))(this);
}

static inline void AnimationListenerInterface_onPlatformAnimationEnd(void* this) {
    ((__typeof__(((AnimationListenerInterface*) nullptr)->onPlatformAnimationEnd)) java_method_of(this, "onPlatformAnimationEnd"))(this);
}

static inline void AnimationListenerInterface_onPlatformAnimationRepeat(void* this) {
    ((__typeof__(((AnimationListenerInterface*) nullptr)->onPlatformAnimationRepeat)) java_method_of(this, "onPlatformAnimationRepeat"))(this);
}


#endif // ORG_ALLBINARY_ANIMATION_TRANSITION_ANIMATIONLISTENERINTERFACE_H
