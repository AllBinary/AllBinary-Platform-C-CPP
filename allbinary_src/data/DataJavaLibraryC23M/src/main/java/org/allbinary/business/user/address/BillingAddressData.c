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
// package org.allbinary.business.user.address

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct BillingAddressData BillingAddressData;
struct BillingAddressData {
    char unused;
};

constexpr int32_t BillingAddressData_MAX = 255;
constexpr int32_t BillingAddressData_MIN = 0;
const char* BillingAddressData_MULTIPLE = "BILLINGADDRESSES";
const char* BillingAddressData_STATES = "BILLINGADDRESS_STATES";
const char* BillingAddressData_SETTOSHIPPINGADDRESS = "Set To Shipping Address";
const char* BillingAddressData_SELECT = "Select Billing Address";
const char* BillingAddressData_SETTOSHIPPINGADDRESSNAME = "SETTOSHIPPINGADDRESS";
const char* BillingAddressData_BILLINGADDRESSES = "BILLINGADDRESSES";
const char* BillingAddressData_BILLINGADDRESS = "BILLINGADDRESS";
const char* BillingAddressData_ID = "BILLINGADDRESS_ID";
const char* BillingAddressData_ADDRESS = "BILLINGADDRESS_ADDRESS";
const char* BillingAddressData_NAME = "BILLINGADDRESS_NAME";
const char* BillingAddressData_STREET = "BILLINGADDRESS_STREET";
const char* BillingAddressData_CITY = "BILLINGADDRESS_CITY";
const char* BillingAddressData_STATE = "BILLINGADDRESS_STATE";
const char* BillingAddressData_CODE = "BILLINGADDRESS_CODE";
const char* BillingAddressData_COUNTRY = "BILLINGADDRESS_COUNTRY";

BillingAddressData* BillingAddressData_new(void);

void BillingAddressData_init(BillingAddressData* this);


void BillingAddressData_init(BillingAddressData* this) {
}

BillingAddressData* BillingAddressData_new(void) {
    BillingAddressData* this = calloc(1, sizeof(BillingAddressData));
    BillingAddressData_init(this);
    return this;
}

