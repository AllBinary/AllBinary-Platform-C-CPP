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

typedef struct GenericProfileActionScriptConditionData GenericProfileActionScriptConditionData;
struct GenericProfileActionScriptConditionData {
    char unused;
};

const char* GenericProfileActionScriptConditionData_NAME = "GENERIC_CONFIGURATION_PROFILE_ACTION_IF_NAME";

GenericProfileActionScriptConditionData* GenericProfileActionScriptConditionData_new(void);

void GenericProfileActionScriptConditionData_init(GenericProfileActionScriptConditionData* this);


void GenericProfileActionScriptConditionData_init(GenericProfileActionScriptConditionData* this) {
}

GenericProfileActionScriptConditionData* GenericProfileActionScriptConditionData_new(void) {
    GenericProfileActionScriptConditionData* this = calloc(1, sizeof(GenericProfileActionScriptConditionData));
    GenericProfileActionScriptConditionData_init(this);
    return this;
}

