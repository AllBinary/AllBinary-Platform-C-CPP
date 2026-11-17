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
#include "org/allbinary/input/automation/robot/InputRobotInterface.h"

typedef struct InputAutomationRobotUtil InputAutomationRobotUtil;
struct InputAutomationRobotUtil {
    char unused;
};


InputAutomationRobotUtil* InputAutomationRobotUtil_new(void);

void InputAutomationRobotUtil_init(InputAutomationRobotUtil* this);
InputAutomationRobotChangeEvent* InputAutomationRobotUtil_getChangeEvent(InputRobotInterface* inputRobotInterface);


void InputAutomationRobotUtil_init(InputAutomationRobotUtil* this) {
}

InputAutomationRobotUtil* InputAutomationRobotUtil_new(void) {
    InputAutomationRobotUtil* this = calloc(1, sizeof(InputAutomationRobotUtil));
    InputAutomationRobotUtil_init(this);
    return this;
}


// throws Exception
InputAutomationRobotChangeEvent* InputAutomationRobotUtil_getChangeEvent(InputRobotInterface* inputRobotInterface) {
        InputAutomationRobotInterfaceWrapper* inputAutomationRobotInterfaceWrapper = InputAutomationRobotInterfaceWrapper_new(inputRobotInterface);
        InputAutomationRobotChangeEvent* inputAutomationRobotChangeEvent = InputAutomationRobotChangeEvent_new(inputAutomationRobotInterfaceWrapper);
        return inputAutomationRobotChangeEvent;
}

