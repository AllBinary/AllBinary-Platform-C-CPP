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
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/data/tree/dom/document/XmlDocumentHelper.h"
#include "org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct ContextConfigurationDomDocumentMapping ContextConfigurationDomDocumentMapping;
struct ContextConfigurationDomDocumentMapping {
    DomDocumentMappingInterface DomDocumentMappingInterface_interface;
    ContextConfigurationInterface* contextConfigurationInterface;
};


ContextConfigurationDomDocumentMapping* ContextConfigurationDomDocumentMapping_new(ContextConfigurationInterface* contextConfigurationInterface);

void ContextConfigurationDomDocumentMapping_init(ContextConfigurationDomDocumentMapping* this, ContextConfigurationInterface* contextConfigurationInterface);
Document* ContextConfigurationDomDocumentMapping_toXmlDoc(ContextConfigurationDomDocumentMapping* this);
const char* ContextConfigurationDomDocumentMapping_toDomDocumentString(ContextConfigurationDomDocumentMapping* this);

static void ContextConfigurationDomDocumentMapping_initFields(ContextConfigurationDomDocumentMapping* this) {
    
}


void ContextConfigurationDomDocumentMapping_init(ContextConfigurationDomDocumentMapping* this, ContextConfigurationInterface* contextConfigurationInterface) {
    ContextConfigurationDomDocumentMapping_initFields(this);
        this->contextConfigurationInterface = contextConfigurationInterface;
}

ContextConfigurationDomDocumentMapping* ContextConfigurationDomDocumentMapping_new(ContextConfigurationInterface* contextConfigurationInterface) {
    ContextConfigurationDomDocumentMapping* this = calloc(1, sizeof(ContextConfigurationDomDocumentMapping));
    ContextConfigurationDomDocumentMapping_init(this, contextConfigurationInterface);
    return this;
}


// throws Exception
Document* ContextConfigurationDomDocumentMapping_toXmlDoc(ContextConfigurationDomDocumentMapping* this) {
        Document* document = DomDocumentHelper_create();
        Node* node = ContextConfigurationView_toXmlNode(ContextConfigurationView_new(this->contextConfigurationInterface), document);
        Document_appendChild(document, node);
        return document;
}


// throws Exception
const char* ContextConfigurationDomDocumentMapping_toDomDocumentString(ContextConfigurationDomDocumentMapping* this) {
        return XmlDocumentHelper_toString(ContextConfigurationDomDocumentMapping_toXmlDoc(this));
}

