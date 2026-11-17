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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/StdUtil.h"

typedef struct BasicPaymentTypeUtil BasicPaymentTypeUtil;
struct BasicPaymentTypeUtil {
    BasicArrayList* paymentTypeVector;
};

static BasicPaymentTypeUtil* BasicPaymentTypeUtil_instance;

BasicPaymentTypeUtil* BasicPaymentTypeUtil_new(void);
BasicPaymentTypeUtil* BasicPaymentTypeUtil_getInstance(void);

void BasicPaymentTypeUtil_init(BasicPaymentTypeUtil* this);
void BasicPaymentTypeUtil_add(BasicPaymentTypeUtil* this, BasicPaymentType* paymentType);
BasicPaymentType* BasicPaymentTypeUtil_get(BasicPaymentTypeUtil* this, const char* paymentTypeString);
bool BasicPaymentTypeUtil_isContain(BasicPaymentTypeUtil* this, BasicPaymentType* paymentType);
BasicArrayList* BasicPaymentTypeUtil_difference(BasicPaymentTypeUtil* this, BasicArrayList* a_PaymentTypeVector);

// Static fields with runtime initializers: call this once at startup
void BasicPaymentTypeUtil_staticInit(void) {
    BasicPaymentTypeUtil_instance = BasicPaymentTypeUtil_new();
}

static void BasicPaymentTypeUtil_initFields(BasicPaymentTypeUtil* this) {
    this->paymentTypeVector = BasicArrayListD_new();
}


// Java static initializer: call this once at startup
void BasicPaymentTypeUtil_staticInitializer(void) {
}


BasicPaymentTypeUtil* BasicPaymentTypeUtil_getInstance(void) {
        return BasicPaymentTypeUtil_instance;
}


void BasicPaymentTypeUtil_init(BasicPaymentTypeUtil* this) {
    BasicPaymentTypeUtil_initFields(this);
}

BasicPaymentTypeUtil* BasicPaymentTypeUtil_new(void) {
    BasicPaymentTypeUtil* this = calloc(1, sizeof(BasicPaymentTypeUtil));
    BasicPaymentTypeUtil_init(this);
    return this;
}


void BasicPaymentTypeUtil_add(BasicPaymentTypeUtil* this, BasicPaymentType* paymentType) {
        BasicArrayList_add(this->paymentTypeVector, paymentType);
}


// throws Exception
BasicPaymentType* BasicPaymentTypeUtil_get(BasicPaymentTypeUtil* this, const char* paymentTypeString) {
        int32_t size = BasicArrayList_size(this->paymentTypeVector);
        for (int32_t i = 0; i < size; i++) {
            BasicPaymentType* paymentType = ((BasicPaymentType*) BasicArrayList_get(this->paymentTypeVector, i));
            if (JAVA_CALL(BasicPaymentType_getName(paymentType), compareTo, paymentTypeString) == 0) {
                return paymentType;
            }
        }
        java_throw(java_exception_new("Exception", java_concat("Unknown PaymentType: ", paymentTypeString)));
}


bool BasicPaymentTypeUtil_isContain(BasicPaymentTypeUtil* this, BasicPaymentType* paymentType) {
        return BasicArrayList_contains(this->paymentTypeVector, paymentType);
}


BasicArrayList* BasicPaymentTypeUtil_difference(BasicPaymentTypeUtil* this, BasicArrayList* a_PaymentTypeVector) {
        BasicArrayList* diff = BasicArrayListD_new();
        int32_t size = BasicArrayList_size(this->paymentTypeVector);
        for (int32_t i = 0; i < size; i++) {
            BasicPaymentType* paymentType = ((BasicPaymentType*) BasicArrayList_get(this->paymentTypeVector, i));
            if (!BasicArrayList_contains(a_PaymentTypeVector, paymentType)) {
                BasicArrayList_add(diff, paymentType);
            }
        }
        return diff;
}

