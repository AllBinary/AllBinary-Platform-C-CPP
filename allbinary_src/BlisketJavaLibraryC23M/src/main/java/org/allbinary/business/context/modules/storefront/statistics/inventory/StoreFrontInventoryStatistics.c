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
// package org.allbinary.business.context.modules.storefront.statistics.inventory

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
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/user/commerce/inventory/item/ItemInterface.h"
#include "org/allbinary/business/user/commerce/money/Money.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityFactory.h"
#include "org/allbinary/data/tables/user/commerce/inventory/item/InventoryEntityInterface.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/business/context/modules/storefront/statistics/inventory/StoreFrontInventoryStatisticsInterface.h"

typedef struct StoreFrontInventoryStatistics StoreFrontInventoryStatistics;
struct StoreFrontInventoryStatistics {
    StoreFrontInventoryStatisticsInterface StoreFrontInventoryStatisticsInterface_interface;
    int64_t totalNumberOfItems;
    Money* totalInventorySaleValueMoney;
};


StoreFrontInventoryStatistics* StoreFrontInventoryStatistics_new(StoreFrontInterface* storeFrontInterface);

void StoreFrontInventoryStatistics_init(StoreFrontInventoryStatistics* this, StoreFrontInterface* storeFrontInterface);
int64_t StoreFrontInventoryStatistics_getNumber(StoreFrontInventoryStatistics* this);
Money* StoreFrontInventoryStatistics_getTotal(StoreFrontInventoryStatistics* this);
HashMap* StoreFrontInventoryStatistics_toHashMap(StoreFrontInventoryStatistics* this);
BasicArrayList* StoreFrontInventoryStatistics_toVector(StoreFrontInventoryStatistics* this);
Any* StoreFrontInventoryStatistics_getKey(StoreFrontInventoryStatistics* this);

static void StoreFrontInventoryStatistics_initFields(StoreFrontInventoryStatistics* this) {
    this->totalNumberOfItems = 0;
    
}


void StoreFrontInventoryStatistics_init(StoreFrontInventoryStatistics* this, StoreFrontInterface* storeFrontInterface) {
    StoreFrontInventoryStatistics_initFields(this);
        this->totalInventorySaleValueMoney = Money_new();
        InventoryEntityInterface* inventoryEntityInterface = InventoryEntityFactory_getInventoryEntityInstance(InventoryEntityFactory_getInstance());
        BasicArrayList* itemVector = InventoryEntityInterface_getItems(inventoryEntityInterface, storeFrontInterface);
        int32_t size = BasicArrayList_size(itemVector);
        for (int32_t index = 0; index < size; index++) {
            ItemInterface* itemInterface = ((ItemInterface*) BasicArrayList_get(itemVector, index));
            int32_t numberInStock = JAVA_CALL(java_string_of(ItemInterface_getNumber(itemInterface)), intValue);
            this->totalNumberOfItems = this->totalNumberOfItems + ((int64_t) numberInStock);
            Money* itemPriceMoney = ItemInterface_getPrice(itemInterface);
            Money_multiply(itemPriceMoney, numberInStock);
            Money_add(this->totalInventorySaleValueMoney, Money_toString(itemPriceMoney));
        }
}

StoreFrontInventoryStatistics* StoreFrontInventoryStatistics_new(StoreFrontInterface* storeFrontInterface) {
    StoreFrontInventoryStatistics* this = calloc(1, sizeof(StoreFrontInventoryStatistics));
    StoreFrontInventoryStatistics_init(this, storeFrontInterface);
    return this;
}


int64_t StoreFrontInventoryStatistics_getNumber(StoreFrontInventoryStatistics* this) {
        return this->totalNumberOfItems;
}


Money* StoreFrontInventoryStatistics_getTotal(StoreFrontInventoryStatistics* this) {
        return this->totalInventorySaleValueMoney;
}


HashMap* StoreFrontInventoryStatistics_toHashMap(StoreFrontInventoryStatistics* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, StoreFrontInventoryStatisticsData_getInstance()->NUMBEROFITEMS, JAVA_CALL(StoreFrontInventoryStatistics_getNumber(this), toString));
        HashMap_put(hashMap, StoreFrontInventoryStatisticsData_getInstance()->TOTALVALUE, JAVA_CALL(StoreFrontInventoryStatistics_getTotal(this), toString));
        return hashMap;
}


BasicArrayList* StoreFrontInventoryStatistics_toVector(StoreFrontInventoryStatistics* this) {
        return nullptr;
}


Any* StoreFrontInventoryStatistics_getKey(StoreFrontInventoryStatistics* this) {
        return nullptr;
}

