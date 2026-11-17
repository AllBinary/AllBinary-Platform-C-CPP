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

static void RunAtEndAnimationListener_initFields(RunAtEndAnimationListener* this) {
    
}


void RunAtEndAnimationListener_init(RunAtEndAnimationListener* this, Runnable* runnable) {
    RunAtEndAnimationListener_initFields(this);
        this->runnable = runnable;
}

RunAtEndAnimationListener* RunAtEndAnimationListener_new(Runnable* runnable) {
    RunAtEndAnimationListener* this = calloc(1, sizeof(RunAtEndAnimationListener));
    RunAtEndAnimationListener_init(this, runnable);
    return this;
}


void RunAtEndAnimationListener_onPlatformAnimationStart(RunAtEndAnimationListener* this) {
}


void RunAtEndAnimationListener_onPlatformAnimationEnd(RunAtEndAnimationListener* this) {
}


void RunAtEndAnimationListener_onPlatformAnimationRepeat(RunAtEndAnimationListener* this) {
}

