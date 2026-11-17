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

typedef struct ShippingAddressData ShippingAddressData;
struct ShippingAddressData {
    char unused;
};

const char* ShippingAddressData_SETTOBILLINGADDRESS = "Set To Billing Address";
const char* ShippingAddressData_SELECT = "Select Shipping Address";
const char* ShippingAddressData_SELECTNAME = "SELECTSHIPPINGADDRESS";
const char* ShippingAddressData_MULTIPLE = "SHIPPINGADDRESSES";
const char* ShippingAddressData_SHIPPINGADDRESSES = "SHIPPINGADDRESSES";
const char* ShippingAddressData_SHIPPINGADDRESS = "SHIPPINGADDRESS";
const char* ShippingAddressData_ID = "SHIPPINGADDRESS_ID";
const char* ShippingAddressData_ADDRESS = "SHIPPINGADDRESS_ADDRESS";
const char* ShippingAddressData_NAME = "SHIPPINGADDRESS_NAME";
const char* ShippingAddressData_STREET = "SHIPPINGADDRESS_STREET";
const char* ShippingAddressData_CITY = "SHIPPINGADDRESS_CITY";
const char* ShippingAddressData_STATE = "SHIPPINGADDRESS_STATE";
const char* ShippingAddressData_CODE = "SHIPPINGADDRESS_CODE";
const char* ShippingAddressData_COUNTRY = "SHIPPINGADDRESS_COUNTRY";
const char* ShippingAddressData_TAX = "SHIPPINGADDRESS_TAX";

ShippingAddressData* ShippingAddressData_new(void);

void ShippingAddressData_init(ShippingAddressData* this);


void ShippingAddressData_init(ShippingAddressData* this) {
}

ShippingAddressData* ShippingAddressData_new(void) {
    ShippingAddressData* this = calloc(1, sizeof(ShippingAddressData));
    ShippingAddressData_init(this);
    return this;
}

