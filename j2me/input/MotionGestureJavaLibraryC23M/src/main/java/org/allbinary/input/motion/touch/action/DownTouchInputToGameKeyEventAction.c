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

typedef struct DownTouchInputToGameKeyEventAction DownTouchInputToGameKeyEventAction;
struct DownTouchInputToGameKeyEventAction {
    GameKeyCompleteMotionGestureInputEvent base;
};

static Any* DownTouchInputToGameKeyEventAction_instance;

DownTouchInputToGameKeyEventAction* DownTouchInputToGameKeyEventAction_new(void);
GameKeyCompleteMotionGestureInputEvent* DownTouchInputToGameKeyEventAction_getInstance(void);

void DownTouchInputToGameKeyEventAction_init(DownTouchInputToGameKeyEventAction* this);

// Static fields with runtime initializers: call this once at startup
void DownTouchInputToGameKeyEventAction_staticInit(void) {
    DownTouchInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}


GameKeyCompleteMotionGestureInputEvent* DownTouchInputToGameKeyEventAction_getInstance(void) {
        if (DownTouchInputToGameKeyEventAction_instance == NullUtil_getInstance()->NULL_OBJECT) {
            DownTouchInputToGameKeyEventAction_instance = DownTouchInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) DownTouchInputToGameKeyEventAction_instance);
}


void DownTouchInputToGameKeyEventAction_init(DownTouchInputToGameKeyEventAction* this) {
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Down Action", TouchMotionGestureFactory_getInstance()->DOWN, JAVA_CALL(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()), getInputMapping));
}

DownTouchInputToGameKeyEventAction* DownTouchInputToGameKeyEventAction_new(void) {
    DownTouchInputToGameKeyEventAction* this = calloc(1, sizeof(DownTouchInputToGameKeyEventAction));
    DownTouchInputToGameKeyEventAction_init(this);
    return this;
}

