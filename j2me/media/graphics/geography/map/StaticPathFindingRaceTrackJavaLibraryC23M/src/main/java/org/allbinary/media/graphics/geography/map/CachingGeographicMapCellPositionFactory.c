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
#include "org/allbinary/graphics/CellPosition.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h"

typedef struct CachingGeographicMapCellPositionFactory CachingGeographicMapCellPositionFactory;
struct CachingGeographicMapCellPositionFactory {
    BasicGeographicMapCellPositionFactory base;
};


CachingGeographicMapCellPositionFactory* CachingGeographicMapCellPositionFactory_new(BasicGeographicMap* geographicMapInterface);

void CachingGeographicMapCellPositionFactory_init(CachingGeographicMapCellPositionFactory* this, BasicGeographicMap* geographicMapInterface);
GeographicMapCellPosition* CachingGeographicMapCellPositionFactory_createInstance(CachingGeographicMapCellPositionFactory* this, int32_t i_column, int32_t i_row, int32_t width, int32_t height);


void CachingGeographicMapCellPositionFactory_init(CachingGeographicMapCellPositionFactory* this, BasicGeographicMap* geographicMapInterface) {
        BasicGeographicMapCellPositionFactory_init(&this->base, geographicMapInterface);
}

CachingGeographicMapCellPositionFactory* CachingGeographicMapCellPositionFactory_new(BasicGeographicMap* geographicMapInterface) {
    CachingGeographicMapCellPositionFactory* this = calloc(1, sizeof(CachingGeographicMapCellPositionFactory));
    CachingGeographicMapCellPositionFactory_init(this, geographicMapInterface);
    return this;
}


// throws Exception
GeographicMapCellPosition* CachingGeographicMapCellPositionFactory_createInstance(CachingGeographicMapCellPositionFactory* this, int32_t i_column, int32_t i_row, int32_t width, int32_t height) {
        ABHashtable* hashtable = GeographicMapCellPositionFactory_getHashtable();
        const char* cellPositionKey = CellPosition_toStringColRow(i_column, i_row);
        Any* cellPositionCanBeNull = ABHashtable_get(hashtable, cellPositionKey);
        if (cellPositionCanBeNull == nullptr) {
            cellPositionCanBeNull = JAVA_CALL(this->geographicMapCellPositionFactoryInterface, getInstance, this->geographicMapInterface, i_column, i_row, CachingGeographicMapCellPositionFactory_getColumns(this), CachingGeographicMapCellPositionFactory_getRows(this), width, height);
            this->geographicMapCellPositionArray[i_row][i_column] = ((GeographicMapCellPosition*) cellPositionCanBeNull);
            ABHashtable_put(hashtable, cellPositionKey, cellPositionCanBeNull);
        }
        return ((GeographicMapCellPosition*) cellPositionCanBeNull);
}

