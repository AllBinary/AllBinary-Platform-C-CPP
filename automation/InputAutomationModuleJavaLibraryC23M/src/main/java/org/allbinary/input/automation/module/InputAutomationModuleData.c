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
// package org.allbinary.input.automation.module

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct InputAutomationModuleData InputAutomationModuleData;
struct InputAutomationModuleData {
    char unused;
};

const char* InputAutomationModuleData_NAME = "INPUT_AUTOMATION_MODULE";
const char* InputAutomationModuleData_MODULE_NAME_END = " Module";

InputAutomationModuleData* InputAutomationModuleData_new(void);

void InputAutomationModuleData_init(InputAutomationModuleData* this);


void InputAutomationModuleData_init(InputAutomationModuleData* this) {
}

InputAutomationModuleData* InputAutomationModuleData_new(void) {
    InputAutomationModuleData* this = calloc(1, sizeof(InputAutomationModuleData));
    InputAutomationModuleData_init(this);
    return this;
}

