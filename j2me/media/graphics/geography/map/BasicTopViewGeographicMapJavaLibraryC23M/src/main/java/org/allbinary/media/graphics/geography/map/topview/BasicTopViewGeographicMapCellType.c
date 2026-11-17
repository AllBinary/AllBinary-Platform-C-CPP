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
// package org.allbinary.media.graphics.geography.map.topview

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListS.h"

typedef struct BasicTopViewGeographicMapCellType BasicTopViewGeographicMapCellType;
struct BasicTopViewGeographicMapCellType {
    LogUtil* logUtil;
    const char* name;
    int32_t cost;
    int32_t* types;
};


BasicTopViewGeographicMapCellType* BasicTopViewGeographicMapCellType_new(const char* name, BasicArrayList* types, int32_t cost);
BasicTopViewGeographicMapCellType* BasicTopViewGeographicMapCellType_createType(const char* name, int32_t type, int32_t cost);

void BasicTopViewGeographicMapCellType_init(BasicTopViewGeographicMapCellType* this, const char* name, BasicArrayList* types, int32_t cost);
bool BasicTopViewGeographicMapCellType_isType(BasicTopViewGeographicMapCellType* this, GeographicMapCellType* type);
bool BasicTopViewGeographicMapCellType_hasType(BasicTopViewGeographicMapCellType* this, int32_t type);
int32_t* BasicTopViewGeographicMapCellType_getTypes(BasicTopViewGeographicMapCellType* this);
const char* BasicTopViewGeographicMapCellType_toString(BasicTopViewGeographicMapCellType* this);

static void BasicTopViewGeographicMapCellType_initFields(BasicTopViewGeographicMapCellType* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    
}


BasicTopViewGeographicMapCellType* BasicTopViewGeographicMapCellType_createType(const char* name, int32_t type, int32_t cost) {
        BasicArrayList* types = BasicArrayListS_new(1);
        JAVA_CALL(types, add, type);
        return BasicTopViewGeographicMapCellType_new(name, types, cost);
}


void BasicTopViewGeographicMapCellType_init(BasicTopViewGeographicMapCellType* this, const char* name, BasicArrayList* types, int32_t cost) {
    BasicTopViewGeographicMapCellType_initFields(this);
        int32_t size = JAVA_CALL(types, size);
        int32_t* typeArray = ((int32_t*) java_array_new(sizeof(int32_t), size));
        int32_t typeAsInteger = nullptr;
        int32_t type = 0;
        for (int32_t index = 0; index < size; index++) {
            typeAsInteger = (((int32_t) JAVA_CALL(types, get, index)));
            type = Integer_intValue(typeAsInteger);
            if (GeographicMapCellTypeFactory_getGeographicMapCellTypeArray(GeographicMapCellTypeFactory_getInstance())[type] == nullptr) {
                RaceTrackGeographicMapCellType_new(name, type, cost, 0);
            } else {
            }
            typeArray[index] = type;
        }
        this->name = name;
        this->cost = cost;
        this->types = typeArray;
}

BasicTopViewGeographicMapCellType* BasicTopViewGeographicMapCellType_new(const char* name, BasicArrayList* types, int32_t cost) {
    BasicTopViewGeographicMapCellType* this = calloc(1, sizeof(BasicTopViewGeographicMapCellType));
    BasicTopViewGeographicMapCellType_init(this, name, types, cost);
    return this;
}


bool BasicTopViewGeographicMapCellType_isType(BasicTopViewGeographicMapCellType* this, GeographicMapCellType* type) {
        return BasicTopViewGeographicMapCellType_hasType(this, INT_getType(type));
}


bool BasicTopViewGeographicMapCellType_hasType(BasicTopViewGeographicMapCellType* this, int32_t type) {
        int32_t size = java_array_length(this->types);
        for (int32_t index = 0; index < size; index++) {
            if (this->types[index] == type) {
                return true;
            }
        }
        return false;
}


int32_t* BasicTopViewGeographicMapCellType_getTypes(BasicTopViewGeographicMapCellType* this) {
        return this->types;
}


const char* BasicTopViewGeographicMapCellType_toString(BasicTopViewGeographicMapCellType* this) {
        StringMaker* stringMaker = StringMaker_new();
        int32_t size = java_array_length(this->types);
        for (int32_t index = 0; index < size; index++) {
            JAVA_CALL(StringMaker_appendint(stringMaker, this->types[index]), append, CommonSeps_getInstance()->COMMA);
        }
        return StringMaker_toString(stringMaker);
}

