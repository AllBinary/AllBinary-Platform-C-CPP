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
// package org.allbinary.business.context.modules.storefront.statistics.advertisements

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
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/business/context/modules/storefront/statistics/advertisements/StoreFrontAdvertisementsStatisticsInterface.h"

typedef struct StoreFrontAdvertisementsStatistics StoreFrontAdvertisementsStatistics;
struct StoreFrontAdvertisementsStatistics {
    StoreFrontAdvertisementsStatisticsInterface StoreFrontAdvertisementsStatisticsInterface_interface;
};


StoreFrontAdvertisementsStatistics* StoreFrontAdvertisementsStatistics_new(StoreFrontInterface* storeFrontInterface);

void StoreFrontAdvertisementsStatistics_init(StoreFrontAdvertisementsStatistics* this, StoreFrontInterface* storeFrontInterface);
HashMap* StoreFrontAdvertisementsStatistics_toHashMap(StoreFrontAdvertisementsStatistics* this);
BasicArrayList* StoreFrontAdvertisementsStatistics_toVector(StoreFrontAdvertisementsStatistics* this);
Any* StoreFrontAdvertisementsStatistics_getKey(StoreFrontAdvertisementsStatistics* this);


void StoreFrontAdvertisementsStatistics_init(StoreFrontAdvertisementsStatistics* this, StoreFrontInterface* storeFrontInterface) {
}

StoreFrontAdvertisementsStatistics* StoreFrontAdvertisementsStatistics_new(StoreFrontInterface* storeFrontInterface) {
    StoreFrontAdvertisementsStatistics* this = calloc(1, sizeof(StoreFrontAdvertisementsStatistics));
    StoreFrontAdvertisementsStatistics_init(this, storeFrontInterface);
    return this;
}


HashMap* StoreFrontAdvertisementsStatistics_toHashMap(StoreFrontAdvertisementsStatistics* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        return hashMap;
}


BasicArrayList* StoreFrontAdvertisementsStatistics_toVector(StoreFrontAdvertisementsStatistics* this) {
        return nullptr;
}


Any* StoreFrontAdvertisementsStatistics_getKey(StoreFrontAdvertisementsStatistics* this) {
        return nullptr;
}

