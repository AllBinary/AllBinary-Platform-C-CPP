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
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"

typedef struct AnimationEventHandler AnimationEventHandler;
struct AnimationEventHandler {
    BasicEventHandler base;
};

static AnimationEventHandler* AnimationEventHandler_eventHandler;

AnimationEventHandler* AnimationEventHandler_new(void);

void AnimationEventHandler_init(AnimationEventHandler* this);
AnimationEventHandler* AnimationEventHandler_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void AnimationEventHandler_staticInit(void) {
    AnimationEventHandler_eventHandler = AnimationEventHandler_new();
}


void AnimationEventHandler_init(AnimationEventHandler* this) {
    BasicEventHandler_init(&this->base);
}

AnimationEventHandler* AnimationEventHandler_new(void) {
    AnimationEventHandler* this = calloc(1, sizeof(AnimationEventHandler));
    AnimationEventHandler_init(this);
    return this;
}


// synchronized
AnimationEventHandler* AnimationEventHandler_getInstance(void) {
        return AnimationEventHandler_eventHandler;
}

