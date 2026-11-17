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
// package org.allbinary.business.user.modules.admin.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct AdminConfigurationData AdminConfigurationData;
struct AdminConfigurationData {
    char unused;
};

const char* AdminConfigurationData_CONTEXTNAME = "Admin";

AdminConfigurationData* AdminConfigurationData_new(void);

void AdminConfigurationData_init(AdminConfigurationData* this) {
}

AdminConfigurationData* AdminConfigurationData_new(void) {
    AdminConfigurationData* this = calloc(1, sizeof(AdminConfigurationData));
    AdminConfigurationData_init(this);
    return this;
}

