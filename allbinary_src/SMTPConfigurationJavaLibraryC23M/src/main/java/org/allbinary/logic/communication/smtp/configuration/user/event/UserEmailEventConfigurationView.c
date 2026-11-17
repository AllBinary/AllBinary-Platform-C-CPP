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
// package org.allbinary.logic.communication.smtp.configuration.user.event

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
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct UserEmailEventConfigurationView UserEmailEventConfigurationView;
struct UserEmailEventConfigurationView {
    DomNodeInterface DomNodeInterface_interface;
    UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface;
};


UserEmailEventConfigurationView* UserEmailEventConfigurationView_new(Node* node);

void UserEmailEventConfigurationView_init(UserEmailEventConfigurationView* this, Node* node);

UserEmailEventConfigurationView* UserEmailEventConfigurationView_new1(UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface);
void UserEmailEventConfigurationView_init1(UserEmailEventConfigurationView* this, UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface);
Node* UserEmailEventConfigurationView_toXmlNode(UserEmailEventConfigurationView* this, Document* document);
UserEmailEventConfigurationInterface* UserEmailEventConfigurationView_getUserEmailEventConfigurationInterface(UserEmailEventConfigurationView* this);
void UserEmailEventConfigurationView_setUserEmailEventConfigurationInterface(UserEmailEventConfigurationView* this, UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface);

static void UserEmailEventConfigurationView_initFields(UserEmailEventConfigurationView* this) {
    this->userEmailEventConfigurationInterface = nullptr;
}


void UserEmailEventConfigurationView_init(UserEmailEventConfigurationView* this, Node* node) {
    UserEmailEventConfigurationView_initFields(this);
        NodeList* childNodeList = Node_getChildNodes(node);
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        const char* name = DomNodeHelper_getTextNodeValue(UserEmailEventConfigurationData_NAME, childNodeList);
        HashMap_put(hashMap, UserEmailEventConfigurationData_NAME, name);
        const char* eventListenerClassPath = DomNodeHelper_getTextNodeValue(UserEmailEventConfigurationData_LISTENER_CLASSPATH, childNodeList);
        HashMap_put(hashMap, UserEmailEventConfigurationData_LISTENER_CLASSPATH, eventListenerClassPath);
        UserEmailEventConfigurationView_setUserEmailEventConfigurationInterface(this, ((UserEmailEventConfigurationInterface*) UserEmailEventConfiguration_new(hashMap)));
}

UserEmailEventConfigurationView* UserEmailEventConfigurationView_new(Node* node) {
    UserEmailEventConfigurationView* this = calloc(1, sizeof(UserEmailEventConfigurationView));
    UserEmailEventConfigurationView_init(this, node);
    return this;
}


void UserEmailEventConfigurationView_init1(UserEmailEventConfigurationView* this, UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface) {
    UserEmailEventConfigurationView_initFields(this);
        UserEmailEventConfigurationView_setUserEmailEventConfigurationInterface(this, userEmailEventConfigurationInterface);
}

UserEmailEventConfigurationView* UserEmailEventConfigurationView_new1(UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface) {
    UserEmailEventConfigurationView* this = calloc(1, sizeof(UserEmailEventConfigurationView));
    UserEmailEventConfigurationView_init1(this, userEmailEventConfigurationInterface);
    return this;
}


// throws Exception
Node* UserEmailEventConfigurationView_toXmlNode(UserEmailEventConfigurationView* this, Document* document) {
        UserEmailEventConfigurationMapping* userEmailEventConfigurationMapping = UserEmailEventConfigurationMapping_new(UserEmailEventConfigurationView_getUserEmailEventConfigurationInterface(this));
        HashMap* hashMap = UserEmailEventConfigurationMapping_toHashMap(userEmailEventConfigurationMapping);
        Node* node = ModDomHelper_createNameValueNodes(document, UserEmailEventConfigurationData_NAME, hashMap);
        return node;
}


UserEmailEventConfigurationInterface* UserEmailEventConfigurationView_getUserEmailEventConfigurationInterface(UserEmailEventConfigurationView* this) {
        return this->userEmailEventConfigurationInterface;
}


void UserEmailEventConfigurationView_setUserEmailEventConfigurationInterface(UserEmailEventConfigurationView* this, UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface) {
        this->userEmailEventConfigurationInterface = userEmailEventConfigurationInterface;
}

