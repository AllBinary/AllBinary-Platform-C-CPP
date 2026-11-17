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
// package org.allbinary.logic.communication.java.vm.stats

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
#include "org/allbinary/data/tables/TableMappingInterface.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/java/vm/stats/JvmStatistics.h"

typedef struct JvmStatisticsMapping JvmStatisticsMapping;
struct JvmStatisticsMapping {
    JvmStatistics base;
    TableMappingInterface TableMappingInterface_interface;
};


JvmStatisticsMapping* JvmStatisticsMapping_new(void);

void JvmStatisticsMapping_init(JvmStatisticsMapping* this);
HashMap* JvmStatisticsMapping_toHashMap(JvmStatisticsMapping* this);
Any* JvmStatisticsMapping_getKey(JvmStatisticsMapping* this);
BasicArrayList* JvmStatisticsMapping_toVector(JvmStatisticsMapping* this);


void JvmStatisticsMapping_init(JvmStatisticsMapping* this) {
        JvmStatistics_init(&this->base);
}

JvmStatisticsMapping* JvmStatisticsMapping_new(void) {
    JvmStatisticsMapping* this = calloc(1, sizeof(JvmStatisticsMapping));
    JvmStatisticsMapping_init(this);
    return this;
}


HashMap* JvmStatisticsMapping_toHashMap(JvmStatisticsMapping* this) {
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(hashMap, JvmStatisticsData_FREE_MEMORY_BYTES, JvmStatisticsMapping_getFreeMemoryBytesString(this));
        HashMap_put(hashMap, JvmStatisticsData_FREE_MEMORY_KILOBYTES, JvmStatisticsMapping_getFreeMemoryKilobytesString(this));
        HashMap_put(hashMap, JvmStatisticsData_FREE_MEMORY_MEGABYTES, JvmStatisticsMapping_getFreeMemoryMegabytesString(this));
        HashMap_put(hashMap, JvmStatisticsData_MAX_MEMORY_BYTES, JvmStatisticsMapping_getMaxMemoryBytesString(this));
        HashMap_put(hashMap, JvmStatisticsData_MAX_MEMORY_KILOBYTES, JvmStatisticsMapping_getMaxMemoryKilobytesString(this));
        HashMap_put(hashMap, JvmStatisticsData_MAX_MEMORY_MEGABYTES, JvmStatisticsMapping_getMaxMemoryMegabytesString(this));
        HashMap_put(hashMap, JvmStatisticsData_NUMBER_OF_THREADS, JvmStatisticsMapping_getNumberOfThreadsString(this));
        HashMap_put(hashMap, JvmStatisticsData_TOTAL_MEMORY_BYTES, JvmStatisticsMapping_getTotalMemoryBytesString(this));
        HashMap_put(hashMap, JvmStatisticsData_TOTAL_MEMORY_KILOBYTES, JvmStatisticsMapping_getTotalMemoryKilobytesString(this));
        HashMap_put(hashMap, JvmStatisticsData_TOTAL_MEMORY_MEGABYTES, JvmStatisticsMapping_getTotalMemoryMegabytesString(this));
        return hashMap;
}


// throws Exception
Any* JvmStatisticsMapping_getKey(JvmStatisticsMapping* this) {
        return JvmStatisticsData_NAME;
}


// throws Exception
BasicArrayList* JvmStatisticsMapping_toVector(JvmStatisticsMapping* this) {
        BasicArrayList* vector = BasicArrayListD_new();
        BasicArrayList_add(vector, JvmStatisticsMapping_getFreeMemoryBytesString(this));
        BasicArrayList_add(vector, JvmStatisticsMapping_getFreeMemoryKilobytesString(this));
        BasicArrayList_add(vector, JvmStatisticsMapping_getFreeMemoryMegabytesString(this));
        BasicArrayList_add(vector, JvmStatisticsMapping_getMaxMemoryBytesString(this));
        BasicArrayList_add(vector, JvmStatisticsMapping_getMaxMemoryKilobytesString(this));
        BasicArrayList_add(vector, JvmStatisticsMapping_getMaxMemoryMegabytesString(this));
        BasicArrayList_add(vector, JvmStatisticsMapping_getNumberOfThreadsString(this));
        BasicArrayList_add(vector, JvmStatisticsMapping_getTotalMemoryBytesString(this));
        BasicArrayList_add(vector, JvmStatisticsMapping_getTotalMemoryKilobytesString(this));
        BasicArrayList_add(vector, JvmStatisticsMapping_getTotalMemoryMegabytesString(this));
        return vector;
}

