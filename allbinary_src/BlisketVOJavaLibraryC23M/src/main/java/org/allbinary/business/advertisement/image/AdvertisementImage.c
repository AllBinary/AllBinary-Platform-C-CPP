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
// package org.allbinary.business.advertisement.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/control/contraints/size/TwoDimensionalConstraintInterface.h"
#include "org/allbinary/business/advertisement/image/AdvertisementImageInterface.h"

typedef struct AdvertisementImage AdvertisementImage;
struct AdvertisementImage {
    AdvertisementImageInterface AdvertisementImageInterface_interface;
    const char* imageFileName;
    const char* imageUrl;
    TwoDimensionalConstraintInterface* constraint;
};


AdvertisementImage* AdvertisementImage_new(void);

void AdvertisementImage_init(AdvertisementImage* this);
const char* AdvertisementImage_getFileName(AdvertisementImage* this);
const char* AdvertisementImage_getUrl(AdvertisementImage* this);
TwoDimensionalConstraintInterface* AdvertisementImage_getTwoDimensionalConstraint(AdvertisementImage* this);

static void AdvertisementImage_initFields(AdvertisementImage* this) {
    this->imageFileName = nullptr;
    this->imageUrl = nullptr;
    this->constraint = nullptr;
}


void AdvertisementImage_init(AdvertisementImage* this) {
    AdvertisementImage_initFields(this);
}

AdvertisementImage* AdvertisementImage_new(void) {
    AdvertisementImage* this = calloc(1, sizeof(AdvertisementImage));
    AdvertisementImage_init(this);
    return this;
}


const char* AdvertisementImage_getFileName(AdvertisementImage* this) {
        return this->imageFileName;
}


const char* AdvertisementImage_getUrl(AdvertisementImage* this) {
        return this->imageUrl;
}


TwoDimensionalConstraintInterface* AdvertisementImage_getTwoDimensionalConstraint(AdvertisementImage* this) {
        return this->constraint;
}

