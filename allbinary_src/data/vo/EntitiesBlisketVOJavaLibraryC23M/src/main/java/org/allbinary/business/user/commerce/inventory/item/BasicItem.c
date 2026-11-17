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
// #include "java/util/Calendar.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/entry/EntryData.h"
#include "org/allbinary/business/user/commerce/money/Money.h"
#include "org/allbinary/business/user/commerce/money/MoneyException.h"
#include "org/allbinary/data/generator/ProductIdGenerator.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/string/CommonPhoneStrings.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/business/user/commerce/inventory/item/ItemInterface.h"

typedef struct BasicItem BasicItem;
struct BasicItem {
    ItemInterface ItemInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    BasicItemData* basicItemData;
    const char* itemId;
    const char* number;
    const char* inBaskets;
    const char* weight;
    const char* enabled;
    const char* newOrUsed;
    const char* summary;
    const char* distributor;
    const char* idUsedByDistributor;
    const char* producedBy;
    const char* productionDate;
    const char* startProductionDate;
    const char* description;
    const char* keywords;
    const char* category;
    const char* type;
    const char* smallImage;
    const char* mediumImage;
    const char* largeImage;
    Money* price;
    const char* comment;
    const char* customs;
    const char* downloads;
    const char* groups;
    const char* options;
    const char* permissions;
    const char* specials;
    bool downloadable;
    const char* timeEntered;
    const char* lastModified;
};


BasicItem* BasicItem_new(HashMap* itemHashMap);

void BasicItem_init(BasicItem* this, HashMap* itemHashMap);

BasicItem* BasicItem_new0();
void BasicItem_init0(BasicItem* this);
void BasicItem_setId(BasicItem* this, const char* itemId);
void BasicItem_setNumber(BasicItem* this, const char* number);
void BasicItem_setInBaskets(BasicItem* this, const char* value);
void BasicItem_setWeight(BasicItem* this, const char* value);
void BasicItem_setNewOrUsed(BasicItem* this, const char* value);
void BasicItem_setSummary(BasicItem* this, const char* value);
void BasicItem_setDistributor(BasicItem* this, const char* value);
void BasicItem_setIdUsedByDistributor(BasicItem* this, const char* value);
void BasicItem_setProducedBy(BasicItem* this, const char* value);
void BasicItem_setProductionDate(BasicItem* this, const char* value);
void BasicItem_setStartProductionDate(BasicItem* this, const char* value);
void BasicItem_setDescription(BasicItem* this, const char* value);
void BasicItem_setKeywords(BasicItem* this, const char* value);
void BasicItem_setCategory(BasicItem* this, const char* value);
void BasicItem_setType(BasicItem* this, const char* value);
void BasicItem_setSmallImage(BasicItem* this, const char* value);
void BasicItem_setMediumImage(BasicItem* this, const char* value);
void BasicItem_setLargeImage(BasicItem* this, const char* value);
void BasicItem_setTimeEntered(BasicItem* this, const char* value);
void BasicItem_setLastModified(BasicItem* this, const char* value);
void BasicItem_setPrice(BasicItem* this, Money* value);
void BasicItem_setComment(BasicItem* this, const char* value);
void BasicItem_setCustoms(BasicItem* this, const char* value);
void BasicItem_setDownloads(BasicItem* this, const char* value);
void BasicItem_setGroups(BasicItem* this, const char* value);
void BasicItem_setOptions(BasicItem* this, const char* value);
void BasicItem_setPermissions(BasicItem* this, const char* value);
void BasicItem_setSpecials(BasicItem* this, const char* value);
void BasicItem_setEnabled(BasicItem* this, const char* value);
const char* BasicItem_getId(BasicItem* this);
const char* BasicItem_getNumber(BasicItem* this);
const char* BasicItem_getInBaskets(BasicItem* this);
const char* BasicItem_getWeight(BasicItem* this);
const char* BasicItem_getNewOrUsed(BasicItem* this);
const char* BasicItem_getSummary(BasicItem* this);
const char* BasicItem_getDistributor(BasicItem* this);
const char* BasicItem_getIdUsedByDistributor(BasicItem* this);
const char* BasicItem_getProducedBy(BasicItem* this);
const char* BasicItem_getProductionDate(BasicItem* this);
const char* BasicItem_getStartProductionDate(BasicItem* this);
const char* BasicItem_getDescription(BasicItem* this);
const char* BasicItem_getKeywords(BasicItem* this);
const char* BasicItem_getCategory(BasicItem* this);
const char* BasicItem_getType(BasicItem* this);
const char* BasicItem_getSmallImage(BasicItem* this);
const char* BasicItem_getMediumImage(BasicItem* this);
const char* BasicItem_getLargeImage(BasicItem* this);
const char* BasicItem_getTimeEntered(BasicItem* this);
const char* BasicItem_getLastModified(BasicItem* this);
Money* BasicItem_getPrice(BasicItem* this);
const char* BasicItem_getComment(BasicItem* this);
const char* BasicItem_getCustoms(BasicItem* this);
const char* BasicItem_getDownloads(BasicItem* this);
const char* BasicItem_getGroups(BasicItem* this);
const char* BasicItem_getOptions(BasicItem* this);
const char* BasicItem_getPermissions(BasicItem* this);
const char* BasicItem_getSpecials(BasicItem* this);
void BasicItem_setDownloadable(BasicItem* this, bool downloadable);
bool BasicItem_isDownloadable(BasicItem* this);
const char* BasicItem_getEnabled(BasicItem* this);
Money* BasicItem_getTotal(BasicItem* this);
HashMap* BasicItem_toHashMap(BasicItem* this);
BasicArrayList* BasicItem_toVector(BasicItem* this);
Any* BasicItem_getKey(BasicItem* this);

static void BasicItem_initFields(BasicItem* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->basicItemData = BasicItemData_getInstance();
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    this->downloads = nullptr;
    
    
    
    
    this->downloadable = false;
    
    
}


void BasicItem_init(BasicItem* this, HashMap* itemHashMap) {
    BasicItem_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PRODUCTSEARCHLOGGING)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "Constructor(HashMap)");
        }
        this->itemId = ((const char*) HashMap_get(itemHashMap, this->basicItemData->ID));
        this->number = ((const char*) HashMap_get(itemHashMap, this->basicItemData->NUMBER));
        this->inBaskets = ((const char*) HashMap_get(itemHashMap, this->basicItemData->INBASKETS));
        this->weight = ((const char*) HashMap_get(itemHashMap, this->basicItemData->WEIGHT));
        this->enabled = ((const char*) HashMap_get(itemHashMap, EntryData_getInstance()->ENABLE));
        this->newOrUsed = ((const char*) HashMap_get(itemHashMap, this->basicItemData->NEWORUSED));
        this->summary = ((const char*) HashMap_get(itemHashMap, this->basicItemData->SUMMARY));
        this->distributor = ((const char*) HashMap_get(itemHashMap, this->basicItemData->DISTRIBUTOR));
        this->idUsedByDistributor = ((const char*) HashMap_get(itemHashMap, this->basicItemData->IDUSEDBYDISTRIBUTOR));
        this->producedBy = ((const char*) HashMap_get(itemHashMap, this->basicItemData->PRODUCEDBY));
        this->productionDate = ((const char*) HashMap_get(itemHashMap, this->basicItemData->PRODUCTIONDATE));
        this->startProductionDate = ((const char*) HashMap_get(itemHashMap, this->basicItemData->STARTPRODUCTIONDATE));
        this->description = ((const char*) HashMap_get(itemHashMap, this->basicItemData->DESCRIPTION));
        this->keywords = ((const char*) HashMap_get(itemHashMap, this->basicItemData->KEYWORDS));
        this->category = ((const char*) HashMap_get(itemHashMap, this->basicItemData->CATEGORY));
        this->type = ((const char*) HashMap_get(itemHashMap, this->basicItemData->TYPE));
        this->smallImage = ((const char*) HashMap_get(itemHashMap, this->basicItemData->SMALLIMAGE));
        this->mediumImage = ((const char*) HashMap_get(itemHashMap, this->basicItemData->MEDIUMIMAGE));
        this->largeImage = ((const char*) HashMap_get(itemHashMap, this->basicItemData->LARGEIMAGE));
        this->timeEntered = ((const char*) HashMap_get(itemHashMap, EntryData_getInstance()->TIMECREATED));
        this->lastModified = ((const char*) HashMap_get(itemHashMap, EntryData_getInstance()->LASTMODIFIED));
        this->price = Money_new(((const char*) HashMap_get(itemHashMap, this->basicItemData->PRICE)));
        this->comment = ((const char*) HashMap_get(itemHashMap, this->basicItemData->COMMENT));
        this->customs = ((const char*) HashMap_get(itemHashMap, this->basicItemData->CUSTOMS));
        BasicItem_setDownloads(this, ((const char*) HashMap_get(itemHashMap, this->basicItemData->DOWNLOADS)));
        this->groups = ((const char*) HashMap_get(itemHashMap, this->basicItemData->GROUPS));
        this->options = ((const char*) HashMap_get(itemHashMap, this->basicItemData->OPTIONS));
        this->permissions = ((const char*) HashMap_get(itemHashMap, this->basicItemData->PERMISSIONS));
        this->specials = ((const char*) HashMap_get(itemHashMap, this->basicItemData->SPECIALS));
}

BasicItem* BasicItem_new(HashMap* itemHashMap) {
    BasicItem* this = calloc(1, sizeof(BasicItem));
    BasicItem_init(this, itemHashMap);
    return this;
}


void BasicItem_init0(BasicItem* this) {
    BasicItem_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PRODUCTSEARCHLOGGING)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        }
        const char* EMPTY = StringUtil_getInstance()->EMPTY_STRING;
        this->itemId = ProductIdGenerator_getNext(ProductIdGenerator_new());
        this->number = CommonPhoneStrings_getInstance()->ZERO;
        this->inBaskets = EMPTY;
        this->weight = EMPTY;
        this->enabled = EMPTY;
        this->newOrUsed = EMPTY;
        this->summary = EMPTY;
        this->distributor = EMPTY;
        this->idUsedByDistributor = EMPTY;
        this->producedBy = EMPTY;
        this->productionDate = EMPTY;
        this->startProductionDate = EMPTY;
        this->description = EMPTY;
        this->keywords = EMPTY;
        this->category = EMPTY;
        this->type = EMPTY;
        this->smallImage = EMPTY;
        this->mediumImage = EMPTY;
        this->largeImage = EMPTY;
        this->timeEntered = EMPTY;
        this->lastModified = EMPTY;
        this->price = Money_new();
        this->comment = EMPTY;
        this->customs = EMPTY;
        BasicItem_setDownloads(this, EMPTY);
        this->groups = EMPTY;
        this->options = EMPTY;
        this->permissions = EMPTY;
        this->specials = EMPTY;
}

BasicItem* BasicItem_new0(void) {
    BasicItem* this = calloc(1, sizeof(BasicItem));
    BasicItem_init0(this);
    return this;
}


void BasicItem_setId(BasicItem* this, const char* itemId) {
        this->itemId = itemId;
}


void BasicItem_setNumber(BasicItem* this, const char* number) {
        this->number = number;
}


void BasicItem_setInBaskets(BasicItem* this, const char* value) {
        this->inBaskets = value;
}


void BasicItem_setWeight(BasicItem* this, const char* value) {
        this->weight = value;
}


void BasicItem_setNewOrUsed(BasicItem* this, const char* value) {
        this->newOrUsed = value;
}


void BasicItem_setSummary(BasicItem* this, const char* value) {
        this->summary = value;
}


void BasicItem_setDistributor(BasicItem* this, const char* value) {
        this->distributor = value;
}


void BasicItem_setIdUsedByDistributor(BasicItem* this, const char* value) {
        this->idUsedByDistributor = value;
}


void BasicItem_setProducedBy(BasicItem* this, const char* value) {
        this->producedBy = value;
}


void BasicItem_setProductionDate(BasicItem* this, const char* value) {
        this->productionDate = value;
}


void BasicItem_setStartProductionDate(BasicItem* this, const char* value) {
        this->startProductionDate = value;
}


void BasicItem_setDescription(BasicItem* this, const char* value) {
        this->description = value;
}


void BasicItem_setKeywords(BasicItem* this, const char* value) {
        this->keywords = value;
}


void BasicItem_setCategory(BasicItem* this, const char* value) {
        this->category = value;
}


void BasicItem_setType(BasicItem* this, const char* value) {
        this->type = value;
}


void BasicItem_setSmallImage(BasicItem* this, const char* value) {
        this->smallImage = value;
}


void BasicItem_setMediumImage(BasicItem* this, const char* value) {
        this->mediumImage = value;
}


void BasicItem_setLargeImage(BasicItem* this, const char* value) {
        this->largeImage = value;
}


void BasicItem_setTimeEntered(BasicItem* this, const char* value) {
        this->timeEntered = value;
}


void BasicItem_setLastModified(BasicItem* this, const char* value) {
        this->lastModified = value;
}


void BasicItem_setPrice(BasicItem* this, Money* value) {
        this->price = value;
}


void BasicItem_setComment(BasicItem* this, const char* value) {
        this->comment = value;
}


void BasicItem_setCustoms(BasicItem* this, const char* value) {
        this->customs = value;
}


void BasicItem_setDownloads(BasicItem* this, const char* value) {
        this->downloads = value;
        if (!StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), this->downloads)) {
            int32_t downloadInteger = java_string_of(this->downloads);
            if (Integer_intValue(downloadInteger) != 0) {
                BasicItem_setDownloadable(this, true);
            }
        }
}


void BasicItem_setGroups(BasicItem* this, const char* value) {
        this->groups = value;
}


void BasicItem_setOptions(BasicItem* this, const char* value) {
        this->options = value;
}


void BasicItem_setPermissions(BasicItem* this, const char* value) {
        this->permissions = value;
}


void BasicItem_setSpecials(BasicItem* this, const char* value) {
        this->specials = value;
}


void BasicItem_setEnabled(BasicItem* this, const char* value) {
        this->enabled = value;
}


const char* BasicItem_getId(BasicItem* this) {
        return this->itemId;
}


const char* BasicItem_getNumber(BasicItem* this) {
        return this->number;
}


const char* BasicItem_getInBaskets(BasicItem* this) {
        return this->inBaskets;
}


const char* BasicItem_getWeight(BasicItem* this) {
        return this->weight;
}


const char* BasicItem_getNewOrUsed(BasicItem* this) {
        return this->newOrUsed;
}


const char* BasicItem_getSummary(BasicItem* this) {
        return this->summary;
}


const char* BasicItem_getDistributor(BasicItem* this) {
        return this->distributor;
}


const char* BasicItem_getIdUsedByDistributor(BasicItem* this) {
        return this->idUsedByDistributor;
}


const char* BasicItem_getProducedBy(BasicItem* this) {
        return this->producedBy;
}


const char* BasicItem_getProductionDate(BasicItem* this) {
        return this->productionDate;
}


const char* BasicItem_getStartProductionDate(BasicItem* this) {
        return this->startProductionDate;
}


const char* BasicItem_getDescription(BasicItem* this) {
        return this->description;
}


const char* BasicItem_getKeywords(BasicItem* this) {
        return this->keywords;
}


const char* BasicItem_getCategory(BasicItem* this) {
        return this->category;
}


const char* BasicItem_getType(BasicItem* this) {
        return this->type;
}


const char* BasicItem_getSmallImage(BasicItem* this) {
        return this->smallImage;
}


const char* BasicItem_getMediumImage(BasicItem* this) {
        return this->mediumImage;
}


const char* BasicItem_getLargeImage(BasicItem* this) {
        return this->largeImage;
}


const char* BasicItem_getTimeEntered(BasicItem* this) {
        return this->timeEntered;
}


const char* BasicItem_getLastModified(BasicItem* this) {
        return this->lastModified;
}


Money* BasicItem_getPrice(BasicItem* this) {
        return this->price;
}


const char* BasicItem_getComment(BasicItem* this) {
        return this->comment;
}


const char* BasicItem_getCustoms(BasicItem* this) {
        return this->customs;
}


const char* BasicItem_getDownloads(BasicItem* this) {
        return this->downloads;
}


const char* BasicItem_getGroups(BasicItem* this) {
        return this->groups;
}


const char* BasicItem_getOptions(BasicItem* this) {
        return this->options;
}


const char* BasicItem_getPermissions(BasicItem* this) {
        return this->permissions;
}


const char* BasicItem_getSpecials(BasicItem* this) {
        return this->specials;
}


void BasicItem_setDownloadable(BasicItem* this, bool downloadable) {
        this->downloadable = downloadable;
}


bool BasicItem_isDownloadable(BasicItem* this) {
        return this->downloadable;
}


const char* BasicItem_getEnabled(BasicItem* this) {
        return this->enabled;
}


Money* BasicItem_getTotal(BasicItem* this) {
        Money* itemTotal = Money_new(this->price);
        Money_multiply(itemTotal, Integer_intValue(this->number));
        return itemTotal;
}


HashMap* BasicItem_toHashMap(BasicItem* this) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PRODUCTSEARCHLOGGING)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "toHashMap");
        }
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, this->basicItemData->ID, this->itemId);
        HashMap_put(hashMap, this->basicItemData->NUMBER, this->number);
        HashMap_put(hashMap, this->basicItemData->INBASKETS, this->inBaskets);
        HashMap_put(hashMap, this->basicItemData->WEIGHT, this->weight);
        HashMap_put(hashMap, EntryData_getInstance()->ENABLE, this->enabled);
        HashMap_put(hashMap, this->basicItemData->NEWORUSED, this->newOrUsed);
        HashMap_put(hashMap, this->basicItemData->SUMMARY, this->summary);
        HashMap_put(hashMap, this->basicItemData->DISTRIBUTOR, this->distributor);
        HashMap_put(hashMap, this->basicItemData->IDUSEDBYDISTRIBUTOR, this->idUsedByDistributor);
        HashMap_put(hashMap, this->basicItemData->PRODUCEDBY, this->producedBy);
        HashMap_put(hashMap, this->basicItemData->PRODUCTIONDATE, this->productionDate);
        HashMap_put(hashMap, this->basicItemData->STARTPRODUCTIONDATE, this->startProductionDate);
        HashMap_put(hashMap, this->basicItemData->DESCRIPTION, this->description);
        HashMap_put(hashMap, this->basicItemData->KEYWORDS, this->keywords);
        HashMap_put(hashMap, this->basicItemData->CATEGORY, this->category);
        HashMap_put(hashMap, this->basicItemData->TYPE, this->type);
        HashMap_put(hashMap, this->basicItemData->SMALLIMAGE, this->smallImage);
        HashMap_put(hashMap, this->basicItemData->MEDIUMIMAGE, this->mediumImage);
        HashMap_put(hashMap, this->basicItemData->LARGEIMAGE, this->largeImage);
        Calendar* calendar = Calendar_getInstance();
        const char* time = Long_toString(Calendar_getTimeInMillis(calendar));
        HashMap_put(hashMap, EntryData_getInstance()->LASTMODIFIED, time);
        HashMap_put(hashMap, this->basicItemData->PRICE, Money_toString(this->price));
        HashMap_put(hashMap, this->basicItemData->COMMENT, this->comment);
        HashMap_put(hashMap, this->basicItemData->CUSTOMS, this->customs);
        HashMap_put(hashMap, this->basicItemData->DOWNLOADS, BasicItem_getDownloads(this));
        HashMap_put(hashMap, this->basicItemData->GROUPS, this->groups);
        HashMap_put(hashMap, this->basicItemData->OPTIONS, this->options);
        HashMap_put(hashMap, this->basicItemData->PERMISSIONS, this->permissions);
        HashMap_put(hashMap, this->basicItemData->SPECIALS, this->specials);
        return hashMap;
}


BasicArrayList* BasicItem_toVector(BasicItem* this) {
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PRODUCTSEARCHLOGGING)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, "toVector");
        }
        BasicArrayList* values = BasicArrayListD_new();
        BasicArrayList_add(values, this->itemId);
        BasicArrayList_add(values, this->number);
        BasicArrayList_add(values, this->inBaskets);
        BasicArrayList_add(values, this->weight);
        BasicArrayList_add(values, this->enabled);
        BasicArrayList_add(values, this->newOrUsed);
        BasicArrayList_add(values, this->summary);
        BasicArrayList_add(values, this->distributor);
        BasicArrayList_add(values, this->idUsedByDistributor);
        BasicArrayList_add(values, this->producedBy);
        BasicArrayList_add(values, this->productionDate);
        BasicArrayList_add(values, this->startProductionDate);
        BasicArrayList_add(values, this->description);
        BasicArrayList_add(values, this->keywords);
        BasicArrayList_add(values, this->category);
        BasicArrayList_add(values, this->type);
        BasicArrayList_add(values, BasicItem_getSmallImage(this));
        BasicArrayList_add(values, BasicItem_getMediumImage(this));
        BasicArrayList_add(values, BasicItem_getLargeImage(this));
        Calendar* calendar = Calendar_getInstance();
        const char* time = Long_toString(Calendar_getTimeInMillis(calendar));
        BasicArrayList_add(values, time);
        BasicArrayList_add(values, time);
        BasicArrayList_add(values, Money_toString(this->price));
        BasicArrayList_add(values, this->comment);
        BasicArrayList_add(values, this->customs);
        BasicArrayList_add(values, BasicItem_getDownloads(this));
        BasicArrayList_add(values, this->groups);
        BasicArrayList_add(values, this->options);
        BasicArrayList_add(values, this->permissions);
        BasicArrayList_add(values, this->specials);
        return values;
}


// throws Exception
Any* BasicItem_getKey(BasicItem* this) {
        return ((Any*) BasicItem_getId(this));
}

