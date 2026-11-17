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
// package org.allbinary.business.user.modules.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/time/created/TimeCreatedView.h"
#include "org/allbinary/business/time/modified/TimeLastModifiedView.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationData.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationView.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct UserConfigurationView UserConfigurationView;
struct UserConfigurationView {
    DomNodeInterface DomNodeInterface_interface;
    UserConfigurationInterface* userConfigurationInterface;
};


UserConfigurationView* UserConfigurationView_new(Node* node);

void UserConfigurationView_init(UserConfigurationView* this, Node* node);

UserConfigurationView* UserConfigurationView_new1(UserConfigurationInterface* userConfigurationInterface);
void UserConfigurationView_init1(UserConfigurationView* this, UserConfigurationInterface* userConfigurationInterface);
UserConfigurationInterface* UserConfigurationView_getUserConfigurationInterface(UserConfigurationView* this);
Node* UserConfigurationView_toXmlNode(UserConfigurationView* this, Document* document);

static void UserConfigurationView_initFields(UserConfigurationView* this) {
    
}


void UserConfigurationView_init(UserConfigurationView* this, Node* node) {
    UserConfigurationView_initFields(this);
        this->userConfigurationInterface = ((UserConfigurationInterface*) UserConfiguration_new());
        NodeList* childNodeList = Node_getChildNodes(node);
        Node* emailConfigurationNode = DomSearchHelper_getNode(UserEmailConfigurationData_NAME, childNodeList);
        UserEmailConfigurationView* userEmailConfigurationView = UserEmailConfigurationView_new(emailConfigurationNode);
        UserEmailConfigurationInterface* userEmailConfigurationInterface = ((UserEmailConfigurationInterface*) UserEmailConfigurationView_getEmailConfigurationInterface(userEmailConfigurationView));
        UserConfigurationInterface_setUserEmailConfigurationInterface(this->userConfigurationInterface, userEmailConfigurationInterface);
        Node* timeCreatedNode = DomSearchHelper_getNode(EntryData_getInstance()->TIMECREATED, childNodeList);
        TimeCreatedView* timeCreatedView = TimeCreatedView_new(timeCreatedNode);
        UserConfigurationInterface_setTimeCreated(this->userConfigurationInterface, TimeCreatedView_getTimeCreated(timeCreatedView));
        Node* timeLastModifiedNode = DomSearchHelper_getNode(EntryData_getInstance()->LASTMODIFIED, childNodeList);
        TimeLastModifiedView* timeLastModifiedView = TimeLastModifiedView_new(timeLastModifiedNode);
        UserConfigurationInterface_setTimeLastModified(this->userConfigurationInterface, TimeLastModifiedView_getTimeLastModified(timeLastModifiedView));
}

UserConfigurationView* UserConfigurationView_new(Node* node) {
    UserConfigurationView* this = calloc(1, sizeof(UserConfigurationView));
    UserConfigurationView_init(this, node);
    return this;
}


void UserConfigurationView_init1(UserConfigurationView* this, UserConfigurationInterface* userConfigurationInterface) {
    UserConfigurationView_initFields(this);
        this->userConfigurationInterface = userConfigurationInterface;
}

UserConfigurationView* UserConfigurationView_new1(UserConfigurationInterface* userConfigurationInterface) {
    UserConfigurationView* this = calloc(1, sizeof(UserConfigurationView));
    UserConfigurationView_init1(this, userConfigurationInterface);
    return this;
}


UserConfigurationInterface* UserConfigurationView_getUserConfigurationInterface(UserConfigurationView* this) {
        return this->userConfigurationInterface;
}


// throws Exception
Node* UserConfigurationView_toXmlNode(UserConfigurationView* this, Document* document) {
        Node* node = Document_createElement(document, UserConfigurationData_NAME);
        UserEmailConfigurationView* userEmailConfigurationView = UserEmailConfigurationView_new(UserConfigurationInterface_getUserEmailConfigurationInterface(this->userConfigurationInterface));
        Node_appendChild(node, UserEmailConfigurationView_toXmlNode(userEmailConfigurationView, document));
        TimeCreatedView* timeCreatedView = TimeCreatedView_new(UserConfigurationInterface_getTimeCreated(this->userConfigurationInterface));
        Node_appendChild(node, TimeCreatedView_toXmlNode(timeCreatedView, document));
        TimeLastModifiedView* timeLastModifiedView = TimeLastModifiedView_new(UserConfigurationInterface_getTimeLastModified(this->userConfigurationInterface));
        Node_appendChild(node, TimeLastModifiedView_toXmlNode(timeLastModifiedView, document));
        return node;
}

