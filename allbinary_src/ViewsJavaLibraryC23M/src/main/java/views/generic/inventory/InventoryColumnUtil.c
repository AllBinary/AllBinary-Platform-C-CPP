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
// package views.generic.inventory

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/user/commerce/inventory/item/BasicItemData.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntity.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"

typedef struct InventoryColumnUtil InventoryColumnUtil;
struct InventoryColumnUtil {
    LogUtil* logUtil;
    BasicItemData* basicItemData;
};

static InventoryColumnUtil* InventoryColumnUtil_instance;

InventoryColumnUtil* InventoryColumnUtil_new(void);
InventoryColumnUtil* InventoryColumnUtil_getInstance(void);
BasicArrayList* InventoryColumnUtil_getColumnWhereLike(InventoryColumnUtil* this, InventoryEntity* inventoryEntity, const char* category, const char* column);

// Static fields with runtime initializers: call this once at startup
void InventoryColumnUtil_staticInit(void) {
    InventoryColumnUtil_instance = InventoryColumnUtil_new();
}

static void InventoryColumnUtil_initFields(InventoryColumnUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->basicItemData = BasicItemData_getInstance();
}

void InventoryColumnUtil_init(InventoryColumnUtil* this) {
    InventoryColumnUtil_initFields(this);
}

InventoryColumnUtil* InventoryColumnUtil_new(void) {
    InventoryColumnUtil* this = calloc(1, sizeof(InventoryColumnUtil));
    InventoryColumnUtil_init(this);
    return this;
}


InventoryColumnUtil* InventoryColumnUtil_getInstance(void) {
        return InventoryColumnUtil_instance;
}


BasicArrayList* InventoryColumnUtil_getColumnWhereLike(InventoryColumnUtil* this, InventoryEntity* inventoryEntity, const char* category, const char* column) {
        LogUtil_putF(this->logUtil, java_concat("Start Category: ", category), this, "getKeywords");
        BasicArrayList* keywords = BasicArrayListD_new();
        BasicArrayList* vectorOfHashMaps = InventoryEntity_getAllRows(inventoryEntity);
        int32_t size = BasicArrayList_size(vectorOfHashMaps);
        for (int32_t index = 0; index < size; index++) {
            HashMap* hashMap = ((HashMap*) BasicArrayList_get(vectorOfHashMaps, index));
            const char* categoryName = ((const char*) HashMap_get(hashMap, this->basicItemData->CATEGORY));
            if (!StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), categoryName) && (strncmp(categoryName, category, strlen(category)) == 0)) {
                BasicArrayList_add(keywords, HashMap_get(hashMap, column));
            }
        }
        return keywords;
}

