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
// package org.allbinary.input.automation.robot.osgi

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "bundle/input/automation/robot/InputAutomationRobotServiceInterface.h"
#include "org/allbinary/input/automation/robot/InputRobotFactory.h"
#include "org/allbinary/input/automation/robot/InputRobotInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/osgi/OSGIServiceInterface.h"
#include "org/allbinary/osgi/OSGIServiceVisitorInterface.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct InputAutomationRobotOSGIServiceVisitor InputAutomationRobotOSGIServiceVisitor;
struct InputAutomationRobotOSGIServiceVisitor {
    OSGIServiceVisitorInterface OSGIServiceVisitorInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};


InputAutomationRobotOSGIServiceVisitor* InputAutomationRobotOSGIServiceVisitor_new(void);

void InputAutomationRobotOSGIServiceVisitor_init(InputAutomationRobotOSGIServiceVisitor* this);
Any* InputAutomationRobotOSGIServiceVisitor_visit(InputAutomationRobotOSGIServiceVisitor* this, Any* anyType);
bool InputAutomationRobotOSGIServiceVisitor_visit(InputAutomationRobotOSGIServiceVisitor* this, OSGIServiceInterface* osgiServiceInterface);

static void InputAutomationRobotOSGIServiceVisitor_initFields(InputAutomationRobotOSGIServiceVisitor* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}


void InputAutomationRobotOSGIServiceVisitor_init(InputAutomationRobotOSGIServiceVisitor* this) {
    InputAutomationRobotOSGIServiceVisitor_initFields(this);
}

InputAutomationRobotOSGIServiceVisitor* InputAutomationRobotOSGIServiceVisitor_new(void) {
    InputAutomationRobotOSGIServiceVisitor* this = calloc(1, sizeof(InputAutomationRobotOSGIServiceVisitor));
    InputAutomationRobotOSGIServiceVisitor_init(this);
    return this;
}


Any* InputAutomationRobotOSGIServiceVisitor_visit(InputAutomationRobotOSGIServiceVisitor* this, Any* anyType) {
        return InputAutomationRobotOSGIServiceVisitor_visit(this, ((OSGIServiceInterface*) anyType));
}


// Java overloaded method: C needs a different name
bool InputAutomationRobotOSGIServiceVisitor_visit(InputAutomationRobotOSGIServiceVisitor* this, OSGIServiceInterface* osgiServiceInterface) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "visit");
            InputAutomationRobotServiceInterface* inputAutomationRobotServiceInterface = ((InputAutomationRobotServiceInterface*) osgiServiceInterface);
            InputRobotInterface** inputRobotInterfaceArray = InputAutomationRobotServiceInterface_getInputRobotInterfaceArray(inputAutomationRobotServiceInterface);
            for (int32_t index = 0; index < java_array_length(inputRobotInterfaceArray); index++) {
                LogUtil_putF(this->logUtil, java_concat("Adding: ", JAVA_CALL(inputRobotInterfaceArray[index], getName)), this, "visit");
                InputRobotFactory_add(InputRobotFactory_getInstance(), inputRobotInterfaceArray[index]);
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "visit", e);
            return false;
        } JAVA_END_TRY;
}

