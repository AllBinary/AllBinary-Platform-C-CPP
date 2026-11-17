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
// package org.allbinary.business.context.modules.storefront.statistics.orders.history

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
#include "org/allbinary/business/user/commerce/inventory/order/OrderHistoryInterface.h"
#include "org/allbinary/business/user/commerce/money/Money.h"
#include "org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityFactory.h"
#include "org/allbinary/data/tables/user/commerce/inventory/order/OrderHistoryEntityInterface.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/business/context/modules/storefront/statistics/orders/history/StoreFrontOrdersHistoryStatisticsInterface.h"

typedef struct StoreFrontOrdersHistoryStatistics StoreFrontOrdersHistoryStatistics;
struct StoreFrontOrdersHistoryStatistics {
    StoreFrontOrdersHistoryStatisticsInterface StoreFrontOrdersHistoryStatisticsInterface_interface;
    int64_t numberOfOrdersLong;
    Money* subTotalMoney;
    Money* shippingCostMoney;
    Money* taxesMoney;
    Money* totalMoney;
};


StoreFrontOrdersHistoryStatistics* StoreFrontOrdersHistoryStatistics_new(StoreFrontInterface* storeFrontInterface);

void StoreFrontOrdersHistoryStatistics_init(StoreFrontOrdersHistoryStatistics* this, StoreFrontInterface* storeFrontInterface);
int64_t StoreFrontOrdersHistoryStatistics_getNumberOfOrders(StoreFrontOrdersHistoryStatistics* this);
Money* StoreFrontOrdersHistoryStatistics_getSubTotal(StoreFrontOrdersHistoryStatistics* this);
Money* StoreFrontOrdersHistoryStatistics_getShippingCost(StoreFrontOrdersHistoryStatistics* this);
Money* StoreFrontOrdersHistoryStatistics_getTaxes(StoreFrontOrdersHistoryStatistics* this);
Money* StoreFrontOrdersHistoryStatistics_getTotal(StoreFrontOrdersHistoryStatistics* this);
HashMap* StoreFrontOrdersHistoryStatistics_toHashMap(StoreFrontOrdersHistoryStatistics* this);
BasicArrayList* StoreFrontOrdersHistoryStatistics_toVector(StoreFrontOrdersHistoryStatistics* this);
Any* StoreFrontOrdersHistoryStatistics_getKey(StoreFrontOrdersHistoryStatistics* this);

static void StoreFrontOrdersHistoryStatistics_initFields(StoreFrontOrdersHistoryStatistics* this) {
    
    
    
    
    
}


void StoreFrontOrdersHistoryStatistics_init(StoreFrontOrdersHistoryStatistics* this, StoreFrontInterface* storeFrontInterface) {
    StoreFrontOrdersHistoryStatistics_initFields(this);
        this->subTotalMoney = Money_new();
        this->shippingCostMoney = Money_new();
        this->taxesMoney = Money_new();
        this->totalMoney = Money_new();
        OrderHistoryEntityInterface* orderHistoryEntityInterface = OrderHistoryEntityFactory_getInstance();
        BasicArrayList* orderHistoryInterfaceVector = OrderHistoryEntityInterface_getStoreOrders(orderHistoryEntityInterface, storeFrontInterface);
        int64_t numberOfOrders = 0LL;
        OrderHistoryInterface* orderHistoryInterface = nullptr;
        int32_t size = BasicArrayList_size(orderHistoryInterfaceVector);
        for (int32_t index = 0; index < size; index++) {
            orderHistoryInterface = ((OrderHistoryInterface*) BasicArrayList_get(orderHistoryInterfaceVector, index));
            numberOfOrders = numberOfOrders + 1LL;
            Money_add(this->subTotalMoney, OrderHistoryInterface_getSubTotal(orderHistoryInterface));
            Money_add(this->shippingCostMoney, OrderHistoryInterface_getShippingCost(orderHistoryInterface));
            Money_add(this->taxesMoney, OrderHistoryInterface_getTaxes(orderHistoryInterface));
            Money_add(this->totalMoney, OrderHistoryInterface_getTotal(orderHistoryInterface));
        }
        this->numberOfOrdersLong = numberOfOrders;
}

StoreFrontOrdersHistoryStatistics* StoreFrontOrdersHistoryStatistics_new(StoreFrontInterface* storeFrontInterface) {
    StoreFrontOrdersHistoryStatistics* this = calloc(1, sizeof(StoreFrontOrdersHistoryStatistics));
    StoreFrontOrdersHistoryStatistics_init(this, storeFrontInterface);
    return this;
}


int64_t StoreFrontOrdersHistoryStatistics_getNumberOfOrders(StoreFrontOrdersHistoryStatistics* this) {
        return this->numberOfOrdersLong;
}


Money* StoreFrontOrdersHistoryStatistics_getSubTotal(StoreFrontOrdersHistoryStatistics* this) {
        return this->subTotalMoney;
}


Money* StoreFrontOrdersHistoryStatistics_getShippingCost(StoreFrontOrdersHistoryStatistics* this) {
        return this->shippingCostMoney;
}


Money* StoreFrontOrdersHistoryStatistics_getTaxes(StoreFrontOrdersHistoryStatistics* this) {
        return this->taxesMoney;
}


Money* StoreFrontOrdersHistoryStatistics_getTotal(StoreFrontOrdersHistoryStatistics* this) {
        return this->totalMoney;
}


HashMap* StoreFrontOrdersHistoryStatistics_toHashMap(StoreFrontOrdersHistoryStatistics* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        StoreFrontOrdersHistoryStatisticsData* storeFrontOrdersHistoryStatisticsData = StoreFrontOrdersHistoryStatisticsData_getInstance();
        HashMap_put(hashMap, storeFrontOrdersHistoryStatisticsData->NUMBEROFORDERS, JAVA_CALL(StoreFrontOrdersHistoryStatistics_getNumberOfOrders(this), toString));
        HashMap_put(hashMap, storeFrontOrdersHistoryStatisticsData->SUBTOTAL, JAVA_CALL(StoreFrontOrdersHistoryStatistics_getSubTotal(this), toString));
        HashMap_put(hashMap, storeFrontOrdersHistoryStatisticsData->SHIPPINGCOST, JAVA_CALL(StoreFrontOrdersHistoryStatistics_getShippingCost(this), toString));
        HashMap_put(hashMap, storeFrontOrdersHistoryStatisticsData->TAXES, JAVA_CALL(StoreFrontOrdersHistoryStatistics_getTaxes(this), toString));
        HashMap_put(hashMap, storeFrontOrdersHistoryStatisticsData->TOTAL, JAVA_CALL(StoreFrontOrdersHistoryStatistics_getTotal(this), toString));
        return hashMap;
}


BasicArrayList* StoreFrontOrdersHistoryStatistics_toVector(StoreFrontOrdersHistoryStatistics* this) {
        return nullptr;
}


Any* StoreFrontOrdersHistoryStatistics_getKey(StoreFrontOrdersHistoryStatistics* this) {
        return nullptr;
}

