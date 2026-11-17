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
// package org.allbinary.business.user.commerce.inventory.item

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct BasicItemData BasicItemData;
struct BasicItemData {
    const char* ITEM;
    const char* TOTAL;
    const char* ID;
    const char* NUMBER;
    const char* INBASKETS;
    const char* WEIGHT;
    const char* NEWORUSED;
    const char* SUMMARY;
    const char* DISTRIBUTOR;
    const char* IDUSEDBYDISTRIBUTOR;
    const char* PRODUCEDBY;
    const char* PRODUCTIONDATE;
    const char* STARTPRODUCTIONDATE;
    const char* DESCRIPTION;
    const char* KEYWORDS;
    const char* CATEGORY;
    const char* TYPE;
    const char* IMAGE;
    const char* SMALLIMAGE;
    const char* MEDIUMIMAGE;
    const char* LARGEIMAGE;
    const char* PRICE;
    const char* COMMENT;
    const char* CUSTOMS;
    const char* DOWNLOADS;
    const char* GROUPS;
    const char* OPTIONS;
    const char* PERMISSIONS;
    const char* SPECIALS;
};

static BasicItemData* BasicItemData_instance;

BasicItemData* BasicItemData_new(void);
BasicItemData* BasicItemData_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void BasicItemData_staticInit(void) {
    BasicItemData_instance = BasicItemData_new();
}

static void BasicItemData_initFields(BasicItemData* this) {
    this->ITEM = "BASICITEM";
    this->TOTAL = "BASICITEM_TOTAL";
    this->ID = "BASICITEM_ID";
    this->NUMBER = "BASICITEM_NUMBER";
    this->INBASKETS = "BASICITEM_IN_BASKETS";
    this->WEIGHT = "BASICITEM_WEIGHT";
    this->NEWORUSED = "BASICITEM_NEW_OR_USED";
    this->SUMMARY = "BASICITEM_SUMMARY";
    this->DISTRIBUTOR = "BASICITEM_DISTRIBUTOR";
    this->IDUSEDBYDISTRIBUTOR = "BASICITEM_IDUSEDBYDISTRIBUTOR";
    this->PRODUCEDBY = "BASICITEM_PRODUCEDBY";
    this->PRODUCTIONDATE = "BASICITEM_PRODUCTIONDATE";
    this->STARTPRODUCTIONDATE = "BASICITEM_STARTPRODUCTIONDATE";
    this->DESCRIPTION = "BASICITEM_DESCRIPTION";
    this->KEYWORDS = "BASICITEM_KEYWORDS";
    this->CATEGORY = "BASICITEM_CATEGORY";
    this->TYPE = "BASICITEM_TYPE";
    this->IMAGE = "BASICITEM_IMG";
    this->SMALLIMAGE = "BASICITEM_SMALL_IMG";
    this->MEDIUMIMAGE = "BASICITEM_MEDIUM_IMG";
    this->LARGEIMAGE = "BASICITEM_LARGE_IMG";
    this->PRICE = "BASICITEM_PRICE";
    this->COMMENT = "BASICITEM_COMMENT";
    this->CUSTOMS = "BASICITEM_CUSTOMS";
    this->DOWNLOADS = "BASICITEM_DOWNLOADS";
    this->GROUPS = "BASICITEM_GROUPS";
    this->OPTIONS = "BASICITEM_OPTIONS";
    this->PERMISSIONS = "BASICITEM_PERMISSIONS";
    this->SPECIALS = "BASICITEM_SPECIALS";
}

void BasicItemData_init(BasicItemData* this) {
    BasicItemData_initFields(this);
}

BasicItemData* BasicItemData_new(void) {
    BasicItemData* this = calloc(1, sizeof(BasicItemData));
    BasicItemData_init(this);
    return this;
}


BasicItemData* BasicItemData_getInstance(void) {
        return BasicItemData_instance;
}

