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
// package org.allbinary.business.advertisement.campaign

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct AdvertisementCampaignData AdvertisementCampaignData;
struct AdvertisementCampaignData {
    const char* NAME;
    const char* DESCRIPTION;
    const char* CONFIG;
};

static AdvertisementCampaignData* AdvertisementCampaignData_instance;

AdvertisementCampaignData* AdvertisementCampaignData_new(void);
AdvertisementCampaignData* AdvertisementCampaignData_getInstance(void);

void AdvertisementCampaignData_init(AdvertisementCampaignData* this);

// Static fields with runtime initializers: call this once at startup
void AdvertisementCampaignData_staticInit(void) {
    AdvertisementCampaignData_instance = AdvertisementCampaignData_new();
}

static void AdvertisementCampaignData_initFields(AdvertisementCampaignData* this) {
    this->NAME = "ADVERTISEMENTCAMPAIGN_NAME";
    this->DESCRIPTION = "ADVERTISEMENTCAMPAIGN_DESCRIPTION";
    this->CONFIG = "ADVERTISEMENTCAMPAIGN_CONFIG";
}


AdvertisementCampaignData* AdvertisementCampaignData_getInstance(void) {
        return AdvertisementCampaignData_instance;
}


void AdvertisementCampaignData_init(AdvertisementCampaignData* this) {
    AdvertisementCampaignData_initFields(this);
}

AdvertisementCampaignData* AdvertisementCampaignData_new(void) {
    AdvertisementCampaignData* this = calloc(1, sizeof(AdvertisementCampaignData));
    AdvertisementCampaignData_init(this);
    return this;
}

