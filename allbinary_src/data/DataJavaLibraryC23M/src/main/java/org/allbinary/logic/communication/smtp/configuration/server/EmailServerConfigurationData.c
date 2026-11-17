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
// package org.allbinary.logic.communication.smtp.configuration.server

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct EmailServerConfigurationData EmailServerConfigurationData;
struct EmailServerConfigurationData {
    char unused;
};

const char* EmailServerConfigurationData_NAME = "EMAIL_SERVER_CONFIGURATION_NAME";
const char* EmailServerConfigurationData_SERVER = "EMAIL_SERVER_CONFIGURATION_SERVER";
const char* EmailServerConfigurationData_ACCOUNT = "EMAIL_SERVER_CONFIGURATION_ACCOUNT";
const char* EmailServerConfigurationData_PASSWORD = "EMAIL_SERVER_CONFIGURATION_PASSWORD";

EmailServerConfigurationData* EmailServerConfigurationData_new(void);

void EmailServerConfigurationData_init(EmailServerConfigurationData* this);


void EmailServerConfigurationData_init(EmailServerConfigurationData* this) {
}

EmailServerConfigurationData* EmailServerConfigurationData_new(void) {
    EmailServerConfigurationData* this = calloc(1, sizeof(EmailServerConfigurationData));
    EmailServerConfigurationData_init(this);
    return this;
}

