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
#include "org/allbinary/game/input/CompleteMotionGestureInputEvent.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputEventHandler.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/mapping/InputMappingInterface.h"
#include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/paint/ProcessPaintable.h"
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/time/TimeDelayHelper.h"

typedef struct TouchButtonsPaintableComposite TouchButtonsPaintableComposite;
struct TouchButtonsPaintableComposite {
    ProcessPaintable base;
    CompleteMotionGestureInputEventListenerInterface CompleteMotionGestureInputEventListenerInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    InputMappingInterface* inputMappingInterface;
    TouchButtonsMappingPaintable* touchButtonsPaintable;
    TimeDelayHelper* timeHelper;
    bool released;
    const char* METHOD_NAME;
    const char* RELEASE;
    const char* FAST_REPEAT;
    const char* IGNORE;
};


TouchButtonsPaintableComposite* TouchButtonsPaintableComposite_new(InputMappingInterface* inputMappingInterface, BasicColor* basicColor);

void TouchButtonsPaintableComposite_init(TouchButtonsPaintableComposite* this, InputMappingInterface* inputMappingInterface, BasicColor* basicColor);
void TouchButtonsPaintableComposite_onEvent(TouchButtonsPaintableComposite* this, AllBinaryEventObject* eventObject);
void TouchButtonsPaintableComposite_onCompleteMotionGestureInputEvent(TouchButtonsPaintableComposite* this, CompleteMotionGestureInputEvent* completeMotionGestureInputEvent);
void TouchButtonsPaintableComposite_process(TouchButtonsPaintableComposite* this);

static void TouchButtonsPaintableComposite_initFields(TouchButtonsPaintableComposite* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
    this->timeHelper = TimeDelayHelper_new(250);
    this->released = true;
    this->METHOD_NAME = "onCompleteMotionGestureInputEvent";
    this->RELEASE = "Ignoring: MotionGestureInput Release";
    this->FAST_REPEAT = "Ignoring: MotionGestureInput Repeated To Quickly";
    this->IGNORE = "Ignoring: Until Released";
}


void TouchButtonsPaintableComposite_init(TouchButtonsPaintableComposite* this, InputMappingInterface* inputMappingInterface, BasicColor* basicColor) {
    ProcessPaintable_init(&this->base);
    TouchButtonsPaintableComposite_initFields(this);
        this->inputMappingInterface = inputMappingInterface;
        CompleteMotionGestureInputEventHandler_addListenerInterface(CompleteMotionGestureInputEventHandler_getInstance(), this);
        this->touchButtonsPaintable = TouchButtonsMappingPaintable_new(basicColor);
}

TouchButtonsPaintableComposite* TouchButtonsPaintableComposite_new(InputMappingInterface* inputMappingInterface, BasicColor* basicColor) {
    TouchButtonsPaintableComposite* this = calloc(1, sizeof(TouchButtonsPaintableComposite));
    TouchButtonsPaintableComposite_init(this, inputMappingInterface, basicColor);
    return this;
}


void TouchButtonsPaintableComposite_onEvent(TouchButtonsPaintableComposite* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void TouchButtonsPaintableComposite_onCompleteMotionGestureInputEvent(TouchButtonsPaintableComposite* this, CompleteMotionGestureInputEvent* completeMotionGestureInputEvent) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "onCompleteMotionGestureInputEvent");
            TouchMotionGestureFactory* touchMotionGestureFactory = TouchMotionGestureFactory_getInstance();
            GameKeyCompleteMotionGestureInputEvent* gameKeyCompleteMotionGestureInputEvent = ((GameKeyCompleteMotionGestureInputEvent*) completeMotionGestureInputEvent);
            GameKey* gameKey = GameKeyCompleteMotionGestureInputEvent_getGameKey(gameKeyCompleteMotionGestureInputEvent);
            MotionGestureInput* motionGestureInput = CompleteMotionGestureInputEvent_getMotionGestureInput(completeMotionGestureInputEvent);
            if (motionGestureInput == touchMotionGestureFactory->RELEASED) {
                LogUtil_putF(this->logUtil, this->RELEASE, this, this->METHOD_NAME);
                this->released = true;
                return;
            }
            if (motionGestureInput == TouchMotionGestureFactory_getInstance()->NO_MOTION && !TimeDelayHelper_isTimeTNT(this->timeHelper)) {
                LogUtil_putF(this->logUtil, this->FAST_REPEAT, this, this->METHOD_NAME);
                return;
            }
            if (!this->released) {
                LogUtil_putF(this->logUtil, this->IGNORE, this, this->METHOD_NAME);
                return;
            }
            this->released = false;
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "GameKey: "), append, StringUtil_toString(StringUtil_getInstance(), gameKey)), append, " MotionGestureInput: "), append, StringUtil_toString(StringUtil_getInstance(), motionGestureInput)), toString), this, this->METHOD_NAME);
            InputMappingInterface_processInputMapping(this->inputMappingInterface, gameKey, motionGestureInput);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->METHOD_NAME, e);
        } JAVA_END_TRY;
}


void TouchButtonsPaintableComposite_process(TouchButtonsPaintableComposite* this) {
        CompleteMotionGestureInputEventHandler_removeListener(CompleteMotionGestureInputEventHandler_getInstance(), this);
}

