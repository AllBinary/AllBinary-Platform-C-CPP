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

typedef struct TenderTypeFactory TenderTypeFactory;
struct TenderTypeFactory {
    TenderType* CREDITCARD;
    TenderType* CHECK;
    TenderType* ACH;
};

static TenderTypeFactory* TenderTypeFactory_instance;

TenderTypeFactory* TenderTypeFactory_new(void);
TenderTypeFactory* TenderTypeFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void TenderTypeFactory_staticInit(void) {
    TenderTypeFactory_instance = TenderTypeFactory_new();
}

static void TenderTypeFactory_initFields(TenderTypeFactory* this) {
    this->CREDITCARD = TenderType_new("Credit Card");
    this->CHECK = TenderType_new("Check");
    this->ACH = TenderType_new("Ach");
}

void TenderTypeFactory_init(TenderTypeFactory* this) {
    TenderTypeFactory_initFields(this);
}

TenderTypeFactory* TenderTypeFactory_new(void) {
    TenderTypeFactory* this = calloc(1, sizeof(TenderTypeFactory));
    TenderTypeFactory_init(this);
    return this;
}


TenderTypeFactory* TenderTypeFactory_getInstance(void) {
        return TenderTypeFactory_instance;
}

