/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2009 AllBinary
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
// package org.allbinary.android.input.motion

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "android/view/MotionEvent.h"
#include "org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h"
#include "org/allbinary/input/motion/gesture/observer/GameMotionGestureListener.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureReceiveInterfaceFactory.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/android/input/motion/MotionEventProcessor.h"

typedef struct BaseGameInputMotionEventProcessor BaseGameInputMotionEventProcessor;
struct BaseGameInputMotionEventProcessor {
    MotionEventProcessor base;
    CommonStrings* commonStrings;
    GameMotionGestureListener* gameMotionGestureListener;
};


BaseGameInputMotionEventProcessor* BaseGameInputMotionEventProcessor_new(void);

void BaseGameInputMotionEventProcessor_init(BaseGameInputMotionEventProcessor* this);
void BaseGameInputMotionEventProcessor_process(BaseGameInputMotionEventProcessor* this, MotionEvent* motionEvent);
void BaseGameInputMotionEventProcessor_addListener(BaseGameInputMotionEventProcessor* this);

static void BaseGameInputMotionEventProcessor_initFields(BaseGameInputMotionEventProcessor* this) {
    this->commonStrings = CommonStrings_getInstance();
    
}


void BaseGameInputMotionEventProcessor_init(BaseGameInputMotionEventProcessor* this) {
    MotionEventProcessor_init(&this->base);
    BaseGameInputMotionEventProcessor_initFields(this);
        this->gameMotionGestureListener = GameMotionGestureListener_new(MotionGestureReceiveInterfaceFactory_getInstance());
        BaseGameInputMotionEventProcessor_addListener(this);
}

BaseGameInputMotionEventProcessor* BaseGameInputMotionEventProcessor_new(void) {
    BaseGameInputMotionEventProcessor* this = calloc(1, sizeof(BaseGameInputMotionEventProcessor));
    BaseGameInputMotionEventProcessor_init(this);
    return this;
}


void BaseGameInputMotionEventProcessor_process(BaseGameInputMotionEventProcessor* this, MotionEvent* motionEvent) {
}


void BaseGameInputMotionEventProcessor_addListener(BaseGameInputMotionEventProcessor* this) {
        BasicMotionGesturesHandler* motionGesturesHandler = BasicMotionGesturesHandler_getInstance();
        BasicMotionGesturesHandler_addListenerInterface(motionGesturesHandler, this->gameMotionGestureListener);
}

