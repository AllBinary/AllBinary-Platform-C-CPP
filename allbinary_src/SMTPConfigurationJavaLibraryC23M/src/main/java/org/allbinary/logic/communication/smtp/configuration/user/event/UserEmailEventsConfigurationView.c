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
// #include "java/util/Set.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct UserEmailEventsConfigurationView UserEmailEventsConfigurationView;
struct UserEmailEventsConfigurationView {
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    UserEmailEventsConfigurationInterface* userEmailEventsConfigurationInterface;
};


UserEmailEventsConfigurationView* UserEmailEventsConfigurationView_new(Node* node);

void UserEmailEventsConfigurationView_init(UserEmailEventsConfigurationView* this, Node* node);

UserEmailEventsConfigurationView* UserEmailEventsConfigurationView_new1(UserEmailEventsConfigurationInterface* userEmailEventsConfigurationInterface);
void UserEmailEventsConfigurationView_init1(UserEmailEventsConfigurationView* this, UserEmailEventsConfigurationInterface* userEmailEventsConfigurationInterface);
UserEmailEventsConfigurationInterface* UserEmailEventsConfigurationView_getUserEmailEventsConfigurationInterface(UserEmailEventsConfigurationView* this);
Node* UserEmailEventsConfigurationView_toXmlNode(UserEmailEventsConfigurationView* this, Document* document);

static void UserEmailEventsConfigurationView_initFields(UserEmailEventsConfigurationView* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
}


void UserEmailEventsConfigurationView_init(UserEmailEventsConfigurationView* this, Node* node) {
    UserEmailEventsConfigurationView_initFields(this);
        this->userEmailEventsConfigurationInterface = ((UserEmailEventsConfigurationInterface*) UserEmailEventsConfiguration_new());
        NodeList* childNodeList = Node_getChildNodes(node);
        BasicArrayList* emailEventConfigurationNodeVector = DomSearchHelper_getAllNodesNoThrow(UserEmailEventConfigurationData_NAME, childNodeList);
        int32_t size = BasicArrayList_size(emailEventConfigurationNodeVector);
        for (int32_t index = 0; index < size; index++) {
            Node* userEmailConfigurationNode = ((Node*) BasicArrayList_get(emailEventConfigurationNodeVector, index));
            UserEmailEventConfigurationView* userEmailEventConfigurationView = UserEmailEventConfigurationView_new(userEmailConfigurationNode);
            UserEmailEventsConfigurationInterface_addUserEmailEventConfiguration(this->userEmailEventsConfigurationInterface, UserEmailEventConfigurationView_getUserEmailEventConfigurationInterface(userEmailEventConfigurationView));
        }
}

UserEmailEventsConfigurationView* UserEmailEventsConfigurationView_new(Node* node) {
    UserEmailEventsConfigurationView* this = calloc(1, sizeof(UserEmailEventsConfigurationView));
    UserEmailEventsConfigurationView_init(this, node);
    return this;
}


void UserEmailEventsConfigurationView_init1(UserEmailEventsConfigurationView* this, UserEmailEventsConfigurationInterface* userEmailEventsConfigurationInterface) {
    UserEmailEventsConfigurationView_initFields(this);
        this->userEmailEventsConfigurationInterface = userEmailEventsConfigurationInterface;
}

UserEmailEventsConfigurationView* UserEmailEventsConfigurationView_new1(UserEmailEventsConfigurationInterface* userEmailEventsConfigurationInterface) {
    UserEmailEventsConfigurationView* this = calloc(1, sizeof(UserEmailEventsConfigurationView));
    UserEmailEventsConfigurationView_init1(this, userEmailEventsConfigurationInterface);
    return this;
}


UserEmailEventsConfigurationInterface* UserEmailEventsConfigurationView_getUserEmailEventsConfigurationInterface(UserEmailEventsConfigurationView* this) {
        return this->userEmailEventsConfigurationInterface;
}


// throws Exception
Node* UserEmailEventsConfigurationView_toXmlNode(UserEmailEventsConfigurationView* this, Document* document) {
        UserEmailEventsConfigurationMapping* userEmailConfigurationMapping = UserEmailEventsConfigurationMapping_new(this->userEmailEventsConfigurationInterface);
        Node* node = Document_createElement(document, UserEmailEventsConfigurationData_NAME);
        HashMap* emailEventHashMap = JAVA_CALL(UserEmailEventsConfigurationView_getUserEmailEventsConfigurationInterface(this), getEventConfigurationHashMap);
        Set* set = HashMap_keySet(emailEventHashMap);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            LogUtil_putF(this->logUtil, java_concat("Number Of Email Events Specified in file: ", java_string_of(Set_size(set))), this, this->commonStrings->CONSTRUCTOR);
        }
        Any** eventNameArray = Set_toArray(set);
        int32_t size = java_array_length(eventNameArray);
        for (int32_t index = 0; index < size; index++) {
            const char* eventName = ((const char*) eventNameArray[index]);
            UserEmailEventConfigurationInterface* userEmailEventsConfigurationInterface = ((UserEmailEventConfigurationInterface*) HashMap_get(emailEventHashMap, eventName));
            UserEmailEventConfigurationView* userEmailEventConfigurationView = UserEmailEventConfigurationView_new(userEmailEventsConfigurationInterface);
            Node_appendChild(node, UserEmailEventConfigurationView_toXmlNode(userEmailEventConfigurationView, document));
        }
        return node;
}

