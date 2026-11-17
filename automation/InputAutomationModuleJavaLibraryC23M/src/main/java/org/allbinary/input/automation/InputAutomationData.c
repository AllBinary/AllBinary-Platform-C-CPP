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
// package org.allbinary.input.automation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct InputAutomationData InputAutomationData;
struct InputAutomationData {
    char unused;
};

const char* InputAutomationData_NAME = "INPUT_AUTOMATION";
const char* InputAutomationData_INSTALLATION = "INPUT_AUTOMATION_INSTALLATION";

InputAutomationData* InputAutomationData_new(void);

void InputAutomationData_init(InputAutomationData* this);


void InputAutomationData_init(InputAutomationData* this) {
}

InputAutomationData* InputAutomationData_new(void) {
    InputAutomationData* this = calloc(1, sizeof(InputAutomationData));
    InputAutomationData_init(this);
    return this;
}

