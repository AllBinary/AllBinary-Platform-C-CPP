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
// package org.allbinary.business.advertisement.search

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct AdvertisementSearchData AdvertisementSearchData;
struct AdvertisementSearchData {
    const char* TITLE;
    const char* PRICE;
    const char* RELEVANCY;
    const char* POPULARITY;
};

static AdvertisementSearchData* AdvertisementSearchData_instance;

AdvertisementSearchData* AdvertisementSearchData_new(void);
AdvertisementSearchData* AdvertisementSearchData_getInstance(void);

void AdvertisementSearchData_init(AdvertisementSearchData* this);

// Static fields with runtime initializers: call this once at startup
void AdvertisementSearchData_staticInit(void) {
    AdvertisementSearchData_instance = AdvertisementSearchData_new();
}

static void AdvertisementSearchData_initFields(AdvertisementSearchData* this) {
    this->TITLE = "AFFILIATE_TITLE";
    this->PRICE = "AFFILIATE_PRICE";
    this->RELEVANCY = "AFFILIATE_RELEVANCY";
    this->POPULARITY = "AFFILIATE_POPULARITY";
}


AdvertisementSearchData* AdvertisementSearchData_getInstance(void) {
        return AdvertisementSearchData_instance;
}


void AdvertisementSearchData_init(AdvertisementSearchData* this) {
    AdvertisementSearchData_initFields(this);
}

AdvertisementSearchData* AdvertisementSearchData_new(void) {
    AdvertisementSearchData* this = calloc(1, sizeof(AdvertisementSearchData));
    AdvertisementSearchData_init(this);
    return this;
}

