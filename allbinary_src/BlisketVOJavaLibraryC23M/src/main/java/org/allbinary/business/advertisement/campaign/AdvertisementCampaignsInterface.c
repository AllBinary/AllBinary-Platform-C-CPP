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
#include "org/allbinary/business/advertisement/AdvertisementInterface.h"

typedef struct AdvertisementCampaignsInterface AdvertisementCampaignsInterface;
struct AdvertisementCampaignsInterface {
    void (*add)(void* this, AdvertisementInterface* advertisementInterface);
    AdvertisementInterface* (*get)(void* this, int32_t index);
    int32_t (*size)(void* this);
    bool (*isEnabled)(void* this);
};


