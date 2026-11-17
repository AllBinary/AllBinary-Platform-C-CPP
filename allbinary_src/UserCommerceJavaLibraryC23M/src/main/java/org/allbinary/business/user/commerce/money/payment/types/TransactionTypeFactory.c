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

typedef struct TransactionTypeFactory TransactionTypeFactory;
struct TransactionTypeFactory {
    TransactionType* SALE;
    TransactionType* CREDIT;
    TransactionType* AUTHORIZATION;
    TransactionType* DELAYEDCAPTURE;
    TransactionType* VOID;
    TransactionType* INQUIRY;
};

static TransactionTypeFactory* TransactionTypeFactory_instance;

TransactionTypeFactory* TransactionTypeFactory_new(void);
TransactionTypeFactory* TransactionTypeFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void TransactionTypeFactory_staticInit(void) {
    TransactionTypeFactory_instance = TransactionTypeFactory_new();
}

static void TransactionTypeFactory_initFields(TransactionTypeFactory* this) {
    this->SALE = TransactionType_new("Sale");
    this->CREDIT = TransactionType_new("Credit");
    this->AUTHORIZATION = TransactionType_new("Authorization");
    this->DELAYEDCAPTURE = TransactionType_new("Delayed Capture");
    this->VOID = TransactionType_new("Void");
    this->INQUIRY = TransactionType_new("Inquiry");
}

void TransactionTypeFactory_init(TransactionTypeFactory* this) {
    TransactionTypeFactory_initFields(this);
}

TransactionTypeFactory* TransactionTypeFactory_new(void) {
    TransactionTypeFactory* this = calloc(1, sizeof(TransactionTypeFactory));
    TransactionTypeFactory_init(this);
    return this;
}


TransactionTypeFactory* TransactionTypeFactory_getInstance(void) {
        return TransactionTypeFactory_instance;
}

