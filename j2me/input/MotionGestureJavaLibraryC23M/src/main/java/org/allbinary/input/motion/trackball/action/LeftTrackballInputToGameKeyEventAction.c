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

typedef struct LeftTrackballInputToGameKeyEventAction LeftTrackballInputToGameKeyEventAction;
struct LeftTrackballInputToGameKeyEventAction {
    GameKeyCompleteMotionGestureInputEvent base;
};

static Any* LeftTrackballInputToGameKeyEventAction_instance;

LeftTrackballInputToGameKeyEventAction* LeftTrackballInputToGameKeyEventAction_new(void);
GameKeyCompleteMotionGestureInputEvent* LeftTrackballInputToGameKeyEventAction_getInstance(void);

void LeftTrackballInputToGameKeyEventAction_init(LeftTrackballInputToGameKeyEventAction* this);

// Static fields with runtime initializers: call this once at startup
void LeftTrackballInputToGameKeyEventAction_staticInit(void) {
    LeftTrackballInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}


GameKeyCompleteMotionGestureInputEvent* LeftTrackballInputToGameKeyEventAction_getInstance(void) {
        if (LeftTrackballInputToGameKeyEventAction_instance == NullUtil_getInstance()->NULL_OBJECT) {
            LeftTrackballInputToGameKeyEventAction_instance = LeftTrackballInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) LeftTrackballInputToGameKeyEventAction_instance);
}


void LeftTrackballInputToGameKeyEventAction_init(LeftTrackballInputToGameKeyEventAction* this) {
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Left Action", TrackballMotionGestureFactory_getInstance()->LEFT, JAVA_CALL(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()), getInputMapping));
}

LeftTrackballInputToGameKeyEventAction* LeftTrackballInputToGameKeyEventAction_new(void) {
    LeftTrackballInputToGameKeyEventAction* this = calloc(1, sizeof(LeftTrackballInputToGameKeyEventAction));
    LeftTrackballInputToGameKeyEventAction_init(this);
    return this;
}

