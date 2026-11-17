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

typedef struct UpOrientationInputToGameKeyEventAction UpOrientationInputToGameKeyEventAction;
struct UpOrientationInputToGameKeyEventAction {
    GameKeyCompleteMotionGestureInputEvent base;
};

static Any* UpOrientationInputToGameKeyEventAction_instance;

UpOrientationInputToGameKeyEventAction* UpOrientationInputToGameKeyEventAction_new(void);
GameKeyCompleteMotionGestureInputEvent* UpOrientationInputToGameKeyEventAction_getInstance(void);

void UpOrientationInputToGameKeyEventAction_init(UpOrientationInputToGameKeyEventAction* this);

// Static fields with runtime initializers: call this once at startup
void UpOrientationInputToGameKeyEventAction_staticInit(void) {
    UpOrientationInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}


GameKeyCompleteMotionGestureInputEvent* UpOrientationInputToGameKeyEventAction_getInstance(void) {
        if (UpOrientationInputToGameKeyEventAction_instance == NullUtil_getInstance()->NULL_OBJECT) {
            UpOrientationInputToGameKeyEventAction_instance = UpOrientationInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) UpOrientationInputToGameKeyEventAction_instance);
}


void UpOrientationInputToGameKeyEventAction_init(UpOrientationInputToGameKeyEventAction* this) {
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Up Action", OrientationMotionGestureFactory_getInstance()->UP, JAVA_CALL(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()), getInputMapping));
}

UpOrientationInputToGameKeyEventAction* UpOrientationInputToGameKeyEventAction_new(void) {
    UpOrientationInputToGameKeyEventAction* this = calloc(1, sizeof(UpOrientationInputToGameKeyEventAction));
    UpOrientationInputToGameKeyEventAction_init(this);
    return this;
}

