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

typedef struct RightOrientationInputToGameKeyEventAction RightOrientationInputToGameKeyEventAction;
struct RightOrientationInputToGameKeyEventAction {
    GameKeyCompleteMotionGestureInputEvent base;
};

static Any* RightOrientationInputToGameKeyEventAction_instance;

RightOrientationInputToGameKeyEventAction* RightOrientationInputToGameKeyEventAction_new(void);
GameKeyCompleteMotionGestureInputEvent* RightOrientationInputToGameKeyEventAction_getInstance(void);

void RightOrientationInputToGameKeyEventAction_init(RightOrientationInputToGameKeyEventAction* this);

// Static fields with runtime initializers: call this once at startup
void RightOrientationInputToGameKeyEventAction_staticInit(void) {
    RightOrientationInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}


GameKeyCompleteMotionGestureInputEvent* RightOrientationInputToGameKeyEventAction_getInstance(void) {
        if (RightOrientationInputToGameKeyEventAction_instance == NullUtil_getInstance()->NULL_OBJECT) {
            RightOrientationInputToGameKeyEventAction_instance = RightOrientationInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) RightOrientationInputToGameKeyEventAction_instance);
}


void RightOrientationInputToGameKeyEventAction_init(RightOrientationInputToGameKeyEventAction* this) {
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Right Action", OrientationMotionGestureFactory_getInstance()->RIGHT, JAVA_CALL(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()), getInputMapping));
}

RightOrientationInputToGameKeyEventAction* RightOrientationInputToGameKeyEventAction_new(void) {
    RightOrientationInputToGameKeyEventAction* this = calloc(1, sizeof(RightOrientationInputToGameKeyEventAction));
    RightOrientationInputToGameKeyEventAction_init(this);
    return this;
}

