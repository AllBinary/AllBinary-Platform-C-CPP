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

typedef struct StreetAddressData StreetAddressData;
struct StreetAddressData {
    char unused;
};

constexpr int32_t StreetAddressData_MAX = 255;
constexpr int32_t StreetAddressData_MIN = 0;
const char* StreetAddressData_FORM = "FORM";
const char* StreetAddressData_STATES = "STATES";
const char* StreetAddressData_NUMBEROFADDRESSES = "STREETADDRESS_NUMBEROFADDRESSES";
const char* StreetAddressData_ID = "STREETADDRESS_ID";
const char* StreetAddressData_DEFAULT = "STREETADDRESS_DEFAULT_ADDRESS";
const char* StreetAddressData_ADDRESS = "STREETADDRESS_ADDRESS";
const char* StreetAddressData_NAME = "STREETADDRESS_NAME";
const char* StreetAddressData_STREET = "STREETADDRESS_STREET";
const char* StreetAddressData_CITY = "STREETADDRESS_CITY";
const char* StreetAddressData_STATE = "STREETADDRESS_STATE";
const char* StreetAddressData_CODE = "STREETADDRESS_CODE";
const char* StreetAddressData_COUNTRY = "STREETADDRESS_COUNTRY";

StreetAddressData* StreetAddressData_new(void);

void StreetAddressData_init(StreetAddressData* this);


void StreetAddressData_init(StreetAddressData* this) {
}

StreetAddressData* StreetAddressData_new(void) {
    StreetAddressData* this = calloc(1, sizeof(StreetAddressData));
    StreetAddressData_init(this);
    return this;
}

