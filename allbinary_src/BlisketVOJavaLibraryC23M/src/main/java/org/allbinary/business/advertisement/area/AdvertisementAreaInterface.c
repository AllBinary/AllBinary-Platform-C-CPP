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

typedef struct AdvertisementAreaInterface AdvertisementAreaInterface;
struct AdvertisementAreaInterface {
    const char* (*getName)(void* this);
    const char* (*getStoreName)(void* this);
    const char* (*getDescription)(void* this);
    AdvertisementAreaConstraintsInterface* (*getConstraints)(void* this);
    const char* (*getCampaign)(void* this);
    void (*setName)(void* this, const char* name);
    void (*setStoreName)(void* this, const char* storeName);
    void (*setDescription)(void* this, const char* description);
    void (*setConstraints)(void* this, AdvertisementAreaConstraintsInterface* advertisementConstraintsInterface);
    void (*setCampaign)(void* this, const char* campaign);
};


