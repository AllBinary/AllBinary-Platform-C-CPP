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
// package org.allbinary.business.user.commerce.money.payment.gateway.transaction

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct PaymentTransactionKeys PaymentTransactionKeys;
struct PaymentTransactionKeys {
    const char* key;
};


PaymentTransactionKeys* PaymentTransactionKeys_new(const char* value);

void PaymentTransactionKeys_init(PaymentTransactionKeys* this, const char* value);
const char* PaymentTransactionKeys_toString(PaymentTransactionKeys* this);

static void PaymentTransactionKeys_initFields(PaymentTransactionKeys* this) {
    
}


void PaymentTransactionKeys_init(PaymentTransactionKeys* this, const char* value) {
    PaymentTransactionKeys_initFields(this);
        this->key = value;
}

PaymentTransactionKeys* PaymentTransactionKeys_new(const char* value) {
    PaymentTransactionKeys* this = calloc(1, sizeof(PaymentTransactionKeys));
    PaymentTransactionKeys_init(this, value);
    return this;
}


const char* PaymentTransactionKeys_toString(PaymentTransactionKeys* this) {
        return this->key;
}

