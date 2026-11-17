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
// package org.allbinary.input.automation.module.generic.configuration.profile.actions.script

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
// #include "javax/swing/tree/DefaultMutableTreeNode.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/input/automation/actions/script/ProfileActionScriptNodeInterface.h"
#include "org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionFactory.h"
#include "org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionData.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionJPanel.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct GenericProfileActionScript GenericProfileActionScript;
struct GenericProfileActionScript {
    DefaultMutableTreeNode base;
    ProfileActionScriptNodeInterface ProfileActionScriptNodeInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    GenericProfileActionJPanel* genericProfileActionJPanel;
    BasicArrayList* profileActionConditionInterfaceVector;
};

static const char* GenericProfileActionScript_NAME = "Root";

GenericProfileActionScript* GenericProfileActionScript_new(GenericProfileActionJPanel* genericProfileActionJPanel, Node* node);

void GenericProfileActionScript_init(GenericProfileActionScript* this, GenericProfileActionJPanel* genericProfileActionJPanel, Node* node);

GenericProfileActionScript* GenericProfileActionScript_new1(GenericProfileActionJPanel* genericProfileActionJPanel);
void GenericProfileActionScript_init1(GenericProfileActionScript* this, GenericProfileActionJPanel* genericProfileActionJPanel);
void GenericProfileActionScript_addCondition(GenericProfileActionScript* this, ProfileActionScriptNodeInterface* profileActionScriptNodeInterface);
void GenericProfileActionScript_removeCondition(GenericProfileActionScript* this, ProfileActionScriptNodeInterface* profileActionScriptNodeInterface);
HashMap* GenericProfileActionScript_toHashMap(GenericProfileActionScript* this);
BasicArrayList* GenericProfileActionScript_getProfileActionConditionInterfaceVector(GenericProfileActionScript* this);
void GenericProfileActionScript_setProfileActionConditionInterfaceVector(GenericProfileActionScript* this, BasicArrayList* profileActionConditionInterfaceVector);
Node* GenericProfileActionScript_toXmlNode(GenericProfileActionScript* this, Document* document);

static void GenericProfileActionScript_initFields(GenericProfileActionScript* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    this->profileActionConditionInterfaceVector = nullptr;
}


void GenericProfileActionScript_init(GenericProfileActionScript* this, GenericProfileActionJPanel* genericProfileActionJPanel, Node* node) {
        DefaultMutableTreeNode_init(&this->base, GenericProfileActionScript_NAME);
        GenericProfileActionScript_initFields(this);
        this->genericProfileActionJPanel = genericProfileActionJPanel;
        GenericProfileActionScript_setProfileActionConditionInterfaceVector(this, BasicArrayListD_new());
        Node* actionScriptNode = DomSearchHelper_getNode(GenericProfileActionData_SCRIPT, Node_getChildNodes(node));
        if (actionScriptNode != nullptr) {
            NodeList* nodeList = Node_getChildNodes(actionScriptNode);
            for (int32_t index = 0; index < NodeList_getLength(nodeList); index++) {
                Node* actionConditionNode = NodeList_item(nodeList, index);
                if (Node_getNodeType(actionConditionNode) == Node_ELEMENT_NODE) {
                    GenericProfileActionScript_addCondition(this, ProfileActionScriptConditionFactory_getInstance(actionConditionNode));
                }
            }
        } else {
            java_throw(java_exception_new("Exception", "Profile Action Script Node Null"));
        }
}

GenericProfileActionScript* GenericProfileActionScript_new(GenericProfileActionJPanel* genericProfileActionJPanel, Node* node) {
    GenericProfileActionScript* this = calloc(1, sizeof(GenericProfileActionScript));
    GenericProfileActionScript_init(this, genericProfileActionJPanel, node);
    return this;
}


void GenericProfileActionScript_init1(GenericProfileActionScript* this, GenericProfileActionJPanel* genericProfileActionJPanel) {
    DefaultMutableTreeNode_init(&this->base);
    GenericProfileActionScript_initFields(this);
        this->genericProfileActionJPanel = genericProfileActionJPanel;
        GenericProfileActionScript_setProfileActionConditionInterfaceVector(this, BasicArrayListD_new());
}

GenericProfileActionScript* GenericProfileActionScript_new1(GenericProfileActionJPanel* genericProfileActionJPanel) {
    GenericProfileActionScript* this = calloc(1, sizeof(GenericProfileActionScript));
    GenericProfileActionScript_init1(this, genericProfileActionJPanel);
    return this;
}


void GenericProfileActionScript_addCondition(GenericProfileActionScript* this, ProfileActionScriptNodeInterface* profileActionScriptNodeInterface) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "addCondition");
        JAVA_CALL(GenericProfileActionScript_getProfileActionConditionInterfaceVector(this), add, profileActionScriptNodeInterface);
        GenericProfileActionScript_add(this, profileActionScriptNodeInterface);
}


void GenericProfileActionScript_removeCondition(GenericProfileActionScript* this, ProfileActionScriptNodeInterface* profileActionScriptNodeInterface) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "removeCondition");
        JAVA_CALL(GenericProfileActionScript_getProfileActionConditionInterfaceVector(this), remove, profileActionScriptNodeInterface);
        GenericProfileActionScript_remove(this, profileActionScriptNodeInterface);
}


HashMap* GenericProfileActionScript_toHashMap(GenericProfileActionScript* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        LogUtil_putF(this->logUtil, java_concat("HashMap: ", HashMap_toString(hashMap)), this, "toHashMap()");
        return hashMap;
}


BasicArrayList* GenericProfileActionScript_getProfileActionConditionInterfaceVector(GenericProfileActionScript* this) {
        return this->profileActionConditionInterfaceVector;
}


void GenericProfileActionScript_setProfileActionConditionInterfaceVector(GenericProfileActionScript* this, BasicArrayList* profileActionConditionInterfaceVector) {
        this->profileActionConditionInterfaceVector = profileActionConditionInterfaceVector;
}


// throws Exception
Node* GenericProfileActionScript_toXmlNode(GenericProfileActionScript* this, Document* document) {
        Node* node = Document_createElement(document, GenericProfileActionData_SCRIPT);
        BasicArrayList* vector = GenericProfileActionScript_getProfileActionConditionInterfaceVector(this);
        int32_t size = BasicArrayList_size(vector);
        for (int32_t index = 0; index < size; index++) {
            ProfileActionScriptConditionInterface* profileActionConditionInterface = ((ProfileActionScriptConditionInterface*) BasicArrayList_get(vector, index));
            Node_appendChild(node, ProfileActionScriptConditionInterface_toXmlNode(profileActionConditionInterface, document));
        }
        return node;
}

