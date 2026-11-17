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
// package org.allbinary.data.tables.user.address.billing

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/data/tables/user/address/StreetAddressesEntity.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct BillingAddressesEntityFactory BillingAddressesEntityFactory;
struct BillingAddressesEntityFactory {
    LogUtil* logUtil;
};

static BillingAddressesEntityFactory* BillingAddressesEntityFactory_instance;

BillingAddressesEntityFactory* BillingAddressesEntityFactory_new(void);
BillingAddressesEntityFactory* BillingAddressesEntityFactory_getInstance(void);

void BillingAddressesEntityFactory_init(BillingAddressesEntityFactory* this);
StreetAddressesEntity* BillingAddressesEntityFactory_getInstance(BillingAddressesEntityFactory* this, const char* userName);

// Static fields with runtime initializers: call this once at startup
void BillingAddressesEntityFactory_staticInit(void) {
    BillingAddressesEntityFactory_instance = BillingAddressesEntityFactory_new();
}

static void BillingAddressesEntityFactory_initFields(BillingAddressesEntityFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


BillingAddressesEntityFactory* BillingAddressesEntityFactory_getInstance(void) {
        return BillingAddressesEntityFactory_instance;
}


void BillingAddressesEntityFactory_init(BillingAddressesEntityFactory* this) {
    BillingAddressesEntityFactory_initFields(this);
}

BillingAddressesEntityFactory* BillingAddressesEntityFactory_new(void) {
    BillingAddressesEntityFactory* this = calloc(1, sizeof(BillingAddressesEntityFactory));
    BillingAddressesEntityFactory_init(this);
    return this;
}


// Java overloaded method: C needs a different name
StreetAddressesEntity* BillingAddressesEntityFactory_getInstance(BillingAddressesEntityFactory* this, const char* userName) {
        JAVA_TRY {
            return BillingAddressesEntity_new(userName);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET_INSTANCE, e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

