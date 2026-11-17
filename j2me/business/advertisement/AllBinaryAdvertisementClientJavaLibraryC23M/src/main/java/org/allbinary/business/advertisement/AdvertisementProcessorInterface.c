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
void AdvertisementProcessorInterface_process(AdvertisementProcessorInterface* this);
void AdvertisementProcessorInterface_start(AdvertisementProcessorInterface* this);
void AdvertisementProcessorInterface_stop(AdvertisementProcessorInterface* this);

void AdvertisementProcessorInterface_init(AdvertisementProcessorInterface* this) {
}

AdvertisementProcessorInterface* AdvertisementProcessorInterface_new(void) {
    AdvertisementProcessorInterface* this = calloc(1, sizeof(AdvertisementProcessorInterface));
    AdvertisementProcessorInterface_init(this);
    return this;
}


void AdvertisementProcessorInterface_process(AdvertisementProcessorInterface* this) {
}


void AdvertisementProcessorInterface_start(AdvertisementProcessorInterface* this) {
}


void AdvertisementProcessorInterface_stop(AdvertisementProcessorInterface* this) {
}

