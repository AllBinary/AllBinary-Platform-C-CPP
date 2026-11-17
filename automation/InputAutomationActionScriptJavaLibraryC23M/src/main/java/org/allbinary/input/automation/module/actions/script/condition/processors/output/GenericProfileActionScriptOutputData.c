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
// package org.allbinary.input.automation.module.actions.script.condition.processors.output

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GenericProfileActionScriptOutputData GenericProfileActionScriptOutputData;
struct GenericProfileActionScriptOutputData {
    char unused;
};

const char* GenericProfileActionScriptOutputData_NAME = "GENERIC_CONFIGURATION_PROFILE_ACTION_OUTPUT_NAME";
const char* GenericProfileActionScriptOutputData_TYPE = "GENERIC_CONFIGURATION_PROFILE_ACTION_OUTPUT_TYPE";

GenericProfileActionScriptOutputData* GenericProfileActionScriptOutputData_new(void);

void GenericProfileActionScriptOutputData_init(GenericProfileActionScriptOutputData* this);


void GenericProfileActionScriptOutputData_init(GenericProfileActionScriptOutputData* this) {
}

GenericProfileActionScriptOutputData* GenericProfileActionScriptOutputData_new(void) {
    GenericProfileActionScriptOutputData* this = calloc(1, sizeof(GenericProfileActionScriptOutputData));
    GenericProfileActionScriptOutputData_init(this);
    return this;
}

