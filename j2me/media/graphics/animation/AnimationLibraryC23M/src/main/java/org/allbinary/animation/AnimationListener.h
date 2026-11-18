#ifndef ORG_ALLBINARY_ANIMATION_ANIMATIONLISTENER_H
#define ORG_ALLBINARY_ANIMATION_ANIMATIONLISTENER_H
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
typedef struct EventListenerInterface EventListenerInterface;
#include "org/allbinary/logic/util/event/EventListenerInterface.h"

typedef struct AnimationListener AnimationListener;
struct AnimationListener {
    void (*onEnd)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AnimationListener_staticInit(void);

static inline void AnimationListener_onEnd(void* this) {
    ((__typeof__(((AnimationListener*) nullptr)->onEnd)) java_method_of(this, "onEnd"))(this);
}
#define AnimationListener_onEvent EventListenerInterface_onEvent


#endif // ORG_ALLBINARY_ANIMATION_ANIMATIONLISTENER_H
