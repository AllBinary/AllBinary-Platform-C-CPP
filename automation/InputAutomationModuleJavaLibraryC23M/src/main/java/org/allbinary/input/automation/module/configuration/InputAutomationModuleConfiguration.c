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
// #include "javax/xml/bind/annotation/XmlAccessType.h"
// #include "javax/xml/bind/annotation/XmlAccessorType.h"
// #include "javax/xml/bind/annotation/XmlElement.h"
// #include "javax/xml/bind/annotation/XmlRootElement.h"
// #include "javax/xml/bind/annotation/XmlType.h"
#include "org/allbinary/business/DynamicObjectData.h"
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/input/automation/InputAutomationData.h"
#include "org/allbinary/input/automation/module/InputAutomationModuleData.h"
#include "org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/loader/AbeFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct InputAutomationModuleConfiguration InputAutomationModuleConfiguration;
struct InputAutomationModuleConfiguration {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    const char* className;
    const char* name;
    InputAutomationModuleFactoryInterface* inputAutomationModuleInterface;
};


InputAutomationModuleConfiguration* InputAutomationModuleConfiguration_new(void);

void InputAutomationModuleConfiguration_init(InputAutomationModuleConfiguration* this);

InputAutomationModuleConfiguration* InputAutomationModuleConfiguration_new2(AbeClientInformationInterface* abeClientInformation, Node* node);
void InputAutomationModuleConfiguration_init2(InputAutomationModuleConfiguration* this, AbeClientInformationInterface* abeClientInformation, Node* node);

InputAutomationModuleConfiguration* InputAutomationModuleConfiguration_new3(AbeClientInformationInterface* abeClientInformation, const char* name, const char* className);
void InputAutomationModuleConfiguration_init3(InputAutomationModuleConfiguration* this, AbeClientInformationInterface* abeClientInformation, const char* name, const char* className);

InputAutomationModuleConfiguration* InputAutomationModuleConfiguration_new1(InputAutomationModuleFactoryInterface* inputAutomationModuleInterface);
void InputAutomationModuleConfiguration_init1(InputAutomationModuleConfiguration* this, InputAutomationModuleFactoryInterface* inputAutomationModuleInterface);
void InputAutomationModuleConfiguration_init(InputAutomationModuleConfiguration* this, AbeClientInformationInterface* abeClientInformation, Node* node);
void InputAutomationModuleConfiguration_init(InputAutomationModuleConfiguration* this, AbeClientInformationInterface* abeClientInformation);
Node* InputAutomationModuleConfiguration_toDomNode(InputAutomationModuleConfiguration* this, Document* document);
const char* InputAutomationModuleConfiguration_getName(InputAutomationModuleConfiguration* this);
void InputAutomationModuleConfiguration_setName(InputAutomationModuleConfiguration* this, const char* name);
const char* InputAutomationModuleConfiguration_getClassName(InputAutomationModuleConfiguration* this);
void InputAutomationModuleConfiguration_setClassName(InputAutomationModuleConfiguration* this, const char* className);
InputAutomationModuleFactoryInterface* InputAutomationModuleConfiguration_getInputAutomationModuleInterface(InputAutomationModuleConfiguration* this);
void InputAutomationModuleConfiguration_setInputAutomationModuleInterface(InputAutomationModuleConfiguration* this, InputAutomationModuleFactoryInterface* inputAutomationModuleInterface);

static void InputAutomationModuleConfiguration_initFields(InputAutomationModuleConfiguration* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->className = nullptr;
    this->name = nullptr;
    this->inputAutomationModuleInterface = nullptr;
}


void InputAutomationModuleConfiguration_init(InputAutomationModuleConfiguration* this) {
    InputAutomationModuleConfiguration_initFields(this);
}

InputAutomationModuleConfiguration* InputAutomationModuleConfiguration_new(void) {
    InputAutomationModuleConfiguration* this = calloc(1, sizeof(InputAutomationModuleConfiguration));
    InputAutomationModuleConfiguration_init(this);
    return this;
}


void InputAutomationModuleConfiguration_init2(InputAutomationModuleConfiguration* this, AbeClientInformationInterface* abeClientInformation, Node* node) {
    InputAutomationModuleConfiguration_initFields(this);
        InputAutomationModuleConfiguration_init(this, abeClientInformation, node);
}

InputAutomationModuleConfiguration* InputAutomationModuleConfiguration_new2(AbeClientInformationInterface* abeClientInformation, Node* node) {
    InputAutomationModuleConfiguration* this = calloc(1, sizeof(InputAutomationModuleConfiguration));
    InputAutomationModuleConfiguration_init2(this, abeClientInformation, node);
    return this;
}


void InputAutomationModuleConfiguration_init3(InputAutomationModuleConfiguration* this, AbeClientInformationInterface* abeClientInformation, const char* name, const char* className) {
    InputAutomationModuleConfiguration_initFields(this);
        InputAutomationModuleConfiguration_setName(this, name);
        InputAutomationModuleConfiguration_setClassName(this, className);
        InputAutomationModuleConfiguration_init(this, abeClientInformation);
}

InputAutomationModuleConfiguration* InputAutomationModuleConfiguration_new3(AbeClientInformationInterface* abeClientInformation, const char* name, const char* className) {
    InputAutomationModuleConfiguration* this = calloc(1, sizeof(InputAutomationModuleConfiguration));
    InputAutomationModuleConfiguration_init3(this, abeClientInformation, name, className);
    return this;
}


void InputAutomationModuleConfiguration_init1(InputAutomationModuleConfiguration* this, InputAutomationModuleFactoryInterface* inputAutomationModuleInterface) {
    InputAutomationModuleConfiguration_initFields(this);
        InputAutomationModuleConfiguration_setInputAutomationModuleInterface(this, inputAutomationModuleInterface);
        InputAutomationModuleConfiguration_setClassName(this, java_class_of(this->inputAutomationModuleInterface));
}

InputAutomationModuleConfiguration* InputAutomationModuleConfiguration_new1(InputAutomationModuleFactoryInterface* inputAutomationModuleInterface) {
    InputAutomationModuleConfiguration* this = calloc(1, sizeof(InputAutomationModuleConfiguration));
    InputAutomationModuleConfiguration_init1(this, inputAutomationModuleInterface);
    return this;
}


// throws Exception
void InputAutomationModuleConfiguration_init(InputAutomationModuleConfiguration* this, AbeClientInformationInterface* abeClientInformation, Node* node) {
        NodeList* nodeList = Node_getChildNodes(node);
        if (nodeList != nullptr) {
            Node* classNameNode = DomSearchHelper_getNode(DynamicObjectData_NAME, nodeList);
            if (classNameNode != nullptr) {
                InputAutomationModuleConfiguration_setClassName(this, DomNodeHelper_getTextNodeValue(classNameNode));
                InputAutomationModuleConfiguration_init(this, abeClientInformation);
            } else {
                LogUtil_putF(this->logUtil, "Class Node Null", this, this->commonStrings->INIT);
            }
        } else {
            LogUtil_putF(this->logUtil, java_concat(java_string_of(InputAutomationData_NAME), " Node Has No Children"), this, "Contructor");
        }
}


// Java overloaded method: C needs a different name
void InputAutomationModuleConfiguration_init(InputAutomationModuleConfiguration* this, AbeClientInformationInterface* abeClientInformation) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, java_concat("Name: ", InputAutomationModuleConfiguration_getName(this)), this, this->commonStrings->INIT);
            LogUtil_putF(this->logUtil, java_concat("ClassName: ", this->className), this, this->commonStrings->INIT);
            InputAutomationModuleConfiguration_setInputAutomationModuleInterface(this, ((InputAutomationModuleFactoryInterface*) JAVA_CALL(AbeFactory_getInstance(AbeFactory_getInstance()), getInstance, abeClientInformation, InputAutomationModuleConfiguration_getClassName(this))));
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->INIT, e);
            java_throw(java_exception_new("RuntimeException", ""));
        } JAVA_END_TRY;
}


// throws Exception
Node* InputAutomationModuleConfiguration_toDomNode(InputAutomationModuleConfiguration* this, Document* document) {
        Node* node = Document_createElement(document, InputAutomationModuleData_NAME);
        Node* classNameNode = ModDomHelper_createTextNode(document, DynamicObjectData_NAME, InputAutomationModuleConfiguration_getClassName(this));
        Node_appendChild(node, classNameNode);
        return node;
}


const char* InputAutomationModuleConfiguration_getName(InputAutomationModuleConfiguration* this) {
        return this->name;
}


void InputAutomationModuleConfiguration_setName(InputAutomationModuleConfiguration* this, const char* name) {
        LogUtil_putF(this->logUtil, java_concat("Name: ", name), this, "setName");
        this->name = name;
}


const char* InputAutomationModuleConfiguration_getClassName(InputAutomationModuleConfiguration* this) {
        return this->className;
}


void InputAutomationModuleConfiguration_setClassName(InputAutomationModuleConfiguration* this, const char* className) {
        LogUtil_putF(this->logUtil, java_concat("ClassName : ", className), this, "setClassName");
        this->className = className;
}


InputAutomationModuleFactoryInterface* InputAutomationModuleConfiguration_getInputAutomationModuleInterface(InputAutomationModuleConfiguration* this) {
        return this->inputAutomationModuleInterface;
}


void InputAutomationModuleConfiguration_setInputAutomationModuleInterface(InputAutomationModuleConfiguration* this, InputAutomationModuleFactoryInterface* inputAutomationModuleInterface) {
        LogUtil_putF(this->logUtil, java_concat("InputAutomationModuleFactoryInterface : ", java_string_of(inputAutomationModuleInterface)), this, "setInputAutomationModuleInterface");
        this->inputAutomationModuleInterface = inputAutomationModuleInterface;
        InputAutomationModuleConfiguration_setName(this, InputAutomationModuleFactoryInterface_getName(this->inputAutomationModuleInterface));
}

