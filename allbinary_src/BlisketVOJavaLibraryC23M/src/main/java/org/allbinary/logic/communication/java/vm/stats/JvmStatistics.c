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

typedef struct JvmStatistics JvmStatistics;
struct JvmStatistics {
    Runtime* runtime;
};


JvmStatistics* JvmStatistics_new(void);

void JvmStatistics_init(JvmStatistics* this);
int64_t JvmStatistics_getFreeMemoryBytes(JvmStatistics* this);
int64_t JvmStatistics_getFreeMemoryKilobytes(JvmStatistics* this);
int64_t JvmStatistics_getFreeMemoryMegabytes(JvmStatistics* this);
int64_t JvmStatistics_getMaxMemoryBytes(JvmStatistics* this);
int64_t JvmStatistics_getMaxMemoryKilobytes(JvmStatistics* this);
int64_t JvmStatistics_getMaxMemoryMegabytes(JvmStatistics* this);
int64_t JvmStatistics_getTotalMemoryBytes(JvmStatistics* this);
int64_t JvmStatistics_getTotalMemoryKilobytes(JvmStatistics* this);
int64_t JvmStatistics_getTotalMemoryMegabytes(JvmStatistics* this);
int64_t JvmStatistics_getFreeMemoryBytesLong(JvmStatistics* this);
int64_t JvmStatistics_getFreeMemoryKilobytesLong(JvmStatistics* this);
int64_t JvmStatistics_getFreeMemoryMegabytesLong(JvmStatistics* this);
int64_t JvmStatistics_getMaxMemoryBytesLong(JvmStatistics* this);
int64_t JvmStatistics_getMaxMemoryKilobytesLong(JvmStatistics* this);
int64_t JvmStatistics_getMaxMemoryMegabytesLong(JvmStatistics* this);
int64_t JvmStatistics_getTotalMemoryBytesLong(JvmStatistics* this);
int64_t JvmStatistics_getTotalMemoryKilobytesLong(JvmStatistics* this);
int64_t JvmStatistics_getTotalMemoryMegabytesLong(JvmStatistics* this);
const char* JvmStatistics_getFreeMemoryBytesString(JvmStatistics* this);
const char* JvmStatistics_getFreeMemoryKilobytesString(JvmStatistics* this);
const char* JvmStatistics_getFreeMemoryMegabytesString(JvmStatistics* this);
const char* JvmStatistics_getMaxMemoryBytesString(JvmStatistics* this);
const char* JvmStatistics_getMaxMemoryKilobytesString(JvmStatistics* this);
const char* JvmStatistics_getMaxMemoryMegabytesString(JvmStatistics* this);
const char* JvmStatistics_getTotalMemoryBytesString(JvmStatistics* this);
const char* JvmStatistics_getTotalMemoryKilobytesString(JvmStatistics* this);
const char* JvmStatistics_getTotalMemoryMegabytesString(JvmStatistics* this);
int64_t JvmStatistics_getNumberOfThreads(JvmStatistics* this);
int64_t JvmStatistics_getNumberOfThreadsLong(JvmStatistics* this);
const char* JvmStatistics_getNumberOfThreadsString(JvmStatistics* this);
void JvmStatistics_collectGarbage(JvmStatistics* this);

static void JvmStatistics_initFields(JvmStatistics* this) {
    
}


void JvmStatistics_init(JvmStatistics* this) {
    JvmStatistics_initFields(this);
        this->runtime = Runtime_getRuntime();
}

JvmStatistics* JvmStatistics_new(void) {
    JvmStatistics* this = calloc(1, sizeof(JvmStatistics));
    JvmStatistics_init(this);
    return this;
}


int64_t JvmStatistics_getFreeMemoryBytes(JvmStatistics* this) {
        return Runtime_freeMemory(this->runtime);
}


int64_t JvmStatistics_getFreeMemoryKilobytes(JvmStatistics* this) {
        return JvmStatistics_getFreeMemoryBytes(this) / 1024LL;
}


int64_t JvmStatistics_getFreeMemoryMegabytes(JvmStatistics* this) {
        return JvmStatistics_getFreeMemoryKilobytes(this) / 1024LL;
}


int64_t JvmStatistics_getMaxMemoryBytes(JvmStatistics* this) {
        return Runtime_maxMemory(this->runtime);
}


int64_t JvmStatistics_getMaxMemoryKilobytes(JvmStatistics* this) {
        return JvmStatistics_getMaxMemoryBytes(this) / 1024LL;
}


int64_t JvmStatistics_getMaxMemoryMegabytes(JvmStatistics* this) {
        return JvmStatistics_getMaxMemoryKilobytes(this) / 1024LL;
}


int64_t JvmStatistics_getTotalMemoryBytes(JvmStatistics* this) {
        return Runtime_totalMemory(this->runtime);
}


int64_t JvmStatistics_getTotalMemoryKilobytes(JvmStatistics* this) {
        return JvmStatistics_getTotalMemoryBytes(this) / 1024LL;
}


int64_t JvmStatistics_getTotalMemoryMegabytes(JvmStatistics* this) {
        return JvmStatistics_getTotalMemoryKilobytes(this) / 1024LL;
}


int64_t JvmStatistics_getFreeMemoryBytesLong(JvmStatistics* this) {
        return JvmStatistics_getFreeMemoryBytes(this);
}


int64_t JvmStatistics_getFreeMemoryKilobytesLong(JvmStatistics* this) {
        return JvmStatistics_getFreeMemoryKilobytes(this);
}


int64_t JvmStatistics_getFreeMemoryMegabytesLong(JvmStatistics* this) {
        return JvmStatistics_getFreeMemoryMegabytes(this);
}


int64_t JvmStatistics_getMaxMemoryBytesLong(JvmStatistics* this) {
        return JvmStatistics_getMaxMemoryBytes(this);
}


int64_t JvmStatistics_getMaxMemoryKilobytesLong(JvmStatistics* this) {
        return JvmStatistics_getMaxMemoryKilobytes(this);
}


int64_t JvmStatistics_getMaxMemoryMegabytesLong(JvmStatistics* this) {
        return JvmStatistics_getMaxMemoryMegabytes(this);
}


int64_t JvmStatistics_getTotalMemoryBytesLong(JvmStatistics* this) {
        return JvmStatistics_getTotalMemoryBytes(this);
}


int64_t JvmStatistics_getTotalMemoryKilobytesLong(JvmStatistics* this) {
        return JvmStatistics_getTotalMemoryKilobytes(this);
}


int64_t JvmStatistics_getTotalMemoryMegabytesLong(JvmStatistics* this) {
        return JvmStatistics_getTotalMemoryMegabytes(this);
}


const char* JvmStatistics_getFreeMemoryBytesString(JvmStatistics* this) {
        return JAVA_CALL(JvmStatistics_getFreeMemoryBytesLong(this), toString);
}


const char* JvmStatistics_getFreeMemoryKilobytesString(JvmStatistics* this) {
        return JAVA_CALL(JvmStatistics_getFreeMemoryKilobytesLong(this), toString);
}


const char* JvmStatistics_getFreeMemoryMegabytesString(JvmStatistics* this) {
        return JAVA_CALL(JvmStatistics_getFreeMemoryMegabytesLong(this), toString);
}


const char* JvmStatistics_getMaxMemoryBytesString(JvmStatistics* this) {
        return JAVA_CALL(JvmStatistics_getMaxMemoryBytesLong(this), toString);
}


const char* JvmStatistics_getMaxMemoryKilobytesString(JvmStatistics* this) {
        return JAVA_CALL(JvmStatistics_getMaxMemoryKilobytesLong(this), toString);
}


const char* JvmStatistics_getMaxMemoryMegabytesString(JvmStatistics* this) {
        return JAVA_CALL(JvmStatistics_getMaxMemoryMegabytesLong(this), toString);
}


const char* JvmStatistics_getTotalMemoryBytesString(JvmStatistics* this) {
        return JAVA_CALL(JvmStatistics_getTotalMemoryBytesLong(this), toString);
}


const char* JvmStatistics_getTotalMemoryKilobytesString(JvmStatistics* this) {
        return JAVA_CALL(JvmStatistics_getTotalMemoryKilobytesLong(this), toString);
}


const char* JvmStatistics_getTotalMemoryMegabytesString(JvmStatistics* this) {
        return JAVA_CALL(JvmStatistics_getTotalMemoryMegabytesLong(this), toString);
}


int64_t JvmStatistics_getNumberOfThreads(JvmStatistics* this) {
        return Thread_activeCount();
}


int64_t JvmStatistics_getNumberOfThreadsLong(JvmStatistics* this) {
        return JvmStatistics_getNumberOfThreads(this);
}


const char* JvmStatistics_getNumberOfThreadsString(JvmStatistics* this) {
        return JAVA_CALL(JvmStatistics_getNumberOfThreadsLong(this), toString);
}


void JvmStatistics_collectGarbage(JvmStatistics* this) {
        Runtime_gc(this->runtime);
}

