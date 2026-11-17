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
// package org.allbinary.business.user.modules.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/io/file/CommonDataFileStrings.h"

typedef struct UserConfigurationData UserConfigurationData;
struct UserConfigurationData {
    char unused;
};

const char* UserConfigurationData_NAME = "USER_CONFIGURATION_NAME";
const char* UserConfigurationData_UNCRYPTED_EXTENSION;
const char* UserConfigurationData_ENCRYPTED_EXTENSION;

UserConfigurationData* UserConfigurationData_new(void);

void UserConfigurationData_init(UserConfigurationData* this);

// Static fields with runtime initializers: call this once at startup
void UserConfigurationData_staticInit(void) {
    UserConfigurationData_UNCRYPTED_EXTENSION = CommonDataFileStrings_getInstance()->UNCRYPTED_EXTENSION;
    UserConfigurationData_ENCRYPTED_EXTENSION = CommonDataFileStrings_getInstance()->ENCRYPTED_EXTENSION;
}


void UserConfigurationData_init(UserConfigurationData* this) {
}

UserConfigurationData* UserConfigurationData_new(void) {
    UserConfigurationData* this = calloc(1, sizeof(UserConfigurationData));
    UserConfigurationData_init(this);
    return this;
}

