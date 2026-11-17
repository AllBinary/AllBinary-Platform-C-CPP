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
// package org.allbinary.logic.communication.smtp.info

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/context/configuration/ContextConfigurationInterface.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h"

typedef struct StoreEmailInfo StoreEmailInfo;
struct StoreEmailInfo {
    BasicEmailInfo base;
    LogUtil* logUtil;
    StoreFrontInterface* storeFrontInterface;
};


StoreEmailInfo* StoreEmailInfo_new(StoreFrontInterface* storeFrontInterface, const char* subject, const char* textBody);

void StoreEmailInfo_init(StoreEmailInfo* this, StoreFrontInterface* storeFrontInterface, const char* subject, const char* textBody);
void StoreEmailInfo_init(StoreEmailInfo* this);

static void StoreEmailInfo_initFields(StoreEmailInfo* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void StoreEmailInfo_init(StoreEmailInfo* this, StoreFrontInterface* storeFrontInterface, const char* subject, const char* textBody) {
        BasicEmailInfo_init(&this->base, subject, textBody);
        StoreEmailInfo_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGING)) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_putF(this->logUtil, commonStrings->START, this, commonStrings->CONSTRUCTOR);
        }
        this->storeFrontInterface = storeFrontInterface;
        StoreEmailInfo_init(this);
}

StoreEmailInfo* StoreEmailInfo_new(StoreFrontInterface* storeFrontInterface, const char* subject, const char* textBody) {
    StoreEmailInfo* this = calloc(1, sizeof(StoreEmailInfo));
    StoreEmailInfo_init(this, storeFrontInterface, subject, textBody);
    return this;
}


// throws Exception
void StoreEmailInfo_init(StoreEmailInfo* this) {
        ContextConfigurationInterface* contextConfigurationInterface = StoreFrontInterface_getContextConfigurationInterface(this->storeFrontInterface);
        EmailServerConfigurationInterface* emailServerConfigurationInterface = ContextConfigurationInterface_getEmailServerConfigurationInterface(contextConfigurationInterface);
        StoreEmailInfo_setEmailServerConfigurationInterface(this, emailServerConfigurationInterface);
}

