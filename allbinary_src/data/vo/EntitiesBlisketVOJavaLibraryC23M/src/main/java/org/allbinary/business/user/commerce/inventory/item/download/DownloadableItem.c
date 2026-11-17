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
// package org.allbinary.business.user.commerce.inventory.item.download

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
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemData.h"
#include "org/allbinary/data/generator/ProductIdGenerator.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/time/TimeUtil.h"

typedef struct DownloadableItem DownloadableItem;
struct DownloadableItem {
    const char* id;
    const char* basicItemId;
    const char* enabled;
    const char* system;
    const char* platform;
    const char* specialName;
    const char* version;
    const char* changes;
    const char* licenseFile;
    const char* file;
    int64_t size;
    int64_t validTime;
    const char* retries;
};


DownloadableItem* DownloadableItem_new(const char* id);

void DownloadableItem_init(DownloadableItem* this, const char* id);

DownloadableItem* DownloadableItem_new1(HashMap* hashMap);
void DownloadableItem_init1(DownloadableItem* this, HashMap* hashMap);
BasicArrayList* DownloadableItem_toVector(DownloadableItem* this);
HashMap* DownloadableItem_toHashMap(DownloadableItem* this);
const char* DownloadableItem_getId(DownloadableItem* this);
const char* DownloadableItem_getSystem(DownloadableItem* this);
const char* DownloadableItem_getPlatform(DownloadableItem* this);
const char* DownloadableItem_getSpecialName(DownloadableItem* this);
const char* DownloadableItem_getVersion(DownloadableItem* this);
const char* DownloadableItem_getChanges(DownloadableItem* this);
const char* DownloadableItem_getLicenseFile(DownloadableItem* this);
const char* DownloadableItem_getFile(DownloadableItem* this);
int64_t DownloadableItem_getSize(DownloadableItem* this);
int64_t DownloadableItem_getValidTime(DownloadableItem* this);
const char* DownloadableItem_getRetries(DownloadableItem* this);

static void DownloadableItem_initFields(DownloadableItem* this) {
    
    
    
    
    
    
    
    
    
    
    
    
    
}


void DownloadableItem_init(DownloadableItem* this, const char* id) {
    DownloadableItem_initFields(this);
        const char* EMPTY_STRING = StringUtil_getInstance()->EMPTY_STRING;
        this->id = ProductIdGenerator_getNext(ProductIdGenerator_new());
        this->basicItemId = id;
        this->enabled = EntryData_getInstance()->YES;
        this->system = "Java";
        this->platform = "Android";
        this->specialName = EMPTY_STRING;
        this->version = EMPTY_STRING;
        this->changes = EMPTY_STRING;
        this->licenseFile = EMPTY_STRING;
        this->file = EMPTY_STRING;
        this->size = java_string_of(0);
        this->validTime = java_string_of(0);
        this->retries = EMPTY_STRING;
}

DownloadableItem* DownloadableItem_new(const char* id) {
    DownloadableItem* this = calloc(1, sizeof(DownloadableItem));
    DownloadableItem_init(this, id);
    return this;
}


void DownloadableItem_init1(DownloadableItem* this, HashMap* hashMap) {
    DownloadableItem_initFields(this);
        this->id = ((const char*) HashMap_get(hashMap, DownloadItemData_ID));
        this->basicItemId = ((const char*) HashMap_get(hashMap, BasicItemData_getInstance()->ID));
        this->enabled = ((const char*) HashMap_get(hashMap, EntryData_getInstance()->ENABLE));
        this->system = ((const char*) HashMap_get(hashMap, DownloadItemData_SYSTEM));
        this->platform = ((const char*) HashMap_get(hashMap, DownloadItemData_PLATFORM));
        this->specialName = ((const char*) HashMap_get(hashMap, DownloadItemData_SPECIAL_NAME));
        this->version = ((const char*) HashMap_get(hashMap, DownloadItemData_VERSION));
        this->changes = ((const char*) HashMap_get(hashMap, DownloadItemData_CHANGES));
        this->licenseFile = ((const char*) HashMap_get(hashMap, DownloadItemData_LICENSE_FILE));
        this->file = ((const char*) HashMap_get(hashMap, DownloadItemData_FILE));
        const char* value = ((const char*) HashMap_get(hashMap, DownloadItemData_SIZE));
        if (!StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), value)) {
            this->size = java_string_of(value);
        } else {
            this->size = 0;
        }
        const char* validTime = ((const char*) HashMap_get(hashMap, DownloadItemData_VALID_TIME));
        if (!StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), validTime)) {
            this->validTime = java_string_of(validTime);
        } else {
            const char* totalYears = ((const char*) HashMap_get(hashMap, DownloadItemData_VALID_TIME_YEARS));
            const char* totalMonths = ((const char*) HashMap_get(hashMap, DownloadItemData_VALID_TIME_MONTHS));
            const char* totalDays = ((const char*) HashMap_get(hashMap, DownloadItemData_VALID_TIME_DAYS));
            const char* totalHours = ((const char*) HashMap_get(hashMap, DownloadItemData_VALID_TIME_HOURS));
            const char* totalMinutes = ((const char*) HashMap_get(hashMap, DownloadItemData_VALID_TIME_MINUTES));
            const char* totalSeconds = ((const char*) HashMap_get(hashMap, DownloadItemData_VALID_TIME_SECONDS));
            int64_t totalTime = TimeUtil_getTotalTime(TimeUtil_getInstance(), totalYears, totalMonths, totalDays, totalHours, totalMinutes, totalSeconds);
            this->validTime = totalTime;
        }
        this->retries = ((const char*) HashMap_get(hashMap, DownloadItemData_RETRIES));
}

DownloadableItem* DownloadableItem_new1(HashMap* hashMap) {
    DownloadableItem* this = calloc(1, sizeof(DownloadableItem));
    DownloadableItem_init1(this, hashMap);
    return this;
}


BasicArrayList* DownloadableItem_toVector(DownloadableItem* this) {
        Calendar* calendar = Calendar_getInstance();
        const char* time = Long_toString(Calendar_getTimeInMillis(calendar));
        BasicArrayList* values = BasicArrayListD_new();
        BasicArrayList_add(values, DownloadableItem_getId(this));
        BasicArrayList_add(values, this->basicItemId);
        BasicArrayList_add(values, this->enabled);
        BasicArrayList_add(values, DownloadableItem_getSpecialName(this));
        BasicArrayList_add(values, DownloadableItem_getVersion(this));
        BasicArrayList_add(values, DownloadableItem_getChanges(this));
        BasicArrayList_add(values, DownloadableItem_getSystem(this));
        BasicArrayList_add(values, DownloadableItem_getPlatform(this));
        BasicArrayList_add(values, DownloadableItem_getLicenseFile(this));
        BasicArrayList_add(values, DownloadableItem_getFile(this));
        BasicArrayList_add(values, JAVA_CALL(DownloadableItem_getSize(this), toString));
        BasicArrayList_add(values, JAVA_CALL(DownloadableItem_getValidTime(this), toString));
        BasicArrayList_add(values, DownloadableItem_getRetries(this));
        BasicArrayList_add(values, time);
        BasicArrayList_add(values, time);
        return values;
}


HashMap* DownloadableItem_toHashMap(DownloadableItem* this) {
        HashMap* values = StdUtil_createHashMap(StdUtil_getInstance());
        BasicArrayList_put(values, DownloadItemData_ID, DownloadableItem_getId(this));
        BasicArrayList_put(values, BasicItemData_getInstance()->ID, this->basicItemId);
        BasicArrayList_put(values, EntryData_getInstance()->ENABLE, this->enabled);
        BasicArrayList_put(values, DownloadItemData_SYSTEM, DownloadableItem_getSystem(this));
        BasicArrayList_put(values, DownloadItemData_PLATFORM, DownloadableItem_getPlatform(this));
        BasicArrayList_put(values, DownloadItemData_SPECIAL_NAME, DownloadableItem_getSpecialName(this));
        BasicArrayList_put(values, DownloadItemData_VERSION, DownloadableItem_getVersion(this));
        BasicArrayList_put(values, DownloadItemData_CHANGES, DownloadableItem_getChanges(this));
        BasicArrayList_put(values, DownloadItemData_LICENSE_FILE, DownloadableItem_getLicenseFile(this));
        BasicArrayList_put(values, DownloadItemData_FILE, DownloadableItem_getFile(this));
        BasicArrayList_put(values, DownloadItemData_SIZE, JAVA_CALL(DownloadableItem_getSize(this), toString));
        BasicArrayList_put(values, DownloadItemData_VALID_TIME, JAVA_CALL(DownloadableItem_getValidTime(this), toString));
        BasicArrayList_put(values, DownloadItemData_RETRIES, DownloadableItem_getRetries(this));
        Calendar* calendar = Calendar_getInstance();
        const char* time = java_string_new(Long_toString(Calendar_getTimeInMillis(calendar)));
        BasicArrayList_put(values, EntryData_getInstance()->LASTMODIFIED, time);
        return values;
}


const char* DownloadableItem_getId(DownloadableItem* this) {
        return this->id;
}


const char* DownloadableItem_getSystem(DownloadableItem* this) {
        return this->system;
}


const char* DownloadableItem_getPlatform(DownloadableItem* this) {
        return this->platform;
}


const char* DownloadableItem_getSpecialName(DownloadableItem* this) {
        return this->specialName;
}


const char* DownloadableItem_getVersion(DownloadableItem* this) {
        return this->version;
}


const char* DownloadableItem_getChanges(DownloadableItem* this) {
        return this->changes;
}


const char* DownloadableItem_getLicenseFile(DownloadableItem* this) {
        return this->licenseFile;
}


const char* DownloadableItem_getFile(DownloadableItem* this) {
        return this->file;
}


int64_t DownloadableItem_getSize(DownloadableItem* this) {
        return this->size;
}


int64_t DownloadableItem_getValidTime(DownloadableItem* this) {
        return this->validTime;
}


const char* DownloadableItem_getRetries(DownloadableItem* this) {
        return this->retries;
}

