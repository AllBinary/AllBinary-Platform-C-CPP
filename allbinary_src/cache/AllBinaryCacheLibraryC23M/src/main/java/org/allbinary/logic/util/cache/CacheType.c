/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2007 AllBinary 
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
#include "org/allbinary/logic/string/StringMaker.h"

typedef struct CacheType CacheType;
struct CacheType {
    const char* vendor;
    const char* type;
};


CacheType* CacheType_new(const char* vendor, const char* type);

void CacheType_init(CacheType* this, const char* vendor, const char* type);
const char* CacheType_getVendor(CacheType* this);
const char* CacheType_getType(CacheType* this);
const char* CacheType_toString(CacheType* this);

static void CacheType_initFields(CacheType* this) {
    
    
}


void CacheType_init(CacheType* this, const char* vendor, const char* type) {
    CacheType_initFields(this);
        this->vendor = vendor;
        this->type = type;
}

CacheType* CacheType_new(const char* vendor, const char* type) {
    CacheType* this = calloc(1, sizeof(CacheType));
    CacheType_init(this, vendor, type);
    return this;
}


const char* CacheType_getVendor(CacheType* this) {
        return this->vendor;
}


const char* CacheType_getType(CacheType* this) {
        return this->type;
}


const char* CacheType_toString(CacheType* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "CacheType: Vendor: ");
        StringMaker_append(stringBuffer, CacheType_getVendor(this));
        StringMaker_append(stringBuffer, " Type: ");
        StringMaker_append(stringBuffer, CacheType_getType(this));
        return StringMaker_toString(stringBuffer);
}

