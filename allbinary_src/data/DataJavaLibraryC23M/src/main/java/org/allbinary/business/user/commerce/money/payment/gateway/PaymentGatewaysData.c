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
// package org.allbinary.business.user.commerce.money.payment.gateway

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct PaymentGatewaysData PaymentGatewaysData;
struct PaymentGatewaysData {
    char unused;
};

const char* PaymentGatewaysData_NAME = "PAYMENTGATEWAYS_NAME";

PaymentGatewaysData* PaymentGatewaysData_new(void);

void PaymentGatewaysData_init(PaymentGatewaysData* this);


void PaymentGatewaysData_init(PaymentGatewaysData* this) {
}

PaymentGatewaysData* PaymentGatewaysData_new(void) {
    PaymentGatewaysData* this = calloc(1, sizeof(PaymentGatewaysData));
    PaymentGatewaysData_init(this);
    return this;
}

