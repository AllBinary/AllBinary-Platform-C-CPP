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
// package org.allbinary.input.automation.module.generic.configuration.profile.actions

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GenericProfileActionData GenericProfileActionData;
struct GenericProfileActionData {
    char unused;
};

const char* GenericProfileActionData_NAME = "GENERIC_CONFIGURATION_PROFILE_ACTION_NAME";
const char* GenericProfileActionData_SCRIPT = "GENERIC_CONFIGURATION_PROFILE_ACTION_SCRIPT";

GenericProfileActionData* GenericProfileActionData_new(void);

void GenericProfileActionData_init(GenericProfileActionData* this);


void GenericProfileActionData_init(GenericProfileActionData* this) {
}

GenericProfileActionData* GenericProfileActionData_new(void) {
    GenericProfileActionData* this = calloc(1, sizeof(GenericProfileActionData));
    GenericProfileActionData_init(this);
    return this;
}

