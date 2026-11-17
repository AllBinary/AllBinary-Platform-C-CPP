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
// #include "java/util/HashMap.h"
// #include "java/util/Iterator.h"
// #include "java/util/Set.h"
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/BasicProfileActionScriptProcessor.h"
#include "org/allbinary/input/automation/robot/InputRobotFactory.h"
#include "org/allbinary/input/automation/robot/InputRobotInterface.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/ProfileActionScriptInputInterface.h"

typedef struct BasicProfileActionScriptInput BasicProfileActionScriptInput;
struct BasicProfileActionScriptInput {
    BasicProfileActionScriptProcessor base;
    ProfileActionScriptInputInterface ProfileActionScriptInputInterface_interface;
    LogUtil* logUtil;
    InputRobotInterface* inputRobotInterface;
    int32_t time;
};


BasicProfileActionScriptInput* BasicProfileActionScriptInput_new(const char* label, Node* node);

void BasicProfileActionScriptInput_init(BasicProfileActionScriptInput* this, const char* label, Node* node);

BasicProfileActionScriptInput* BasicProfileActionScriptInput_new1(const char* label);
void BasicProfileActionScriptInput_init1(BasicProfileActionScriptInput* this, const char* label);
int32_t BasicProfileActionScriptInput_getTime(BasicProfileActionScriptInput* this);
void BasicProfileActionScriptInput_setTime(BasicProfileActionScriptInput* this, int32_t time);
HashMap* BasicProfileActionScriptInput_BasicProfileActionScriptInput_toHashMap(BasicProfileActionScriptInput* this);
Node* BasicProfileActionScriptInput_toXmlNode(BasicProfileActionScriptInput* this, Document* document);
void BasicProfileActionScriptInput_setInputRobotInterface(BasicProfileActionScriptInput* this, InputRobotInterface* inputRobotInterface);
InputRobotInterface* BasicProfileActionScriptInput_getInputRobotInterface(BasicProfileActionScriptInput* this);
const char* BasicProfileActionScriptInput_toString(BasicProfileActionScriptInput* this);

static void BasicProfileActionScriptInput_initFields(BasicProfileActionScriptInput* this) {
    this->logUtil = LogUtil_getInstance();
    this->inputRobotInterface = nullptr;
    this->time = 0;
}


void BasicProfileActionScriptInput_init(BasicProfileActionScriptInput* this, const char* label, Node* node) {
        BasicProfileActionScriptProcessor_init(&this->base, label, node);
        BasicProfileActionScriptInput_initFields(this);
        LogUtil_putF(this->logUtil, java_concat(java_string_of(this->commonStrings->START), label), this, this->commonStrings->CONSTRUCTOR);
        Node* actionNode = DomSearchHelper_getNode(GenericProfileActionScriptInputData_TYPE, Node_getChildNodes(node));
        const char* inputTypeString = DomNodeHelper_getTextNodeValue(actionNode);
        Node* timeNode = DomSearchHelper_getNodeNoThrow(GenericProfileActionScriptInputData_DELAY, Node_getChildNodes(node));
        if (timeNode != nullptr) {
            const char* delayString = DomNodeHelper_getTextNodeValue(timeNode);
            BasicProfileActionScriptInput_setTime(this, JAVA_CALL(java_string_of(delayString), intValue));
        } else {
            BasicProfileActionScriptInput_setTime(this, 0);
        }
        BasicProfileActionScriptInput_setInputRobotInterface(this, InputRobotFactory_get(InputRobotFactory_getInstance(), inputTypeString));
}

BasicProfileActionScriptInput* BasicProfileActionScriptInput_new(const char* label, Node* node) {
    BasicProfileActionScriptInput* this = calloc(1, sizeof(BasicProfileActionScriptInput));
    BasicProfileActionScriptInput_init(this, label, node);
    return this;
}


void BasicProfileActionScriptInput_init1(BasicProfileActionScriptInput* this, const char* label) {
        BasicProfileActionScriptProcessor_init(&this->base, label);
        BasicProfileActionScriptInput_initFields(this);
        LogUtil_putF(this->logUtil, java_concat(java_string_of(this->commonStrings->START), label), this, this->commonStrings->CONSTRUCTOR);
        InputRobotFactory* inputRobotFactory = InputRobotFactory_getInstance();
        ABHashtable* hashtable = ((ABHashtable*) InputRobotFactory_get(inputRobotFactory));
        Set* set = ABHashtable_keySet(hashtable);
        Iterator* iterator = Set_iterator(set);
        BasicProfileActionScriptInput_setInputRobotInterface(this, InputRobotFactory_get(inputRobotFactory, ((const char*) Iterator_next(iterator))));
        BasicProfileActionScriptInput_setTime(this, 0);
}

BasicProfileActionScriptInput* BasicProfileActionScriptInput_new1(const char* label) {
    BasicProfileActionScriptInput* this = calloc(1, sizeof(BasicProfileActionScriptInput));
    BasicProfileActionScriptInput_init1(this, label);
    return this;
}


int32_t BasicProfileActionScriptInput_getTime(BasicProfileActionScriptInput* this) {
        return this->time;
}


void BasicProfileActionScriptInput_setTime(BasicProfileActionScriptInput* this, int32_t time) {
        this->time = time;
}


HashMap* BasicProfileActionScriptInput_BasicProfileActionScriptInput_toHashMap(BasicProfileActionScriptInput* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, GenericProfileActionScriptInputData_TYPE, JAVA_CALL(BasicProfileActionScriptInput_getInputRobotInterface(this), getName));
        HashMap_put(hashMap, GenericProfileActionScriptInputData_DELAY, java_string_of(BasicProfileActionScriptInput_getTime(this)));
        LogUtil_putF(this->logUtil, java_concat("HashMap: ", HashMap_toString(hashMap)), this, "toHashMap()");
        return hashMap;
}


// throws Exception
Node* BasicProfileActionScriptInput_toXmlNode(BasicProfileActionScriptInput* this, Document* document) {
        Node* node = ModDomHelper_createNodeWithValueNodes(document, GenericProfileActionScriptInputData_NAME, BasicProfileActionScriptInput_BasicProfileActionScriptInput_toHashMap(this));
        return node;
}


void BasicProfileActionScriptInput_setInputRobotInterface(BasicProfileActionScriptInput* this, InputRobotInterface* inputRobotInterface) {
        this->inputRobotInterface = inputRobotInterface;
}


InputRobotInterface* BasicProfileActionScriptInput_getInputRobotInterface(BasicProfileActionScriptInput* this) {
        return this->inputRobotInterface;
}


const char* BasicProfileActionScriptInput_toString(BasicProfileActionScriptInput* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, BasicProfileActionScriptProcessor_toString((&this->base)));
        StringMaker_append(stringBuffer, " Input Type: ");
        if (BasicProfileActionScriptInput_getInputRobotInterface(this) != nullptr) {
            StringMaker_append(stringBuffer, JAVA_CALL(BasicProfileActionScriptInput_getInputRobotInterface(this), getName));
        } else {
            StringMaker_append(stringBuffer, StringUtil_getInstance()->NULL_STRING);
        }
        StringMaker_append(stringBuffer, " Time: ");
        StringMaker_appendlong(stringBuffer, ((int64_t) BasicProfileActionScriptInput_getTime(this)));
        return StringMaker_toString(stringBuffer);
}

