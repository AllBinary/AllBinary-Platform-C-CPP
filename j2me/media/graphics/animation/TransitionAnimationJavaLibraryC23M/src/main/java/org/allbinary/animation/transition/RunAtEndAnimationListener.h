#ifndef ORG_ALLBINARY_ANIMATION_TRANSITION_RUNATENDANIMATIONLISTENER_H
#define ORG_ALLBINARY_ANIMATION_TRANSITION_RUNATENDANIMATIONLISTENER_H
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
#include "java/lang/Runnable.h"
#include "org/allbinary/animation/transition/AnimationListenerInterface.h"

typedef struct RunAtEndAnimationListener RunAtEndAnimationListener;
struct RunAtEndAnimationListener {
    AnimationListenerInterface AnimationListenerInterface_interface;
    Runnable* runnable;
};


RunAtEndAnimationListener* RunAtEndAnimationListener_new(Runnable* runnable);

void RunAtEndAnimationListener_init(RunAtEndAnimationListener* this, Runnable* runnable);

void RunAtEndAnimationListener_onPlatformAnimationStart(RunAtEndAnimationListener* this);

void RunAtEndAnimationListener_onPlatformAnimationEnd(RunAtEndAnimationListener* this);

void RunAtEndAnimationListener_onPlatformAnimationRepeat(RunAtEndAnimationListener* this);
#define RunAtEndAnimationListener_new1 RunAtEndAnimationListener_new
#define RunAtEndAnimationListener_init1 RunAtEndAnimationListener_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RunAtEndAnimationListener_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RunAtEndAnimationListener_register(void);


#endif // ORG_ALLBINARY_ANIMATION_TRANSITION_RUNATENDANIMATIONLISTENER_H
