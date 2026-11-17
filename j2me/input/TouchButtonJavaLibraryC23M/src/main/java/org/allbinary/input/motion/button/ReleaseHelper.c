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
// package org.allbinary.input.motion.button

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"

typedef struct ReleaseHelper ReleaseHelper;
struct ReleaseHelper {
    TouchButtonRecognizer* touchButtonRecognizer;
};


ReleaseHelper* ReleaseHelper_new(TouchButtonRecognizer* touchButtonRecognizer);

void ReleaseHelper_init(ReleaseHelper* this, TouchButtonRecognizer* touchButtonRecognizer);
void ReleaseHelper_release(ReleaseHelper* this, TouchButtonInput* touchButtonInput, int32_t deviceId);

static void ReleaseHelper_initFields(ReleaseHelper* this) {
    
}


void ReleaseHelper_init(ReleaseHelper* this, TouchButtonRecognizer* touchButtonRecognizer) {
    ReleaseHelper_initFields(this);
        this->touchButtonRecognizer = touchButtonRecognizer;
}

ReleaseHelper* ReleaseHelper_new(TouchButtonRecognizer* touchButtonRecognizer) {
    ReleaseHelper* this = calloc(1, sizeof(ReleaseHelper));
    ReleaseHelper_init(this, touchButtonRecognizer);
    return this;
}


// throws Exception
void ReleaseHelper_release(ReleaseHelper* this, TouchButtonInput* touchButtonInput, int32_t deviceId) {
        TouchButtonInput* nextTouchButtonInput = nullptr;
        GameKeyEvent* gameKeyEvent = nullptr;
        for (int32_t index = JAVA_CALL(this->touchButtonRecognizer->currentlyPressedTouchButtonSingleton, size) - 1; index >= 0; index--) {
            nextTouchButtonInput = JAVA_CALL(this->touchButtonRecognizer->currentlyPressedTouchButtonSingleton, get, index);
            gameKeyEvent = TouchButtonInput_getGameKeyEvent(nextTouchButtonInput);
            JAVA_CALL(this->touchButtonRecognizer->upGameKeyEventHandler, fireEvent, gameKeyEvent);
            JAVA_CALL(JAVA_CALL(this->touchButtonRecognizer->upGameKeyEventHandler, getInstanceForDevice, deviceId), fireEvent, gameKeyEvent);
            JAVA_CALL(this->touchButtonRecognizer->currentlyPressedTouchButtonSingleton, removeAt, index);
        }
}

