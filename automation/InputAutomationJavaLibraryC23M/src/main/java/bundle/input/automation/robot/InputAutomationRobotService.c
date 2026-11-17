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
// package bundle.input.automation.robot

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/input/automation/robot/InputRobotInterface.h"
#include "bundle/input/automation/robot/InputAutomationRobotServiceInterface.h"

typedef struct InputAutomationRobotService InputAutomationRobotService;
struct InputAutomationRobotService {
    InputAutomationRobotServiceInterface InputAutomationRobotServiceInterface_interface;
    InputRobotInterface** inputRobotInterfaceArray;
};


InputAutomationRobotService* InputAutomationRobotService_new(InputRobotInterface** inputRobotInterfaceArray);

void InputAutomationRobotService_init(InputAutomationRobotService* this, InputRobotInterface** inputRobotInterfaceArray);
InputRobotInterface** InputAutomationRobotService_getInputRobotInterfaceArray(InputAutomationRobotService* this);
void InputAutomationRobotService_setInputRobotInterfaceArray(InputAutomationRobotService* this, InputRobotInterface** inputRobotInterfaceArray);

static void InputAutomationRobotService_initFields(InputAutomationRobotService* this) {
    this->inputRobotInterfaceArray = nullptr;
}


void InputAutomationRobotService_init(InputAutomationRobotService* this, InputRobotInterface** inputRobotInterfaceArray) {
    InputAutomationRobotService_initFields(this);
        InputAutomationRobotService_setInputRobotInterfaceArray(this, inputRobotInterfaceArray);
}

InputAutomationRobotService* InputAutomationRobotService_new(InputRobotInterface** inputRobotInterfaceArray) {
    InputAutomationRobotService* this = calloc(1, sizeof(InputAutomationRobotService));
    InputAutomationRobotService_init(this, inputRobotInterfaceArray);
    return this;
}


InputRobotInterface** InputAutomationRobotService_getInputRobotInterfaceArray(InputAutomationRobotService* this) {
        return this->inputRobotInterfaceArray;
}


void InputAutomationRobotService_setInputRobotInterfaceArray(InputAutomationRobotService* this, InputRobotInterface** inputRobotInterfaceArray) {
        this->inputRobotInterfaceArray = inputRobotInterfaceArray;
}

