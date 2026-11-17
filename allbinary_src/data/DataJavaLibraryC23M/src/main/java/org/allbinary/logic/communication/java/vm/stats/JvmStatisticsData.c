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

typedef struct JvmStatisticsData JvmStatisticsData;
struct JvmStatisticsData {
    char unused;
};

const char* JvmStatisticsData_JVM_STATISTICS = "JVM_STATISTICS_";
const char* JvmStatisticsData_NAME;
const char* JvmStatisticsData_TOTAL_MEMORY_BYTES;
const char* JvmStatisticsData_TOTAL_MEMORY_KILOBYTES;
const char* JvmStatisticsData_TOTAL_MEMORY_MEGABYTES;
const char* JvmStatisticsData_FREE_MEMORY_BYTES;
const char* JvmStatisticsData_FREE_MEMORY_KILOBYTES;
const char* JvmStatisticsData_FREE_MEMORY_MEGABYTES;
const char* JvmStatisticsData_MAX_MEMORY_BYTES;
const char* JvmStatisticsData_MAX_MEMORY_KILOBYTES;
const char* JvmStatisticsData_MAX_MEMORY_MEGABYTES;
const char* JvmStatisticsData_NUMBER_OF_THREADS;

JvmStatisticsData* JvmStatisticsData_new(void);

void JvmStatisticsData_init(JvmStatisticsData* this);

// Static fields with runtime initializers: call this once at startup
void JvmStatisticsData_staticInit(void) {
    JvmStatisticsData_NAME = java_concat(java_string_of(JvmStatisticsData_JVM_STATISTICS), "NAME");
    JvmStatisticsData_TOTAL_MEMORY_BYTES = java_concat(java_string_of(JvmStatisticsData_JVM_STATISTICS), "TOTAL_MEMORY_BYTES");
    JvmStatisticsData_TOTAL_MEMORY_KILOBYTES = java_concat(java_string_of(JvmStatisticsData_JVM_STATISTICS), "TOTAL_MEMORY_KILOBYTES");
    JvmStatisticsData_TOTAL_MEMORY_MEGABYTES = java_concat(java_string_of(JvmStatisticsData_JVM_STATISTICS), "TOTAL_MEMORY_MEGABYTES");
    JvmStatisticsData_FREE_MEMORY_BYTES = java_concat(java_string_of(JvmStatisticsData_JVM_STATISTICS), "FREE_MEMORY_BYTES");
    JvmStatisticsData_FREE_MEMORY_KILOBYTES = java_concat(java_string_of(JvmStatisticsData_JVM_STATISTICS), "FREE_MEMORY_KILOBYTES");
    JvmStatisticsData_FREE_MEMORY_MEGABYTES = java_concat(java_string_of(JvmStatisticsData_JVM_STATISTICS), "FREE_MEMORY_MEGABYTES");
    JvmStatisticsData_MAX_MEMORY_BYTES = java_concat(java_string_of(JvmStatisticsData_JVM_STATISTICS), "MAX_MEMORY_BYTES");
    JvmStatisticsData_MAX_MEMORY_KILOBYTES = java_concat(java_string_of(JvmStatisticsData_JVM_STATISTICS), "MAX_MEMORY_KILOBYTES");
    JvmStatisticsData_MAX_MEMORY_MEGABYTES = java_concat(java_string_of(JvmStatisticsData_JVM_STATISTICS), "MAX_MEMORY_MEGABYTES");
    JvmStatisticsData_NUMBER_OF_THREADS = java_concat(java_string_of(JvmStatisticsData_JVM_STATISTICS), "NUMBER_OF_THREADS");
}


void JvmStatisticsData_init(JvmStatisticsData* this) {
        
}

JvmStatisticsData* JvmStatisticsData_new(void) {
    JvmStatisticsData* this = calloc(1, sizeof(JvmStatisticsData));
    JvmStatisticsData_init(this);
    return this;
}

