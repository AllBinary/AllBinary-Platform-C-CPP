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
// #include "java/util/Collection.h"
// #include "java/util/HashMap.h"
// #include "java/util/Iterator.h"
// #include "javax/help/HelpSet.h"
// #include "javax/help/event/HelpSetEvent.h"
// #include "javax/help/event/HelpSetListener.h"
// #include "javax/swing/ListModel.h"
#include "org/allbinary/input/automation/module/configuration/InputAutomationModuleConfiguration.h"
#include "org/allbinary/input/automation/module/configuration/InputAutomationModuleConfigurations.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/java/help/JavaHelpSetNotifier.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct InputAutomationModuleFactoryFactory InputAutomationModuleFactoryFactory;
struct InputAutomationModuleFactoryFactory {
    LogUtil* logUtil;
    HashMap* hashMap;
    DefaultListModelHelper* defaultListModelHelper;
    HelpSetListener* helpSetListenerInterface;
};


InputAutomationModuleFactoryFactory* InputAutomationModuleFactoryFactory_new(InputAutomationModuleConfigurations* inputAutomationModuleConfigurations, HelpSetListener* helpSetListenerInterface);

void InputAutomationModuleFactoryFactory_init(InputAutomationModuleFactoryFactory* this, InputAutomationModuleConfigurations* inputAutomationModuleConfigurations, HelpSetListener* helpSetListenerInterface);
static void InputAutomationModuleFactoryFactory_add(InputAutomationModuleFactoryFactory* this, InputAutomationModuleConfiguration* inputAutomationModuleConfiguration);
ListModel* InputAutomationModuleFactoryFactory_getListModel(InputAutomationModuleFactoryFactory* this);
InputAutomationModuleFactoryInterface* InputAutomationModuleFactoryFactory_getInstance(InputAutomationModuleFactoryFactory* this, const char* moduleName);

static void InputAutomationModuleFactoryFactory_initFields(InputAutomationModuleFactoryFactory* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    
}


void InputAutomationModuleFactoryFactory_init(InputAutomationModuleFactoryFactory* this, InputAutomationModuleConfigurations* inputAutomationModuleConfigurations, HelpSetListener* helpSetListenerInterface) {
    InputAutomationModuleFactoryFactory_initFields(this);
        this->helpSetListenerInterface = helpSetListenerInterface;
        this->defaultListModelHelper = DefaultListModelHelper_new();
        this->hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        Collection* collection = JAVA_CALL(InputAutomationModuleConfigurations_getHashMap(inputAutomationModuleConfigurations), values);
        Iterator* iterator = Collection_iterator(collection);
        InputAutomationModuleConfiguration* inputAutomationModuleConfiguration = nullptr;
        while (Iterator_hasNext(iterator)) {
            inputAutomationModuleConfiguration = ((InputAutomationModuleConfiguration*) Iterator_next(iterator));
            InputAutomationModuleFactoryFactory_add(this, inputAutomationModuleConfiguration);
        }
        DefaultListModelHelper_initDefaultModelList(this->defaultListModelHelper);
        LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat(java_concat("Loaded ", java_string_of(HashMap_size(this->hashMap))), "/"), java_string_of(JAVA_CALL(DefaultListModelHelper_getListModel(this->defaultListModelHelper), getSize))), " Input Automation Modules"), this, "Contructor");
}

InputAutomationModuleFactoryFactory* InputAutomationModuleFactoryFactory_new(InputAutomationModuleConfigurations* inputAutomationModuleConfigurations, HelpSetListener* helpSetListenerInterface) {
    InputAutomationModuleFactoryFactory* this = calloc(1, sizeof(InputAutomationModuleFactoryFactory));
    InputAutomationModuleFactoryFactory_init(this, inputAutomationModuleConfigurations, helpSetListenerInterface);
    return this;
}


static void InputAutomationModuleFactoryFactory_add(InputAutomationModuleFactoryFactory* this, InputAutomationModuleConfiguration* inputAutomationModuleConfiguration) {
        InputAutomationModuleFactoryInterface* inputAutomationModuleInterface = InputAutomationModuleConfiguration_getInputAutomationModuleInterface(inputAutomationModuleConfiguration);
        HashMap_put(this->hashMap, InputAutomationModuleConfiguration_getName(inputAutomationModuleConfiguration), inputAutomationModuleInterface);
        DefaultListModelHelper_add(this->defaultListModelHelper, InputAutomationModuleConfiguration_getName(inputAutomationModuleConfiguration));
        HelpSet* helpSet = InputAutomationModuleFactoryInterface_getHelpSet(inputAutomationModuleInterface);
        if (!JavaHelpSetNotifier_isNotified(helpSet)) {
            HelpSetEvent* helpSetEvent = HelpSetEvent_new(this, helpSet, HelpSetEvent_HELPSET_ADDED);
            HelpSetListener_helpSetAdded(this->helpSetListenerInterface, helpSetEvent);
        }
}


ListModel* InputAutomationModuleFactoryFactory_getListModel(InputAutomationModuleFactoryFactory* this) {
        return ((ListModel*) DefaultListModelHelper_getListModel(this->defaultListModelHelper));
}


InputAutomationModuleFactoryInterface* InputAutomationModuleFactoryFactory_getInstance(InputAutomationModuleFactoryFactory* this, const char* moduleName) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_putF(this->logUtil, java_concat("Getting Module: ", moduleName), this, commonStrings->GET_INSTANCE);
        InputAutomationModuleFactoryInterface* inputAutomationModuleFactoryInterface = ((InputAutomationModuleFactoryInterface*) HashMap_get(this->hashMap, moduleName));
        if (inputAutomationModuleFactoryInterface == nullptr) {
            LogUtil_putF(this->logUtil, java_concat(java_concat("Module: ", moduleName), " was null"), this, commonStrings->GET_INSTANCE);
        }
        return inputAutomationModuleFactoryInterface;
}

