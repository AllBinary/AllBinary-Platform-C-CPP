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
// package org.allbinary.bundle.logic.system.loader

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/osgi/framework/Bundle.h"
#include "org/osgi/framework/ServiceFactory.h"
#include "org/osgi/framework/ServiceRegistration.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct CryptServiceFactory CryptServiceFactory;
struct CryptServiceFactory {
    ServiceFactory ServiceFactory_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    CryptService* cryptService;
};


CryptServiceFactory* CryptServiceFactory_new(void);

void CryptServiceFactory_init(CryptServiceFactory* this);
Any* CryptServiceFactory_getService(CryptServiceFactory* this, Bundle* bundle, ServiceRegistration* registration);
void CryptServiceFactory_ungetService(CryptServiceFactory* this, Bundle* bundle, ServiceRegistration* registration, Any* service);

static void CryptServiceFactory_initFields(CryptServiceFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->cryptService = CryptService_new();
}


void CryptServiceFactory_init(CryptServiceFactory* this) {
    CryptServiceFactory_initFields(this);
}

CryptServiceFactory* CryptServiceFactory_new(void) {
    CryptServiceFactory* this = calloc(1, sizeof(CryptServiceFactory));
    CryptServiceFactory_init(this);
    return this;
}


Any* CryptServiceFactory_getService(CryptServiceFactory* this, Bundle* bundle, ServiceRegistration* registration) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "getService");
        return this->cryptService;
}


void CryptServiceFactory_ungetService(CryptServiceFactory* this, Bundle* bundle, ServiceRegistration* registration, Any* service) {
}

