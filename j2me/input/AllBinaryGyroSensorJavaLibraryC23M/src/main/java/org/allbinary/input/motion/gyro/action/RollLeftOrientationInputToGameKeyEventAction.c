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
// package org.allbinary.input.motion.gyro.action

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
#include "org/allbinary/input/gyro/OrientationMotionGestureFactory.h"
#include "org/allbinary/logic/NullUtil.h"

typedef struct RollLeftOrientationInputToGameKeyEventAction RollLeftOrientationInputToGameKeyEventAction;
struct RollLeftOrientationInputToGameKeyEventAction {
    GameKeyCompleteMotionGestureInputEvent base;
};

static Any* RollLeftOrientationInputToGameKeyEventAction_instance;

RollLeftOrientationInputToGameKeyEventAction* RollLeftOrientationInputToGameKeyEventAction_new(void);
GameKeyCompleteMotionGestureInputEvent* RollLeftOrientationInputToGameKeyEventAction_getInstance(void);

void RollLeftOrientationInputToGameKeyEventAction_init(RollLeftOrientationInputToGameKeyEventAction* this);

// Static fields with runtime initializers: call this once at startup
void RollLeftOrientationInputToGameKeyEventAction_staticInit(void) {
    RollLeftOrientationInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}


GameKeyCompleteMotionGestureInputEvent* RollLeftOrientationInputToGameKeyEventAction_getInstance(void) {
        if (RollLeftOrientationInputToGameKeyEventAction_instance == NullUtil_getInstance()->NULL_OBJECT) {
            RollLeftOrientationInputToGameKeyEventAction_instance = RollLeftOrientationInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) RollLeftOrientationInputToGameKeyEventAction_instance);
}


void RollLeftOrientationInputToGameKeyEventAction_init(RollLeftOrientationInputToGameKeyEventAction* this) {
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Roll Left Action", OrientationMotionGestureFactory_getInstance()->ROLL_LEFT, JAVA_CALL(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()), getInputMapping));
}

RollLeftOrientationInputToGameKeyEventAction* RollLeftOrientationInputToGameKeyEventAction_new(void) {
    RollLeftOrientationInputToGameKeyEventAction* this = calloc(1, sizeof(RollLeftOrientationInputToGameKeyEventAction));
    RollLeftOrientationInputToGameKeyEventAction_init(this);
    return this;
}

