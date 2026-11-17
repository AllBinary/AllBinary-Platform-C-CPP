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

typedef struct DiagonalDownRightTouchInputToGameKeyEventAction DiagonalDownRightTouchInputToGameKeyEventAction;
struct DiagonalDownRightTouchInputToGameKeyEventAction {
    GameKeyCompleteMotionGestureInputEvent base;
};

static Any* DiagonalDownRightTouchInputToGameKeyEventAction_instance;

DiagonalDownRightTouchInputToGameKeyEventAction* DiagonalDownRightTouchInputToGameKeyEventAction_new(void);
GameKeyCompleteMotionGestureInputEvent* DiagonalDownRightTouchInputToGameKeyEventAction_getInstance(void);

void DiagonalDownRightTouchInputToGameKeyEventAction_init(DiagonalDownRightTouchInputToGameKeyEventAction* this);

// Static fields with runtime initializers: call this once at startup
void DiagonalDownRightTouchInputToGameKeyEventAction_staticInit(void) {
    DiagonalDownRightTouchInputToGameKeyEventAction_instance = NullUtil_getInstance()->NULL_OBJECT;
}


GameKeyCompleteMotionGestureInputEvent* DiagonalDownRightTouchInputToGameKeyEventAction_getInstance(void) {
        if (DiagonalDownRightTouchInputToGameKeyEventAction_instance == NullUtil_getInstance()->NULL_OBJECT) {
            DiagonalDownRightTouchInputToGameKeyEventAction_instance = DiagonalDownRightTouchInputToGameKeyEventAction_new();
        }
        return ((GameKeyCompleteMotionGestureInputEvent*) DiagonalDownRightTouchInputToGameKeyEventAction_instance);
}


void DiagonalDownRightTouchInputToGameKeyEventAction_init(DiagonalDownRightTouchInputToGameKeyEventAction* this) {
        GameKeyCompleteMotionGestureInputEvent_init(&this->base, "Diagonal Down Right Action", TouchMotionGestureFactory_getInstance()->DIAGONAL_DOWN_RIGHT, JAVA_CALL(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()), getInputMapping));
}

DiagonalDownRightTouchInputToGameKeyEventAction* DiagonalDownRightTouchInputToGameKeyEventAction_new(void) {
    DiagonalDownRightTouchInputToGameKeyEventAction* this = calloc(1, sizeof(DiagonalDownRightTouchInputToGameKeyEventAction));
    DiagonalDownRightTouchInputToGameKeyEventAction_init(this);
    return this;
}

