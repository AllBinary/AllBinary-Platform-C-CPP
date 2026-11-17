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
// package org.allbinary.business.user.commerce.money.payment.types

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterfaceFactoryInterface.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/modules/gateway/PaymentGatewayDomNodeFactoryInterface.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/regex/replace/Replace.h"
#include "org/allbinary/string/CommonSeps.h"

typedef struct BasicPaymentType BasicPaymentType;
struct BasicPaymentType {
    const char* name;
    const char* value;
    PaymentGatewayInterfaceFactoryInterface* paymentGatewayInterfaceFactoryInterface;
    PaymentGatewayDomNodeFactoryInterface* paymentGatewayDomNodeFactoryInterface;
};


BasicPaymentType* BasicPaymentType_new(const char* paymentMethod);

void BasicPaymentType_init(BasicPaymentType* this, const char* paymentMethod);

BasicPaymentType* BasicPaymentType_new3(const char* paymentMethod, PaymentGatewayInterfaceFactoryInterface* paymentGatewayInterfaceFactoryInterface, PaymentGatewayDomNodeFactoryInterface* paymentGatewayDomNodeFactoryInterface);
void BasicPaymentType_init3(BasicPaymentType* this, const char* paymentMethod, PaymentGatewayInterfaceFactoryInterface* paymentGatewayInterfaceFactoryInterface, PaymentGatewayDomNodeFactoryInterface* paymentGatewayDomNodeFactoryInterface);
static void BasicPaymentType_init(BasicPaymentType* this, const char* paymentMethod);
const char* BasicPaymentType_getName(BasicPaymentType* this);
const char* BasicPaymentType_getValue(BasicPaymentType* this);
PaymentGatewayInterfaceFactoryInterface* BasicPaymentType_getPaymentGatewayInterfaceFactoryInterface(BasicPaymentType* this);
PaymentGatewayDomNodeFactoryInterface* BasicPaymentType_getPaymentGatewayDomNodeFactoryInterface(BasicPaymentType* this);
Any* BasicPaymentType_getKey(BasicPaymentType* this);
BasicArrayList* BasicPaymentType_toVector(BasicPaymentType* this);
HashMap* BasicPaymentType_toHashMap(BasicPaymentType* this);
const char* BasicPaymentType_toString(BasicPaymentType* this);

static void BasicPaymentType_initFields(BasicPaymentType* this) {
    this->name = nullptr;
    this->value = nullptr;
    
    
}


void BasicPaymentType_init(BasicPaymentType* this, const char* paymentMethod) {
    BasicPaymentType_initFields(this);
        BasicPaymentType_init(this, paymentMethod);
}

BasicPaymentType* BasicPaymentType_new(const char* paymentMethod) {
    BasicPaymentType* this = calloc(1, sizeof(BasicPaymentType));
    BasicPaymentType_init(this, paymentMethod);
    return this;
}


void BasicPaymentType_init3(BasicPaymentType* this, const char* paymentMethod, PaymentGatewayInterfaceFactoryInterface* paymentGatewayInterfaceFactoryInterface, PaymentGatewayDomNodeFactoryInterface* paymentGatewayDomNodeFactoryInterface) {
    BasicPaymentType_initFields(this);
        BasicPaymentType_init(this, paymentMethod);
        this->paymentGatewayInterfaceFactoryInterface = paymentGatewayInterfaceFactoryInterface;
        this->paymentGatewayDomNodeFactoryInterface = paymentGatewayDomNodeFactoryInterface;
}

BasicPaymentType* BasicPaymentType_new3(const char* paymentMethod, PaymentGatewayInterfaceFactoryInterface* paymentGatewayInterfaceFactoryInterface, PaymentGatewayDomNodeFactoryInterface* paymentGatewayDomNodeFactoryInterface) {
    BasicPaymentType* this = calloc(1, sizeof(BasicPaymentType));
    BasicPaymentType_init3(this, paymentMethod, paymentGatewayInterfaceFactoryInterface, paymentGatewayDomNodeFactoryInterface);
    return this;
}


static void BasicPaymentType_init(BasicPaymentType* this, const char* paymentMethod) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        const char* UNDERSCORE = "_";
        HashMap_put(hashMap, CommonSeps_getInstance()->SPACE, UNDERSCORE);
        HashMap_put(hashMap, AbPathData_getInstance()->EXTENSION_SEP, UNDERSCORE);
        HashMap_put(hashMap, "-", UNDERSCORE);
        Replace* replace = Replace_new(hashMap);
        this->name = Replace_all(replace, paymentMethod);
        this->value = paymentMethod;
        BasicPaymentTypeUtil_add(BasicPaymentTypeUtil_getInstance(), this);
}


const char* BasicPaymentType_getName(BasicPaymentType* this) {
        return this->name;
}


const char* BasicPaymentType_getValue(BasicPaymentType* this) {
        return this->value;
}


// throws Exception
PaymentGatewayInterfaceFactoryInterface* BasicPaymentType_getPaymentGatewayInterfaceFactoryInterface(BasicPaymentType* this) {
        if (this->paymentGatewayInterfaceFactoryInterface == nullptr) {
            java_throw(java_exception_new("Exception", "PaymentGatewayInterfaceFactoryInterface is Null"));
        }
        return this->paymentGatewayInterfaceFactoryInterface;
}


// throws Exception
PaymentGatewayDomNodeFactoryInterface* BasicPaymentType_getPaymentGatewayDomNodeFactoryInterface(BasicPaymentType* this) {
        if (this->paymentGatewayDomNodeFactoryInterface == nullptr) {
            java_throw(java_exception_new("Exception", "PaymentGatewayDomNodeFactoryInterface is Null"));
        }
        return this->paymentGatewayDomNodeFactoryInterface;
}


Any* BasicPaymentType_getKey(BasicPaymentType* this) {
        return BasicPaymentType_getName(this);
}


BasicArrayList* BasicPaymentType_toVector(BasicPaymentType* this) {
        BasicArrayList* vector = BasicArrayListD_new();
        BasicArrayList_add(vector, this->name);
        BasicArrayList_add(vector, this->value);
        return vector;
}


HashMap* BasicPaymentType_toHashMap(BasicPaymentType* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, JAVA_CALL(PaymentGatewayData_NAME, toString), this->name);
        HashMap_put(hashMap, JAVA_CALL(PaymentGatewayData_VALUE, toString), this->value);
        return hashMap;
}


const char* BasicPaymentType_toString(BasicPaymentType* this) {
        return this->name;
}

