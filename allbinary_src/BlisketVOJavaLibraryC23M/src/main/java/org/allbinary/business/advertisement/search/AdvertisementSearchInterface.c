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
// package org.allbinary.business.advertisement.search

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/business/advertisement/search/category/AdvertisementCategoryInterface.h"
#include "org/allbinary/business/advertisement/search/website/AdvertisementWebsiteInterface.h"
#include "org/allbinary/logic/control/contraints/price/PriceConstraintInterface.h"
#include "org/allbinary/logic/control/contraints/size/TwoDimensionalConstraintInterface.h"

typedef struct AdvertisementSearchInterface AdvertisementSearchInterface;
struct AdvertisementSearchInterface {
    AdvertisementWebsiteInterface* (*getWebSite)(void* this);
    AdvertisementCategoryInterface* (*getCategory)(void* this);
    TwoDimensionalConstraintInterface* (*getSizeConstraints)(void* this);
    PriceConstraintInterface* (*getPricingConstraints)(void* this);
    int32_t (*getPageNumber)(void* this);
    int32_t (*getProductsPerPage)(void* this);
    HashMap* (*getSearchParams)(void* this);
    void (*setCategory)(void* this, AdvertisementCategoryInterface* advertisementCategoryInterface);
    void (*setSizeConstraints)(void* this, TwoDimensionalConstraintInterface* twoDimensionConstraintsInterface);
    void (*setPricingConstraints)(void* this, PriceConstraintInterface* priceConstraintInterface);
    void (*setPageNumber)(void* this, int32_t pageNumber);
    void (*setProductsPerPage)(void* this, int32_t productsPerPage);
    void (*setSearchParams)(void* this, HashMap* columnAndKeywordHashMap);
};


