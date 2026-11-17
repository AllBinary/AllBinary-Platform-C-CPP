/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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

typedef struct MultiGeographicMapBehavior MultiGeographicMapBehavior;
struct MultiGeographicMapBehavior {
    char unused;
};


MultiGeographicMapBehavior* MultiGeographicMapBehavior_new(void);
GeographicMapCellType** MultiGeographicMapBehavior_getCellTypeAt(MultiGeographicMapBehavior* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition);

void MultiGeographicMapBehavior_init(MultiGeographicMapBehavior* this) {
}

MultiGeographicMapBehavior* MultiGeographicMapBehavior_new(void) {
    MultiGeographicMapBehavior* this = calloc(1, sizeof(MultiGeographicMapBehavior));
    MultiGeographicMapBehavior_init(this);
    return this;
}


// throws Exception
GeographicMapCellType** MultiGeographicMapBehavior_getCellTypeAt(MultiGeographicMapBehavior* this, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellType** geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition) {
        int32_t size = java_array_length(geographicMapInterfaceArray);
        GeographicMapCellType* cellType = GeographicMapCellType_NULL_GEOGRAPHIC_MAP_CELL_TYPE;
        for (int32_t index = size; --index >= 0; ) {
            cellType = JAVA_CALL(geographicMapInterfaceArray[index], getCellTypeAt, geographicMapCellPosition);
            geographicMapCellTypeArray[index] = cellType;
        }
        return geographicMapCellTypeArray;
}

