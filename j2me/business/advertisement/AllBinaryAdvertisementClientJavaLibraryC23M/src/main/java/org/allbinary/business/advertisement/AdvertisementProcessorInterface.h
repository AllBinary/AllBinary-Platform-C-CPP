#ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENTPROCESSORINTERFACE_H
#define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENTPROCESSORINTERFACE_H
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
struct AdvertisementProcessorInterface {
    char unused;
};


AdvertisementProcessorInterface* AdvertisementProcessorInterface_new(void);
void AdvertisementProcessorInterface_init(AdvertisementProcessorInterface* this);

void AdvertisementProcessorInterface_process(AdvertisementProcessorInterface* this);

void AdvertisementProcessorInterface_start(AdvertisementProcessorInterface* this);

void AdvertisementProcessorInterface_stop(AdvertisementProcessorInterface* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AdvertisementProcessorInterface_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AdvertisementProcessorInterface_register(void);


#endif // ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_ADVERTISEMENTPROCESSORINTERFACE_H
