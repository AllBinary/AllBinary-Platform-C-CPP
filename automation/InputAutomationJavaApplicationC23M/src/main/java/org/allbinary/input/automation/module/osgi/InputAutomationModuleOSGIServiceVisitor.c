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
#include "bundle/input/automation/module/InputAutomationModuleService.h"
#include "org/allbinary/input/automation/InputAutomationJFrame.h"
#include "org/allbinary/input/automation/configuration/InputAutomationConfigurationUtil.h"
#include "org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/osgi/OSGIServiceInterface.h"
#include "org/allbinary/osgi/OSGIServiceVisitorInterface.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct InputAutomationModuleOSGIServiceVisitor InputAutomationModuleOSGIServiceVisitor;
struct InputAutomationModuleOSGIServiceVisitor {
    OSGIServiceVisitorInterface OSGIServiceVisitorInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};


InputAutomationModuleOSGIServiceVisitor* InputAutomationModuleOSGIServiceVisitor_new(void);

void InputAutomationModuleOSGIServiceVisitor_init(InputAutomationModuleOSGIServiceVisitor* this);
Any* InputAutomationModuleOSGIServiceVisitor_visit(InputAutomationModuleOSGIServiceVisitor* this, Any* anyType);
bool InputAutomationModuleOSGIServiceVisitor_visit(InputAutomationModuleOSGIServiceVisitor* this, OSGIServiceInterface* osgiServiceInterface);

static void InputAutomationModuleOSGIServiceVisitor_initFields(InputAutomationModuleOSGIServiceVisitor* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}


void InputAutomationModuleOSGIServiceVisitor_init(InputAutomationModuleOSGIServiceVisitor* this) {
    InputAutomationModuleOSGIServiceVisitor_initFields(this);
}

InputAutomationModuleOSGIServiceVisitor* InputAutomationModuleOSGIServiceVisitor_new(void) {
    InputAutomationModuleOSGIServiceVisitor* this = calloc(1, sizeof(InputAutomationModuleOSGIServiceVisitor));
    InputAutomationModuleOSGIServiceVisitor_init(this);
    return this;
}


Any* InputAutomationModuleOSGIServiceVisitor_visit(InputAutomationModuleOSGIServiceVisitor* this, Any* anyType) {
        return InputAutomationModuleOSGIServiceVisitor_visit(this, ((OSGIServiceInterface*) anyType));
}


// Java overloaded method: C needs a different name
bool InputAutomationModuleOSGIServiceVisitor_visit(InputAutomationModuleOSGIServiceVisitor* this, OSGIServiceInterface* osgiServiceInterface) {
        JAVA_TRY {
            InputAutomationModuleService* inputAutomationModuleService = ((InputAutomationModuleService*) osgiServiceInterface);
            InputAutomationModuleFactoryInterface** inputAutomationModuleInterfaceArray = InputAutomationModuleService_getInputAutomationModuleInterfaceArray(inputAutomationModuleService);
            for (int32_t index = 0; index < java_array_length(inputAutomationModuleInterfaceArray); index++) {
                InputAutomationJFrame_onAdd(InputAutomationJFrame_getInstance(), InputAutomationConfigurationUtil_getChangeEvent(inputAutomationModuleInterfaceArray[index]));
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "visit", e);
            return false;
        } JAVA_END_TRY;
}

