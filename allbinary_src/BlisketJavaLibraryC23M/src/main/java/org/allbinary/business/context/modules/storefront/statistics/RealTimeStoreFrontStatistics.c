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
// package org.allbinary.business.context.modules.storefront.statistics

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontInterface.h"
#include "org/allbinary/business/context/modules/storefront/statistics/advertisements/StoreFrontAdvertisementsStatistics.h"
#include "org/allbinary/business/context/modules/storefront/statistics/advertisements/StoreFrontAdvertisementsStatisticsInterface.h"
#include "org/allbinary/business/context/modules/storefront/statistics/inventory/StoreFrontInventoryStatistics.h"
#include "org/allbinary/business/context/modules/storefront/statistics/inventory/StoreFrontInventoryStatisticsInterface.h"
#include "org/allbinary/business/context/modules/storefront/statistics/orders/history/StoreFrontOrdersHistoryStatistics.h"
#include "org/allbinary/business/context/modules/storefront/statistics/orders/history/StoreFrontOrdersHistoryStatisticsInterface.h"
#include "org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatistics.h"
#include "org/allbinary/business/context/modules/storefront/statistics/users/StoreFrontUsersStatisticsInterface.h"
#include "org/allbinary/business/context/modules/storefront/statistics/StoreFrontStatisticsInterface.h"

typedef struct RealTimeStoreFrontStatistics RealTimeStoreFrontStatistics;
struct RealTimeStoreFrontStatistics {
    StoreFrontStatisticsInterface StoreFrontStatisticsInterface_interface;
    StoreFrontAdvertisementsStatisticsInterface* storeFrontAdvertisementsStatisticsInterface;
    StoreFrontUsersStatisticsInterface* storeFrontUsersStatisticsInterface;
    StoreFrontInventoryStatisticsInterface* storeFrontInventoryStatisticsInterface;
    StoreFrontOrdersHistoryStatisticsInterface* storeFrontOrderHistoryStatisticsInterface;
};


RealTimeStoreFrontStatistics* RealTimeStoreFrontStatistics_new(StoreFrontInterface* storeFrontInterface);

void RealTimeStoreFrontStatistics_init(RealTimeStoreFrontStatistics* this, StoreFrontInterface* storeFrontInterface);
StoreFrontAdvertisementsStatisticsInterface* RealTimeStoreFrontStatistics_getAdvertisements(RealTimeStoreFrontStatistics* this);
StoreFrontUsersStatisticsInterface* RealTimeStoreFrontStatistics_getUsers(RealTimeStoreFrontStatistics* this);
StoreFrontInventoryStatisticsInterface* RealTimeStoreFrontStatistics_getInventory(RealTimeStoreFrontStatistics* this);
StoreFrontOrdersHistoryStatisticsInterface* RealTimeStoreFrontStatistics_getOrders(RealTimeStoreFrontStatistics* this);

static void RealTimeStoreFrontStatistics_initFields(RealTimeStoreFrontStatistics* this) {
    
    
    
    
}


void RealTimeStoreFrontStatistics_init(RealTimeStoreFrontStatistics* this, StoreFrontInterface* storeFrontInterface) {
    RealTimeStoreFrontStatistics_initFields(this);
        this->storeFrontAdvertisementsStatisticsInterface = ((StoreFrontAdvertisementsStatisticsInterface*) StoreFrontAdvertisementsStatistics_new(storeFrontInterface));
        this->storeFrontUsersStatisticsInterface = ((StoreFrontUsersStatisticsInterface*) StoreFrontUsersStatistics_new(storeFrontInterface));
        this->storeFrontInventoryStatisticsInterface = ((StoreFrontInventoryStatisticsInterface*) StoreFrontInventoryStatistics_new(storeFrontInterface));
        this->storeFrontOrderHistoryStatisticsInterface = ((StoreFrontOrdersHistoryStatisticsInterface*) StoreFrontOrdersHistoryStatistics_new(storeFrontInterface));
}

RealTimeStoreFrontStatistics* RealTimeStoreFrontStatistics_new(StoreFrontInterface* storeFrontInterface) {
    RealTimeStoreFrontStatistics* this = calloc(1, sizeof(RealTimeStoreFrontStatistics));
    RealTimeStoreFrontStatistics_init(this, storeFrontInterface);
    return this;
}


StoreFrontAdvertisementsStatisticsInterface* RealTimeStoreFrontStatistics_getAdvertisements(RealTimeStoreFrontStatistics* this) {
        return this->storeFrontAdvertisementsStatisticsInterface;
}


StoreFrontUsersStatisticsInterface* RealTimeStoreFrontStatistics_getUsers(RealTimeStoreFrontStatistics* this) {
        return this->storeFrontUsersStatisticsInterface;
}


StoreFrontInventoryStatisticsInterface* RealTimeStoreFrontStatistics_getInventory(RealTimeStoreFrontStatistics* this) {
        return this->storeFrontInventoryStatisticsInterface;
}


StoreFrontOrdersHistoryStatisticsInterface* RealTimeStoreFrontStatistics_getOrders(RealTimeStoreFrontStatistics* this) {
        return this->storeFrontOrderHistoryStatisticsInterface;
}

