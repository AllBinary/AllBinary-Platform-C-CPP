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
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"

typedef struct GeographicMapCellType GeographicMapCellType;
struct GeographicMapCellType {
    LogUtil* logUtil;
    int32_t type;
};

GeographicMapCellType** GeographicMapCellType_NULL_GEOGRAPHIC_MAP_CELL_TYPE_ARRAY;
GeographicMapCellType* GeographicMapCellType_NULL_GEOGRAPHIC_MAP_CELL_TYPE;

GeographicMapCellType* GeographicMapCellType_new(int32_t type, int32_t reset);

void GeographicMapCellType_init(GeographicMapCellType* this, int32_t type, int32_t reset);
int32_t GeographicMapCellType_getType(GeographicMapCellType* this);
const char* GeographicMapCellType_toString(GeographicMapCellType* this);

// Static fields with runtime initializers: call this once at startup
void GeographicMapCellType_staticInit(void) {
    GeographicMapCellType_NULL_GEOGRAPHIC_MAP_CELL_TYPE_ARRAY = ((GeographicMapCellType**) java_array_new(sizeof(GeographicMapCellType*), 0));
    GeographicMapCellType_NULL_GEOGRAPHIC_MAP_CELL_TYPE = GeographicMapCellType_new(Integer_MIN_VALUE, 0);
}

static void GeographicMapCellType_initFields(GeographicMapCellType* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void GeographicMapCellType_init(GeographicMapCellType* this, int32_t type, int32_t reset) {
    GeographicMapCellType_initFields(this);
        this->type = type;
        if (type != Integer_MIN_VALUE) {
            GeographicMapCellTypeFactory* geographicMapCellTypeFactory = GeographicMapCellTypeFactory_getInstance();
            GeographicMapCellType** geographicMapCellTypeArray = GeographicMapCellTypeFactory_getGeographicMapCellTypeArray(geographicMapCellTypeFactory);
            if (geographicMapCellTypeArray[type] == nullptr || reset == 1) {
                geographicMapCellTypeArray[type] = this;
            } else {
                if (reset != -1) {
                    java_throw(java_exception_new("RuntimeException", ""));
                }
            }
        }
}

GeographicMapCellType* GeographicMapCellType_new(int32_t type, int32_t reset) {
    GeographicMapCellType* this = calloc(1, sizeof(GeographicMapCellType));
    GeographicMapCellType_init(this, type, reset);
    return this;
}


int32_t GeographicMapCellType_getType(GeographicMapCellType* this) {
        return this->type;
}


const char* GeographicMapCellType_toString(GeographicMapCellType* this) {
        return JAVA_CALL(SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), this->type), toString);
}

