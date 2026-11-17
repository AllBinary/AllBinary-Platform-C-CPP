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
// #include "java/net/URL.h"
// #include "javax/help/HelpSet.h"
#include "org/allbinary/logic/java/help/JavaHelpUtil.h"
#include "org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h"

typedef struct AbstractInputAutomationFactory AbstractInputAutomationFactory;
struct AbstractInputAutomationFactory {
    InputAutomationModuleFactoryInterface base;
    const char* name;
    JPanel* jPanel;
    HelpSet* helpSet;
};


AbstractInputAutomationFactory* AbstractInputAutomationFactory_new(const char* name, JPanel* jPanel, HelpSet* helpSet);

void AbstractInputAutomationFactory_init(AbstractInputAutomationFactory* this, const char* name, JPanel* jPanel, HelpSet* helpSet);

AbstractInputAutomationFactory* AbstractInputAutomationFactory_new2(const char* name, JPanel* jPanel);
void AbstractInputAutomationFactory_init2(AbstractInputAutomationFactory* this, const char* name, JPanel* jPanel);
const char* AbstractInputAutomationFactory_getName(AbstractInputAutomationFactory* this);
JPanel* AbstractInputAutomationFactory_getConfigurationJPanel(AbstractInputAutomationFactory* this);
HelpSet* AbstractInputAutomationFactory_getHelpSet(AbstractInputAutomationFactory* this);

static void AbstractInputAutomationFactory_initFields(AbstractInputAutomationFactory* this) {
    
    
    
}


void AbstractInputAutomationFactory_init(AbstractInputAutomationFactory* this, const char* name, JPanel* jPanel, HelpSet* helpSet) {
    InputAutomationModuleFactoryInterface_init(&this->base);
    AbstractInputAutomationFactory_initFields(this);
        this->name = name;
        this->jPanel = jPanel;
        this->helpSet = helpSet;
}

AbstractInputAutomationFactory* AbstractInputAutomationFactory_new(const char* name, JPanel* jPanel, HelpSet* helpSet) {
    AbstractInputAutomationFactory* this = calloc(1, sizeof(AbstractInputAutomationFactory));
    AbstractInputAutomationFactory_init(this, name, jPanel, helpSet);
    return this;
}


void AbstractInputAutomationFactory_init2(AbstractInputAutomationFactory* this, const char* name, JPanel* jPanel) {
    InputAutomationModuleFactoryInterface_init(&this->base);
    AbstractInputAutomationFactory_initFields(this);
        this->name = name;
        this->jPanel = jPanel;
        URL* url = JAVA_CALL(java_class_of(this), getResource, "/help/Help.hs");
        this->helpSet = JavaHelpUtil_getHelpSet(JavaHelpUtil_getInstance(), url);
}

AbstractInputAutomationFactory* AbstractInputAutomationFactory_new2(const char* name, JPanel* jPanel) {
    AbstractInputAutomationFactory* this = calloc(1, sizeof(AbstractInputAutomationFactory));
    AbstractInputAutomationFactory_init2(this, name, jPanel);
    return this;
}


const char* AbstractInputAutomationFactory_getName(AbstractInputAutomationFactory* this) {
        return this->name;
}


JPanel* AbstractInputAutomationFactory_getConfigurationJPanel(AbstractInputAutomationFactory* this) {
        return this->jPanel;
}


HelpSet* AbstractInputAutomationFactory_getHelpSet(AbstractInputAutomationFactory* this) {
        return this->helpSet;
}

