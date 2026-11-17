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
// package org.allbinary.business.user.commerce.shipping

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/commerce/shipping/modules/ShippingInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/business/user/commerce/shipping/ShippingMethodsInterface.h"

typedef struct ShippingMethods ShippingMethods;
struct ShippingMethods {
    ShippingMethodsInterface ShippingMethodsInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    BasicArrayList* shippingVector;
    ShippingInterface* defaultShippingMethodInterface;
};


ShippingMethods* ShippingMethods_new(AbeClientInformationInterface* abeClientInformation, StoreFrontInterface* storeFrontInterface);

void ShippingMethods_init(ShippingMethods* this, AbeClientInformationInterface* abeClientInformation, StoreFrontInterface* storeFrontInterface);
BasicArrayList* ShippingMethods_get(ShippingMethods* this);
ShippingInterface* ShippingMethods_getShippingInterface(ShippingMethods* this, const char* name);
ShippingInterface* ShippingMethods_getDefault(ShippingMethods* this);

static void ShippingMethods_initFields(ShippingMethods* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
}


void ShippingMethods_init(ShippingMethods* this, AbeClientInformationInterface* abeClientInformation, StoreFrontInterface* storeFrontInterface) {
    ShippingMethods_initFields(this);
        this->defaultShippingMethodInterface = ShippingMethodsFactory_getDefaultInstance(ShippingMethodsFactory_new(abeClientInformation, storeFrontInterface));
        this->shippingVector = ShippingMethodsFactory_getInstance(ShippingMethodsFactory_new(abeClientInformation, storeFrontInterface));
}

ShippingMethods* ShippingMethods_new(AbeClientInformationInterface* abeClientInformation, StoreFrontInterface* storeFrontInterface) {
    ShippingMethods* this = calloc(1, sizeof(ShippingMethods));
    ShippingMethods_init(this, abeClientInformation, storeFrontInterface);
    return this;
}


BasicArrayList* ShippingMethods_get(ShippingMethods* this) {
        return this->shippingVector;
}


// throws Exception
ShippingInterface* ShippingMethods_getShippingInterface(ShippingMethods* this, const char* name) {
        ShippingInterface* shipping = nullptr;
        int32_t size = BasicArrayList_size(this->shippingVector);
        for (int32_t index = 0; index < size; index++) {
            shipping = ((ShippingInterface*) BasicArrayList_get(this->shippingVector, index));
            if (strcmp(name, ShippingInterface_getName(shipping)) == 0) {
                return shipping;
            }
        }
        const char* error = java_concat("Error Finding Shipping: ", name);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SHIPPINGERROR)) {
            LogUtil_putF(this->logUtil, this->commonStrings->EXCEPTION, this, "getShippingInterface(String name)");
        }
        java_throw(java_exception_new("Exception", error));
}


// throws Exception
ShippingInterface* ShippingMethods_getDefault(ShippingMethods* this) {
        return this->defaultShippingMethodInterface;
}

