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
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
#include "org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct UserConfigurationDomDocumentMapping UserConfigurationDomDocumentMapping;
struct UserConfigurationDomDocumentMapping {
    DomDocumentMappingInterface DomDocumentMappingInterface_interface;
    UserConfigurationInterface* userConfigurationInterface;
};


UserConfigurationDomDocumentMapping* UserConfigurationDomDocumentMapping_new(UserConfigurationInterface* userConfigurationInterface);

void UserConfigurationDomDocumentMapping_init(UserConfigurationDomDocumentMapping* this, UserConfigurationInterface* userConfigurationInterface);
Document* UserConfigurationDomDocumentMapping_toXmlDoc(UserConfigurationDomDocumentMapping* this);
const char* UserConfigurationDomDocumentMapping_toDomDocumentString(UserConfigurationDomDocumentMapping* this);

static void UserConfigurationDomDocumentMapping_initFields(UserConfigurationDomDocumentMapping* this) {
    
}


void UserConfigurationDomDocumentMapping_init(UserConfigurationDomDocumentMapping* this, UserConfigurationInterface* userConfigurationInterface) {
    UserConfigurationDomDocumentMapping_initFields(this);
        this->userConfigurationInterface = userConfigurationInterface;
}

UserConfigurationDomDocumentMapping* UserConfigurationDomDocumentMapping_new(UserConfigurationInterface* userConfigurationInterface) {
    UserConfigurationDomDocumentMapping* this = calloc(1, sizeof(UserConfigurationDomDocumentMapping));
    UserConfigurationDomDocumentMapping_init(this, userConfigurationInterface);
    return this;
}


// throws Exception
Document* UserConfigurationDomDocumentMapping_toXmlDoc(UserConfigurationDomDocumentMapping* this) {
        Document* document = DomDocumentHelper_create();
        Node* node = UserConfigurationView_toXmlNode(UserConfigurationView_new(this->userConfigurationInterface), document);
        Document_appendChild(document, node);
        return document;
}


// throws Exception
const char* UserConfigurationDomDocumentMapping_toDomDocumentString(UserConfigurationDomDocumentMapping* this) {
        return XmlDocumentHelper_toString(UserConfigurationDomDocumentMapping_toXmlDoc(this));
}

