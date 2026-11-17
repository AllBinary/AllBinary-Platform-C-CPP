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
// package org.allbinary.business.advertisement

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct AdvertisementData AdvertisementData;
struct AdvertisementData {
    const char* NAME;
    const char* DESCRIPTION;
};

static AdvertisementData* AdvertisementData_instance;

AdvertisementData* AdvertisementData_new(void);
AdvertisementData* AdvertisementData_getInstance(void);

void AdvertisementData_init(AdvertisementData* this);

// Static fields with runtime initializers: call this once at startup
void AdvertisementData_staticInit(void) {
    AdvertisementData_instance = AdvertisementData_new();
}

static void AdvertisementData_initFields(AdvertisementData* this) {
    this->NAME = "ADVERTISEMENT_NAME";
    this->DESCRIPTION = "ADVERTISEMENT_DESCRIPTION";
}


AdvertisementData* AdvertisementData_getInstance(void) {
        return AdvertisementData_instance;
}


void AdvertisementData_init(AdvertisementData* this) {
    AdvertisementData_initFields(this);
}

AdvertisementData* AdvertisementData_new(void) {
    AdvertisementData* this = calloc(1, sizeof(AdvertisementData));
    AdvertisementData_init(this);
    return this;
}

