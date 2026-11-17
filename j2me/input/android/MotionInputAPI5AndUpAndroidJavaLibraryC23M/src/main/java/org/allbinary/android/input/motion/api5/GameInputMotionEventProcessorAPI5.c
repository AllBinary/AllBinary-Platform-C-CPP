/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2009 AllBinary
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
// package org.allbinary.android.input.motion.api5

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "android/view/MotionEvent.h"
#include "org/allbinary/android/input/motion/BaseGameInputMotionEventProcessor.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/displayable/ScalableListener.h"
#include "org/allbinary/input/motion/AllMotionRecognizer.h"
#include "org/allbinary/input/motion/MotionRecognizer.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"

typedef struct GameInputMotionEventProcessorAPI5 GameInputMotionEventProcessorAPI5;
struct GameInputMotionEventProcessorAPI5 {
    BaseGameInputMotionEventProcessor base;
    LogUtil* logUtil;
    DisplayInfoSingleton* displayInfo;
    MotionRecognizer** motionRecognizerArray;
    int32_t TOTAL_MINUS_ONE;
};

static Any* GameInputMotionEventProcessorAPI5_instance;

GameInputMotionEventProcessorAPI5* GameInputMotionEventProcessorAPI5_new(void);
GameInputMotionEventProcessorAPI5* GameInputMotionEventProcessorAPI5_getInstance(void);

void GameInputMotionEventProcessorAPI5_init(GameInputMotionEventProcessorAPI5* this);
static bool GameInputMotionEventProcessorAPI5_isValid(GameInputMotionEventProcessorAPI5* this, int32_t pointerId);
void GameInputMotionEventProcessorAPI5_process(GameInputMotionEventProcessorAPI5* this, MotionEvent* motionEvent);

// Static fields with runtime initializers: call this once at startup
void GameInputMotionEventProcessorAPI5_staticInit(void) {
    GameInputMotionEventProcessorAPI5_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void GameInputMotionEventProcessorAPI5_initFields(GameInputMotionEventProcessorAPI5* this) {
    this->logUtil = LogUtil_getInstance();
    this->displayInfo = DisplayInfoSingleton_getInstance();
    
    
}


GameInputMotionEventProcessorAPI5* GameInputMotionEventProcessorAPI5_getInstance(void) {
        if (GameInputMotionEventProcessorAPI5_instance == NullUtil_getInstance()->NULL_OBJECT) {
            GameInputMotionEventProcessorAPI5_instance = GameInputMotionEventProcessorAPI5_new();
        }
        return ((GameInputMotionEventProcessorAPI5*) GameInputMotionEventProcessorAPI5_instance);
}


void GameInputMotionEventProcessorAPI5_init(GameInputMotionEventProcessorAPI5* this) {
    BaseGameInputMotionEventProcessor_init(&this->base);
    GameInputMotionEventProcessorAPI5_initFields(this);
        int32_t size = GameInputMotionInfoAPI5_getInstance()->MAX_POINTERS;
        this->motionRecognizerArray = ((AllMotionRecognizer**) java_array_new(sizeof(AllMotionRecognizer*), size));
        this->TOTAL_MINUS_ONE = size;
        for (int32_t index = 0; index < size; index++) {
            this->motionRecognizerArray[index] = AllMotionRecognizer_new();
        }
}

GameInputMotionEventProcessorAPI5* GameInputMotionEventProcessorAPI5_new(void) {
    GameInputMotionEventProcessorAPI5* this = calloc(1, sizeof(GameInputMotionEventProcessorAPI5));
    GameInputMotionEventProcessorAPI5_init(this);
    return this;
}


static bool GameInputMotionEventProcessorAPI5_isValid(GameInputMotionEventProcessorAPI5* this, int32_t pointerId) {
        if (pointerId > this->TOTAL_MINUS_ONE) {
            const char* message = "Log that the pointer Ids are not what would be expected or Android has more than what I set my stuff to support pointerId: ";
            ForcedLogUtil_log(java_concat(message, java_string_of(pointerId)), this);
            return false;
        } else {
            return true;
        }
}


void GameInputMotionEventProcessorAPI5_process(GameInputMotionEventProcessorAPI5* this, MotionEvent* motionEvent) {
        JAVA_TRY {
            int32_t action = MotionEvent_getAction(motionEvent);
            int32_t total = java_array_length(this->motionRecognizerArray);
            if (total > MotionEvent_getPointerCount(motionEvent)) {
                total = MotionEvent_getPointerCount(motionEvent);
            } else {
                const char* message = "Log that Android has more pointers than I have expected so increase it motionEvent.getPointerCount(): ";
                ForcedLogUtil_log(java_concat(message, java_string_of(MotionEvent_getPointerCount(motionEvent))), this);
            }
            int32_t totalMinusOne = total - 1;
            if (action == MotionEvent_ACTION_DOWN) {
                for (int32_t pointerIndex = totalMinusOne; pointerIndex >= 0; pointerIndex--) {
                    int32_t pointerId = MotionEvent_getPointerId(motionEvent, pointerIndex);
                    if (GameInputMotionEventProcessorAPI5_isValid(this, pointerId)) {
                        ScalableListener* scalableListener = DisplayInfoSingleton_getScalableListener(this->displayInfo);
                        int32_t x = ((int32_t) ((MotionEvent_getX(motionEvent, pointerIndex) - DisplayInfoSingleton_getLeft(this->displayInfo)) / ScalableListener_getRatio(scalableListener, DisplayInfoSingleton_getRatio(this->displayInfo))));
                        int32_t y = ((int32_t) ((MotionEvent_getY(motionEvent, pointerIndex) - DisplayInfoSingleton_getTop(this->displayInfo)) / ScalableListener_getRatio(scalableListener, DisplayInfoSingleton_getRatio(this->displayInfo))));
                        JAVA_CALL(this->motionRecognizerArray[pointerId], processStartMotionEvent, x, y, MotionEvent_getDeviceId(motionEvent), 0);
                    }
                }
            } else if (action == MotionEvent_ACTION_UP || action == MotionEvent_ACTION_CANCEL) {
                for (int32_t pointerIndex = totalMinusOne; pointerIndex >= 0; pointerIndex--) {
                    int32_t pointerId = MotionEvent_getPointerId(motionEvent, pointerIndex);
                    if (GameInputMotionEventProcessorAPI5_isValid(this, pointerId)) {
                        ScalableListener* scalableListener = DisplayInfoSingleton_getScalableListener(this->displayInfo);
                        int32_t x = ((int32_t) ((MotionEvent_getX(motionEvent, pointerIndex) - DisplayInfoSingleton_getLeft(this->displayInfo)) / ScalableListener_getRatio(scalableListener, DisplayInfoSingleton_getRatio(this->displayInfo))));
                        int32_t y = ((int32_t) ((MotionEvent_getY(motionEvent, pointerIndex) - DisplayInfoSingleton_getTop(this->displayInfo)) / ScalableListener_getRatio(scalableListener, DisplayInfoSingleton_getRatio(this->displayInfo))));
                        JAVA_CALL(this->motionRecognizerArray[pointerId], processEndMotionEvent, x, y, MotionEvent_getDeviceId(motionEvent), 0);
                    }
                }
            } else if (action == MotionEvent_ACTION_MOVE) {
                for (int32_t pointerIndex = totalMinusOne; pointerIndex >= 0; pointerIndex--) {
                    int32_t pointerId = MotionEvent_getPointerId(motionEvent, pointerIndex);
                    if (GameInputMotionEventProcessorAPI5_isValid(this, pointerId)) {
                        ScalableListener* scalableListener = DisplayInfoSingleton_getScalableListener(this->displayInfo);
                        int32_t x = ((int32_t) ((MotionEvent_getX(motionEvent, pointerIndex) - DisplayInfoSingleton_getLeft(this->displayInfo)) / ScalableListener_getRatio(scalableListener, DisplayInfoSingleton_getRatio(this->displayInfo))));
                        int32_t y = ((int32_t) ((MotionEvent_getY(motionEvent, pointerIndex) - DisplayInfoSingleton_getTop(this->displayInfo)) / ScalableListener_getRatio(scalableListener, DisplayInfoSingleton_getRatio(this->displayInfo))));
                        JAVA_CALL(this->motionRecognizerArray[pointerId], processDraggedMotionEvent, x, y, MotionEvent_getDeviceId(motionEvent), 0);
                    }
                }
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, e);
        } JAVA_END_TRY;
}

