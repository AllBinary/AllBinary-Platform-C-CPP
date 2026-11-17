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
// package org.allbinary.business.advertisement.search.category

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/advertisement/search/category/AdvertisementCategoryInterface.h"

typedef struct BasicAdvertisementCategory BasicAdvertisementCategory;
struct BasicAdvertisementCategory {
    AdvertisementCategoryInterface AdvertisementCategoryInterface_interface;
    const char* categoryId;
};


BasicAdvertisementCategory* BasicAdvertisementCategory_new(const char* categoryId);

void BasicAdvertisementCategory_init(BasicAdvertisementCategory* this, const char* categoryId);
const char* BasicAdvertisementCategory_toString(BasicAdvertisementCategory* this);

static void BasicAdvertisementCategory_initFields(BasicAdvertisementCategory* this) {
    
}


void BasicAdvertisementCategory_init(BasicAdvertisementCategory* this, const char* categoryId) {
    BasicAdvertisementCategory_initFields(this);
        this->categoryId = categoryId;
}

BasicAdvertisementCategory* BasicAdvertisementCategory_new(const char* categoryId) {
    BasicAdvertisementCategory* this = calloc(1, sizeof(BasicAdvertisementCategory));
    BasicAdvertisementCategory_init(this, categoryId);
    return this;
}


const char* BasicAdvertisementCategory_toString(BasicAdvertisementCategory* this) {
        return this->categoryId;
}

