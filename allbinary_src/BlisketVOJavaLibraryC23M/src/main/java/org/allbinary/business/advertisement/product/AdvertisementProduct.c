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
// package org.allbinary.business.advertisement.product

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/control/contraints/size/TwoDimensionalConstraintInterface.h"
#include "org/allbinary/business/advertisement/product/AdvertisementProductInterface.h"

typedef struct AdvertisementProduct AdvertisementProduct;
struct AdvertisementProduct {
    AdvertisementProductInterface AdvertisementProductInterface_interface;
    const char* type;
    const char* link;
    int32_t number;
    TwoDimensionalConstraintInterface* constraint;
};


AdvertisementProduct* AdvertisementProduct_new(void);

void AdvertisementProduct_init(AdvertisementProduct* this);
const char* AdvertisementProduct_getType(AdvertisementProduct* this);
const char* AdvertisementProduct_getLink(AdvertisementProduct* this);
int32_t AdvertisementProduct_getNumber(AdvertisementProduct* this);
TwoDimensionalConstraintInterface* AdvertisementProduct_getTwoDimensionalConstraint(AdvertisementProduct* this);

static void AdvertisementProduct_initFields(AdvertisementProduct* this) {
    this->type = nullptr;
    this->link = nullptr;
    this->number = 0;
    this->constraint = nullptr;
}


void AdvertisementProduct_init(AdvertisementProduct* this) {
    AdvertisementProduct_initFields(this);
}

AdvertisementProduct* AdvertisementProduct_new(void) {
    AdvertisementProduct* this = calloc(1, sizeof(AdvertisementProduct));
    AdvertisementProduct_init(this);
    return this;
}


const char* AdvertisementProduct_getType(AdvertisementProduct* this) {
        return this->type;
}


const char* AdvertisementProduct_getLink(AdvertisementProduct* this) {
        return this->link;
}


int32_t AdvertisementProduct_getNumber(AdvertisementProduct* this) {
        return this->number;
}


TwoDimensionalConstraintInterface* AdvertisementProduct_getTwoDimensionalConstraint(AdvertisementProduct* this) {
        return this->constraint;
}

