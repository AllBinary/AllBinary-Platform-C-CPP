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
// package org.allbinary.logic.communication.smtp.configuration.server

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
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct EmailServerConfigurationView EmailServerConfigurationView;
struct EmailServerConfigurationView {
    DomNodeInterface DomNodeInterface_interface;
    EmailServerConfigurationInterface* emailServerConfigurationInterface;
};


EmailServerConfigurationView* EmailServerConfigurationView_new(Node* node);

void EmailServerConfigurationView_init(EmailServerConfigurationView* this, Node* node);

EmailServerConfigurationView* EmailServerConfigurationView_new1(EmailServerConfigurationInterface* emailServerConfigurationInterface);
void EmailServerConfigurationView_init1(EmailServerConfigurationView* this, EmailServerConfigurationInterface* emailServerConfigurationInterface);
EmailServerConfigurationInterface* EmailServerConfigurationView_getEmailConfigurationInterface(EmailServerConfigurationView* this);
Node* EmailServerConfigurationView_toXmlNode(EmailServerConfigurationView* this, Document* document);

static void EmailServerConfigurationView_initFields(EmailServerConfigurationView* this) {
    
}


void EmailServerConfigurationView_init(EmailServerConfigurationView* this, Node* node) {
    EmailServerConfigurationView_initFields(this);
        NodeList* childNodeList = Node_getChildNodes(node);
        const char* server = DomNodeHelper_getTextNodeValue(EmailServerConfigurationData_SERVER, childNodeList);
        const char* accountName = DomNodeHelper_getTextNodeValue(EmailServerConfigurationData_ACCOUNT, childNodeList);
        const char* password = DomNodeHelper_getTextNodeValue(EmailServerConfigurationData_PASSWORD, childNodeList);
        this->emailServerConfigurationInterface = ((EmailServerConfigurationInterface*) EmailServerConfiguration_new(accountName, password, server));
}

EmailServerConfigurationView* EmailServerConfigurationView_new(Node* node) {
    EmailServerConfigurationView* this = calloc(1, sizeof(EmailServerConfigurationView));
    EmailServerConfigurationView_init(this, node);
    return this;
}


void EmailServerConfigurationView_init1(EmailServerConfigurationView* this, EmailServerConfigurationInterface* emailServerConfigurationInterface) {
    EmailServerConfigurationView_initFields(this);
        this->emailServerConfigurationInterface = emailServerConfigurationInterface;
}

EmailServerConfigurationView* EmailServerConfigurationView_new1(EmailServerConfigurationInterface* emailServerConfigurationInterface) {
    EmailServerConfigurationView* this = calloc(1, sizeof(EmailServerConfigurationView));
    EmailServerConfigurationView_init1(this, emailServerConfigurationInterface);
    return this;
}


EmailServerConfigurationInterface* EmailServerConfigurationView_getEmailConfigurationInterface(EmailServerConfigurationView* this) {
        return this->emailServerConfigurationInterface;
}


// throws Exception
Node* EmailServerConfigurationView_toXmlNode(EmailServerConfigurationView* this, Document* document) {
        EmailServerConfigurationMapping* emailConfigurationMapping = EmailServerConfigurationMapping_new(this->emailServerConfigurationInterface);
        HashMap* hashMap = EmailServerConfigurationMapping_toHashMap(emailConfigurationMapping);
        Node* node = ModDomHelper_createNodeWithValueNodes(document, EmailServerConfigurationData_NAME, hashMap);
        return node;
}

