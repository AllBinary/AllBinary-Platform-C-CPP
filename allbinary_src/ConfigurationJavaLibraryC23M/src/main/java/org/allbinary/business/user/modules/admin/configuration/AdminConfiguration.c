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
// package org.allbinary.business.user.modules.admin.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "javax/servlet/http/HttpServletRequest.h"
#include "org/allbinary/business/context/configuration/ContextConfiguration.h"
#include "org/allbinary/business/context/configuration/ContextConfigurationData.h"
#include "org/allbinary/business/context/configuration/ContextConfigurationDomDocumentMapping.h"
#include "org/allbinary/business/context/configuration/ContextConfigurationInterface.h"
#include "org/allbinary/business/context/configuration/ContextConfigurationInterfaceFactory.h"
#include "org/allbinary/business/context/configuration/ContextConfigurationPathUtil.h"
#include "org/allbinary/logic/communication/http/request/RequestParams.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/control/crypt/file/CryptFileWriter.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/business/user/modules/admin/configuration/AdminConfigurationInterface.h"

typedef struct AdminConfiguration AdminConfiguration;
struct AdminConfiguration {
    AdminConfigurationInterface AdminConfigurationInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    ContextConfigurationInterface* contextConfigurationInterface;
};


AdminConfiguration* AdminConfiguration_new(void);

void AdminConfiguration_init(AdminConfiguration* this);

AdminConfiguration* AdminConfiguration_new1(HttpServletRequest* request);
void AdminConfiguration_init1(AdminConfiguration* this, HttpServletRequest* request);

AdminConfiguration* AdminConfiguration_new1(HashMap* storeHashMap);
void AdminConfiguration_init1(AdminConfiguration* this, HashMap* storeHashMap);
static void AdminConfiguration_getFormData(AdminConfiguration* this, HashMap* storeHashMap);
void AdminConfiguration_write(AdminConfiguration* this);
ContextConfigurationInterface* AdminConfiguration_getContextConfigurationInterface(AdminConfiguration* this);
void AdminConfiguration_setContextConfigurationInterface(AdminConfiguration* this, ContextConfigurationInterface* contextConfigurationInterface);

static void AdminConfiguration_initFields(AdminConfiguration* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
}


void AdminConfiguration_init(AdminConfiguration* this) {
    AdminConfiguration_initFields(this);
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        this->contextConfigurationInterface = ContextConfigurationInterfaceFactory_getInstance(ContextConfigurationInterfaceFactory_getInstance(), AdminConfigurationData_CONTEXTNAME);
}

AdminConfiguration* AdminConfiguration_new(void) {
    AdminConfiguration* this = calloc(1, sizeof(AdminConfiguration));
    AdminConfiguration_init(this);
    return this;
}


void AdminConfiguration_init1(AdminConfiguration* this, HttpServletRequest* request) {
    AdminConfiguration_initFields(this);
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        AdminConfiguration_getFormData(this, RequestParams_toHashMap(RequestParams_new(request)));
}

AdminConfiguration* AdminConfiguration_new1(HttpServletRequest* request) {
    AdminConfiguration* this = calloc(1, sizeof(AdminConfiguration));
    AdminConfiguration_init1(this, request);
    return this;
}


void AdminConfiguration_init1(AdminConfiguration* this, HashMap* storeHashMap) {
    AdminConfiguration_initFields(this);
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        AdminConfiguration_getFormData(this, storeHashMap);
}

AdminConfiguration* AdminConfiguration_new1(HashMap* storeHashMap) {
    AdminConfiguration* this = calloc(1, sizeof(AdminConfiguration));
    AdminConfiguration_init1(this, storeHashMap);
    return this;
}


// throws Exception
static void AdminConfiguration_getFormData(AdminConfiguration* this, HashMap* storeHashMap) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "getFormData");
        AdminConfiguration_setContextConfigurationInterface(this, ((ContextConfigurationInterface*) ContextConfiguration_new(storeHashMap)));
}


// throws Exception
// synchronized
void AdminConfiguration_write(AdminConfiguration* this) {
        ContextConfigurationDomDocumentMapping* contextConfigurationDomDocumentMapping = ContextConfigurationDomDocumentMapping_new(AdminConfiguration_getContextConfigurationInterface(this));
        CryptFileWriter* cryptFileWriter = CryptFileWriter_new(ContextConfigurationData_getInstance()->UNCRYPTED_EXTENSION, ContextConfigurationData_getInstance()->ENCRYPTED_EXTENSION);
        CryptFileWriter_write(cryptFileWriter, ContextConfigurationPathUtil_getAbPath(AdminConfigurationData_CONTEXTNAME), ContextConfigurationDomDocumentMapping_toXmlDoc(contextConfigurationDomDocumentMapping));
}


ContextConfigurationInterface* AdminConfiguration_getContextConfigurationInterface(AdminConfiguration* this) {
        return this->contextConfigurationInterface;
}


void AdminConfiguration_setContextConfigurationInterface(AdminConfiguration* this, ContextConfigurationInterface* contextConfigurationInterface) {
        this->contextConfigurationInterface = contextConfigurationInterface;
}

