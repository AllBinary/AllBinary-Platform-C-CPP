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
// package org.allbinary.input.automation.osgi

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
#include "org/allbinary/input/automation/InputAutomationJFrame.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct InputAutomationServiceFactory InputAutomationServiceFactory;
struct InputAutomationServiceFactory {
    ServiceFactory ServiceFactory_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};

static InputAutomationServiceFactory* InputAutomationServiceFactory_inputAutomationServiceFactory;

InputAutomationServiceFactory* InputAutomationServiceFactory_new(void);

void InputAutomationServiceFactory_init(InputAutomationServiceFactory* this);
InputAutomationServiceFactory* InputAutomationServiceFactory_getInstance(void);
Any* InputAutomationServiceFactory_getService(InputAutomationServiceFactory* this, Bundle* bundle, ServiceRegistration* registration);
void InputAutomationServiceFactory_ungetService(InputAutomationServiceFactory* this, Bundle* bundle, ServiceRegistration* registration, Any* service);

// Static fields with runtime initializers: call this once at startup
void InputAutomationServiceFactory_staticInit(void) {
    InputAutomationServiceFactory_inputAutomationServiceFactory = InputAutomationServiceFactory_new();
}

static void InputAutomationServiceFactory_initFields(InputAutomationServiceFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}


void InputAutomationServiceFactory_init(InputAutomationServiceFactory* this) {
    InputAutomationServiceFactory_initFields(this);
}

InputAutomationServiceFactory* InputAutomationServiceFactory_new(void) {
    InputAutomationServiceFactory* this = calloc(1, sizeof(InputAutomationServiceFactory));
    InputAutomationServiceFactory_init(this);
    return this;
}


InputAutomationServiceFactory* InputAutomationServiceFactory_getInstance(void) {
        return InputAutomationServiceFactory_inputAutomationServiceFactory;
}


Any* InputAutomationServiceFactory_getService(InputAutomationServiceFactory* this, Bundle* bundle, ServiceRegistration* registration) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "getService");
        return InputAutomationJFrame_getInstance();
}


void InputAutomationServiceFactory_ungetService(InputAutomationServiceFactory* this, Bundle* bundle, ServiceRegistration* registration, Any* service) {
}

