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
// package org.allbinary.input.automation.actions.script.condition.processors.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct KeyboardActionScriptInputData KeyboardActionScriptInputData;
struct KeyboardActionScriptInputData {
    char unused;
};

const char* KeyboardActionScriptInputData_NAME = "KEY_ACTION_INPUT_NAME";
const char* KeyboardActionScriptInputData_KEY = "KEY_ACTION_INPUT_KEY";
const char* KeyboardActionScriptInputData_DELAY_BETWEEN_KEYS = "KEY_ACTION_INPUT_DELAY_BETWEEN_KEYS";
const char* KeyboardActionScriptInputData_PRESS = "KEY_ACTION_INPUT_PRESS";
const char* KeyboardActionScriptInputData_RELEASE = "KEY_ACTION_INPUT_RELEASE";

KeyboardActionScriptInputData* KeyboardActionScriptInputData_new(void);

void KeyboardActionScriptInputData_init(KeyboardActionScriptInputData* this);


void KeyboardActionScriptInputData_init(KeyboardActionScriptInputData* this) {
}

KeyboardActionScriptInputData* KeyboardActionScriptInputData_new(void) {
    KeyboardActionScriptInputData* this = calloc(1, sizeof(KeyboardActionScriptInputData));
    KeyboardActionScriptInputData_init(this);
    return this;
}

