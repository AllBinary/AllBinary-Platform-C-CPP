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

typedef struct CreditCardTypeFactory CreditCardTypeFactory;
struct CreditCardTypeFactory {
    CreditCardType* VISA;
    CreditCardType* MASTERCARD;
    CreditCardType* DISCOVER;
    CreditCardType* AMERICANEXPRESS;
};

static CreditCardTypeFactory* CreditCardTypeFactory_instance;

CreditCardTypeFactory* CreditCardTypeFactory_new(void);
CreditCardTypeFactory* CreditCardTypeFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void CreditCardTypeFactory_staticInit(void) {
    CreditCardTypeFactory_instance = CreditCardTypeFactory_new();
}

static void CreditCardTypeFactory_initFields(CreditCardTypeFactory* this) {
    this->VISA = CreditCardType_new("Visa");
    this->MASTERCARD = CreditCardType_new("MasterCard");
    this->DISCOVER = CreditCardType_new("Discover");
    this->AMERICANEXPRESS = CreditCardType_new("AMX");
}

void CreditCardTypeFactory_init(CreditCardTypeFactory* this) {
    CreditCardTypeFactory_initFields(this);
}

CreditCardTypeFactory* CreditCardTypeFactory_new(void) {
    CreditCardTypeFactory* this = calloc(1, sizeof(CreditCardTypeFactory));
    CreditCardTypeFactory_init(this);
    return this;
}


CreditCardTypeFactory* CreditCardTypeFactory_getInstance(void) {
        return CreditCardTypeFactory_instance;
}

