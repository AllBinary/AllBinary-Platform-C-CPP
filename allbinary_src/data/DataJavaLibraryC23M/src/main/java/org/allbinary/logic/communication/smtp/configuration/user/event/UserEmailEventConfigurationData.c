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
// package org.allbinary.logic.communication.smtp.configuration.user.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct UserEmailEventConfigurationData UserEmailEventConfigurationData;
struct UserEmailEventConfigurationData {
    char unused;
};

const char* UserEmailEventConfigurationData_NAME = "EMAIL_EVENT_CONFIGURATION_NAME";
const char* UserEmailEventConfigurationData_LISTENER_CLASSPATH = "EMAIL_EVENT_CONFIGURATION_LISTENER_CLASSPATH";

UserEmailEventConfigurationData* UserEmailEventConfigurationData_new(void);

void UserEmailEventConfigurationData_init(UserEmailEventConfigurationData* this);


void UserEmailEventConfigurationData_init(UserEmailEventConfigurationData* this) {
}

UserEmailEventConfigurationData* UserEmailEventConfigurationData_new(void) {
    UserEmailEventConfigurationData* this = calloc(1, sizeof(UserEmailEventConfigurationData));
    UserEmailEventConfigurationData_init(this);
    return this;
}

