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
// package org.allbinary.input.automation.module.osgi

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/osgi/framework/Bundle.h"
#include "org/osgi/framework/ServiceFactory.h"
#include "org/osgi/framework/ServiceRegistration.h"
#include "bundle/input/automation/module/InputAutomationModuleService.h"
#include "org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct InputAutomationModuleServiceFactory InputAutomationModuleServiceFactory;
struct InputAutomationModuleServiceFactory {
    ServiceFactory ServiceFactory_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    InputAutomationModuleFactoryInterface** inputAutomationModuleInterfaceArray;
};


InputAutomationModuleServiceFactory* InputAutomationModuleServiceFactory_new(void);

void InputAutomationModuleServiceFactory_init(InputAutomationModuleServiceFactory* this);
Any* InputAutomationModuleServiceFactory_getService(InputAutomationModuleServiceFactory* this, Bundle* bundle, ServiceRegistration* registration);
void InputAutomationModuleServiceFactory_ungetService(InputAutomationModuleServiceFactory* this, Bundle* bundle, ServiceRegistration* registration, Any* service);
InputAutomationModuleFactoryInterface** InputAutomationModuleServiceFactory_getInputAutomationModuleInterfaceArray(InputAutomationModuleServiceFactory* this);
void InputAutomationModuleServiceFactory_setInputAutomationModuleInterfaceArray(InputAutomationModuleServiceFactory* this, InputAutomationModuleFactoryInterface** inputAutomationModuleInterfaceArray);

static void InputAutomationModuleServiceFactory_initFields(InputAutomationModuleServiceFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->inputAutomationModuleInterfaceArray = nullptr;
}


void InputAutomationModuleServiceFactory_init(InputAutomationModuleServiceFactory* this) {
    InputAutomationModuleServiceFactory_initFields(this);
}

InputAutomationModuleServiceFactory* InputAutomationModuleServiceFactory_new(void) {
    InputAutomationModuleServiceFactory* this = calloc(1, sizeof(InputAutomationModuleServiceFactory));
    InputAutomationModuleServiceFactory_init(this);
    return this;
}


Any* InputAutomationModuleServiceFactory_getService(InputAutomationModuleServiceFactory* this, Bundle* bundle, ServiceRegistration* registration) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "getService");
        return InputAutomationModuleService_new(InputAutomationModuleServiceFactory_getInputAutomationModuleInterfaceArray(this));
}


void InputAutomationModuleServiceFactory_ungetService(InputAutomationModuleServiceFactory* this, Bundle* bundle, ServiceRegistration* registration, Any* service) {
}


InputAutomationModuleFactoryInterface** InputAutomationModuleServiceFactory_getInputAutomationModuleInterfaceArray(InputAutomationModuleServiceFactory* this) {
        return this->inputAutomationModuleInterfaceArray;
}


void InputAutomationModuleServiceFactory_setInputAutomationModuleInterfaceArray(InputAutomationModuleServiceFactory* this, InputAutomationModuleFactoryInterface** inputAutomationModuleInterfaceArray) {
        this->inputAutomationModuleInterfaceArray = inputAutomationModuleInterfaceArray;
}

