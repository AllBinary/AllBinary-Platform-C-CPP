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
// package org.allbinary.input.automation.module.configuration

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
// #include "java/util/HashMap.h"
// #include "java/util/List.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/input/automation/module/InputAutomationModuleData.h"
#include "org/allbinary/input/automation/module/NewInputAutomationModulesData.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct InputAutomationModuleConfigurations InputAutomationModuleConfigurations;
struct InputAutomationModuleConfigurations {
    LogUtil* logUtil;
    HashMap* hashMap;
};


InputAutomationModuleConfigurations* InputAutomationModuleConfigurations_new(AbeClientInformationInterface* abeClientInformation, File* file);

void InputAutomationModuleConfigurations_init(InputAutomationModuleConfigurations* this, AbeClientInformationInterface* abeClientInformation, File* file);

InputAutomationModuleConfigurations* InputAutomationModuleConfigurations_new2(AbeClientInformationInterface* abeClientInformation, Document* document);
void InputAutomationModuleConfigurations_init2(InputAutomationModuleConfigurations* this, AbeClientInformationInterface* abeClientInformation, Document* document);

InputAutomationModuleConfigurations* InputAutomationModuleConfigurations_new1(List* inputAutomationModuleConfigurationList);
void InputAutomationModuleConfigurations_init1(InputAutomationModuleConfigurations* this, List* inputAutomationModuleConfigurationList);

InputAutomationModuleConfigurations* InputAutomationModuleConfigurations_new0();
void InputAutomationModuleConfigurations_init0(InputAutomationModuleConfigurations* this);
void InputAutomationModuleConfigurations_add(InputAutomationModuleConfigurations* this, InputAutomationModuleConfiguration* inputAutomationModuleConfiguration);
void InputAutomationModuleConfigurations_remove(InputAutomationModuleConfigurations* this, InputAutomationModuleConfiguration* inputAutomationModuleConfiguration);
HashMap* InputAutomationModuleConfigurations_getHashMap(InputAutomationModuleConfigurations* this);
void InputAutomationModuleConfigurations_setHashMap(InputAutomationModuleConfigurations* this, HashMap* hashMap);

static void InputAutomationModuleConfigurations_initFields(InputAutomationModuleConfigurations* this) {
    this->logUtil = LogUtil_getInstance();
    this->hashMap = nullptr;
}


void InputAutomationModuleConfigurations_init(InputAutomationModuleConfigurations* this, AbeClientInformationInterface* abeClientInformation, File* file) {
    InputAutomationModuleConfigurations_initFields(this);
        InputAutomationModuleConfigurations_setHashMap(this, HashMap_new());
        int8_t* bytes = ((int8_t*) java_array_new(sizeof(int8_t), 100000));
        FileInputStream* idFile = FileInputStream_new(file);
        int32_t length = FileInputStream_read(idFile, bytes);
        const char* data = java_string_new(bytes);
        int32_t endIndex = java_string_lastIndexOf(data, u'>');
        Document* document = DomDocumentHelper_create(java_substring(data, 0, endIndex + 1));
        NodeList* nodeList = Document_getElementsByTagName(document, NewInputAutomationModulesData_NAME);
        if (NodeList_getLength(nodeList) > 0) {
            NodeList* nameNodeList = Document_getElementsByTagName(document, InputAutomationModuleData_NAME);
            LogUtil_putF(this->logUtil, java_concat("Number Of Module(s) Specified: ", java_string_of(NodeList_getLength(nameNodeList))), this, "Contructor");
            for (int32_t index = 0; index < NodeList_getLength(nameNodeList); index++) {
                Node* node = NodeList_item(nameNodeList, index);
                InputAutomationModuleConfigurations_add(this, InputAutomationModuleConfiguration_new(abeClientInformation, node));
            }
        }
}

InputAutomationModuleConfigurations* InputAutomationModuleConfigurations_new(AbeClientInformationInterface* abeClientInformation, File* file) {
    InputAutomationModuleConfigurations* this = calloc(1, sizeof(InputAutomationModuleConfigurations));
    InputAutomationModuleConfigurations_init(this, abeClientInformation, file);
    return this;
}


void InputAutomationModuleConfigurations_init2(InputAutomationModuleConfigurations* this, AbeClientInformationInterface* abeClientInformation, Document* document) {
    InputAutomationModuleConfigurations_initFields(this);
        InputAutomationModuleConfigurations_setHashMap(this, HashMap_new());
        NodeList* nameNodeList = Document_getElementsByTagName(document, InputAutomationModuleData_NAME);
        LogUtil_putF(this->logUtil, java_concat("Number Of Module(s) Specified: ", java_string_of(NodeList_getLength(nameNodeList))), this, "Contructor");
        for (int32_t index = 0; index < NodeList_getLength(nameNodeList); index++) {
            Node* node = NodeList_item(nameNodeList, index);
            InputAutomationModuleConfigurations_add(this, InputAutomationModuleConfiguration_new(abeClientInformation, node));
        }
}

InputAutomationModuleConfigurations* InputAutomationModuleConfigurations_new2(AbeClientInformationInterface* abeClientInformation, Document* document) {
    InputAutomationModuleConfigurations* this = calloc(1, sizeof(InputAutomationModuleConfigurations));
    InputAutomationModuleConfigurations_init2(this, abeClientInformation, document);
    return this;
}


void InputAutomationModuleConfigurations_init1(InputAutomationModuleConfigurations* this, List* inputAutomationModuleConfigurationList) {
    InputAutomationModuleConfigurations_initFields(this);
        InputAutomationModuleConfigurations_setHashMap(this, HashMap_new());
        int32_t size = List_size(inputAutomationModuleConfigurationList);
        InputAutomationModuleConfiguration* inputAutomationModuleConfiguration = nullptr;
        for (int32_t index = 0; index < size; index++) {
            inputAutomationModuleConfiguration = List_get(inputAutomationModuleConfigurationList, index);
            InputAutomationModuleConfigurations_add(this, inputAutomationModuleConfiguration);
        }
}

InputAutomationModuleConfigurations* InputAutomationModuleConfigurations_new1(List* inputAutomationModuleConfigurationList) {
    InputAutomationModuleConfigurations* this = calloc(1, sizeof(InputAutomationModuleConfigurations));
    InputAutomationModuleConfigurations_init1(this, inputAutomationModuleConfigurationList);
    return this;
}


void InputAutomationModuleConfigurations_init0(InputAutomationModuleConfigurations* this) {
    InputAutomationModuleConfigurations_initFields(this);
        InputAutomationModuleConfigurations_setHashMap(this, HashMap_new());
}

InputAutomationModuleConfigurations* InputAutomationModuleConfigurations_new0(void) {
    InputAutomationModuleConfigurations* this = calloc(1, sizeof(InputAutomationModuleConfigurations));
    InputAutomationModuleConfigurations_init0(this);
    return this;
}


void InputAutomationModuleConfigurations_add(InputAutomationModuleConfigurations* this, InputAutomationModuleConfiguration* inputAutomationModuleConfiguration) {
        JAVA_CALL(InputAutomationModuleConfigurations_getHashMap(this), put, InputAutomationModuleConfiguration_getClassName(inputAutomationModuleConfiguration), inputAutomationModuleConfiguration);
}


void InputAutomationModuleConfigurations_remove(InputAutomationModuleConfigurations* this, InputAutomationModuleConfiguration* inputAutomationModuleConfiguration) {
        JAVA_CALL(InputAutomationModuleConfigurations_getHashMap(this), remove, InputAutomationModuleConfiguration_getClassName(inputAutomationModuleConfiguration));
}


HashMap* InputAutomationModuleConfigurations_getHashMap(InputAutomationModuleConfigurations* this) {
        return this->hashMap;
}


void InputAutomationModuleConfigurations_setHashMap(InputAutomationModuleConfigurations* this, HashMap* hashMap) {
        this->hashMap = hashMap;
}

