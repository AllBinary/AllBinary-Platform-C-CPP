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

typedef struct InputAutomationModulesData InputAutomationModulesData;
struct InputAutomationModulesData {
    char unused;
};

const char* InputAutomationModulesData_NAME = "INPUT_AUTOMATION_MODULES";

InputAutomationModulesData* InputAutomationModulesData_new(void);

void InputAutomationModulesData_init(InputAutomationModulesData* this);


void InputAutomationModulesData_init(InputAutomationModulesData* this) {
}

InputAutomationModulesData* InputAutomationModulesData_new(void) {
    InputAutomationModulesData* this = calloc(1, sizeof(InputAutomationModulesData));
    InputAutomationModulesData_init(this);
    return this;
}

