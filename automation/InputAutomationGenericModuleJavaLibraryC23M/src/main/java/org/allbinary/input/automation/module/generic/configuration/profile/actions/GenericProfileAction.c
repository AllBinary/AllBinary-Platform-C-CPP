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
// package org.allbinary.input.automation.module.generic.configuration.profile.actions

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
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GenericProfileActionScript.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct GenericProfileAction GenericProfileAction;
struct GenericProfileAction {
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    const char* name;
    GenericProfileActionScript* genericProfileActionScript;
    GenericProfileActionJPanel* genericProfileActionJPanel;
};


GenericProfileAction* GenericProfileAction_new(GenericProfileActionJPanel* genericProfileActionJPanel, Node* node);

void GenericProfileAction_init(GenericProfileAction* this, GenericProfileActionJPanel* genericProfileActionJPanel, Node* node);

GenericProfileAction* GenericProfileAction_new1(const char* name);
void GenericProfileAction_init1(GenericProfileAction* this, const char* name);
const char* GenericProfileAction_getName(GenericProfileAction* this);
void GenericProfileAction_setName(GenericProfileAction* this, const char* name);
HashMap* GenericProfileAction_toHashMap(GenericProfileAction* this);
Node* GenericProfileAction_toXmlNode(GenericProfileAction* this, Document* document);
GenericProfileActionScript* GenericProfileAction_getGenericProfileActionScript(GenericProfileAction* this);
void GenericProfileAction_setGenericProfileActionScript(GenericProfileAction* this, GenericProfileActionScript* genericProfileActionScript);

static void GenericProfileAction_initFields(GenericProfileAction* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->genericProfileActionScript = nullptr;
    this->genericProfileActionJPanel = nullptr;
}


void GenericProfileAction_init(GenericProfileAction* this, GenericProfileActionJPanel* genericProfileActionJPanel, Node* node) {
    GenericProfileAction_initFields(this);
        Node* actionNameNode = DomSearchHelper_getNode(GenericProfileActionData_NAME, Node_getChildNodes(node));
        if (actionNameNode != nullptr) {
            this->name = DomNodeHelper_getTextNodeValue(actionNameNode);
        } else {
            java_throw(java_exception_new("Exception", "Profile Action Name Node Null"));
        }
        GenericProfileAction_setGenericProfileActionScript(this, GenericProfileActionScript_new(this->genericProfileActionJPanel, node));
}

GenericProfileAction* GenericProfileAction_new(GenericProfileActionJPanel* genericProfileActionJPanel, Node* node) {
    GenericProfileAction* this = calloc(1, sizeof(GenericProfileAction));
    GenericProfileAction_init(this, genericProfileActionJPanel, node);
    return this;
}


void GenericProfileAction_init1(GenericProfileAction* this, const char* name) {
    GenericProfileAction_initFields(this);
        this->name = name;
        GenericProfileAction_setGenericProfileActionScript(this, GenericProfileActionScript_new(this->genericProfileActionJPanel));
}

GenericProfileAction* GenericProfileAction_new1(const char* name) {
    GenericProfileAction* this = calloc(1, sizeof(GenericProfileAction));
    GenericProfileAction_init1(this, name);
    return this;
}


const char* GenericProfileAction_getName(GenericProfileAction* this) {
        return this->name;
}


void GenericProfileAction_setName(GenericProfileAction* this, const char* name) {
        this->name = name;
}


HashMap* GenericProfileAction_toHashMap(GenericProfileAction* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, GenericProfileActionData_NAME, this->name);
        LogUtil_putF(this->logUtil, java_concat("HashMap: ", HashMap_toString(hashMap)), this, "toHashMap()");
        return hashMap;
}


// throws Exception
Node* GenericProfileAction_toXmlNode(GenericProfileAction* this, Document* document) {
        Node* node = ModDomHelper_createNodeWithValueNodes(document, GenericProfileActionData_NAME, GenericProfileAction_toHashMap(this));
        Node_appendChild(node, JAVA_CALL(GenericProfileAction_getGenericProfileActionScript(this), toXmlNode, document));
        return node;
}


GenericProfileActionScript* GenericProfileAction_getGenericProfileActionScript(GenericProfileAction* this) {
        return this->genericProfileActionScript;
}


void GenericProfileAction_setGenericProfileActionScript(GenericProfileAction* this, GenericProfileActionScript* genericProfileActionScript) {
        this->genericProfileActionScript = genericProfileActionScript;
}

