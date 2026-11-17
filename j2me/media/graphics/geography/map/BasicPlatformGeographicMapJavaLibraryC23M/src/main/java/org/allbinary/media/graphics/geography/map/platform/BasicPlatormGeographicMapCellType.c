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
// package org.allbinary.media.graphics.geography.map.platform

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListS.h"

typedef struct BasicPlatormGeographicMapCellType BasicPlatormGeographicMapCellType;
struct BasicPlatormGeographicMapCellType {
    int32_t* types;
};


BasicPlatormGeographicMapCellType* BasicPlatormGeographicMapCellType_new(BasicArrayList* types);
BasicPlatormGeographicMapCellType* BasicPlatormGeographicMapCellType_createType(int32_t type);

void BasicPlatormGeographicMapCellType_init(BasicPlatormGeographicMapCellType* this, BasicArrayList* types);
bool BasicPlatormGeographicMapCellType_isType(BasicPlatormGeographicMapCellType* this, GeographicMapCellType* type);
bool BasicPlatormGeographicMapCellType_hasType(BasicPlatormGeographicMapCellType* this, int32_t type);

static void BasicPlatormGeographicMapCellType_initFields(BasicPlatormGeographicMapCellType* this) {
    
}


BasicPlatormGeographicMapCellType* BasicPlatormGeographicMapCellType_createType(int32_t type) {
        BasicArrayList* types = BasicArrayListS_new(1);
        JAVA_CALL(types, add, SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), type));
        BasicPlatormGeographicMapCellType* basicPlatormGeographicMapCellType = BasicPlatormGeographicMapCellType_new(types);
        return basicPlatormGeographicMapCellType;
}


void BasicPlatormGeographicMapCellType_init(BasicPlatormGeographicMapCellType* this, BasicArrayList* types) {
    BasicPlatormGeographicMapCellType_initFields(this);
        int32_t size = JAVA_CALL(types, size);
        int32_t* typeArray = ((int32_t*) java_array_new(sizeof(int32_t), size));
        int32_t typeAsInteger = nullptr;
        int32_t type = 0;
        for (int32_t index = 0; index < size; index++) {
            typeAsInteger = (((int32_t) JAVA_CALL(types, get, index)));
            type = Integer_intValue(typeAsInteger);
            GeographicMapCellType_new(type, 0);
            typeArray[index] = type;
        }
        this->types = typeArray;
}

BasicPlatormGeographicMapCellType* BasicPlatormGeographicMapCellType_new(BasicArrayList* types) {
    BasicPlatormGeographicMapCellType* this = calloc(1, sizeof(BasicPlatormGeographicMapCellType));
    BasicPlatormGeographicMapCellType_init(this, types);
    return this;
}


bool BasicPlatormGeographicMapCellType_isType(BasicPlatormGeographicMapCellType* this, GeographicMapCellType* type) {
        return BasicPlatormGeographicMapCellType_hasType(this, INT_getType(type));
}


bool BasicPlatormGeographicMapCellType_hasType(BasicPlatormGeographicMapCellType* this, int32_t type) {
        int32_t size = java_array_length(this->types);
        for (int32_t index = 0; index < size; index++) {
            if (this->types[index] == type) {
                return true;
            }
        }
        return false;
}

