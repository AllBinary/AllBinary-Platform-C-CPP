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
// package org.allbinary.media.graphics.geography.map

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"

typedef struct GeographicMapCellTypeFactory GeographicMapCellTypeFactory;
struct GeographicMapCellTypeFactory {
    LogUtil* logUtil;
    GeographicMapCellType** geographicMapCellTypeArray;
};

static GeographicMapCellTypeFactory* GeographicMapCellTypeFactory_instance;

GeographicMapCellTypeFactory* GeographicMapCellTypeFactory_new(void);
GeographicMapCellTypeFactory* GeographicMapCellTypeFactory_getInstance(void);
GeographicMapCellType* GeographicMapCellTypeFactory_get(GeographicMapCellTypeFactory* this, int32_t type);
GeographicMapCellType** GeographicMapCellTypeFactory_getGeographicMapCellTypeArray(GeographicMapCellTypeFactory* this);
int32_t GeographicMapCellTypeFactory_getStartType(GeographicMapCellTypeFactory* this);
int32_t GeographicMapCellTypeFactory_getEndType(GeographicMapCellTypeFactory* this);
int32_t GeographicMapCellTypeFactory_getEmptyType(GeographicMapCellTypeFactory* this);
bool GeographicMapCellTypeFactory_isPath(GeographicMapCellTypeFactory* this, GeographicMapCellType* cellType);

// Static fields with runtime initializers: call this once at startup
void GeographicMapCellTypeFactory_staticInit(void) {
    GeographicMapCellTypeFactory_instance = GeographicMapCellTypeFactory_new();
}

static void GeographicMapCellTypeFactory_initFields(GeographicMapCellTypeFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->geographicMapCellTypeArray = ((GeographicMapCellType**) java_array_new(sizeof(GeographicMapCellType*), 512));
}

void GeographicMapCellTypeFactory_init(GeographicMapCellTypeFactory* this) {
    GeographicMapCellTypeFactory_initFields(this);
}

GeographicMapCellTypeFactory* GeographicMapCellTypeFactory_new(void) {
    GeographicMapCellTypeFactory* this = calloc(1, sizeof(GeographicMapCellTypeFactory));
    GeographicMapCellTypeFactory_init(this);
    return this;
}


GeographicMapCellTypeFactory* GeographicMapCellTypeFactory_getInstance(void) {
        return GeographicMapCellTypeFactory_instance;
}


GeographicMapCellType* GeographicMapCellTypeFactory_get(GeographicMapCellTypeFactory* this, int32_t type) {
        return this->geographicMapCellTypeArray[type];
}


GeographicMapCellType** GeographicMapCellTypeFactory_getGeographicMapCellTypeArray(GeographicMapCellTypeFactory* this) {
        return this->geographicMapCellTypeArray;
}


int32_t GeographicMapCellTypeFactory_getStartType(GeographicMapCellTypeFactory* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t GeographicMapCellTypeFactory_getEndType(GeographicMapCellTypeFactory* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t GeographicMapCellTypeFactory_getEmptyType(GeographicMapCellTypeFactory* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


bool GeographicMapCellTypeFactory_isPath(GeographicMapCellTypeFactory* this, GeographicMapCellType* cellType) {
        java_throw(java_exception_new("RuntimeException", ""));
}

