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

typedef struct RollRightOrientationInputToGameKeyEventAction RollRightOrientationInputToGameKeyEventAction;
struct RollRightOrientationInputToGameKeyEventAction {
    GameKeyCompleteMotionGestureInputEvent base;
};

static Any* RollRightOrientationInputToGameKeyEventAction_instance;

RollRightOrientationInputToGameKeyEventAction* RollRightOrientationInputToGameKeyEventAction_new(void);
GameKeyCompleteMotionGestureInputEvent* RollRightOrientationInputToGameKeyEventAction_getInstance(void);

void RollRightOrientationInputToGameKeyEventAction_init(RollRightOrientationInputToGameKeyEventAction* this);

// Static fields with runtime initializers: call this once at startup
void RollRightOrientationInputToGameKeyEventAction_staticInit(void) {
    RollRightOrientationInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}


GameKeyCompleteMotionGestureInputEvent* RollRightOrientationInputToGameKeyEventAction_getInstance(void) {
        if (RollRightOrientationInputToGameKeyEventAction_instance == NullUtil_getInstance()->NULL_OBJECT) {
            RollRightOrientationInputToGameKeyEventAction_instance = RollRightOrientationInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) RollRightOrientationInputToGameKeyEventAction_instance);
}


void RollRightOrientationInputToGameKeyEventAction_init(RollRightOrientationInputToGameKeyEventAction* this) {
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Roll Right Action", OrientationMotionGestureFactory_getInstance()->ROLL_RIGHT, JAVA_CALL(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()), getInputMapping));
}

RollRightOrientationInputToGameKeyEventAction* RollRightOrientationInputToGameKeyEventAction_new(void) {
    RollRightOrientationInputToGameKeyEventAction* this = calloc(1, sizeof(RollRightOrientationInputToGameKeyEventAction));
    RollRightOrientationInputToGameKeyEventAction_init(this);
    return this;
}

