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
// package org.allbinary.data.tables.user.address.shipping

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

typedef struct ShippingAddressesEntityFactory ShippingAddressesEntityFactory;
struct ShippingAddressesEntityFactory {
    LogUtil* logUtil;
};

static ShippingAddressesEntityFactory* ShippingAddressesEntityFactory_instance;

ShippingAddressesEntityFactory* ShippingAddressesEntityFactory_new(void);
ShippingAddressesEntityFactory* ShippingAddressesEntityFactory_getInstance(void);

void ShippingAddressesEntityFactory_init(ShippingAddressesEntityFactory* this);
StreetAddressesEntity* ShippingAddressesEntityFactory_getInstance(ShippingAddressesEntityFactory* this, const char* userName);

// Static fields with runtime initializers: call this once at startup
void ShippingAddressesEntityFactory_staticInit(void) {
    ShippingAddressesEntityFactory_instance = ShippingAddressesEntityFactory_new();
}

static void ShippingAddressesEntityFactory_initFields(ShippingAddressesEntityFactory* this) {
    this->logUtil = LogUtil_getInstance();
}


ShippingAddressesEntityFactory* ShippingAddressesEntityFactory_getInstance(void) {
        return ShippingAddressesEntityFactory_instance;
}


void ShippingAddressesEntityFactory_init(ShippingAddressesEntityFactory* this) {
    ShippingAddressesEntityFactory_initFields(this);
}

ShippingAddressesEntityFactory* ShippingAddressesEntityFactory_new(void) {
    ShippingAddressesEntityFactory* this = calloc(1, sizeof(ShippingAddressesEntityFactory));
    ShippingAddressesEntityFactory_init(this);
    return this;
}


// Java overloaded method: C needs a different name
StreetAddressesEntity* ShippingAddressesEntityFactory_getInstance(ShippingAddressesEntityFactory* this, const char* userName) {
        JAVA_TRY {
            return ShippingAddressesEntity_new(userName);
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->ENTITYFACTORYERROR)) {
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "getShippingAddressesEntityInstance()", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}

