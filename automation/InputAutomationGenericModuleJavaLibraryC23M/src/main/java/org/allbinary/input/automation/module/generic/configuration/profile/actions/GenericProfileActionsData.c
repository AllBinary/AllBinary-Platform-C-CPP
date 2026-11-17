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

typedef struct GenericProfileActionsData GenericProfileActionsData;
struct GenericProfileActionsData {
    char unused;
};

const char* GenericProfileActionsData_NAME = "GENERIC_CONFIGURATION_PROFILE_ACTIONS_NAME";

GenericProfileActionsData* GenericProfileActionsData_new(void);

void GenericProfileActionsData_init(GenericProfileActionsData* this);


void GenericProfileActionsData_init(GenericProfileActionsData* this) {
}

GenericProfileActionsData* GenericProfileActionsData_new(void) {
    GenericProfileActionsData* this = calloc(1, sizeof(GenericProfileActionsData));
    GenericProfileActionsData_init(this);
    return this;
}

