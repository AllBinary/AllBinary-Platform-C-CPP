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
// package org.allbinary.input.motion.touch.action

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
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/logic/NullUtil.h"

typedef struct UpTouchInputToGameKeyEventAction UpTouchInputToGameKeyEventAction;
struct UpTouchInputToGameKeyEventAction {
    GameKeyCompleteMotionGestureInputEvent base;
};

static Any* UpTouchInputToGameKeyEventAction_instance;

UpTouchInputToGameKeyEventAction* UpTouchInputToGameKeyEventAction_new(void);
GameKeyCompleteMotionGestureInputEvent* UpTouchInputToGameKeyEventAction_getInstance(void);

void UpTouchInputToGameKeyEventAction_init(UpTouchInputToGameKeyEventAction* this);

// Static fields with runtime initializers: call this once at startup
void UpTouchInputToGameKeyEventAction_staticInit(void) {
    UpTouchInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}


GameKeyCompleteMotionGestureInputEvent* UpTouchInputToGameKeyEventAction_getInstance(void) {
        if (UpTouchInputToGameKeyEventAction_instance == NullUtil_getInstance()->NULL_OBJECT) {
            UpTouchInputToGameKeyEventAction_instance = UpTouchInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) UpTouchInputToGameKeyEventAction_instance);
}


void UpTouchInputToGameKeyEventAction_init(UpTouchInputToGameKeyEventAction* this) {
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Up Action", TouchMotionGestureFactory_getInstance()->UP, JAVA_CALL(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()), getInputMapping));
}

UpTouchInputToGameKeyEventAction* UpTouchInputToGameKeyEventAction_new(void) {
    UpTouchInputToGameKeyEventAction* this = calloc(1, sizeof(UpTouchInputToGameKeyEventAction));
    UpTouchInputToGameKeyEventAction_init(this);
    return this;
}

