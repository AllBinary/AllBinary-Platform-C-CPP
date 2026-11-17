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
#include "org/allbinary/input/automation/module/InputAutomationActionInterface.h"
#include "org/allbinary/input/automation/robot/InputRobotInterface.h"

typedef struct GenericInputAutomationAction GenericInputAutomationAction;
struct GenericInputAutomationAction {
    InputAutomationActionInterface InputAutomationActionInterface_interface;
};


GenericInputAutomationAction* GenericInputAutomationAction_new(void);

void GenericInputAutomationAction_init(GenericInputAutomationAction* this);
void GenericInputAutomationAction_test(GenericInputAutomationAction* this);
InputRobotInterface** GenericInputAutomationAction_getInputRobotInterfaceArray(GenericInputAutomationAction* this);


void GenericInputAutomationAction_init(GenericInputAutomationAction* this) {
}

GenericInputAutomationAction* GenericInputAutomationAction_new(void) {
    GenericInputAutomationAction* this = calloc(1, sizeof(GenericInputAutomationAction));
    GenericInputAutomationAction_init(this);
    return this;
}


// throws Exception
void GenericInputAutomationAction_test(GenericInputAutomationAction* this) {
}


InputRobotInterface** GenericInputAutomationAction_getInputRobotInterfaceArray(GenericInputAutomationAction* this) {
        return nullptr;
}

