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

typedef struct TenderType TenderType;
struct TenderType {
    const char* name;
};


TenderType* TenderType_new(const char* name);

void TenderType_init(TenderType* this, const char* name);
bool TenderType_isEqual(TenderType* this, TenderType* tenderType);
const char* TenderType_toString(TenderType* this);

static void TenderType_initFields(TenderType* this) {
    
}


void TenderType_init(TenderType* this, const char* name) {
    TenderType_initFields(this);
        this->name = name;
}

TenderType* TenderType_new(const char* name) {
    TenderType* this = calloc(1, sizeof(TenderType));
    TenderType_init(this, name);
    return this;
}


bool TenderType_isEqual(TenderType* this, TenderType* tenderType) {
        if (strcmp(TenderType_toString(this), TenderType_toString(tenderType)) == 0) {
            return true;
        } else {
            return false;
        }
}


const char* TenderType_toString(TenderType* this) {
        return this->name;
}

