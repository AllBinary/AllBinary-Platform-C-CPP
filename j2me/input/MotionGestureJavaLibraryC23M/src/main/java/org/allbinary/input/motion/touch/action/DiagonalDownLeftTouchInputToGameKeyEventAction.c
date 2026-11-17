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

typedef struct DiagonalDownLeftTouchInputToGameKeyEventAction DiagonalDownLeftTouchInputToGameKeyEventAction;
struct DiagonalDownLeftTouchInputToGameKeyEventAction {
    GameKeyCompleteMotionGestureInputEvent base;
};

static Any* DiagonalDownLeftTouchInputToGameKeyEventAction_instance;

DiagonalDownLeftTouchInputToGameKeyEventAction* DiagonalDownLeftTouchInputToGameKeyEventAction_new(void);
GameKeyCompleteMotionGestureInputEvent* DiagonalDownLeftTouchInputToGameKeyEventAction_getInstance(void);

void DiagonalDownLeftTouchInputToGameKeyEventAction_init(DiagonalDownLeftTouchInputToGameKeyEventAction* this);

// Static fields with runtime initializers: call this once at startup
void DiagonalDownLeftTouchInputToGameKeyEventAction_staticInit(void) {
    DiagonalDownLeftTouchInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}


GameKeyCompleteMotionGestureInputEvent* DiagonalDownLeftTouchInputToGameKeyEventAction_getInstance(void) {
        if (DiagonalDownLeftTouchInputToGameKeyEventAction_instance == NullUtil_getInstance()->NULL_OBJECT) {
            DiagonalDownLeftTouchInputToGameKeyEventAction_instance = DiagonalDownLeftTouchInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) DiagonalDownLeftTouchInputToGameKeyEventAction_instance);
}


void DiagonalDownLeftTouchInputToGameKeyEventAction_init(DiagonalDownLeftTouchInputToGameKeyEventAction* this) {
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Diagonal Down Left Action", TouchMotionGestureFactory_getInstance()->DIAGONAL_DOWN_LEFT, JAVA_CALL(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()), getInputMapping));
}

DiagonalDownLeftTouchInputToGameKeyEventAction* DiagonalDownLeftTouchInputToGameKeyEventAction_new(void) {
    DiagonalDownLeftTouchInputToGameKeyEventAction* this = calloc(1, sizeof(DiagonalDownLeftTouchInputToGameKeyEventAction));
    DiagonalDownLeftTouchInputToGameKeyEventAction_init(this);
    return this;
}

