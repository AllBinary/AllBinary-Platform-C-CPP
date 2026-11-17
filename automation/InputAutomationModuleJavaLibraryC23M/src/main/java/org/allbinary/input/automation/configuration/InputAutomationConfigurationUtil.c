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
// package org.allbinary.input.automation.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h"
#include "org/allbinary/input/automation/module/configuration/InputAutomationModuleConfiguration.h"

typedef struct InputAutomationConfigurationUtil InputAutomationConfigurationUtil;
struct InputAutomationConfigurationUtil {
    char unused;
};


InputAutomationConfigurationUtil* InputAutomationConfigurationUtil_new(void);

void InputAutomationConfigurationUtil_init(InputAutomationConfigurationUtil* this);
InputAutomationConfigurationModuleChangeEvent* InputAutomationConfigurationUtil_getChangeEvent(InputAutomationModuleFactoryInterface* inputAutomationModuleInterface);


void InputAutomationConfigurationUtil_init(InputAutomationConfigurationUtil* this) {
}

InputAutomationConfigurationUtil* InputAutomationConfigurationUtil_new(void) {
    InputAutomationConfigurationUtil* this = calloc(1, sizeof(InputAutomationConfigurationUtil));
    InputAutomationConfigurationUtil_init(this);
    return this;
}


// throws Exception
InputAutomationConfigurationModuleChangeEvent* InputAutomationConfigurationUtil_getChangeEvent(InputAutomationModuleFactoryInterface* inputAutomationModuleInterface) {
        InputAutomationModuleConfiguration* inputAutomationModuleConfiguration = InputAutomationModuleConfiguration_new(inputAutomationModuleInterface);
        InputAutomationConfigurationModuleChangeEvent* inputAutomationConfigurationModuleChangeEvent = InputAutomationConfigurationModuleChangeEvent_new(inputAutomationModuleConfiguration);
        return inputAutomationConfigurationModuleChangeEvent;
}

