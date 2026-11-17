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
#include "org/allbinary/business/user/role/UserRole.h"
#include "org/allbinary/data/tree/dom/DomSearchHelper.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h"
#include "org/allbinary/globals/URLGLOBALS.h"
#include "org/allbinary/logic/control/crypt/file/CryptFileReader.h"
#include "org/allbinary/logic/io/path/AbPath.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct UserConfigurationInterfaceFactory UserConfigurationInterfaceFactory;
struct UserConfigurationInterfaceFactory {
    char unused;
};

static const char* UserConfigurationInterfaceFactory_configurationName = "DefaultUserConfiguration";

UserConfigurationInterfaceFactory* UserConfigurationInterfaceFactory_new(void);

void UserConfigurationInterfaceFactory_init(UserConfigurationInterfaceFactory* this);
UserConfigurationInterface* UserConfigurationInterfaceFactory_getInstance(Document* document);
UserConfigurationInterface* UserConfigurationInterfaceFactory_getInstance(UserRole* userRole);
UserConfigurationInterface* UserConfigurationInterfaceFactory_getInstance(void);


void UserConfigurationInterfaceFactory_init(UserConfigurationInterfaceFactory* this) {
}

UserConfigurationInterfaceFactory* UserConfigurationInterfaceFactory_new(void) {
    UserConfigurationInterfaceFactory* this = calloc(1, sizeof(UserConfigurationInterfaceFactory));
    UserConfigurationInterfaceFactory_init(this);
    return this;
}


// throws Exception
UserConfigurationInterface* UserConfigurationInterfaceFactory_getInstance(Document* document) {
        Node* configurationNode = DomSearchHelper_getNode(UserConfigurationData_NAME, Document_getChildNodes(document));
        return ((UserConfigurationInterface*) UserConfigurationView_getUserConfigurationInterface(UserConfigurationView_new(configurationNode)));
}


// throws Exception
// Java overloaded method: C needs a different name
UserConfigurationInterface* UserConfigurationInterfaceFactory_getInstance(UserRole* userRole) {
        AbPath* abPath = AbPath_new(JAVA_CALL(_URLGLOBALS, getMainPath) + JAVA_CALL(_FREEBLISKET_PATH_GLOBALS, getInstance)->USERCONFIGURATIONPATH, java_concat(java_concat(java_concat(java_string_of(UserConfigurationInterfaceFactory_configurationName), UserRole_toString(userRole)), java_string_of(AbPathData_getInstance()->EXTENSION_SEP)), java_string_of(UserConfigurationData_UNCRYPTED_EXTENSION)));
        const char* documentString = CryptFileReader_get(CryptFileReader_new(UserConfigurationData_UNCRYPTED_EXTENSION, UserConfigurationData_ENCRYPTED_EXTENSION), abPath);
        Document* document = DomDocumentHelper_create(documentString);
        return UserConfigurationInterfaceFactory_getInstance(document);
}


// throws Exception
// Java overloaded method: C needs a different name
UserConfigurationInterface* UserConfigurationInterfaceFactory_getInstance(void) {
        return UserConfiguration_new();
}

