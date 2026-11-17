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
// package org.allbinary.input.motion

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/input/motion/gesture/configuration/MotionGestureConfiguration.h"
#include "org/allbinary/input/motion/gesture/configuration/MotionGestureConfigurationFactory.h"
#include "org/allbinary/input/motion/touch/action/DiagonalDownLeftTouchInputToGameKeyEventAction.h"
#include "org/allbinary/input/motion/touch/action/DiagonalDownRightTouchInputToGameKeyEventAction.h"
#include "org/allbinary/input/motion/touch/action/DiagonalUpLeftTouchInputToGameKeyEventAction.h"
#include "org/allbinary/input/motion/touch/action/DiagonalUpRightTouchInputToGameKeyEventAction.h"
#include "org/allbinary/input/motion/touch/action/DownTouchInputToGameKeyEventAction.h"
#include "org/allbinary/input/motion/touch/action/LeftTouchInputToGameKeyEventAction.h"
#include "org/allbinary/input/motion/touch/action/ReleaseTouchInputToGameKeyEventAction.h"
#include "org/allbinary/input/motion/touch/action/RightTouchInputToGameKeyEventAction.h"
#include "org/allbinary/input/motion/touch/action/UpTouchInputToGameKeyEventAction.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct CompleteMotionGestureInputToGameMotionGestureInput CompleteMotionGestureInputToGameMotionGestureInput;
struct CompleteMotionGestureInputToGameMotionGestureInput {
    LogUtil* logUtil;
};

static CompleteMotionGestureInputToGameMotionGestureInput* CompleteMotionGestureInputToGameMotionGestureInput_instance;

CompleteMotionGestureInputToGameMotionGestureInput* CompleteMotionGestureInputToGameMotionGestureInput_new(void);
CompleteMotionGestureInputToGameMotionGestureInput* CompleteMotionGestureInputToGameMotionGestureInput_getInstance(void);
void CompleteMotionGestureInputToGameMotionGestureInput_init(CompleteMotionGestureInputToGameMotionGestureInput* this);

// Static fields with runtime initializers: call this once at startup
void CompleteMotionGestureInputToGameMotionGestureInput_staticInit(void) {
    CompleteMotionGestureInputToGameMotionGestureInput_instance = CompleteMotionGestureInputToGameMotionGestureInput_new();
}

static void CompleteMotionGestureInputToGameMotionGestureInput_initFields(CompleteMotionGestureInputToGameMotionGestureInput* this) {
    this->logUtil = LogUtil_getInstance();
}

void CompleteMotionGestureInputToGameMotionGestureInput_init(CompleteMotionGestureInputToGameMotionGestureInput* this) {
    CompleteMotionGestureInputToGameMotionGestureInput_initFields(this);
}

CompleteMotionGestureInputToGameMotionGestureInput* CompleteMotionGestureInputToGameMotionGestureInput_new(void) {
    CompleteMotionGestureInputToGameMotionGestureInput* this = calloc(1, sizeof(CompleteMotionGestureInputToGameMotionGestureInput));
    CompleteMotionGestureInputToGameMotionGestureInput_init(this);
    return this;
}


CompleteMotionGestureInputToGameMotionGestureInput* CompleteMotionGestureInputToGameMotionGestureInput_getInstance(void) {
        return CompleteMotionGestureInputToGameMotionGestureInput_instance;
}


void CompleteMotionGestureInputToGameMotionGestureInput_init(CompleteMotionGestureInputToGameMotionGestureInput* this) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        JAVA_TRY {
            PreLogUtil_put("Compound Motion Gestures", this, commonStrings->INIT);
            MotionGestureConfiguration* motionGestureConfiguration = MotionGestureConfigurationFactory_getInstance();
            TouchMotionGestureFactory* touchMotionGestureFactory = TouchMotionGestureFactory_getInstance();
            BasicArrayList* list = BasicArrayListD_new();
            BasicArrayList_add(list, touchMotionGestureFactory->DIAGONAL_DOWN_LEFT);
            MotionGestureConfiguration_addMotionGestureAction(motionGestureConfiguration, list, DiagonalDownLeftTouchInputToGameKeyEventAction_getInstance());
            list = BasicArrayListD_new();
            BasicArrayList_add(list, touchMotionGestureFactory->DIAGONAL_DOWN_RIGHT);
            MotionGestureConfiguration_addMotionGestureAction(motionGestureConfiguration, list, DiagonalDownRightTouchInputToGameKeyEventAction_getInstance());
            list = BasicArrayListD_new();
            BasicArrayList_add(list, touchMotionGestureFactory->DIAGONAL_UP_LEFT);
            MotionGestureConfiguration_addMotionGestureAction(motionGestureConfiguration, list, DiagonalUpLeftTouchInputToGameKeyEventAction_getInstance());
            list = BasicArrayListD_new();
            BasicArrayList_add(list, touchMotionGestureFactory->DIAGONAL_UP_RIGHT);
            MotionGestureConfiguration_addMotionGestureAction(motionGestureConfiguration, list, DiagonalUpRightTouchInputToGameKeyEventAction_getInstance());
            list = BasicArrayListD_new();
            BasicArrayList_add(list, touchMotionGestureFactory->LEFT);
            MotionGestureConfiguration_addMotionGestureAction(motionGestureConfiguration, list, LeftTouchInputToGameKeyEventAction_getInstance());
            list = BasicArrayListD_new();
            BasicArrayList_add(list, touchMotionGestureFactory->RIGHT);
            MotionGestureConfiguration_addMotionGestureAction(motionGestureConfiguration, list, RightTouchInputToGameKeyEventAction_getInstance());
            list = BasicArrayListD_new();
            BasicArrayList_add(list, touchMotionGestureFactory->DOWN);
            MotionGestureConfiguration_addMotionGestureAction(motionGestureConfiguration, list, DownTouchInputToGameKeyEventAction_getInstance());
            list = BasicArrayListD_new();
            BasicArrayList_add(list, touchMotionGestureFactory->UP);
            MotionGestureConfiguration_addMotionGestureAction(motionGestureConfiguration, list, UpTouchInputToGameKeyEventAction_getInstance());
            list = BasicArrayListD_new();
            BasicArrayList_add(list, touchMotionGestureFactory->RELEASED);
            MotionGestureConfiguration_addMotionGestureAction(motionGestureConfiguration, list, ReleaseTouchInputToGameKeyEventAction_getInstance());
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->INIT, e);
        } JAVA_END_TRY;
}

