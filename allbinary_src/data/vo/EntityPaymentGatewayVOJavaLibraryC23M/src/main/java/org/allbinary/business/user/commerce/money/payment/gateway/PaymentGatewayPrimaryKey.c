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
// package org.allbinary.business.user.commerce.money.payment.gateway

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/context/modules/storefront/StoreFront.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/Serializable.h"

typedef struct PaymentGatewayPrimaryKey PaymentGatewayPrimaryKey;
struct PaymentGatewayPrimaryKey {
    Serializable Serializable_interface;
    const char* storeName;
    const char* name;
};


PaymentGatewayPrimaryKey* PaymentGatewayPrimaryKey_new(const char* storeName, const char* gatewayName);

void PaymentGatewayPrimaryKey_init(PaymentGatewayPrimaryKey* this, const char* storeName, const char* gatewayName);
const char* PaymentGatewayPrimaryKey_getStoreName(PaymentGatewayPrimaryKey* this);
void PaymentGatewayPrimaryKey_setStoreName(PaymentGatewayPrimaryKey* this, const char* storeName);
const char* PaymentGatewayPrimaryKey_getName(PaymentGatewayPrimaryKey* this);
void PaymentGatewayPrimaryKey_setName(PaymentGatewayPrimaryKey* this, const char* name);
const char* PaymentGatewayPrimaryKey_toString(PaymentGatewayPrimaryKey* this);

static void PaymentGatewayPrimaryKey_initFields(PaymentGatewayPrimaryKey* this) {
    this->storeName = nullptr;
    this->name = nullptr;
}


void PaymentGatewayPrimaryKey_init(PaymentGatewayPrimaryKey* this, const char* storeName, const char* gatewayName) {
    PaymentGatewayPrimaryKey_initFields(this);
        PaymentGatewayPrimaryKey_setStoreName(this, storeName);
        PaymentGatewayPrimaryKey_setName(this, gatewayName);
}

PaymentGatewayPrimaryKey* PaymentGatewayPrimaryKey_new(const char* storeName, const char* gatewayName) {
    PaymentGatewayPrimaryKey* this = calloc(1, sizeof(PaymentGatewayPrimaryKey));
    PaymentGatewayPrimaryKey_init(this, storeName, gatewayName);
    return this;
}


const char* PaymentGatewayPrimaryKey_getStoreName(PaymentGatewayPrimaryKey* this) {
        return this->storeName;
}


void PaymentGatewayPrimaryKey_setStoreName(PaymentGatewayPrimaryKey* this, const char* storeName) {
        this->storeName = storeName;
}


const char* PaymentGatewayPrimaryKey_getName(PaymentGatewayPrimaryKey* this) {
        return this->name;
}


void PaymentGatewayPrimaryKey_setName(PaymentGatewayPrimaryKey* this, const char* name) {
        this->name = name;
}


const char* PaymentGatewayPrimaryKey_toString(PaymentGatewayPrimaryKey* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, JAVA_CALL("PaymentGatewayPrimaryKey", getName));
        StringMaker_append(stringBuffer, JAVA_CALL("StoreFront", getName));
        StringMaker_append(stringBuffer, " =");
        StringMaker_append(stringBuffer, PaymentGatewayPrimaryKey_getStoreName(this));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
        StringMaker_append(stringBuffer, JAVA_CALL("PaymentGateway", getName));
        StringMaker_append(stringBuffer, "=");
        StringMaker_append(stringBuffer, PaymentGatewayPrimaryKey_getName(this));
        return StringMaker_toString(stringBuffer);
}

