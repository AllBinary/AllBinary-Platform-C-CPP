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
// #include "java/util/HashMap.h"
#include "org/allbinary/business/DynamicObjectData.h"
#include "org/allbinary/business/advertisement/AdvertisementsInterface.h"
#include "org/allbinary/business/advertisement/search/AdvertisementSearchInterface.h"
#include "org/allbinary/business/advertisement/campaign/AdvertisementCampaignInterface.h"

typedef struct AdvertisementCampaign AdvertisementCampaign;
struct AdvertisementCampaign {
    AdvertisementCampaignInterface AdvertisementCampaignInterface_interface;
    HashMap* hashMap;
};


AdvertisementCampaign* AdvertisementCampaign_new(HashMap* hashMap);

void AdvertisementCampaign_init(AdvertisementCampaign* this, HashMap* hashMap);
Any* AdvertisementCampaign_getComponent(AdvertisementCampaign* this);
const char* AdvertisementCampaign_getName(AdvertisementCampaign* this);
void AdvertisementCampaign_setComponentName(AdvertisementCampaign* this, const char* name);
void AdvertisementCampaign_setName(AdvertisementCampaign* this, const char* name);
AdvertisementsInterface* AdvertisementCampaign_search(AdvertisementCampaign* this, AdvertisementSearchInterface* advertisementSearchInterface);

static void AdvertisementCampaign_initFields(AdvertisementCampaign* this) {
    
}


void AdvertisementCampaign_init(AdvertisementCampaign* this, HashMap* hashMap) {
    AdvertisementCampaign_initFields(this);
        this->hashMap = hashMap;
}

AdvertisementCampaign* AdvertisementCampaign_new(HashMap* hashMap) {
    AdvertisementCampaign* this = calloc(1, sizeof(AdvertisementCampaign));
    AdvertisementCampaign_init(this, hashMap);
    return this;
}


Any* AdvertisementCampaign_getComponent(AdvertisementCampaign* this) {
        return nullptr;
}


const char* AdvertisementCampaign_getName(AdvertisementCampaign* this) {
        return ((const char*) HashMap_get(this->hashMap, AdvertisementCampaignData_getInstance()->NAME));
}


void AdvertisementCampaign_setComponentName(AdvertisementCampaign* this, const char* name) {
        HashMap_put(this->hashMap, DynamicObjectData_NAME, name);
}


void AdvertisementCampaign_setName(AdvertisementCampaign* this, const char* name) {
        HashMap_put(this->hashMap, AdvertisementCampaignData_getInstance()->NAME, name);
}


AdvertisementsInterface* AdvertisementCampaign_search(AdvertisementCampaign* this, AdvertisementSearchInterface* advertisementSearchInterface) {
        return nullptr;
}

