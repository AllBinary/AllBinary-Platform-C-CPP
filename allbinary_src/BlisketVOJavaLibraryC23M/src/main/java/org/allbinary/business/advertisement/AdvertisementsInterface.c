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

typedef struct AdvertisementsInterface AdvertisementsInterface;
struct AdvertisementsInterface {
    void (*add)(void* this, AdvertisementInterface* advertisementInterface);
    AdvertisementInterface* (*get)(void* this, int32_t index);
    int32_t (*getCurrentPageNum)(void* this);
    const char* (*getErrorDescription)(void* this);
    const char* (*getErrorNum)(void* this);
    int32_t (*getNumberOfPosters)(void* this);
    int32_t (*getNumberOfProductsInPage)(void* this);
    int32_t (*getStatusCode)(void* this);
    int32_t (*getTotalNumberOfProducts)(void* this);
    bool (*isSearchValid)(void* this);
    void (*setCurrentPageNum)(void* this, int32_t currentPageNum);
    void (*setErrorDescription)(void* this, const char* errorDescription);
    void (*setErrorNum)(void* this, const char* errorNum);
    void (*setNumberOfProductsInPage)(void* this, int32_t numberOfProductsInPage);
    void (*setStatusCode)(void* this, int32_t statusCode);
    void (*setTotalNumberOfProducts)(void* this, int32_t totalNumberOfProducts);
    const char* (*toString)(void* this);
};


