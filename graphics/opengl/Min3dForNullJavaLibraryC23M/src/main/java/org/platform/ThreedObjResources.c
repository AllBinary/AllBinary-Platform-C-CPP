/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.platform

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct ThreedObjResources ThreedObjResources;
struct ThreedObjResources {
    ABHashtable* hashtable;
};

static ThreedObjResources* ThreedObjResources_instance;

ThreedObjResources* ThreedObjResources_new(void);
ThreedObjResources* ThreedObjResources_getInstance(void);
const char* ThreedObjResources_get(ThreedObjResources* this, const char* resourceName);

// Static fields with runtime initializers: call this once at startup
void ThreedObjResources_staticInit(void) {
    ThreedObjResources_instance = ThreedObjResources_new();
}

static void ThreedObjResources_initFields(ThreedObjResources* this) {
    this->hashtable = StdUtil_createHashtable(StdUtil_getInstance());
}

void ThreedObjResources_init(ThreedObjResources* this) {
    ThreedObjResources_initFields(this);
}

ThreedObjResources* ThreedObjResources_new(void) {
    ThreedObjResources* this = calloc(1, sizeof(ThreedObjResources));
    ThreedObjResources_init(this);
    return this;
}


ThreedObjResources* ThreedObjResources_getInstance(void) {
        return ThreedObjResources_instance;
}


const char* ThreedObjResources_get(ThreedObjResources* this, const char* resourceName) {
        const char* resourceName2 = ((const char*) ABHashtable_get(this->hashtable, resourceName));
        if (resourceName2 != nullptr) {
            return resourceName2;
        }
        return resourceName;
}

