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

typedef struct UserEmailEventsConfigurationData UserEmailEventsConfigurationData;
struct UserEmailEventsConfigurationData {
    char unused;
};

const char* UserEmailEventsConfigurationData_NAME = "EMAIL_EVENTS_CONFIGURATION_NAME";

UserEmailEventsConfigurationData* UserEmailEventsConfigurationData_new(void);

void UserEmailEventsConfigurationData_init(UserEmailEventsConfigurationData* this);


void UserEmailEventsConfigurationData_init(UserEmailEventsConfigurationData* this) {
}

UserEmailEventsConfigurationData* UserEmailEventsConfigurationData_new(void) {
    UserEmailEventsConfigurationData* this = calloc(1, sizeof(UserEmailEventsConfigurationData));
    UserEmailEventsConfigurationData_init(this);
    return this;
}

