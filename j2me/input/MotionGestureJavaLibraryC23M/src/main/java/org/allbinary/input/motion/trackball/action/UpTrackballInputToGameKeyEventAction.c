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
// package org.allbinary.input.motion.trackball.action

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"
#include "org/allbinary/input/motion/gesture/TrackballMotionGestureFactory.h"
#include "org/allbinary/logic/NullUtil.h"

typedef struct UpTrackballInputToGameKeyEventAction UpTrackballInputToGameKeyEventAction;
struct UpTrackballInputToGameKeyEventAction {
    GameKeyCompleteMotionGestureInputEvent base;
};

static Any* UpTrackballInputToGameKeyEventAction_instance;

UpTrackballInputToGameKeyEventAction* UpTrackballInputToGameKeyEventAction_new(void);
GameKeyCompleteMotionGestureInputEvent* UpTrackballInputToGameKeyEventAction_getInstance(void);

void UpTrackballInputToGameKeyEventAction_init(UpTrackballInputToGameKeyEventAction* this);

// Static fields with runtime initializers: call this once at startup
void UpTrackballInputToGameKeyEventAction_staticInit(void) {
    UpTrackballInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}


GameKeyCompleteMotionGestureInputEvent* UpTrackballInputToGameKeyEventAction_getInstance(void) {
        if (UpTrackballInputToGameKeyEventAction_instance == NullUtil_getInstance()->NULL_OBJECT) {
            UpTrackballInputToGameKeyEventAction_instance = UpTrackballInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) UpTrackballInputToGameKeyEventAction_instance);
}


void UpTrackballInputToGameKeyEventAction_init(UpTrackballInputToGameKeyEventAction* this) {
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Up Action", TrackballMotionGestureFactory_getInstance()->UP, JAVA_CALL(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()), getInputMapping));
}

UpTrackballInputToGameKeyEventAction* UpTrackballInputToGameKeyEventAction_new(void) {
    UpTrackballInputToGameKeyEventAction* this = calloc(1, sizeof(UpTrackballInputToGameKeyEventAction));
    UpTrackballInputToGameKeyEventAction_init(this);
    return this;
}

