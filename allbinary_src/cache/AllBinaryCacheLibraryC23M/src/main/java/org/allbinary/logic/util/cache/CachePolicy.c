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
// package org.allbinary.logic.util.cache

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct CachePolicy CachePolicy;
struct CachePolicy {
    const char* name;
    int64_t maxTime;
    int64_t maxSize;
};


CachePolicy* CachePolicy_new(const char* name, int64_t maxTime, int64_t maxSize);

void CachePolicy_init(CachePolicy* this, const char* name, int64_t maxTime, int64_t maxSize);
int64_t CachePolicy_getMaxTime(CachePolicy* this);
void CachePolicy_setMaxTime(CachePolicy* this, int64_t maxTime);
int64_t CachePolicy_getMaxSize(CachePolicy* this);
void CachePolicy_setMaxSize(CachePolicy* this, int64_t maxSize);
const char* CachePolicy_getName(CachePolicy* this);

static void CachePolicy_initFields(CachePolicy* this) {
    
    this->maxTime = 0;
    this->maxSize = 0;
}


void CachePolicy_init(CachePolicy* this, const char* name, int64_t maxTime, int64_t maxSize) {
    CachePolicy_initFields(this);
        this->name = name;
        CachePolicy_setMaxTime(this, maxTime);
        CachePolicy_setMaxSize(this, maxSize);
}

CachePolicy* CachePolicy_new(const char* name, int64_t maxTime, int64_t maxSize) {
    CachePolicy* this = calloc(1, sizeof(CachePolicy));
    CachePolicy_init(this, name, maxTime, maxSize);
    return this;
}


int64_t CachePolicy_getMaxTime(CachePolicy* this) {
        return this->maxTime;
}


void CachePolicy_setMaxTime(CachePolicy* this, int64_t maxTime) {
        this->maxTime = maxTime;
}


int64_t CachePolicy_getMaxSize(CachePolicy* this) {
        return this->maxSize;
}


void CachePolicy_setMaxSize(CachePolicy* this, int64_t maxSize) {
        this->maxSize = maxSize;
}


const char* CachePolicy_getName(CachePolicy* this) {
        return this->name;
}

