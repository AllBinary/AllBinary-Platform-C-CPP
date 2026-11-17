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
// package org.allbinary.input.automation.actions.script.condition.processors.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/Set.h"
#include "org/allbinary/input/automation/robot/InputRobotFactory.h"

typedef struct InputAutomationTypeDefaultComboBoxModelFactory InputAutomationTypeDefaultComboBoxModelFactory;
struct InputAutomationTypeDefaultComboBoxModelFactory {
    char unused;
};


InputAutomationTypeDefaultComboBoxModelFactory* InputAutomationTypeDefaultComboBoxModelFactory_new(void);

void InputAutomationTypeDefaultComboBoxModelFactory_init(InputAutomationTypeDefaultComboBoxModelFactory* this);
DefaultComboBoxModel* InputAutomationTypeDefaultComboBoxModelFactory_getInstance(void);


void InputAutomationTypeDefaultComboBoxModelFactory_init(InputAutomationTypeDefaultComboBoxModelFactory* this) {
}

InputAutomationTypeDefaultComboBoxModelFactory* InputAutomationTypeDefaultComboBoxModelFactory_new(void) {
    InputAutomationTypeDefaultComboBoxModelFactory* this = calloc(1, sizeof(InputAutomationTypeDefaultComboBoxModelFactory));
    InputAutomationTypeDefaultComboBoxModelFactory_init(this);
    return this;
}


// throws Exception
DefaultComboBoxModel* InputAutomationTypeDefaultComboBoxModelFactory_getInstance(void) {
        DefaultComboBoxModel* defaultComboBoxModel = DefaultComboBoxModel_new();
        Set* set = JAVA_CALL(InputRobotFactory_get(InputRobotFactory_getInstance()), keySet);
        Any** nameArray = Set_toArray(set);
        int32_t size = java_array_length(nameArray);
        for (int32_t index = 0; index < size; index++) {
            DefaultComboBoxModel_addElement(defaultComboBoxModel, ((const char*) nameArray[index]));
        }
        return defaultComboBoxModel;
}

