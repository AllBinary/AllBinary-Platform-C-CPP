/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.logic.system.security.licensing

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct InputAutomationClientInformationFactory InputAutomationClientInformationFactory;
struct InputAutomationClientInformationFactory {
    char unused;
};

static InputAutomationClientInformation* InputAutomationClientInformationFactory_instance;

InputAutomationClientInformationFactory* InputAutomationClientInformationFactory_new(void);
InputAutomationClientInformation* InputAutomationClientInformationFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void InputAutomationClientInformationFactory_staticInit(void) {
    InputAutomationClientInformationFactory_instance = InputAutomationClientInformation_new();
}

void InputAutomationClientInformationFactory_init(InputAutomationClientInformationFactory* this) {
}

InputAutomationClientInformationFactory* InputAutomationClientInformationFactory_new(void) {
    InputAutomationClientInformationFactory* this = calloc(1, sizeof(InputAutomationClientInformationFactory));
    InputAutomationClientInformationFactory_init(this);
    return this;
}


InputAutomationClientInformation* InputAutomationClientInformationFactory_getInstance(void) {
        return InputAutomationClientInformationFactory_instance;
}

