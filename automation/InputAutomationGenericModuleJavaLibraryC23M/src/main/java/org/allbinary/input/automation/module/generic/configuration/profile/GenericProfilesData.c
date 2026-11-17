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
// package org.allbinary.input.automation.module.generic.configuration.profile

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GenericProfilesData GenericProfilesData;
struct GenericProfilesData {
    char unused;
};

const char* GenericProfilesData_NAME = "GENERIC_PROFILES_NAME";

GenericProfilesData* GenericProfilesData_new(void);

void GenericProfilesData_init(GenericProfilesData* this);


void GenericProfilesData_init(GenericProfilesData* this) {
}

GenericProfilesData* GenericProfilesData_new(void) {
    GenericProfilesData* this = calloc(1, sizeof(GenericProfilesData));
    GenericProfilesData_init(this);
    return this;
}

