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
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct BasicTouchInputFactory BasicTouchInputFactory;
struct BasicTouchInputFactory {
    LogUtil* logUtil;
    TouchButtonInput* SPECIAL_BUTTON_SEVEN_TESTING_ONLY;
    TouchButtonInput* SPECIAL_BUTTON_EIGHT_TESTING_ONLY;
    TouchButtonInput* SPECIAL_BUTTON_SIX;
    TouchButtonInput* SPECIAL_BUTTON_FIVE;
    TouchButtonInput* SPECIAL_BUTTON_FOUR;
    TouchButtonInput* SPECIAL_BUTTON_THREE;
    TouchButtonInput* SPECIAL_BUTTON_TWO;
    TouchButtonInput* SPECIAL_BUTTON_ONE;
    TouchButtonInput* UP;
    TouchButtonInput* LEFT;
    TouchButtonInput* RIGHT;
    TouchButtonInput* DOWN;
    TouchButtonInput* NONE;
    bool initialized;
    BasicArrayList* list;
};

static Any* BasicTouchInputFactory_instance;

BasicTouchInputFactory* BasicTouchInputFactory_new(void);
BasicTouchInputFactory* BasicTouchInputFactory_getInstance(void);

void BasicTouchInputFactory_init(BasicTouchInputFactory* this);
void BasicTouchInputFactory_init(BasicTouchInputFactory* this, InputToGameKeyMapping* inputToGameKeyMapping);
void BasicTouchInputFactory_updateAll(BasicTouchInputFactory* this, InputToGameKeyMapping* inputToGameKeyMapping);
void BasicTouchInputFactory_updateAllFromList(BasicTouchInputFactory* this, BasicArrayList* list, InputToGameKeyMapping* inputToGameKeyMapping);
BasicArrayList* BasicTouchInputFactory_getList(BasicTouchInputFactory* this);

// Static fields with runtime initializers: call this once at startup
void BasicTouchInputFactory_staticInit(void) {
    BasicTouchInputFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void BasicTouchInputFactory_initFields(BasicTouchInputFactory* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    
    
    
    
    
    
    
    
    
    
    
    this->initialized = false;
    this->list = BasicArrayListD_new();
}


BasicTouchInputFactory* BasicTouchInputFactory_getInstance(void) {
        if (BasicTouchInputFactory_instance == NullUtil_getInstance()->NULL_OBJECT) {
            BasicTouchInputFactory_instance = BasicTouchInputFactory_new();
        }
        return ((BasicTouchInputFactory*) BasicTouchInputFactory_instance);
}


void BasicTouchInputFactory_init(BasicTouchInputFactory* this) {
    BasicTouchInputFactory_initFields(this);
        int32_t MAX = InputFactory_getInstance()->MAX;
        this->SPECIAL_BUTTON_SEVEN_TESTING_ONLY = TouchButtonInput_new(MAX - 41, "Button 7 - Testing Only May Cross Over Key Values");
        this->SPECIAL_BUTTON_EIGHT_TESTING_ONLY = TouchButtonInput_new(MAX - 42, "Button 8 - Testing Only May Cross Over Key Values");
        this->SPECIAL_BUTTON_SIX = TouchButtonInput_new(MAX - 30, "Button 6");
        this->SPECIAL_BUTTON_FIVE = TouchButtonInput_new(MAX - 31, "Button 5");
        this->SPECIAL_BUTTON_FOUR = TouchButtonInput_new(MAX - 32, "Button 4");
        this->SPECIAL_BUTTON_THREE = TouchButtonInput_new(MAX - 33, "Button 3");
        this->SPECIAL_BUTTON_TWO = TouchButtonInput_new(MAX - 34, "Button 2");
        this->SPECIAL_BUTTON_ONE = TouchButtonInput_new(MAX - 35, "Button 1");
        this->UP = TouchButtonInput_new(MAX - 36, "Up Button");
        this->LEFT = TouchButtonInput_new(MAX - 37, "Left Button");
        this->RIGHT = TouchButtonInput_new(MAX - 38, "Right Button");
        this->DOWN = TouchButtonInput_new(MAX - 39, "Down Button");
        this->NONE = TouchButtonInput_new(MAX - 40, "No Button");
}

BasicTouchInputFactory* BasicTouchInputFactory_new(void) {
    BasicTouchInputFactory* this = calloc(1, sizeof(BasicTouchInputFactory));
    BasicTouchInputFactory_init(this);
    return this;
}


// synchronized
void BasicTouchInputFactory_init(BasicTouchInputFactory* this, InputToGameKeyMapping* inputToGameKeyMapping) {
        if (!this->initialized) {
            this->initialized = true;
            BasicArrayList_add(this->list, this->UP);
            BasicArrayList_add(this->list, this->LEFT);
            BasicArrayList_add(this->list, this->RIGHT);
            BasicArrayList_add(this->list, this->DOWN);
            BasicArrayList_add(this->list, this->SPECIAL_BUTTON_TWO);
            BasicArrayList_add(this->list, this->SPECIAL_BUTTON_FOUR);
            BasicArrayList_add(this->list, this->SPECIAL_BUTTON_THREE);
            BasicArrayList_add(this->list, this->SPECIAL_BUTTON_ONE);
            BasicArrayList_add(this->list, this->SPECIAL_BUTTON_FIVE);
            BasicArrayList_add(this->list, this->SPECIAL_BUTTON_SIX);
            BasicArrayList_add(this->list, this->SPECIAL_BUTTON_SIX);
            BasicArrayList_add(this->list, this->SPECIAL_BUTTON_SEVEN_TESTING_ONLY);
            BasicArrayList_add(this->list, this->SPECIAL_BUTTON_EIGHT_TESTING_ONLY);
            BasicTouchInputFactory_updateAllFromList(this, this->list, inputToGameKeyMapping);
        }
}


void BasicTouchInputFactory_updateAll(BasicTouchInputFactory* this, InputToGameKeyMapping* inputToGameKeyMapping) {
        BasicTouchInputFactory_updateAllFromList(this, this->list, inputToGameKeyMapping);
}


void BasicTouchInputFactory_updateAllFromList(BasicTouchInputFactory* this, BasicArrayList* list, InputToGameKeyMapping* inputToGameKeyMapping) {
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->START_LABEL), appendint, BasicArrayList_size(list)), toString), this, "updateAll");
        TouchButtonInput* touchButtonInput = nullptr;
        for (int32_t index = BasicArrayList_size(list) - 1; index >= 0; index--) {
            touchButtonInput = ((TouchButtonInput*) list->objectArray[index]);
            TouchButtonInput_update(touchButtonInput, inputToGameKeyMapping);
        }
}


BasicArrayList* BasicTouchInputFactory_getList(BasicTouchInputFactory* this) {
        return this->list;
}

