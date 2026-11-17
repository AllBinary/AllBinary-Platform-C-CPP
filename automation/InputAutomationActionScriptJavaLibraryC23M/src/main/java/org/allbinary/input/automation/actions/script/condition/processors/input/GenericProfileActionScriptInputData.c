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

typedef struct GenericProfileActionScriptInputData GenericProfileActionScriptInputData;
struct GenericProfileActionScriptInputData {
    char unused;
};

const char* GenericProfileActionScriptInputData_NAME = "GENERIC_CONFIGURATION_PROFILE_ACTION_INPUT_NAME";
const char* GenericProfileActionScriptInputData_TYPE = "GENERIC_CONFIGURATION_PROFILE_ACTION_INPUT_TYPE";
const char* GenericProfileActionScriptInputData_DELAY = "GENERIC_CONFIGURATION_PROFILE_ACTION_INPUT_DELAY";

GenericProfileActionScriptInputData* GenericProfileActionScriptInputData_new(void);

void GenericProfileActionScriptInputData_init(GenericProfileActionScriptInputData* this);


void GenericProfileActionScriptInputData_init(GenericProfileActionScriptInputData* this) {
}

GenericProfileActionScriptInputData* GenericProfileActionScriptInputData_new(void) {
    GenericProfileActionScriptInputData* this = calloc(1, sizeof(GenericProfileActionScriptInputData));
    GenericProfileActionScriptInputData_init(this);
    return this;
}

