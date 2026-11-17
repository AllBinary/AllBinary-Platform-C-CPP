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
// package org.allbinary.business.user

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct UserData UserData;
struct UserData {
    char unused;
};

int32_t UserData_MAXLEN = 250;
const char* UserData_NAME = "USER_NAME";
const char* UserData_USERNAME = "CUSTOMER_USER_NAME";
const char* UserData_PASSWORD = "CUSTOMER_PASSWORD";
const char* UserData_PREFIXNAME = "CUSTOMER_PREFIX_NAME";
const char* UserData_FIRSTNAME = "CUSTOMER_FIRST_NAME";
const char* UserData_LASTNAME = "CUSTOMER_LAST_NAME";
const char* UserData_MIDDLENAME = "CUSTOMER_MIDDLE_NAME";
const char* UserData_SUFFIXNAME = "CUSTOMER_SUFFIX_NAME";
const char* UserData_COMPANY = "CUSTOMER_COMPANY";
const char* UserData_POSITIONATCOMPANY = "CUSTOMER_POSITION_AT_COMPANY";
const char* UserData_MAINEMAIL = "CUSTOMER_MAIN_EMAIL";
const char* UserData_SECONDARYEMAIL = "CUSTOMER_SECONDARY_EMAIL";
const char* UserData_HOMEPHONE = "CUSTOMER_HOME_PHONE";
const char* UserData_CELLPHONE = "CUSTOMER_CELL_PHONE";
const char* UserData_WORKPHONE = "CUSTOMER_WORK_PHONE";
const char* UserData_OTHERCONTACT = "CUSTOMER_OTHER_CONTACT";
const char* UserData_ELECTRONICDEVICE = "CUSTOMER_ELECTRONIC_DEVICE";
const char* UserData_FAX = "CUSTOMER_FAX";
const char* UserData_SECRET = "CUSTOMER_SECRET";
const char* UserData_PERMISSIONS = "CUSTOMER_PERMISSIONS";
const char* UserData_CONFIGURATION = "CUSTOMER_CONFIGURATION";

UserData* UserData_new(void);

void UserData_init(UserData* this);


void UserData_init(UserData* this) {
}

UserData* UserData_new(void) {
    UserData* this = calloc(1, sizeof(UserData));
    UserData_init(this);
    return this;
}

