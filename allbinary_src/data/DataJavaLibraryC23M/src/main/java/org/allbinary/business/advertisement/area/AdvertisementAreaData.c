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
// package org.allbinary.business.advertisement.area

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct AdvertisementAreaData AdvertisementAreaData;
struct AdvertisementAreaData {
    const char* NAME;
    const char* DESCRIPTION;
    const char* CONSTRAINTS;
};

static AdvertisementAreaData* AdvertisementAreaData_instance;

AdvertisementAreaData* AdvertisementAreaData_new(void);
AdvertisementAreaData* AdvertisementAreaData_getInstance(void);

void AdvertisementAreaData_init(AdvertisementAreaData* this);

// Static fields with runtime initializers: call this once at startup
void AdvertisementAreaData_staticInit(void) {
    AdvertisementAreaData_instance = AdvertisementAreaData_new();
}

static void AdvertisementAreaData_initFields(AdvertisementAreaData* this) {
    this->NAME = "ADVERTISEMENT_NAME";
    this->DESCRIPTION = "ADVERTISEMENT_DESCRIPTION";
    this->CONSTRAINTS = "ADVERTISEMENT_CONSTRAINTS";
}


AdvertisementAreaData* AdvertisementAreaData_getInstance(void) {
        return AdvertisementAreaData_instance;
}


void AdvertisementAreaData_init(AdvertisementAreaData* this) {
    AdvertisementAreaData_initFields(this);
}

AdvertisementAreaData* AdvertisementAreaData_new(void) {
    AdvertisementAreaData* this = calloc(1, sizeof(AdvertisementAreaData));
    AdvertisementAreaData_init(this);
    return this;
}

