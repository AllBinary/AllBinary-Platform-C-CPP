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
// package org.allbinary.business.user.commerce.money.payment.transaction

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct PaymentTransactionData PaymentTransactionData;
struct PaymentTransactionData {
    char unused;
};

const char* PaymentTransactionData_NAME = "PAYMENTTRANSACTION_NAME";

PaymentTransactionData* PaymentTransactionData_new(void);

void PaymentTransactionData_init(PaymentTransactionData* this);


void PaymentTransactionData_init(PaymentTransactionData* this) {
}

PaymentTransactionData* PaymentTransactionData_new(void) {
    PaymentTransactionData* this = calloc(1, sizeof(PaymentTransactionData));
    PaymentTransactionData_init(this);
    return this;
}

