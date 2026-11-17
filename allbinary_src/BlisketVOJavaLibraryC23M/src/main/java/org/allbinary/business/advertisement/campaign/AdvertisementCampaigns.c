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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/advertisement/AdvertisementInterface.h"
#include "org/allbinary/business/advertisement/AdvertisementsInterface.h"
#include "org/allbinary/business/advertisement/search/AdvertisementSearchInterface.h"
#include "org/allbinary/business/advertisement/campaign/AdvertisementCampaignsInterface.h"

typedef struct AdvertisementCampaigns AdvertisementCampaigns;
struct AdvertisementCampaigns {
    AdvertisementCampaignsInterface AdvertisementCampaignsInterface_interface;
    BasicArrayList* advertisementsVector;
};


AdvertisementCampaigns* AdvertisementCampaigns_new(BasicArrayList* vector);

void AdvertisementCampaigns_init(AdvertisementCampaigns* this, BasicArrayList* vector);
void AdvertisementCampaigns_add(AdvertisementCampaigns* this, AdvertisementInterface* advertisementInterface);
AdvertisementInterface* AdvertisementCampaigns_get(AdvertisementCampaigns* this, int32_t index);
int32_t AdvertisementCampaigns_size(AdvertisementCampaigns* this);
bool AdvertisementCampaigns_isEnabled(AdvertisementCampaigns* this);
AdvertisementsInterface* AdvertisementCampaigns_search(AdvertisementCampaigns* this, AdvertisementSearchInterface* advertisementSearchInterface);

static void AdvertisementCampaigns_initFields(AdvertisementCampaigns* this) {
    
}


void AdvertisementCampaigns_init(AdvertisementCampaigns* this, BasicArrayList* vector) {
    AdvertisementCampaigns_initFields(this);
        this->advertisementsVector = this->advertisementsVector;
}

AdvertisementCampaigns* AdvertisementCampaigns_new(BasicArrayList* vector) {
    AdvertisementCampaigns* this = calloc(1, sizeof(AdvertisementCampaigns));
    AdvertisementCampaigns_init(this, vector);
    return this;
}


void AdvertisementCampaigns_add(AdvertisementCampaigns* this, AdvertisementInterface* advertisementInterface) {
        BasicArrayList_add(this->advertisementsVector, advertisementInterface);
}


AdvertisementInterface* AdvertisementCampaigns_get(AdvertisementCampaigns* this, int32_t index) {
        return ((AdvertisementInterface*) BasicArrayList_get(this->advertisementsVector, index));
}


int32_t AdvertisementCampaigns_size(AdvertisementCampaigns* this) {
        return BasicArrayList_size(this->advertisementsVector);
}


bool AdvertisementCampaigns_isEnabled(AdvertisementCampaigns* this) {
        return true;
}


AdvertisementsInterface* AdvertisementCampaigns_search(AdvertisementCampaigns* this, AdvertisementSearchInterface* advertisementSearchInterface) {
        return nullptr;
}

