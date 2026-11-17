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
// package bundle.input.automation.module

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h"
#include "bundle/input/automation/module/InputAutomationModuleServiceInterface.h"

typedef struct InputAutomationModuleService InputAutomationModuleService;
struct InputAutomationModuleService {
    InputAutomationModuleServiceInterface InputAutomationModuleServiceInterface_interface;
    InputAutomationModuleFactoryInterface** inputAutomationModuleInterfaceArray;
};


InputAutomationModuleService* InputAutomationModuleService_new(InputAutomationModuleFactoryInterface** inputAutomationModuleInterfaceArray);

void InputAutomationModuleService_init(InputAutomationModuleService* this, InputAutomationModuleFactoryInterface** inputAutomationModuleInterfaceArray);
InputAutomationModuleFactoryInterface** InputAutomationModuleService_getInputAutomationModuleInterfaceArray(InputAutomationModuleService* this);
void InputAutomationModuleService_setInputAutomationModuleInterfaceArray(InputAutomationModuleService* this, InputAutomationModuleFactoryInterface** inputAutomationModuleInterfaceArray);

static void InputAutomationModuleService_initFields(InputAutomationModuleService* this) {
    this->inputAutomationModuleInterfaceArray = nullptr;
}


void InputAutomationModuleService_init(InputAutomationModuleService* this, InputAutomationModuleFactoryInterface** inputAutomationModuleInterfaceArray) {
    InputAutomationModuleService_initFields(this);
        InputAutomationModuleService_setInputAutomationModuleInterfaceArray(this, inputAutomationModuleInterfaceArray);
}

InputAutomationModuleService* InputAutomationModuleService_new(InputAutomationModuleFactoryInterface** inputAutomationModuleInterfaceArray) {
    InputAutomationModuleService* this = calloc(1, sizeof(InputAutomationModuleService));
    InputAutomationModuleService_init(this, inputAutomationModuleInterfaceArray);
    return this;
}


InputAutomationModuleFactoryInterface** InputAutomationModuleService_getInputAutomationModuleInterfaceArray(InputAutomationModuleService* this) {
        return this->inputAutomationModuleInterfaceArray;
}


void InputAutomationModuleService_setInputAutomationModuleInterfaceArray(InputAutomationModuleService* this, InputAutomationModuleFactoryInterface** inputAutomationModuleInterfaceArray) {
        this->inputAutomationModuleInterfaceArray = inputAutomationModuleInterfaceArray;
}

