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
#include "org/allbinary/input/automation/module/AbstractInputAutomationFactory.h"
#include "org/allbinary/input/automation/module/InputAutomationActionInterface.h"
#include "org/allbinary/input/automation/module/InputAutomationModuleData.h"
#include "org/allbinary/input/automation/module/generic/configuration/GenericModuleConfigurationJPanel.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfile.h"
#include "org/allbinary/input/automation/module/generic/constraints/NoImageComparatorConstraints.h"
#include "org/allbinary/input/automation/module/generic/constraints/NoMotionRectangleConstraints.h"
#include "org/allbinary/thread/RunnableInterface.h"

typedef struct GenericModuleFactory GenericModuleFactory;
struct GenericModuleFactory {
    AbstractInputAutomationFactory base;
};

static const char* GenericModuleFactory_NAME;

GenericModuleFactory* GenericModuleFactory_new(void);

void GenericModuleFactory_init(GenericModuleFactory* this);
RunnableInterface* GenericModuleFactory_getInstance(GenericModuleFactory* this);

// Static fields with runtime initializers: call this once at startup
void GenericModuleFactory_staticInit(void) {
    GenericModuleFactory_NAME = java_concat("Generic", java_string_of(InputAutomationModuleData_MODULE_NAME_END));
}


void GenericModuleFactory_init(GenericModuleFactory* this) {
        AbstractInputAutomationFactory_init(&this->base, GenericModuleFactory_NAME, GenericModuleConfigurationJPanel_new());
}

GenericModuleFactory* GenericModuleFactory_new(void) {
    GenericModuleFactory* this = calloc(1, sizeof(GenericModuleFactory));
    GenericModuleFactory_init(this);
    return this;
}


// throws Exception
// synchronized
RunnableInterface* GenericModuleFactory_getInstance(GenericModuleFactory* this) {
        GenericProfile* genericProfile = GenericModuleConfigurationJPanel_getSelectedGenericProfile((((GenericModuleConfigurationJPanel*) GenericModuleFactory_getConfigurationJPanel(this))));
        InputAutomationActionInterface* inputAutomationActionInterface = ((InputAutomationActionInterface*) GenericInputAutomationAction_new());
        return ((RunnableInterface*) GenericInputAutomationWorker_new(inputAutomationActionInterface, genericProfile, NoMotionRectangleConstraints_new(), NoImageComparatorConstraints_new()));
}

