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
// package org.allbinary.business.context.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationData.h"
#include "org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationInterface.h"
#include "org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationView.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/w3c/dom/NodeList.h"

typedef struct ContextConfigurationView ContextConfigurationView;
struct ContextConfigurationView {
    DomNodeInterface DomNodeInterface_interface;
    ContextConfigurationInterface* contextConfigurationInterface;
};


ContextConfigurationView* ContextConfigurationView_new(Node* node);

void ContextConfigurationView_init(ContextConfigurationView* this, Node* node);

ContextConfigurationView* ContextConfigurationView_new1(ContextConfigurationInterface* contextConfigurationInterface);
void ContextConfigurationView_init1(ContextConfigurationView* this, ContextConfigurationInterface* contextConfigurationInterface);
ContextConfigurationInterface* ContextConfigurationView_getContextConfigurationInterface(ContextConfigurationView* this);
Node* ContextConfigurationView_toXmlNode(ContextConfigurationView* this, Document* document);

static void ContextConfigurationView_initFields(ContextConfigurationView* this) {
    
}


void ContextConfigurationView_init(ContextConfigurationView* this, Node* node) {
    ContextConfigurationView_initFields(this);
        NodeList* childNodeList = Node_getChildNodes(node);
        this->contextConfigurationInterface = ContextConfiguration_new();
        Node* emailConfigurationNode = DomSearchHelper_getNode(EmailServerConfigurationData_NAME, childNodeList);
        EmailServerConfigurationView* emailServerConfigurationView = EmailServerConfigurationView_new(emailConfigurationNode);
        ContextConfigurationInterface_setEmailServerConfigurationInterface(this->contextConfigurationInterface, ((EmailServerConfigurationInterface*) EmailServerConfigurationView_getEmailConfigurationInterface(emailServerConfigurationView)));
}

ContextConfigurationView* ContextConfigurationView_new(Node* node) {
    ContextConfigurationView* this = calloc(1, sizeof(ContextConfigurationView));
    ContextConfigurationView_init(this, node);
    return this;
}


void ContextConfigurationView_init1(ContextConfigurationView* this, ContextConfigurationInterface* contextConfigurationInterface) {
    ContextConfigurationView_initFields(this);
        this->contextConfigurationInterface = contextConfigurationInterface;
}

ContextConfigurationView* ContextConfigurationView_new1(ContextConfigurationInterface* contextConfigurationInterface) {
    ContextConfigurationView* this = calloc(1, sizeof(ContextConfigurationView));
    ContextConfigurationView_init1(this, contextConfigurationInterface);
    return this;
}


ContextConfigurationInterface* ContextConfigurationView_getContextConfigurationInterface(ContextConfigurationView* this) {
        return this->contextConfigurationInterface;
}


// throws Exception
Node* ContextConfigurationView_toXmlNode(ContextConfigurationView* this, Document* document) {
        Node* node = Document_createElement(document, ContextConfigurationData_getInstance()->NAME);
        EmailServerConfigurationView* emailServerConfigurationView = EmailServerConfigurationView_new(JAVA_CALL(ContextConfigurationView_getContextConfigurationInterface(this), getEmailServerConfigurationInterface));
        Node_appendChild(node, EmailServerConfigurationView_toXmlNode(emailServerConfigurationView, document));
        return node;
}

