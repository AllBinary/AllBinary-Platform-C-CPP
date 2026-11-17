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
// package org.allbinary.input.automation.actions.script.condition

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/data/tree/dom/DomNodeHelper.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"
#include "org/allbinary/input/automation/actions/script/condition/BasicProfileActionScriptCondition.h"
#include "org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptConditionInterface.h"

typedef struct AlwaysActionScriptCondition AlwaysActionScriptCondition;
struct AlwaysActionScriptCondition {
    BasicProfileActionScriptCondition base;
    AlwaysActionScriptConditionInterface AlwaysActionScriptConditionInterface_interface;
    LogUtil* logUtil;
    AlwaysActionScriptConditionJPanel* alwaysActionScriptConditionJPanel;
    bool isOn;
};

static const char* AlwaysActionScriptCondition_NAME = "Always On/Off";

AlwaysActionScriptCondition* AlwaysActionScriptCondition_new(Node* node);

void AlwaysActionScriptCondition_init(AlwaysActionScriptCondition* this, Node* node);

AlwaysActionScriptCondition* AlwaysActionScriptCondition_new0();
void AlwaysActionScriptCondition_init0(AlwaysActionScriptCondition* this);
static void AlwaysActionScriptCondition_init(AlwaysActionScriptCondition* this);
bool AlwaysActionScriptCondition_isIsOn(AlwaysActionScriptCondition* this);
void AlwaysActionScriptCondition_setIsOn(AlwaysActionScriptCondition* this, bool isOn);
void AlwaysActionScriptCondition_showDialog(AlwaysActionScriptCondition* this);
HashMap* AlwaysActionScriptCondition_toHashMap(AlwaysActionScriptCondition* this);
Node* AlwaysActionScriptCondition_toXmlNode(AlwaysActionScriptCondition* this, Document* document);
bool AlwaysActionScriptCondition_shouldProcess(AlwaysActionScriptCondition* this, int64_t frame);
void AlwaysActionScriptCondition_log(AlwaysActionScriptCondition* this);

static void AlwaysActionScriptCondition_initFields(AlwaysActionScriptCondition* this) {
    this->logUtil = LogUtil_getInstance();
    this->alwaysActionScriptConditionJPanel = nullptr;
    this->isOn = false;
}


void AlwaysActionScriptCondition_init(AlwaysActionScriptCondition* this, Node* node) {
        BasicProfileActionScriptCondition_init(&this->base, AlwaysActionScriptCondition_NAME, node);
        AlwaysActionScriptCondition_initFields(this);
        Node* actionNode = DomSearchHelper_getNode(AlwaysActionScriptConditionData_NAME, Node_getChildNodes(node));
        if (actionNode != nullptr) {
            NodeList* nodeList = Node_getChildNodes(actionNode);
            for (int32_t index = 0; index < NodeList_getLength(nodeList); index++) {
                Node* childNode = NodeList_item(nodeList, index);
                if (JAVA_CALL(Node_getNodeName(childNode), compareTo, AlwaysActionScriptConditionData_IS_ON) == 0) {
                    const char* booleanString = DomNodeHelper_getTextNodeValue(childNode);
                    AlwaysActionScriptCondition_setIsOn(this, Boolean_booleanValue(booleanString));
                } else {
                    java_throw(java_exception_new("Exception", "Action Script Condition Unknown Node"));
                }
            }
        } else {
            java_throw(java_exception_new("Exception", "Action Script Condition Node Null"));
        }
        AlwaysActionScriptCondition_init(this);
}

AlwaysActionScriptCondition* AlwaysActionScriptCondition_new(Node* node) {
    AlwaysActionScriptCondition* this = calloc(1, sizeof(AlwaysActionScriptCondition));
    AlwaysActionScriptCondition_init(this, node);
    return this;
}


void AlwaysActionScriptCondition_init0(AlwaysActionScriptCondition* this) {
        BasicProfileActionScriptCondition_init(&this->base, AlwaysActionScriptCondition_NAME);
        AlwaysActionScriptCondition_initFields(this);
        AlwaysActionScriptCondition_init(this);
}

AlwaysActionScriptCondition* AlwaysActionScriptCondition_new0(void) {
    AlwaysActionScriptCondition* this = calloc(1, sizeof(AlwaysActionScriptCondition));
    AlwaysActionScriptCondition_init0(this);
    return this;
}


static void AlwaysActionScriptCondition_init(AlwaysActionScriptCondition* this) {
        this->alwaysActionScriptConditionJPanel = AlwaysActionScriptConditionJPanel_new(this);
}


bool AlwaysActionScriptCondition_isIsOn(AlwaysActionScriptCondition* this) {
        return this->isOn;
}


void AlwaysActionScriptCondition_setIsOn(AlwaysActionScriptCondition* this, bool isOn) {
        this->isOn = isOn;
}


void AlwaysActionScriptCondition_showDialog(AlwaysActionScriptCondition* this) {
        JAVA_CALL(AlwaysActionScriptConditionJPanel_getAlwaysActionJDialog(this->alwaysActionScriptConditionJPanel), setVisible, true);
}


HashMap* AlwaysActionScriptCondition_toHashMap(AlwaysActionScriptCondition* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, AlwaysActionScriptConditionData_IS_ON, java_string_of(AlwaysActionScriptCondition_isIsOn(this)));
        LogUtil_putF(this->logUtil, java_concat("HashMap: ", HashMap_toString(hashMap)), this, "toHashMap()");
        return hashMap;
}


// throws Exception
Node* AlwaysActionScriptCondition_toXmlNode(AlwaysActionScriptCondition* this, Document* document) {
        Node* node = BasicProfileActionScriptCondition_toXmlNode((&this->base), document);
        Node_appendChild(node, ModDomHelper_createNodeWithValueNodes(document, AlwaysActionScriptConditionData_NAME, AlwaysActionScriptCondition_toHashMap(this)));
        return node;
}


// throws Exception
bool AlwaysActionScriptCondition_shouldProcess(AlwaysActionScriptCondition* this, int64_t frame) {
        if (AlwaysActionScriptCondition_isIsOn(this)) {
            return BasicProfileActionScriptCondition_shouldProcess((&this->base), frame);
        }
        return false;
}


void AlwaysActionScriptCondition_log(AlwaysActionScriptCondition* this) {
        LogUtil_putF(this->logUtil, java_concat("Is On: ", java_string_of(AlwaysActionScriptCondition_isIsOn(this))), this, "log");
}

