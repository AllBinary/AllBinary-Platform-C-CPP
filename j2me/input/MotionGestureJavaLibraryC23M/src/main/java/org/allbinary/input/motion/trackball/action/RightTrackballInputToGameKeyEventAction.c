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

typedef struct RightTrackballInputToGameKeyEventAction RightTrackballInputToGameKeyEventAction;
struct RightTrackballInputToGameKeyEventAction {
    GameKeyCompleteMotionGestureInputEvent base;
};

static Any* RightTrackballInputToGameKeyEventAction_instance;

RightTrackballInputToGameKeyEventAction* RightTrackballInputToGameKeyEventAction_new(void);
GameKeyCompleteMotionGestureInputEvent* RightTrackballInputToGameKeyEventAction_getInstance(void);

void RightTrackballInputToGameKeyEventAction_init(RightTrackballInputToGameKeyEventAction* this);

// Static fields with runtime initializers: call this once at startup
void RightTrackballInputToGameKeyEventAction_staticInit(void) {
    RightTrackballInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}


GameKeyCompleteMotionGestureInputEvent* RightTrackballInputToGameKeyEventAction_getInstance(void) {
        if (RightTrackballInputToGameKeyEventAction_instance == NullUtil_getInstance()->NULL_OBJECT) {
            RightTrackballInputToGameKeyEventAction_instance = RightTrackballInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) RightTrackballInputToGameKeyEventAction_instance);
}


void RightTrackballInputToGameKeyEventAction_init(RightTrackballInputToGameKeyEventAction* this) {
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Right Action", TrackballMotionGestureFactory_getInstance()->RIGHT, JAVA_CALL(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()), getInputMapping));
}

RightTrackballInputToGameKeyEventAction* RightTrackballInputToGameKeyEventAction_new(void) {
    RightTrackballInputToGameKeyEventAction* this = calloc(1, sizeof(RightTrackballInputToGameKeyEventAction));
    RightTrackballInputToGameKeyEventAction_init(this);
    return this;
}

