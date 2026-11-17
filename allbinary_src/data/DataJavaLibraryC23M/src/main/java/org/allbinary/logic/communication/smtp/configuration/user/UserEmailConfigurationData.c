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
// package org.allbinary.logic.communication.smtp.configuration.user

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct UserEmailConfigurationData UserEmailConfigurationData;
struct UserEmailConfigurationData {
    char unused;
};

const char* UserEmailConfigurationData_NAME = "USER_EMAIL_CONFIGURATION_NAME";

UserEmailConfigurationData* UserEmailConfigurationData_new(void);

void UserEmailConfigurationData_init(UserEmailConfigurationData* this);


void UserEmailConfigurationData_init(UserEmailConfigurationData* this) {
}

UserEmailConfigurationData* UserEmailConfigurationData_new(void) {
    UserEmailConfigurationData* this = calloc(1, sizeof(UserEmailConfigurationData));
    UserEmailConfigurationData_init(this);
    return this;
}

