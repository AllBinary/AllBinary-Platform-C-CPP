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
#include "org/allbinary/game/input/event/DownGameKeyEventHandler.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/UpGameKeyEventHandler.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/math/RectangleCollisionUtil.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct TouchButtonRecognizer TouchButtonRecognizer;
struct TouchButtonRecognizer {
    LogUtil* logUtil;
    RectangleCollisionUtil* rectangleCollisionUtil;
    UpGameKeyEventHandler* upGameKeyEventHandler;
    DownGameKeyEventHandler* downGameKeyEventHandler;
    TouchButtonInput* lastPressedTouchButtonInput;
    CurrentlyPressedTouchButtonSingleton* currentlyPressedTouchButtonSingleton;
    ReleaseHelper* releaseHelper;
};


TouchButtonRecognizer* TouchButtonRecognizer_new(void);

void TouchButtonRecognizer_init(TouchButtonRecognizer* this);
static void TouchButtonRecognizer_processRelease(TouchButtonRecognizer* this, TouchButtonInput* touchButtonInput, int32_t deviceId);
bool TouchButtonRecognizer_releaseTouchButtonInput(TouchButtonRecognizer* this, int32_t x, int32_t y, int32_t deviceId);
bool TouchButtonRecognizer_pressTouchButtonInput(TouchButtonRecognizer* this, int32_t x, int32_t y, int32_t deviceId);

static void TouchButtonRecognizer_initFields(TouchButtonRecognizer* this) {
    this->logUtil = LogUtil_getInstance();
    this->rectangleCollisionUtil = RectangleCollisionUtil_getInstance();
    this->upGameKeyEventHandler = UpGameKeyEventHandler_getInstance();
    this->downGameKeyEventHandler = DownGameKeyEventHandler_getInstance();
    this->lastPressedTouchButtonInput = BasicTouchInputFactory_getInstance()->NONE;
    this->currentlyPressedTouchButtonSingleton = CurrentlyPressedTouchButtonSingleton_getInstance();
    this->releaseHelper = nullptr;
}


void TouchButtonRecognizer_init(TouchButtonRecognizer* this) {
    TouchButtonRecognizer_initFields(this);
        if (TouchScreenFactory_isMultiTouch(TouchScreenFactory_getInstance())) {
            this->releaseHelper = MultitouchReleaseHelper_new(this);
        } else {
            this->releaseHelper = ReleaseHelper_new(this);
        }
}

TouchButtonRecognizer* TouchButtonRecognizer_new(void) {
    TouchButtonRecognizer* this = calloc(1, sizeof(TouchButtonRecognizer));
    TouchButtonRecognizer_init(this);
    return this;
}


// throws Exception
static void TouchButtonRecognizer_processRelease(TouchButtonRecognizer* this, TouchButtonInput* touchButtonInput, int32_t deviceId) {
        ReleaseHelper_release(this->releaseHelper, touchButtonInput, deviceId);
        GameKeyEvent* gameKeyEvent = TouchButtonInput_getGameKeyEvent(touchButtonInput);
        UpGameKeyEventHandler_fireEvent(this->upGameKeyEventHandler, gameKeyEvent);
        JAVA_CALL(UpGameKeyEventHandler_getInstanceForDevice(this->upGameKeyEventHandler, deviceId), fireEvent, gameKeyEvent);
        CurrentlyPressedTouchButtonSingleton_remove(this->currentlyPressedTouchButtonSingleton, touchButtonInput);
}


// throws Exception
// synchronized
bool TouchButtonRecognizer_releaseTouchButtonInput(TouchButtonRecognizer* this, int32_t x, int32_t y, int32_t deviceId) {
        TouchButtonInput* touchButtonInput = this->lastPressedTouchButtonInput;
        if (CurrentlyPressedTouchButtonSingleton_contains(this->currentlyPressedTouchButtonSingleton, touchButtonInput)) {
            this->lastPressedTouchButtonInput = BasicTouchInputFactory_getInstance()->NONE;
            TouchButtonRecognizer_processRelease(this, touchButtonInput, deviceId);
            return true;
        } else {
            BasicArrayList* list = TouchButtonFactory_getList(TouchButtonFactory_getInstance());
            Rectangle* rectangle = nullptr;
            GPoint* point = nullptr;
            TouchButton* touchButton = nullptr;
            for (int32_t index = BasicArrayList_size(list) - 1; index >= 0; index--) {
                touchButton = ((TouchButton*) list->objectArray[index]);
                rectangle = TouchButton_getRectangle(touchButton);
                point = Rectangle_getPoint(rectangle);
                if (RectangleCollisionUtil_isInside(this->rectangleCollisionUtil, GPoint_getX(point), GPoint_getY(point), Rectangle_getMaxX(rectangle), Rectangle_getMaxY(rectangle), x, y)) {
                    touchButtonInput = TouchButton_getTouchButtonInput(touchButton);
                    TouchButtonRecognizer_processRelease(this, touchButtonInput, deviceId);
                    return true;
                }
            }
        }
        return false;
}


// throws Exception
// synchronized
bool TouchButtonRecognizer_pressTouchButtonInput(TouchButtonRecognizer* this, int32_t x, int32_t y, int32_t deviceId) {
        BasicArrayList* list = TouchButtonFactory_getList(TouchButtonFactory_getInstance());
        Rectangle* rectangle = nullptr;
        GPoint* point = nullptr;
        TouchButton* touchButton = nullptr;
        TouchButtonInput* touchButtonInput = nullptr;
        GameKeyEvent* gameKeyEvent = nullptr;
        for (int32_t index = BasicArrayList_size(list) - 1; index >= 0; index--) {
            touchButton = ((TouchButton*) list->objectArray[index]);
            rectangle = TouchButton_getRectangle(touchButton);
            point = Rectangle_getPoint(rectangle);
            if (RectangleCollisionUtil_isInside(this->rectangleCollisionUtil, GPoint_getX(point), GPoint_getY(point), Rectangle_getMaxX(rectangle), Rectangle_getMaxY(rectangle), x, y)) {
                touchButtonInput = TouchButton_getTouchButtonInput(touchButton);
                if (!CurrentlyPressedTouchButtonSingleton_contains(this->currentlyPressedTouchButtonSingleton, touchButtonInput)) {
                    ReleaseHelper_release(this->releaseHelper, touchButtonInput, deviceId);
                    this->lastPressedTouchButtonInput = touchButtonInput;
                    CurrentlyPressedTouchButtonSingleton_add(this->currentlyPressedTouchButtonSingleton, touchButtonInput);
                    gameKeyEvent = TouchButtonInput_getGameKeyEvent(touchButtonInput);
                    DownGameKeyEventHandler_fireEvent(this->downGameKeyEventHandler, gameKeyEvent);
                    JAVA_CALL(DownGameKeyEventHandler_getInstanceForDevice(this->downGameKeyEventHandler, deviceId), fireEvent, gameKeyEvent);
                }
                return true;
            }
        }
        return false;
}

