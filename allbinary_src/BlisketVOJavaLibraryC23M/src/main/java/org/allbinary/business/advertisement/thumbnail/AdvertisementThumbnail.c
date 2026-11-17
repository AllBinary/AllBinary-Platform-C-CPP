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
// package org.allbinary.business.advertisement.thumbnail

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/control/contraints/size/TwoDimensionalConstraintInterface.h"
#include "org/allbinary/business/advertisement/thumbnail/AdvertisementThumbnailInterface.h"

typedef struct AdvertisementThumbnail AdvertisementThumbnail;
struct AdvertisementThumbnail {
    AdvertisementThumbnailInterface AdvertisementThumbnailInterface_interface;
    const char* imageFileName;
    const char* imageUrl;
    TwoDimensionalConstraintInterface* constraint;
};


AdvertisementThumbnail* AdvertisementThumbnail_new(void);

void AdvertisementThumbnail_init(AdvertisementThumbnail* this);
const char* AdvertisementThumbnail_getFileName(AdvertisementThumbnail* this);
const char* AdvertisementThumbnail_getUrl(AdvertisementThumbnail* this);
TwoDimensionalConstraintInterface* AdvertisementThumbnail_getTwoDimensionalConstraint(AdvertisementThumbnail* this);

static void AdvertisementThumbnail_initFields(AdvertisementThumbnail* this) {
    this->imageFileName = nullptr;
    this->imageUrl = nullptr;
    this->constraint = nullptr;
}


void AdvertisementThumbnail_init(AdvertisementThumbnail* this) {
    AdvertisementThumbnail_initFields(this);
}

AdvertisementThumbnail* AdvertisementThumbnail_new(void) {
    AdvertisementThumbnail* this = calloc(1, sizeof(AdvertisementThumbnail));
    AdvertisementThumbnail_init(this);
    return this;
}


const char* AdvertisementThumbnail_getFileName(AdvertisementThumbnail* this) {
        return this->imageFileName;
}


const char* AdvertisementThumbnail_getUrl(AdvertisementThumbnail* this) {
        return this->imageUrl;
}


TwoDimensionalConstraintInterface* AdvertisementThumbnail_getTwoDimensionalConstraint(AdvertisementThumbnail* this) {
        return this->constraint;
}

