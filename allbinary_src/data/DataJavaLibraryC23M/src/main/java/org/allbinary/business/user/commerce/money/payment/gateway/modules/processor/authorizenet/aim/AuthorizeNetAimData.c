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
// package org.allbinary.business.user.commerce.money.payment.gateway.modules.processor.authorizenet.aim

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct AuthorizeNetAimData AuthorizeNetAimData;
struct AuthorizeNetAimData {
    char unused;
};

const char* AuthorizeNetAimData_X_DELIM_DATA = "x_delim_data";
const char* AuthorizeNetAimData_X_DELIM_CHAR = "x_delim_char";
const char* AuthorizeNetAimData_X_ENCAP_CHAR = "x_encap_char";
const char* AuthorizeNetAimData_X_AUTHENTICATION_INDICATOR = "x_authentication_indicator";
const char* AuthorizeNetAimData_X_CARDHOLDER_AUTHENTICATION_VALUE = "x_cardholder_authentication_value";
const char* AuthorizeNetAimData_X_DRIVERS_LICENSE_NUM = "x_drivers_license_num";
const char* AuthorizeNetAimData_X_DRIVERS_LICENSE_STATE = "x_drivers_license_state";
const char* AuthorizeNetAimData_X_DRIVERS_LICENSE_DOB = "x_drivers_license_dob";

AuthorizeNetAimData* AuthorizeNetAimData_new(void);

void AuthorizeNetAimData_init(AuthorizeNetAimData* this);


void AuthorizeNetAimData_init(AuthorizeNetAimData* this) {
}

AuthorizeNetAimData* AuthorizeNetAimData_new(void) {
    AuthorizeNetAimData* this = calloc(1, sizeof(AuthorizeNetAimData));
    AuthorizeNetAimData_init(this);
    return this;
}

