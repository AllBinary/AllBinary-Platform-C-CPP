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
// package org.allbinary.input.automation.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/File.h"
// #include "java/io/FileInputStream.h"
// #include "java/util/List.h"
// #include "javax/xml/bind/JAXBContext.h"
// #include "javax/xml/bind/JAXBElement.h"
// #include "javax/xml/bind/Unmarshaller.h"
// #include "javax/xml/transform/stream/StreamSource.h"
#include "org/allbinary/input/automation/module/configuration/InputAutomationModuleConfiguration.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct InputAutomationConfigurationFactory InputAutomationConfigurationFactory;
struct InputAutomationConfigurationFactory {
    LogUtil* logUtil;
    InputAutomationConfiguration* inputAutomationConfiguration;
};

static InputAutomationConfigurationFactory* InputAutomationConfigurationFactory_instance;

InputAutomationConfigurationFactory* InputAutomationConfigurationFactory_new(void);
InputAutomationConfigurationFactory* InputAutomationConfigurationFactory_getInstance(void);

void InputAutomationConfigurationFactory_init(InputAutomationConfigurationFactory* this);
void InputAutomationConfigurationFactory_init(InputAutomationConfigurationFactory* this, AbeClientInformationInterface* abeClientInformation);

// Static fields with runtime initializers: call this once at startup
void InputAutomationConfigurationFactory_staticInit(void) {
    InputAutomationConfigurationFactory_instance = InputAutomationConfigurationFactory_new();
}

static void InputAutomationConfigurationFactory_initFields(InputAutomationConfigurationFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->inputAutomationConfiguration = nullptr;
}


InputAutomationConfigurationFactory* InputAutomationConfigurationFactory_getInstance(void) {
        return InputAutomationConfigurationFactory_instance;
}


void InputAutomationConfigurationFactory_init(InputAutomationConfigurationFactory* this) {
    InputAutomationConfigurationFactory_initFields(this);
}

InputAutomationConfigurationFactory* InputAutomationConfigurationFactory_new(void) {
    InputAutomationConfigurationFactory* this = calloc(1, sizeof(InputAutomationConfigurationFactory));
    InputAutomationConfigurationFactory_init(this);
    return this;
}


// throws Exception
void InputAutomationConfigurationFactory_init(InputAutomationConfigurationFactory* this, AbeClientInformationInterface* abeClientInformation) {
        LogUtil* logUtil = LogUtil_getInstance();
        CommonStrings* commonStrings = CommonStrings_getInstance();
        const char* INPUT_AUTOMATION_CONFIGURATION = "InputAutomationConfiguration";
        File* file = InputAutomationConfiguration_getFile();
        if (File_isFile(file)) {
            LogUtil_putF(logUtil, "LoadingConfiguration", INPUT_AUTOMATION_CONFIGURATION, commonStrings->INIT);
            JAXBContext* jaxbContext = JAXBContext_newInstance("InputAutomationConfiguration");
            Unmarshaller* unmarshaller = JAXBContext_createUnmarshaller(jaxbContext);
            JAXBElement* root = Unmarshaller_unmarshal(unmarshaller, StreamSource_new(FileInputStream_new(file)), "InputAutomationConfiguration");
            this->inputAutomationConfiguration = ((InputAutomationConfiguration*) JAXBElement_getValue(root));
            List* inputAutomationModuleConfigurationList = InputAutomationConfiguration_getInputAutomationModuleConfigurationList(this->inputAutomationConfiguration);
            LogUtil_putF(logUtil, java_concat(java_concat(java_concat("isInstalled: ", java_string_of(InputAutomationConfiguration_isInstalled(this->inputAutomationConfiguration))), " inputAutomationModuleConfigurationList: "), java_string_of(inputAutomationModuleConfigurationList)), INPUT_AUTOMATION_CONFIGURATION, commonStrings->INIT);
            if (inputAutomationModuleConfigurationList != nullptr) {
                int32_t size = List_size(inputAutomationModuleConfigurationList);
                InputAutomationModuleConfiguration* inputAutomationModuleConfiguration = nullptr;
                for (int32_t index = 0; index < size; index++) {
                    inputAutomationModuleConfiguration = List_get(inputAutomationModuleConfigurationList, index);
                    InputAutomationModuleConfiguration_init(inputAutomationModuleConfiguration, abeClientInformation);
                }
            }
            LogUtil_putF(logUtil, "LoadedConfiguration", INPUT_AUTOMATION_CONFIGURATION, commonStrings->INIT);
        } else {
            LogUtil_putF(logUtil, "New Configuration", INPUT_AUTOMATION_CONFIGURATION, commonStrings->INIT);
            this->inputAutomationConfiguration = InputAutomationConfiguration_new();
        }
}

