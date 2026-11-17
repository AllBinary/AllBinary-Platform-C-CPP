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
// package org.allbinary.input.automation.module.generic

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h"
#include "org/allbinary/input/automation/module/osgi/InputAutomationModuleServiceFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"

typedef struct InputAutomationGenericModuleServiceFactory InputAutomationGenericModuleServiceFactory;
struct InputAutomationGenericModuleServiceFactory {
    InputAutomationModuleServiceFactory base;
    LogUtil* logUtil;
};

static InputAutomationGenericModuleServiceFactory* InputAutomationGenericModuleServiceFactory_inputAutomationGenericModuleServiceFactory;

InputAutomationGenericModuleServiceFactory* InputAutomationGenericModuleServiceFactory_new(void);

void InputAutomationGenericModuleServiceFactory_init(InputAutomationGenericModuleServiceFactory* this);
InputAutomationGenericModuleServiceFactory* InputAutomationGenericModuleServiceFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void InputAutomationGenericModuleServiceFactory_staticInit(void) {
    InputAutomationGenericModuleServiceFactory_inputAutomationGenericModuleServiceFactory = InputAutomationGenericModuleServiceFactory_new();
}

static void InputAutomationGenericModuleServiceFactory_initFields(InputAutomationGenericModuleServiceFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


void InputAutomationGenericModuleServiceFactory_init(InputAutomationGenericModuleServiceFactory* this) {
    InputAutomationModuleServiceFactory_init(&this->base);
    InputAutomationGenericModuleServiceFactory_initFields(this);
        JAVA_TRY {
            InputAutomationModuleFactoryInterface** inputAutomationModuleInterfaceArray = ((InputAutomationModuleFactoryInterface**) java_array_new(sizeof(InputAutomationModuleFactoryInterface*), 1));
            inputAutomationModuleInterfaceArray[0] = GenericModuleFactory_new();
            InputAutomationGenericModuleServiceFactory_setInputAutomationModuleInterfaceArray(this, inputAutomationModuleInterfaceArray);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->CONSTRUCTOR, e);
        } JAVA_END_TRY;
}

InputAutomationGenericModuleServiceFactory* InputAutomationGenericModuleServiceFactory_new(void) {
    InputAutomationGenericModuleServiceFactory* this = calloc(1, sizeof(InputAutomationGenericModuleServiceFactory));
    InputAutomationGenericModuleServiceFactory_init(this);
    return this;
}


InputAutomationGenericModuleServiceFactory* InputAutomationGenericModuleServiceFactory_getInstance(void) {
        return InputAutomationGenericModuleServiceFactory_inputAutomationGenericModuleServiceFactory;
}

