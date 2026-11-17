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
#include "org/allbinary/input/motion/button/ReleaseHelper.h"

typedef struct MultitouchReleaseHelper MultitouchReleaseHelper;
struct MultitouchReleaseHelper {
    ReleaseHelper base;
};


MultitouchReleaseHelper* MultitouchReleaseHelper_new(TouchButtonRecognizer* touchButtonRecognizer);

void MultitouchReleaseHelper_init(MultitouchReleaseHelper* this, TouchButtonRecognizer* touchButtonRecognizer);
void MultitouchReleaseHelper_release(MultitouchReleaseHelper* this, TouchButtonInput* touchButtonInput, int32_t deviceId);


void MultitouchReleaseHelper_init(MultitouchReleaseHelper* this, TouchButtonRecognizer* touchButtonRecognizer) {
        ReleaseHelper_init(&this->base, touchButtonRecognizer);
}

MultitouchReleaseHelper* MultitouchReleaseHelper_new(TouchButtonRecognizer* touchButtonRecognizer) {
    MultitouchReleaseHelper* this = calloc(1, sizeof(MultitouchReleaseHelper));
    MultitouchReleaseHelper_init(this, touchButtonRecognizer);
    return this;
}


// throws Exception
void MultitouchReleaseHelper_release(MultitouchReleaseHelper* this, TouchButtonInput* touchButtonInput, int32_t deviceId) {
        TouchButtonInput* cancelTouchButtonInput = CancelTouchButtonInputFactory_getCancel(CancelTouchButtonInputFactory_getInstance(), touchButtonInput);
        TouchButtonInput* nextTouchButtonInput = nullptr;
        GameKeyEvent* gameKeyEvent = nullptr;
        for (int32_t index = JAVA_CALL(this->touchButtonRecognizer->currentlyPressedTouchButtonSingleton, size) - 1; index >= 0; index--) {
            nextTouchButtonInput = JAVA_CALL(this->touchButtonRecognizer->currentlyPressedTouchButtonSingleton, get, index);
            if (cancelTouchButtonInput == nextTouchButtonInput) {
                gameKeyEvent = TouchButtonInput_getGameKeyEvent(nextTouchButtonInput);
                JAVA_CALL(this->touchButtonRecognizer->upGameKeyEventHandler, fireEvent, gameKeyEvent);
                JAVA_CALL(JAVA_CALL(this->touchButtonRecognizer->upGameKeyEventHandler, getInstanceForDevice, deviceId), fireEvent, gameKeyEvent);
                JAVA_CALL(this->touchButtonRecognizer->currentlyPressedTouchButtonSingleton, removeAt, index);
            }
        }
}

