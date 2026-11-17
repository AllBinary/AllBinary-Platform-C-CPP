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

typedef struct InputAutomationRobotChangeEvent InputAutomationRobotChangeEvent;
struct InputAutomationRobotChangeEvent {
    InputAutomationRobotInterfaceWrapper* inputAutomationRobotInterfaceWrapper;
};


InputAutomationRobotChangeEvent* InputAutomationRobotChangeEvent_new(InputAutomationRobotInterfaceWrapper* inputAutomationRobotInterfaceWrapper);

void InputAutomationRobotChangeEvent_init(InputAutomationRobotChangeEvent* this, InputAutomationRobotInterfaceWrapper* inputAutomationRobotInterfaceWrapper);
InputAutomationRobotInterfaceWrapper* InputAutomationRobotChangeEvent_getInputAutomationRobotInterfaceWrapper(InputAutomationRobotChangeEvent* this);
void InputAutomationRobotChangeEvent_setInputAutomationRobotInterfaceWrapper(InputAutomationRobotChangeEvent* this, InputAutomationRobotInterfaceWrapper* inputAutomationRobotInterfaceWrapper);

static void InputAutomationRobotChangeEvent_initFields(InputAutomationRobotChangeEvent* this) {
    this->inputAutomationRobotInterfaceWrapper = nullptr;
}


void InputAutomationRobotChangeEvent_init(InputAutomationRobotChangeEvent* this, InputAutomationRobotInterfaceWrapper* inputAutomationRobotInterfaceWrapper) {
    InputAutomationRobotChangeEvent_initFields(this);
        InputAutomationRobotChangeEvent_setInputAutomationRobotInterfaceWrapper(this, inputAutomationRobotInterfaceWrapper);
}

InputAutomationRobotChangeEvent* InputAutomationRobotChangeEvent_new(InputAutomationRobotInterfaceWrapper* inputAutomationRobotInterfaceWrapper) {
    InputAutomationRobotChangeEvent* this = calloc(1, sizeof(InputAutomationRobotChangeEvent));
    InputAutomationRobotChangeEvent_init(this, inputAutomationRobotInterfaceWrapper);
    return this;
}


InputAutomationRobotInterfaceWrapper* InputAutomationRobotChangeEvent_getInputAutomationRobotInterfaceWrapper(InputAutomationRobotChangeEvent* this) {
        return this->inputAutomationRobotInterfaceWrapper;
}


void InputAutomationRobotChangeEvent_setInputAutomationRobotInterfaceWrapper(InputAutomationRobotChangeEvent* this, InputAutomationRobotInterfaceWrapper* inputAutomationRobotInterfaceWrapper) {
        this->inputAutomationRobotInterfaceWrapper = inputAutomationRobotInterfaceWrapper;
}

