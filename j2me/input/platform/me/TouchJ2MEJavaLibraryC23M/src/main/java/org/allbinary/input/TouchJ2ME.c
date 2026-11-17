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
// package org.allbinary.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/input/motion/AllMotionRecognizer.h"
#include "org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h"
#include "org/allbinary/input/motion/gesture/observer/GameMotionGestureListener.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureReceiveInterfaceFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

//TouchJ2ME
typedef struct TouchJ2ME TouchJ2ME;
struct TouchJ2ME {
    LogUtil* logUtil;
    int32_t DEVICE_ID;
    AllMotionRecognizer* motionRecognizer;
};


TouchJ2ME* TouchJ2ME_new(void);

void TouchJ2ME_init(TouchJ2ME* this);
void TouchJ2ME_pointerDragged(TouchJ2ME* this, int32_t x, int32_t y);
void TouchJ2ME_pointerPressed(TouchJ2ME* this, int32_t x, int32_t y);
void TouchJ2ME_pointerReleased(TouchJ2ME* this, int32_t x, int32_t y);

static void TouchJ2ME_initFields(TouchJ2ME* this) {
    this->logUtil = LogUtil_getInstance();
    this->DEVICE_ID = 0;
    this->motionRecognizer = AllMotionRecognizer_new();
}


void TouchJ2ME_init(TouchJ2ME* this) {
    TouchJ2ME_initFields(this);
        BasicMotionGesturesHandler* motionGesturesHandler = JAVA_CALL(AllMotionRecognizer_getMotionGestureRecognizer(this->motionRecognizer), getMotionGesturesHandler);
        BasicMotionGesturesHandler_addListenerInterface(motionGesturesHandler, GameMotionGestureListener_new(MotionGestureReceiveInterfaceFactory_getInstance()));
}

TouchJ2ME* TouchJ2ME_new(void) {
    TouchJ2ME* this = calloc(1, sizeof(TouchJ2ME));
    TouchJ2ME_init(this);
    return this;
}


void TouchJ2ME_pointerDragged(TouchJ2ME* this, int32_t x, int32_t y) {
        JAVA_TRY {
            AllMotionRecognizer_processDraggedMotionEvent(this->motionRecognizer, x, y, this->DEVICE_ID, 0);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "pointerDragged", e);
        } JAVA_END_TRY;
}


void TouchJ2ME_pointerPressed(TouchJ2ME* this, int32_t x, int32_t y) {
        JAVA_TRY {
            AllMotionRecognizer_processStartMotionEvent(this->motionRecognizer, x, y, this->DEVICE_ID, 0);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "pointerPressed", e);
        } JAVA_END_TRY;
}


void TouchJ2ME_pointerReleased(TouchJ2ME* this, int32_t x, int32_t y) {
        JAVA_TRY {
            AllMotionRecognizer_processEndMotionEvent(this->motionRecognizer, x, y, this->DEVICE_ID, 0);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "pointerReleased", e);
        } JAVA_END_TRY;
}

