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

typedef struct AlwaysActionScriptConditionData AlwaysActionScriptConditionData;
struct AlwaysActionScriptConditionData {
    char unused;
};

const char* AlwaysActionScriptConditionData_NAME = "ALWAYS_ACTION_CONDITION_NAME";
const char* AlwaysActionScriptConditionData_IS_ON = "ALWAYS_ACTION_CONDITION_IS_ON";

AlwaysActionScriptConditionData* AlwaysActionScriptConditionData_new(void);

void AlwaysActionScriptConditionData_init(AlwaysActionScriptConditionData* this);


void AlwaysActionScriptConditionData_init(AlwaysActionScriptConditionData* this) {
}

AlwaysActionScriptConditionData* AlwaysActionScriptConditionData_new(void) {
    AlwaysActionScriptConditionData* this = calloc(1, sizeof(AlwaysActionScriptConditionData));
    AlwaysActionScriptConditionData_init(this);
    return this;
}

