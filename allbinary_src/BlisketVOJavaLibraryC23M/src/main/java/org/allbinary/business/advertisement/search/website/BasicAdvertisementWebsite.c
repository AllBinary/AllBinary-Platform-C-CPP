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
// package org.allbinary.business.advertisement.search.website

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/advertisement/search/website/AdvertisementWebsiteInterface.h"

typedef struct BasicAdvertisementWebsite BasicAdvertisementWebsite;
struct BasicAdvertisementWebsite {
    AdvertisementWebsiteInterface AdvertisementWebsiteInterface_interface;
    const char* websiteId;
};


BasicAdvertisementWebsite* BasicAdvertisementWebsite_new(const char* websiteId);

void BasicAdvertisementWebsite_init(BasicAdvertisementWebsite* this, const char* websiteId);
const char* BasicAdvertisementWebsite_toString(BasicAdvertisementWebsite* this);

static void BasicAdvertisementWebsite_initFields(BasicAdvertisementWebsite* this) {
    
}


void BasicAdvertisementWebsite_init(BasicAdvertisementWebsite* this, const char* websiteId) {
    BasicAdvertisementWebsite_initFields(this);
        this->websiteId = websiteId;
}

BasicAdvertisementWebsite* BasicAdvertisementWebsite_new(const char* websiteId) {
    BasicAdvertisementWebsite* this = calloc(1, sizeof(BasicAdvertisementWebsite));
    BasicAdvertisementWebsite_init(this, websiteId);
    return this;
}


const char* BasicAdvertisementWebsite_toString(BasicAdvertisementWebsite* this) {
        return this->websiteId;
}

