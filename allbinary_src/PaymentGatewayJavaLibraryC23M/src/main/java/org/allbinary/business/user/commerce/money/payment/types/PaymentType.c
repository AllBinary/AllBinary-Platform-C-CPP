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
#include "org/allbinary/business/user/commerce/money/payment/gateway/processor/PaymentProcessorInterfaceFactoryInterface.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionInterfaceFactoryInterface.h"
#include "org/allbinary/logic/StdUtil.h"

typedef struct PaymentType PaymentType;
struct PaymentType {
    BasicPaymentType* basicPaymentType;
    PaymentTransactionInterfaceFactoryInterface* paymentTransactionInterfaceFactoryInterface;
    PaymentProcessorInterfaceFactoryInterface* paymentProcessorInterfaceFactoryInterface;
};


PaymentType* PaymentType_new(BasicPaymentType* basicPaymentType);

void PaymentType_init(PaymentType* this, BasicPaymentType* basicPaymentType);

PaymentType* PaymentType_new3(BasicPaymentType* basicPaymentType, PaymentTransactionInterfaceFactoryInterface* paymentTransactionInterfaceFactoryInterface, PaymentProcessorInterfaceFactoryInterface* paymentProcessorInterfaceFactoryInterface);
void PaymentType_init3(PaymentType* this, BasicPaymentType* basicPaymentType, PaymentTransactionInterfaceFactoryInterface* paymentTransactionInterfaceFactoryInterface, PaymentProcessorInterfaceFactoryInterface* paymentProcessorInterfaceFactoryInterface);
PaymentTransactionInterfaceFactoryInterface* PaymentType_getPaymentTransactionInterfaceFactoryInterface(PaymentType* this);
PaymentProcessorInterfaceFactoryInterface* PaymentType_getPaymentProcessorInterfaceFactoryInterface(PaymentType* this);
BasicArrayList* PaymentType_toVector(PaymentType* this);
HashMap* PaymentType_toHashMap(PaymentType* this);
BasicPaymentType* PaymentType_getBasicPaymentType(PaymentType* this);

static void PaymentType_initFields(PaymentType* this) {
    
    
    
}


void PaymentType_init(PaymentType* this, BasicPaymentType* basicPaymentType) {
    PaymentType_initFields(this);
        this->basicPaymentType = basicPaymentType;
        this->paymentTransactionInterfaceFactoryInterface = nullptr;
        this->paymentProcessorInterfaceFactoryInterface = nullptr;
        PaymentTypeUtil_add(PaymentTypeUtil_getInstance(), this);
}

PaymentType* PaymentType_new(BasicPaymentType* basicPaymentType) {
    PaymentType* this = calloc(1, sizeof(PaymentType));
    PaymentType_init(this, basicPaymentType);
    return this;
}


void PaymentType_init3(PaymentType* this, BasicPaymentType* basicPaymentType, PaymentTransactionInterfaceFactoryInterface* paymentTransactionInterfaceFactoryInterface, PaymentProcessorInterfaceFactoryInterface* paymentProcessorInterfaceFactoryInterface) {
    PaymentType_initFields(this);
        this->basicPaymentType = basicPaymentType;
        this->paymentTransactionInterfaceFactoryInterface = paymentTransactionInterfaceFactoryInterface;
        this->paymentProcessorInterfaceFactoryInterface = paymentProcessorInterfaceFactoryInterface;
        PaymentTypeUtil_add(PaymentTypeUtil_getInstance(), this);
}

PaymentType* PaymentType_new3(BasicPaymentType* basicPaymentType, PaymentTransactionInterfaceFactoryInterface* paymentTransactionInterfaceFactoryInterface, PaymentProcessorInterfaceFactoryInterface* paymentProcessorInterfaceFactoryInterface) {
    PaymentType* this = calloc(1, sizeof(PaymentType));
    PaymentType_init3(this, basicPaymentType, paymentTransactionInterfaceFactoryInterface, paymentProcessorInterfaceFactoryInterface);
    return this;
}


// throws Exception
PaymentTransactionInterfaceFactoryInterface* PaymentType_getPaymentTransactionInterfaceFactoryInterface(PaymentType* this) {
        if (this->paymentTransactionInterfaceFactoryInterface == nullptr) {
            java_throw(java_exception_new("Exception", "PaymentTransactionInterfaceFactoryInterface is Null"));
        }
        return this->paymentTransactionInterfaceFactoryInterface;
}


// throws Exception
PaymentProcessorInterfaceFactoryInterface* PaymentType_getPaymentProcessorInterfaceFactoryInterface(PaymentType* this) {
        if (this->paymentProcessorInterfaceFactoryInterface == nullptr) {
            java_throw(java_exception_new("Exception", "PaymentProcessorInterfaceFactoryInterface is Null"));
        }
        return this->paymentProcessorInterfaceFactoryInterface;
}


BasicArrayList* PaymentType_toVector(PaymentType* this) {
        BasicArrayList* vector = BasicArrayListD_new();
        BasicArrayList_addAllList(vector, JAVA_CALL(PaymentType_getBasicPaymentType(this), toVector));
        if (this->paymentTransactionInterfaceFactoryInterface != nullptr) {
            BasicArrayList_add(vector, java_class_of(this->paymentTransactionInterfaceFactoryInterface));
        }
        if (this->paymentProcessorInterfaceFactoryInterface != nullptr) {
            BasicArrayList_add(vector, java_class_of(this->paymentProcessorInterfaceFactoryInterface));
        }
        return vector;
}


HashMap* PaymentType_toHashMap(PaymentType* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_putAll(hashMap, JAVA_CALL(PaymentType_getBasicPaymentType(this), toHashMap));
        if (this->paymentTransactionInterfaceFactoryInterface != nullptr) {
            HashMap_put(hashMap, JAVA_CALL(PaymentGatewayData_PAYMENTTRANSACTIONINTERFACEFACTORYINTERFACE, toString), java_class_of(this->paymentTransactionInterfaceFactoryInterface));
        }
        if (this->paymentProcessorInterfaceFactoryInterface != nullptr) {
            HashMap_put(hashMap, JAVA_CALL(PaymentGatewayData_PAYMENTPROCESSORINTERFACEFACTORYINTERFACE, toString), java_class_of(this->paymentProcessorInterfaceFactoryInterface));
        }
        return hashMap;
}


BasicPaymentType* PaymentType_getBasicPaymentType(PaymentType* this) {
        return this->basicPaymentType;
}

