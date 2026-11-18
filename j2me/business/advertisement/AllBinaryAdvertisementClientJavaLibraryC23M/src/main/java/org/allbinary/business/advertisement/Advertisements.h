#ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENTS_H
#define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENTS_H
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
typedef struct AdvertisementProcessorInterface AdvertisementProcessorInterface;
typedef struct MyRandomFactory MyRandomFactory;
typedef struct LockedUtil LockedUtil;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/game/rand/MyRandomFactory.h")
#include "org/allbinary/game/rand/MyRandomFactory.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct Advertisements Advertisements;
struct Advertisements {
    BasicArrayList* bannerList;
    BasicArrayList* pageList;
    MyRandomFactory* myRandomFactory;
};


Advertisements* Advertisements_new(void);
void Advertisements_init(Advertisements* this);

void Advertisements_addPage(Advertisements* this, AdvertisementProcessorInterface* advertisementProcessorInterface);

void Advertisements_startRandomPage(Advertisements* this);

void Advertisements_processRandomPage(Advertisements* this);

void Advertisements_stopAllPage(Advertisements* this);

void Advertisements_addBanner(Advertisements* this, AdvertisementProcessorInterface* advertisementProcessorInterface);

void Advertisements_startAll(Advertisements* this);

void Advertisements_stopAllBanner(Advertisements* this);

AdvertisementProcessorInterface* Advertisements_getBanner(Advertisements* this, int32_t index);

void Advertisements_stopAll(Advertisements* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Advertisements_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Advertisements_register(void);


#endif // ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENTS_H
