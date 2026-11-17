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
#include "org/allbinary/business/advertisement/image/AdvertisementImageInterface.h"
#include "org/allbinary/business/advertisement/product/AdvertisementProductInterface.h"
#include "org/allbinary/business/advertisement/thumbnail/AdvertisementThumbnailInterface.h"
#include "org/allbinary/business/user/commerce/money/Money.h"
#include "org/allbinary/logic/control/contraints/display/browser/DisplayInBrowserContraintsInterface.h"

typedef struct AdvertisementInterface AdvertisementInterface;
struct AdvertisementInterface {
    const char* (*getArtist)(void* this);
    const char* (*getArtistLink)(void* this);
    const char* (*getTitle)(void* this);
    const char* (*getDateAdded)(void* this);
    const char* (*getDirectory)(void* this);
    const char* (*getFramedLink)(void* this);
    Money* (*getListPrice)(void* this);
    Money* (*getOurPrice)(void* this);
    int32_t (*getRank)(void* this);
    AdvertisementImageInterface* (*getImage)(void* this);
    AdvertisementProductInterface* (*getProduct)(void* this);
    AdvertisementThumbnailInterface* (*getThumbnail)(void* this);
    DisplayInBrowserContraintsInterface* (*getDisplayInBrowserContraintsInterface)(void* this);
    void (*setArtist)(void* this, const char* artist);
    void (*setArtistLink)(void* this, const char* artistLink);
    void (*setTitle)(void* this, const char* title);
    void (*setDateAdded)(void* this, const char* dateAdded);
    void (*setDirectory)(void* this, const char* directory);
    void (*setFramedLink)(void* this, const char* framedLink);
    void (*setRank)(void* this, int32_t rank);
    void (*setImage)(void* this, AdvertisementImageInterface* AdvertisementImageInterface);
    void (*setProduct)(void* this, AdvertisementProductInterface* AdvertisementProductInterface);
    void (*setThumbnail)(void* this, AdvertisementThumbnailInterface* AdvertisementThumbnailInterface);
};


