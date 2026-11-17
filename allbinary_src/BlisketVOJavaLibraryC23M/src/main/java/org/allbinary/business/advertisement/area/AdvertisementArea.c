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
// package org.allbinary.business.advertisement.area

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/business/advertisement/campaign/AdvertisementCampaignData.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentHelper.h"
#include "org/w3c/dom/Document.h"
#include "org/allbinary/business/advertisement/area/AdvertisementAreaInterface.h"

typedef struct AdvertisementArea AdvertisementArea;
struct AdvertisementArea {
    AdvertisementAreaInterface AdvertisementAreaInterface_interface;
    const char* name;
    const char* storeName;
    const char* description;
    AdvertisementAreaConstraintsInterface* advertisementAreaConstraintsInterface;
    const char* campaign;
};


AdvertisementArea* AdvertisementArea_new(HashMap* hashMap);

void AdvertisementArea_init(AdvertisementArea* this, HashMap* hashMap);
const char* AdvertisementArea_getName(AdvertisementArea* this);
const char* AdvertisementArea_getStoreName(AdvertisementArea* this);
const char* AdvertisementArea_getDescription(AdvertisementArea* this);
AdvertisementAreaConstraintsInterface* AdvertisementArea_getConstraints(AdvertisementArea* this);
const char* AdvertisementArea_getCampaign(AdvertisementArea* this);
void AdvertisementArea_setName(AdvertisementArea* this, const char* name);
void AdvertisementArea_setStoreName(AdvertisementArea* this, const char* storeName);
void AdvertisementArea_setDescription(AdvertisementArea* this, const char* description);
void AdvertisementArea_setConstraints(AdvertisementArea* this, AdvertisementAreaConstraintsInterface* advertisementConstraintsInterface);
void AdvertisementArea_setCampaign(AdvertisementArea* this, const char* campaign);

static void AdvertisementArea_initFields(AdvertisementArea* this) {
    
    
    
    
    
}


void AdvertisementArea_init(AdvertisementArea* this, HashMap* hashMap) {
    AdvertisementArea_initFields(this);
        this->name = ((const char*) HashMap_get(hashMap, AdvertisementAreaData_getInstance()->NAME));
        this->storeName = ((const char*) HashMap_get(hashMap, StoreFrontData_getInstance()->NAME));
        this->description = ((const char*) HashMap_get(hashMap, AdvertisementAreaData_getInstance()->DESCRIPTION));
        const char* constraintsDomString = ((const char*) HashMap_get(hashMap, AdvertisementAreaData_getInstance()->CONSTRAINTS));
        Document* document = DomDocumentHelper_create(constraintsDomString);
        this->advertisementAreaConstraintsInterface = AdvertisementAreaConstraints_new(document);
        this->campaign = ((const char*) HashMap_get(hashMap, AdvertisementCampaignData_getInstance()->NAME));
}

AdvertisementArea* AdvertisementArea_new(HashMap* hashMap) {
    AdvertisementArea* this = calloc(1, sizeof(AdvertisementArea));
    AdvertisementArea_init(this, hashMap);
    return this;
}


const char* AdvertisementArea_getName(AdvertisementArea* this) {
        return this->name;
}


const char* AdvertisementArea_getStoreName(AdvertisementArea* this) {
        return this->storeName;
}


const char* AdvertisementArea_getDescription(AdvertisementArea* this) {
        return this->description;
}


AdvertisementAreaConstraintsInterface* AdvertisementArea_getConstraints(AdvertisementArea* this) {
        return this->advertisementAreaConstraintsInterface;
}


const char* AdvertisementArea_getCampaign(AdvertisementArea* this) {
        return this->campaign;
}


void AdvertisementArea_setName(AdvertisementArea* this, const char* name) {
        this->name = name;
}


void AdvertisementArea_setStoreName(AdvertisementArea* this, const char* storeName) {
        this->storeName = storeName;
}


void AdvertisementArea_setDescription(AdvertisementArea* this, const char* description) {
        this->description = description;
}


void AdvertisementArea_setConstraints(AdvertisementArea* this, AdvertisementAreaConstraintsInterface* advertisementConstraintsInterface) {
        this->advertisementAreaConstraintsInterface = this->advertisementAreaConstraintsInterface;
}


void AdvertisementArea_setCampaign(AdvertisementArea* this, const char* campaign) {
        this->campaign = campaign;
}

