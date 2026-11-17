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
#include "org/allbinary/game/rand/MyRandomFactory.h"
#include "org/allbinary/logic/system/security/licensing/LockedUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct Advertisements Advertisements;
struct Advertisements {
    BasicArrayList* bannerList;
    BasicArrayList* pageList;
    MyRandomFactory* myRandomFactory;
};


Advertisements* Advertisements_new(void);
void Advertisements_addPage(Advertisements* this, AdvertisementProcessorInterface* advertisementProcessorInterface);
void Advertisements_startRandomPage(Advertisements* this);
void Advertisements_processRandomPage(Advertisements* this);
void Advertisements_stopAllPage(Advertisements* this);
void Advertisements_addBanner(Advertisements* this, AdvertisementProcessorInterface* advertisementProcessorInterface);
void Advertisements_startAll(Advertisements* this);
void Advertisements_stopAllBanner(Advertisements* this);
AdvertisementProcessorInterface* Advertisements_getBanner(Advertisements* this, int32_t index);
void Advertisements_stopAll(Advertisements* this);

static void Advertisements_initFields(Advertisements* this) {
    this->bannerList = BasicArrayListD_new();
    this->pageList = BasicArrayListD_new();
    this->myRandomFactory = MyRandomFactory_getInstance();
}

void Advertisements_init(Advertisements* this) {
    Advertisements_initFields(this);
}

Advertisements* Advertisements_new(void) {
    Advertisements* this = calloc(1, sizeof(Advertisements));
    Advertisements_init(this);
    return this;
}


void Advertisements_addPage(Advertisements* this, AdvertisementProcessorInterface* advertisementProcessorInterface) {
        if (!BasicArrayList_contains(this->pageList, advertisementProcessorInterface)) {
            BasicArrayList_add(this->pageList, advertisementProcessorInterface);
        }
}


void Advertisements_startRandomPage(Advertisements* this) {
        int32_t size = BasicArrayList_size(this->pageList);
        if (size > 0) {
            int32_t random = MyRandomFactory_getAbsoluteNextInt(this->myRandomFactory, size);
            AdvertisementProcessorInterface* advertisementProcessorInterface = ((AdvertisementProcessorInterface*) this->pageList->objectArray[random]);
            AdvertisementProcessorInterface_start(advertisementProcessorInterface);
        }
}


void Advertisements_processRandomPage(Advertisements* this) {
        if (LockedUtil_isLocked(LockedUtil_getInstance())) {
            int32_t size = BasicArrayList_size(this->pageList);
            if (size > 0) {
                int32_t random = MyRandomFactory_getAbsoluteNextInt(this->myRandomFactory, size);
                AdvertisementProcessorInterface* advertisementProcessorInterface = ((AdvertisementProcessorInterface*) this->pageList->objectArray[random]);
                AdvertisementProcessorInterface_process(advertisementProcessorInterface);
            }
        }
}


void Advertisements_stopAllPage(Advertisements* this) {
        for (int32_t index = BasicArrayList_size(this->pageList); --index >= 0; ) {
            AdvertisementProcessorInterface* advertisementProcessorInterface = ((AdvertisementProcessorInterface*) this->pageList->objectArray[index]);
            AdvertisementProcessorInterface_stop(advertisementProcessorInterface);
        }
}


void Advertisements_addBanner(Advertisements* this, AdvertisementProcessorInterface* advertisementProcessorInterface) {
        if (!BasicArrayList_contains(this->bannerList, advertisementProcessorInterface)) {
            BasicArrayList_add(this->bannerList, advertisementProcessorInterface);
        }
}


void Advertisements_startAll(Advertisements* this) {
        for (int32_t index = BasicArrayList_size(this->bannerList); --index >= 0; ) {
            AdvertisementProcessorInterface* advertisementProcessorInterface = ((AdvertisementProcessorInterface*) this->bannerList->objectArray[index]);
            AdvertisementProcessorInterface_start(advertisementProcessorInterface);
        }
}


void Advertisements_stopAllBanner(Advertisements* this) {
        for (int32_t index = BasicArrayList_size(this->bannerList); --index >= 0; ) {
            AdvertisementProcessorInterface* advertisementProcessorInterface = ((AdvertisementProcessorInterface*) this->bannerList->objectArray[index]);
            AdvertisementProcessorInterface_stop(advertisementProcessorInterface);
        }
}


AdvertisementProcessorInterface* Advertisements_getBanner(Advertisements* this, int32_t index) {
        AdvertisementProcessorInterface* advertisementProcessorInterface = ((AdvertisementProcessorInterface*) this->bannerList->objectArray[index]);
        return advertisementProcessorInterface;
}


void Advertisements_stopAll(Advertisements* this) {
        Advertisements_stopAllBanner(this);
        Advertisements_stopAllPage(this);
}

