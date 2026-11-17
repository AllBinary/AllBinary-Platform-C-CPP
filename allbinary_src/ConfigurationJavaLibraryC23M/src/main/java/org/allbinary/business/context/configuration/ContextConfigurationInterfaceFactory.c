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
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/logic/control/crypt/file/CryptFileReader.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct ContextConfigurationInterfaceFactory ContextConfigurationInterfaceFactory;
struct ContextConfigurationInterfaceFactory {
    char unused;
};

static ContextConfigurationInterfaceFactory* ContextConfigurationInterfaceFactory_instance;

ContextConfigurationInterfaceFactory* ContextConfigurationInterfaceFactory_new(void);
ContextConfigurationInterfaceFactory* ContextConfigurationInterfaceFactory_getInstance(void);

void ContextConfigurationInterfaceFactory_init(ContextConfigurationInterfaceFactory* this);
ContextConfigurationInterface* ContextConfigurationInterfaceFactory_getInstance(ContextConfigurationInterfaceFactory* this, Document* document);
ContextConfigurationInterface* ContextConfigurationInterfaceFactory_getInstance(ContextConfigurationInterfaceFactory* this, const char* contextName);

// Static fields with runtime initializers: call this once at startup
void ContextConfigurationInterfaceFactory_staticInit(void) {
    ContextConfigurationInterfaceFactory_instance = ContextConfigurationInterfaceFactory_new();
}


ContextConfigurationInterfaceFactory* ContextConfigurationInterfaceFactory_getInstance(void) {
        return ContextConfigurationInterfaceFactory_instance;
}


void ContextConfigurationInterfaceFactory_init(ContextConfigurationInterfaceFactory* this) {
}

ContextConfigurationInterfaceFactory* ContextConfigurationInterfaceFactory_new(void) {
    ContextConfigurationInterfaceFactory* this = calloc(1, sizeof(ContextConfigurationInterfaceFactory));
    ContextConfigurationInterfaceFactory_init(this);
    return this;
}


// throws Exception
// Java overloaded method: C needs a different name
ContextConfigurationInterface* ContextConfigurationInterfaceFactory_getInstance(ContextConfigurationInterfaceFactory* this, Document* document) {
        ContextConfigurationData* contextConfigurationData = ContextConfigurationData_getInstance();
        Node* contextConfigurationNode = DomSearchHelper_getNode(contextConfigurationData->NAME, Document_getChildNodes(document));
        return ((ContextConfigurationInterface*) ContextConfigurationView_getContextConfigurationInterface(ContextConfigurationView_new(contextConfigurationNode)));
}


// throws Exception
// Java overloaded method: C needs a different name
ContextConfigurationInterface* ContextConfigurationInterfaceFactory_getInstance(ContextConfigurationInterfaceFactory* this, const char* contextName) {
        AbPath* abPath = ContextConfigurationPathUtil_getAbPath(contextName);
        ContextConfigurationData* contextConfigurationData = ContextConfigurationData_getInstance();
        const char* documentString = CryptFileReader_get(CryptFileReader_new(contextConfigurationData->UNCRYPTED_EXTENSION, contextConfigurationData->ENCRYPTED_EXTENSION), abPath);
        Document* document = DomDocumentHelper_create(documentString);
        return ContextConfigurationInterfaceFactory_getInstance(this, document);
}

