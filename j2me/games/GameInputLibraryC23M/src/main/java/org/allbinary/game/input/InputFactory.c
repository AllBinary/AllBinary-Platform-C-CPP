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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct InputFactory InputFactory;
struct InputFactory {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    const char* KEY_CODE_LABEL;
    const char* DEVICE_ID_LABEL;
    int32_t MAX;
    Input** inputIntegerArray;
    Input* NO_INPUT;
};

static Any* InputFactory_instance;

InputFactory* InputFactory_new(void);
InputFactory* InputFactory_getInstance(void);

void InputFactory_init(InputFactory* this);
void InputFactory_add(InputFactory* this, int32_t id, Input* input);
Input* InputFactory_getInstanceById(InputFactory* this, int32_t id);

// Static fields with runtime initializers: call this once at startup
void InputFactory_staticInit(void) {
    InputFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void InputFactory_initFields(InputFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->KEY_CODE_LABEL = "KeyCode: ";
    this->DEVICE_ID_LABEL = "DeviceId: ";
    this->MAX = SmallIntegerSingletonFactory_getMin(SmallIntegerSingletonFactory_getInstance());
    this->inputIntegerArray = ((Input**) java_array_new(sizeof(Input*), this->MAX));
    this->NO_INPUT = Input_new(0, this->commonStrings->UNKNOWN);
}


InputFactory* InputFactory_getInstance(void) {
        if (InputFactory_instance == NullUtil_getInstance()->NULL_OBJECT) {
            InputFactory_instance = InputFactory_new();
        }
        return ((InputFactory*) InputFactory_instance);
}


void InputFactory_init(InputFactory* this) {
    InputFactory_initFields(this);
        int32_t size = java_array_length(this->inputIntegerArray);
        for (int32_t index = 0; index < size; index++) {
            this->inputIntegerArray[index] = this->NO_INPUT;
        }
}

InputFactory* InputFactory_new(void) {
    InputFactory* this = calloc(1, sizeof(InputFactory));
    InputFactory_init(this);
    return this;
}


void InputFactory_add(InputFactory* this, int32_t id, Input* input) {
        this->inputIntegerArray[id] = input;
}


Input* InputFactory_getInstanceById(InputFactory* this, int32_t id) {
        if (id < 0) {
            id = -id;
        }
        if (id > java_array_length(this->inputIntegerArray)) {
            LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Warning id: "), appendint, id), toString), this, this->commonStrings->GET_INSTANCE);
            return this->NO_INPUT;
        }
        return this->inputIntegerArray[id];
}

