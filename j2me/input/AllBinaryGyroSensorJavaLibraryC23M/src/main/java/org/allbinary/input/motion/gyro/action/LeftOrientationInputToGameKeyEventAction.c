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

typedef struct LeftOrientationInputToGameKeyEventAction LeftOrientationInputToGameKeyEventAction;
struct LeftOrientationInputToGameKeyEventAction {
    GameKeyCompleteMotionGestureInputEvent base;
};

static Any* LeftOrientationInputToGameKeyEventAction_instance;

LeftOrientationInputToGameKeyEventAction* LeftOrientationInputToGameKeyEventAction_new(void);
GameKeyCompleteMotionGestureInputEvent* LeftOrientationInputToGameKeyEventAction_getInstance(void);

void LeftOrientationInputToGameKeyEventAction_init(LeftOrientationInputToGameKeyEventAction* this);

// Static fields with runtime initializers: call this once at startup
void LeftOrientationInputToGameKeyEventAction_staticInit(void) {
    LeftOrientationInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}


GameKeyCompleteMotionGestureInputEvent* LeftOrientationInputToGameKeyEventAction_getInstance(void) {
        if (LeftOrientationInputToGameKeyEventAction_instance == NullUtil_getInstance()->NULL_OBJECT) {
            LeftOrientationInputToGameKeyEventAction_instance = LeftOrientationInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) LeftOrientationInputToGameKeyEventAction_instance);
}


void LeftOrientationInputToGameKeyEventAction_init(LeftOrientationInputToGameKeyEventAction* this) {
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Left Action", OrientationMotionGestureFactory_getInstance()->LEFT, JAVA_CALL(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()), getInputMapping));
}

LeftOrientationInputToGameKeyEventAction* LeftOrientationInputToGameKeyEventAction_new(void) {
    LeftOrientationInputToGameKeyEventAction* this = calloc(1, sizeof(LeftOrientationInputToGameKeyEventAction));
    LeftOrientationInputToGameKeyEventAction_init(this);
    return this;
}

