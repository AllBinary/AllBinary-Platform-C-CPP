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

typedef struct GenericProfileDataWorkerData GenericProfileDataWorkerData;
struct GenericProfileDataWorkerData {
    char unused;
};

const char* GenericProfileDataWorkerData_NAME = "GENERIC_PROFILE_DATA_WORKER_NAME";

GenericProfileDataWorkerData* GenericProfileDataWorkerData_new(void);

void GenericProfileDataWorkerData_init(GenericProfileDataWorkerData* this);


void GenericProfileDataWorkerData_init(GenericProfileDataWorkerData* this) {
}

GenericProfileDataWorkerData* GenericProfileDataWorkerData_new(void) {
    GenericProfileDataWorkerData* this = calloc(1, sizeof(GenericProfileDataWorkerData));
    GenericProfileDataWorkerData_init(this);
    return this;
}

