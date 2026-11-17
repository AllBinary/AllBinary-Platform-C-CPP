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
#include "org/allbinary/android/input/motion/AnalogLocationInputProcessor.h"
#include "org/allbinary/game/input/GameInputProcessor.h"
#include "org/allbinary/game/input/GameKeyEventSourceInterface.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#include "org/allbinary/game/input/analog/AnalogLocationInput.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#include "org/allbinary/graphics/CustomGPoint.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct DirectionalAnalogLocationInputProcessor DirectionalAnalogLocationInputProcessor;
struct DirectionalAnalogLocationInputProcessor {
    AnalogLocationInputProcessor base;
    GameKeyEventSourceInterface GameKeyEventSourceInterface_interface;
    LogUtil* logUtil;
    GameInputProcessor** inputProcessorArray;
    GameKeyFactory* gameKeyFactory;
    GameKeyEvent* leftGameKeyEvent;
    GameKeyEvent* rightGameKeyEvent;
    GameKeyEvent* upGameKeyEvent;
    GameKeyEvent* downGameKeyEvent;
    GameKeyEvent* leftTriggerGameKeyEvent;
    GameKeyEvent* rightTriggerGameKeyEvent;
};


DirectionalAnalogLocationInputProcessor* DirectionalAnalogLocationInputProcessor_new(GameInputProcessor** inputProcessorArray);

void DirectionalAnalogLocationInputProcessor_init(DirectionalAnalogLocationInputProcessor* this, GameInputProcessor** inputProcessorArray);
void DirectionalAnalogLocationInputProcessor_process(DirectionalAnalogLocationInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, AnalogLocationInput* analogLocationInput);
int32_t DirectionalAnalogLocationInputProcessor_getSourceId(DirectionalAnalogLocationInputProcessor* this);

static void DirectionalAnalogLocationInputProcessor_initFields(DirectionalAnalogLocationInputProcessor* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->gameKeyFactory = GameKeyFactory_getInstance();
    this->leftGameKeyEvent = GameKeyEvent_NONE;
    this->rightGameKeyEvent = GameKeyEvent_NONE;
    this->upGameKeyEvent = GameKeyEvent_NONE;
    this->downGameKeyEvent = GameKeyEvent_NONE;
    this->leftTriggerGameKeyEvent = GameKeyEvent_NONE;
    this->rightTriggerGameKeyEvent = GameKeyEvent_NONE;
}


void DirectionalAnalogLocationInputProcessor_init(DirectionalAnalogLocationInputProcessor* this, GameInputProcessor** inputProcessorArray) {
    AnalogLocationInputProcessor_init(&this->base);
    DirectionalAnalogLocationInputProcessor_initFields(this);
        this->inputProcessorArray = inputProcessorArray;
        JAVA_TRY {
            this->leftGameKeyEvent = GameKeyEventFactory_getInstanceForInput(GameKeyEventFactory_getInstance(), this, this->gameKeyFactory->LEFT);
            this->rightGameKeyEvent = GameKeyEventFactory_getInstanceForInput(GameKeyEventFactory_getInstance(), this, this->gameKeyFactory->RIGHT);
            this->upGameKeyEvent = GameKeyEventFactory_getInstanceForInput(GameKeyEventFactory_getInstance(), this, this->gameKeyFactory->UP);
            this->downGameKeyEvent = GameKeyEventFactory_getInstanceForInput(GameKeyEventFactory_getInstance(), this, this->gameKeyFactory->DOWN);
            this->leftTriggerGameKeyEvent = GameKeyEventFactory_getInstanceForInput(GameKeyEventFactory_getInstance(), this, this->gameKeyFactory->KEY_NUM0);
            this->rightTriggerGameKeyEvent = GameKeyEventFactory_getInstanceForInput(GameKeyEventFactory_getInstance(), this, this->gameKeyFactory->KEY_NUM5);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, e);
        } JAVA_END_TRY;
}

DirectionalAnalogLocationInputProcessor* DirectionalAnalogLocationInputProcessor_new(GameInputProcessor** inputProcessorArray) {
    DirectionalAnalogLocationInputProcessor* this = calloc(1, sizeof(DirectionalAnalogLocationInputProcessor));
    DirectionalAnalogLocationInputProcessor_init(this, inputProcessorArray);
    return this;
}


void DirectionalAnalogLocationInputProcessor_process(DirectionalAnalogLocationInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, AnalogLocationInput* analogLocationInput) {
        JAVA_TRY {
            CustomGPoint* customGPoint = nullptr;
            customGPoint = AnalogLocationInput_getCustomGPoint(analogLocationInput);
            int32_t x = CustomGPoint_getX(customGPoint);
            int32_t y = CustomGPoint_getY(customGPoint);
            int32_t leftTrigger = AnalogLocationInput_getLeftTrigger(analogLocationInput);
            int32_t rightTrigger = AnalogLocationInput_getRightTrigger(analogLocationInput);
            if (x < 0) {
                JAVA_CALL(this->inputProcessorArray[GameKeyEvent_getKey(this->leftGameKeyEvent)], processAnalog, allbinaryLayerManager, this->leftGameKeyEvent, x);
            } else if (x > 0) {
                JAVA_CALL(this->inputProcessorArray[GameKeyEvent_getKey(this->rightGameKeyEvent)], processAnalog, allbinaryLayerManager, this->rightGameKeyEvent, x);
            }
            if (y < 0) {
                JAVA_CALL(this->inputProcessorArray[GameKeyEvent_getKey(this->downGameKeyEvent)], processAnalog, allbinaryLayerManager, this->downGameKeyEvent, y);
            } else if (y > 0) {
                JAVA_CALL(this->inputProcessorArray[GameKeyEvent_getKey(this->upGameKeyEvent)], processAnalog, allbinaryLayerManager, this->upGameKeyEvent, y);
            }
            if (leftTrigger > 0) {
                JAVA_CALL(this->inputProcessorArray[GameKeyEvent_getKey(this->leftTriggerGameKeyEvent)], processAnalog, allbinaryLayerManager, this->leftTriggerGameKeyEvent, leftTrigger);
            }
            if (rightTrigger > 0) {
                JAVA_CALL(this->inputProcessorArray[GameKeyEvent_getKey(this->rightTriggerGameKeyEvent)], processAnalog, allbinaryLayerManager, this->rightTriggerGameKeyEvent, rightTrigger);
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, "Unable to process analog input", this, commonStrings->PROCESS, e);
        } JAVA_END_TRY;
}


int32_t DirectionalAnalogLocationInputProcessor_getSourceId(DirectionalAnalogLocationInputProcessor* this) {
        return 0;
}

