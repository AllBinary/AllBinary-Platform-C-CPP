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
// package org.allbinary.input.automation.module.game.test

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/input/automation/module/AbstractInputAutomationFactory.h"
#include "org/allbinary/input/automation/module/InputAutomationModuleData.h"
#include "org/allbinary/input/automation/module/configuration/BlankModuleConfigurationJPanel.h"
#include "org/allbinary/thread/RunnableInterface.h"

typedef struct TestModuleFactory TestModuleFactory;
struct TestModuleFactory {
    AbstractInputAutomationFactory base;
    BlankModuleConfigurationJPanel* blankModuleConfigurationJPanel;
};

static const char* TestModuleFactory_NAME;

TestModuleFactory* TestModuleFactory_new(void);

void TestModuleFactory_init(TestModuleFactory* this);
const char* TestModuleFactory_getName(TestModuleFactory* this);
JPanel* TestModuleFactory_getConfigurationJPanel(TestModuleFactory* this);
RunnableInterface* TestModuleFactory_getInstance(TestModuleFactory* this);

// Static fields with runtime initializers: call this once at startup
void TestModuleFactory_staticInit(void) {
    TestModuleFactory_NAME = java_concat("Test New Game", java_string_of(InputAutomationModuleData_MODULE_NAME_END));
}

static void TestModuleFactory_initFields(TestModuleFactory* this) {
    this->blankModuleConfigurationJPanel = nullptr;
}


void TestModuleFactory_init(TestModuleFactory* this) {
        AbstractInputAutomationFactory_init(&this->base, TestModuleFactory_NAME, BlankModuleConfigurationJPanel_new());
        TestModuleFactory_initFields(this);
}

TestModuleFactory* TestModuleFactory_new(void) {
    TestModuleFactory* this = calloc(1, sizeof(TestModuleFactory));
    TestModuleFactory_init(this);
    return this;
}


const char* TestModuleFactory_getName(TestModuleFactory* this) {
        return TestModuleFactory_NAME;
}


JPanel* TestModuleFactory_getConfigurationJPanel(TestModuleFactory* this) {
        return this->blankModuleConfigurationJPanel;
}


// throws Exception
// synchronized
RunnableInterface* TestModuleFactory_getInstance(TestModuleFactory* this) {
        return nullptr;
}

