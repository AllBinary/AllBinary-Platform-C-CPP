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
#include "org/allbinary/input/automation/module/configuration/InputAutomationModuleConfiguration.h"

typedef struct InputAutomationConfigurationModuleChangeEvent InputAutomationConfigurationModuleChangeEvent;
struct InputAutomationConfigurationModuleChangeEvent {
    InputAutomationModuleConfiguration* inputAutomationModuleConfiguration;
};


InputAutomationConfigurationModuleChangeEvent* InputAutomationConfigurationModuleChangeEvent_new(InputAutomationModuleConfiguration* inputAutomationModuleConfiguration);

void InputAutomationConfigurationModuleChangeEvent_init(InputAutomationConfigurationModuleChangeEvent* this, InputAutomationModuleConfiguration* inputAutomationModuleConfiguration);
InputAutomationModuleConfiguration* InputAutomationConfigurationModuleChangeEvent_getInputAutomationModuleConfiguration(InputAutomationConfigurationModuleChangeEvent* this);
static void InputAutomationConfigurationModuleChangeEvent_setInputAutomationModuleConfiguration(InputAutomationConfigurationModuleChangeEvent* this, InputAutomationModuleConfiguration* inputAutomationModuleConfiguration);

static void InputAutomationConfigurationModuleChangeEvent_initFields(InputAutomationConfigurationModuleChangeEvent* this) {
    this->inputAutomationModuleConfiguration = nullptr;
}


void InputAutomationConfigurationModuleChangeEvent_init(InputAutomationConfigurationModuleChangeEvent* this, InputAutomationModuleConfiguration* inputAutomationModuleConfiguration) {
    InputAutomationConfigurationModuleChangeEvent_initFields(this);
        InputAutomationConfigurationModuleChangeEvent_setInputAutomationModuleConfiguration(this, inputAutomationModuleConfiguration);
}

InputAutomationConfigurationModuleChangeEvent* InputAutomationConfigurationModuleChangeEvent_new(InputAutomationModuleConfiguration* inputAutomationModuleConfiguration) {
    InputAutomationConfigurationModuleChangeEvent* this = calloc(1, sizeof(InputAutomationConfigurationModuleChangeEvent));
    InputAutomationConfigurationModuleChangeEvent_init(this, inputAutomationModuleConfiguration);
    return this;
}


InputAutomationModuleConfiguration* InputAutomationConfigurationModuleChangeEvent_getInputAutomationModuleConfiguration(InputAutomationConfigurationModuleChangeEvent* this) {
        return this->inputAutomationModuleConfiguration;
}


static void InputAutomationConfigurationModuleChangeEvent_setInputAutomationModuleConfiguration(InputAutomationConfigurationModuleChangeEvent* this, InputAutomationModuleConfiguration* inputAutomationModuleConfiguration) {
        this->inputAutomationModuleConfiguration = inputAutomationModuleConfiguration;
}

