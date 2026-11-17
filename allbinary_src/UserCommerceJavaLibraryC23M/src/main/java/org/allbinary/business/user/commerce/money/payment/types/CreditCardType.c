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

typedef struct CreditCardType CreditCardType;
struct CreditCardType {
    const char* name;
};

constexpr int32_t CreditCardType_MAXLEN = 19;

CreditCardType* CreditCardType_new(const char* cardType);

void CreditCardType_init(CreditCardType* this, const char* cardType);
const char* CreditCardType_toString(CreditCardType* this);

static void CreditCardType_initFields(CreditCardType* this) {
    
}


void CreditCardType_init(CreditCardType* this, const char* cardType) {
    CreditCardType_initFields(this);
        this->name = cardType;
}

CreditCardType* CreditCardType_new(const char* cardType) {
    CreditCardType* this = calloc(1, sizeof(CreditCardType));
    CreditCardType_init(this, cardType);
    return this;
}


const char* CreditCardType_toString(CreditCardType* this) {
        return this->name;
}

