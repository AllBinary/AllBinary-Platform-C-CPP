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
// package org.allbinary.input.automation.actions.script.condition

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ColorAtActionScriptConditionData ColorAtActionScriptConditionData;
struct ColorAtActionScriptConditionData {
    char unused;
};

const char* ColorAtActionScriptConditionData_NAME = "COLOR_AT_ACTION_CONDITION_NAME";
const char* ColorAtActionScriptConditionData_LOCATION_X = "COLOR_AT_ACTION_CONDITION_LOCATION_X";
const char* ColorAtActionScriptConditionData_LOCATION_Y = "COLOR_AT_ACTION_CONDITION_LOCATION_Y";
const char* ColorAtActionScriptConditionData_MIN_RED = "COLOR_AT_ACTION_CONDITION_MIN_RED";
const char* ColorAtActionScriptConditionData_MAX_RED = "COLOR_AT_ACTION_CONDITION_MAX_RED";
const char* ColorAtActionScriptConditionData_MIN_GREEN = "COLOR_AT_ACTION_CONDITION_MIN_GREEN";
const char* ColorAtActionScriptConditionData_MAX_GREEN = "COLOR_AT_ACTION_CONDITION_MAX_GREEN";
const char* ColorAtActionScriptConditionData_MIN_BLUE = "COLOR_AT_ACTION_CONDITION_MIN_BLUE";
const char* ColorAtActionScriptConditionData_MAX_BLUE = "COLOR_AT_ACTION_CONDITION_MAX_BLUE";

ColorAtActionScriptConditionData* ColorAtActionScriptConditionData_new(void);

void ColorAtActionScriptConditionData_init(ColorAtActionScriptConditionData* this);


void ColorAtActionScriptConditionData_init(ColorAtActionScriptConditionData* this) {
}

ColorAtActionScriptConditionData* ColorAtActionScriptConditionData_new(void) {
    ColorAtActionScriptConditionData* this = calloc(1, sizeof(ColorAtActionScriptConditionData));
    ColorAtActionScriptConditionData_init(this);
    return this;
}

