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
// package org.allbinary.input.automation.actions.script.condition.processors

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GenericProfileActionScriptProcessorData GenericProfileActionScriptProcessorData;
struct GenericProfileActionScriptProcessorData {
    char unused;
};

const char* GenericProfileActionScriptProcessorData_NAME = "GENERIC_CONFIGURATION_PROFILE_ACTION_PROCESSOR_NAME";

GenericProfileActionScriptProcessorData* GenericProfileActionScriptProcessorData_new(void);

void GenericProfileActionScriptProcessorData_init(GenericProfileActionScriptProcessorData* this);


void GenericProfileActionScriptProcessorData_init(GenericProfileActionScriptProcessorData* this) {
}

GenericProfileActionScriptProcessorData* GenericProfileActionScriptProcessorData_new(void) {
    GenericProfileActionScriptProcessorData* this = calloc(1, sizeof(GenericProfileActionScriptProcessorData));
    GenericProfileActionScriptProcessorData_init(this);
    return this;
}

