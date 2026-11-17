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
// package org.allbinary.logic.communication.smtp.configuration.user

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationData.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationInterface.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationView.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct UserEmailConfigurationView UserEmailConfigurationView;
struct UserEmailConfigurationView {
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    UserEmailConfigurationInterface* userEmailConfigurationInterface;
};


UserEmailConfigurationView* UserEmailConfigurationView_new(Node* node);

void UserEmailConfigurationView_init(UserEmailConfigurationView* this, Node* node);

UserEmailConfigurationView* UserEmailConfigurationView_new1(UserEmailConfigurationInterface* userEmailConfigurationInterface);
void UserEmailConfigurationView_init1(UserEmailConfigurationView* this, UserEmailConfigurationInterface* userEmailConfigurationInterface);
UserEmailConfigurationInterface* UserEmailConfigurationView_getEmailConfigurationInterface(UserEmailConfigurationView* this);
Node* UserEmailConfigurationView_toXmlNode(UserEmailConfigurationView* this, Document* document);

static void UserEmailConfigurationView_initFields(UserEmailConfigurationView* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
}


void UserEmailConfigurationView_init(UserEmailConfigurationView* this, Node* node) {
    UserEmailConfigurationView_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            LogUtil_putF(this->logUtil, this->commonStrings->CONSTRUCTOR, this, this->commonStrings->CONSTRUCTOR);
        }
        this->userEmailConfigurationInterface = ((UserEmailConfigurationInterface*) UserEmailConfiguration_new());
        NodeList* childNodeList = Node_getChildNodes(node);
        Node* userEmailEventsConfigurationNode = DomSearchHelper_getNodeNoThrow(UserEmailEventsConfigurationData_NAME, childNodeList);
        UserEmailEventsConfigurationView* userEmailEventsConfigurationView = UserEmailEventsConfigurationView_new(userEmailEventsConfigurationNode);
        UserEmailConfigurationInterface_setUserEmailEventsConfigurationInterface(this->userEmailConfigurationInterface, UserEmailEventsConfigurationView_getUserEmailEventsConfigurationInterface(userEmailEventsConfigurationView));
}

UserEmailConfigurationView* UserEmailConfigurationView_new(Node* node) {
    UserEmailConfigurationView* this = calloc(1, sizeof(UserEmailConfigurationView));
    UserEmailConfigurationView_init(this, node);
    return this;
}


void UserEmailConfigurationView_init1(UserEmailConfigurationView* this, UserEmailConfigurationInterface* userEmailConfigurationInterface) {
    UserEmailConfigurationView_initFields(this);
        this->userEmailConfigurationInterface = userEmailConfigurationInterface;
}

UserEmailConfigurationView* UserEmailConfigurationView_new1(UserEmailConfigurationInterface* userEmailConfigurationInterface) {
    UserEmailConfigurationView* this = calloc(1, sizeof(UserEmailConfigurationView));
    UserEmailConfigurationView_init1(this, userEmailConfigurationInterface);
    return this;
}


UserEmailConfigurationInterface* UserEmailConfigurationView_getEmailConfigurationInterface(UserEmailConfigurationView* this) {
        return this->userEmailConfigurationInterface;
}


// throws Exception
Node* UserEmailConfigurationView_toXmlNode(UserEmailConfigurationView* this, Document* document) {
        UserEmailConfigurationMapping* emailConfigurationMapping = UserEmailConfigurationMapping_new(this->userEmailConfigurationInterface);
        HashMap* hashMap = UserEmailConfigurationMapping_toHashMap(emailConfigurationMapping);
        Node* node = ModDomHelper_createNameValueNodes(document, UserEmailConfigurationData_NAME, hashMap);
        UserEmailConfigurationInterface* userEmailConfigurationInterface = UserEmailConfigurationView_getEmailConfigurationInterface(this);
        UserEmailEventsConfigurationInterface* userEmailEventsConfigurationInterface = UserEmailConfigurationInterface_getUserEmailEventsConfigurationInterface(userEmailConfigurationInterface);
        UserEmailEventsConfigurationView* userEmailEventsConfigurationView = UserEmailEventsConfigurationView_new(userEmailEventsConfigurationInterface);
        Node_appendChild(node, UserEmailEventsConfigurationView_toXmlNode(userEmailEventsConfigurationView, document));
        return node;
}

