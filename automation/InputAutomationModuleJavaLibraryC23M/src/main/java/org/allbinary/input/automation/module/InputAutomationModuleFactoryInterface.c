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
// package org.allbinary.input.automation.module

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/help/HelpSet.h"
#include "org/allbinary/thread/RunnableInterface.h"

typedef struct InputAutomationModuleFactoryInterface InputAutomationModuleFactoryInterface;
struct InputAutomationModuleFactoryInterface {
    char unused;
};


InputAutomationModuleFactoryInterface* InputAutomationModuleFactoryInterface_new(void);
const char* InputAutomationModuleFactoryInterface_getName(InputAutomationModuleFactoryInterface* this);
JPanel* InputAutomationModuleFactoryInterface_getConfigurationJPanel(InputAutomationModuleFactoryInterface* this);
HelpSet* InputAutomationModuleFactoryInterface_getHelpSet(InputAutomationModuleFactoryInterface* this);
RunnableInterface* InputAutomationModuleFactoryInterface_getInstance(InputAutomationModuleFactoryInterface* this);

void InputAutomationModuleFactoryInterface_init(InputAutomationModuleFactoryInterface* this) {
}

InputAutomationModuleFactoryInterface* InputAutomationModuleFactoryInterface_new(void) {
    InputAutomationModuleFactoryInterface* this = calloc(1, sizeof(InputAutomationModuleFactoryInterface));
    InputAutomationModuleFactoryInterface_init(this);
    return this;
}


const char* InputAutomationModuleFactoryInterface_getName(InputAutomationModuleFactoryInterface* this) {
        return nullptr;
}


JPanel* InputAutomationModuleFactoryInterface_getConfigurationJPanel(InputAutomationModuleFactoryInterface* this) {
        return nullptr;
}


HelpSet* InputAutomationModuleFactoryInterface_getHelpSet(InputAutomationModuleFactoryInterface* this) {
        return nullptr;
}


// throws Exception
RunnableInterface* InputAutomationModuleFactoryInterface_getInstance(InputAutomationModuleFactoryInterface* this) {
        return nullptr;
}

