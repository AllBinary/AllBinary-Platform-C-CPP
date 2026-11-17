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
// package org.allbinary.business.user.commerce.money.payment

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/user/commerce/money/payment/Exception.h"

typedef struct PaymentException PaymentException;
struct PaymentException {
    Exception base;
};


PaymentException* PaymentException_new(const char* error);

void PaymentException_init(PaymentException* this, const char* error);


void PaymentException_init(PaymentException* this, const char* error) {
        Exception_init(&this->base, error);
}

PaymentException* PaymentException_new(const char* error) {
    PaymentException* this = calloc(1, sizeof(PaymentException));
    PaymentException_init(this, error);
    return this;
}

