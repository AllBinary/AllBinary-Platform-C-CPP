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

typedef struct PaymentData PaymentData;
struct PaymentData {
    char unused;
};

constexpr int32_t PaymentData_MIN = 4;
constexpr int32_t PaymentData_MAX = 19;
const char* PaymentData_ADDNEW = "Add New Payment";
const char* PaymentData_VIEW = "View Payment";
const char* PaymentData_SELECT = "Select Payment";
const char* PaymentData_CHANGE = "Change Payment";
const char* PaymentData_PAYMENT = "PAYMENT";
const char* PaymentData_METHOD = "PAYMENT_METHOD";
const char* PaymentData_ID = "PAYMENT_ID";
const char* PaymentData_NUMBER = "PAYMENT_NUMBER";
const char* PaymentData_NAME = "PAYMENT_NAME";
const char* PaymentData_TYPE = "PAYMENT_TYPE";
const char* PaymentData_EXPIRATION = "PAYMENT_EXPIRATION";
const char* PaymentData_TENDERTYPE = "PAYMENT_TENDERTYPE";
const char* PaymentData_TRANSACTIONTYPE = "PAYMENT_TRANSACTIONTYPE";
const char* PaymentData_ABA = "PAYMENT_ABA";
const char* PaymentData_ACCOUNT = "PAYMENT_ACCOUNT";
const char* PaymentData_ACCOUNTTYPE = "PAYMENT_ACCOUNTTYPE";
const char* PaymentData_AUTHORIZATIONCODE = "PAYMENT_AUTHORIZATIONCODE";
const char* PaymentData_CHECKNUMBER = "PAYMENT_CHECKNUMBER";
const char* PaymentData_CHECKTYPE = "PAYMENT_CHECKTYPE";
const char* PaymentData_DRIVERSLICENSE = "PAYMENT_DRIVERSLICENSE";
const char* PaymentData_MAGNETICINKCHECKREADER = "PAYMENT_MAGNETICINKCHECKREADER";

PaymentData* PaymentData_new(void);

void PaymentData_init(PaymentData* this) {
}

PaymentData* PaymentData_new(void) {
    PaymentData* this = calloc(1, sizeof(PaymentData));
    PaymentData_init(this);
    return this;
}

