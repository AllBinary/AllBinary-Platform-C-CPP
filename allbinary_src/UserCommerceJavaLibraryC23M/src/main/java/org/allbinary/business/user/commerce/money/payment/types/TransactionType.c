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

typedef struct TransactionType TransactionType;
struct TransactionType {
    const char* name;
};


TransactionType* TransactionType_new(const char* name);

void TransactionType_init(TransactionType* this, const char* name);
bool TransactionType_isEqual(TransactionType* this, TransactionType* transactionType);
const char* TransactionType_toString(TransactionType* this);

static void TransactionType_initFields(TransactionType* this) {
    
}


void TransactionType_init(TransactionType* this, const char* name) {
    TransactionType_initFields(this);
        this->name = name;
}

TransactionType* TransactionType_new(const char* name) {
    TransactionType* this = calloc(1, sizeof(TransactionType));
    TransactionType_init(this, name);
    return this;
}


bool TransactionType_isEqual(TransactionType* this, TransactionType* transactionType) {
        if (strcmp(TransactionType_toString(this), TransactionType_toString(transactionType)) == 0) {
            return true;
        } else {
            return false;
        }
}


const char* TransactionType_toString(TransactionType* this) {
        return this->name;
}

