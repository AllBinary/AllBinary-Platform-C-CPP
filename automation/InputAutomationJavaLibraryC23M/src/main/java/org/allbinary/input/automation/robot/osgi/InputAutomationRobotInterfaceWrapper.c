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

typedef struct InputAutomationRobotInterfaceWrapper InputAutomationRobotInterfaceWrapper;
struct InputAutomationRobotInterfaceWrapper {
    InputRobotInterface* inputRobotInterface;
};


InputAutomationRobotInterfaceWrapper* InputAutomationRobotInterfaceWrapper_new(InputRobotInterface* inputRobotInterface);

void InputAutomationRobotInterfaceWrapper_init(InputAutomationRobotInterfaceWrapper* this, InputRobotInterface* inputRobotInterface);
InputRobotInterface* InputAutomationRobotInterfaceWrapper_getInputRobotInterface(InputAutomationRobotInterfaceWrapper* this);
void InputAutomationRobotInterfaceWrapper_setInputRobotInterface(InputAutomationRobotInterfaceWrapper* this, InputRobotInterface* inputRobotInterface);

static void InputAutomationRobotInterfaceWrapper_initFields(InputAutomationRobotInterfaceWrapper* this) {
    this->inputRobotInterface = nullptr;
}


void InputAutomationRobotInterfaceWrapper_init(InputAutomationRobotInterfaceWrapper* this, InputRobotInterface* inputRobotInterface) {
    InputAutomationRobotInterfaceWrapper_initFields(this);
        InputAutomationRobotInterfaceWrapper_setInputRobotInterface(this, inputRobotInterface);
}

InputAutomationRobotInterfaceWrapper* InputAutomationRobotInterfaceWrapper_new(InputRobotInterface* inputRobotInterface) {
    InputAutomationRobotInterfaceWrapper* this = calloc(1, sizeof(InputAutomationRobotInterfaceWrapper));
    InputAutomationRobotInterfaceWrapper_init(this, inputRobotInterface);
    return this;
}


InputRobotInterface* InputAutomationRobotInterfaceWrapper_getInputRobotInterface(InputAutomationRobotInterfaceWrapper* this) {
        return this->inputRobotInterface;
}


void InputAutomationRobotInterfaceWrapper_setInputRobotInterface(InputAutomationRobotInterfaceWrapper* this, InputRobotInterface* inputRobotInterface) {
        this->inputRobotInterface = inputRobotInterface;
}

