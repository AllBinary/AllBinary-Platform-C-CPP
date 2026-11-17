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
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h"

typedef struct SimpleGeographicMapCellPositionFactory SimpleGeographicMapCellPositionFactory;
struct SimpleGeographicMapCellPositionFactory {
    GeographicMapCellPositionFactoryInterface GeographicMapCellPositionFactoryInterface_interface;
};

GeographicMapCellPosition* SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;

SimpleGeographicMapCellPositionFactory* SimpleGeographicMapCellPositionFactory_new(void);
GeographicMapCellPosition* SimpleGeographicMapCellPositionFactory_getInstance(SimpleGeographicMapCellPositionFactory* this, BasicGeographicMap* geographicMapInterface, int32_t i_column, int32_t i_row, int32_t columns, int32_t rows, int32_t width, int32_t height);

// Static fields with runtime initializers: call this once at startup
void SimpleGeographicMapCellPositionFactory_staticInit(void) {
    SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION = GeographicMapCellPosition_new(-1, -1, -1, -1, -1, -1);
}

void SimpleGeographicMapCellPositionFactory_init(SimpleGeographicMapCellPositionFactory* this) {
}

SimpleGeographicMapCellPositionFactory* SimpleGeographicMapCellPositionFactory_new(void) {
    SimpleGeographicMapCellPositionFactory* this = calloc(1, sizeof(SimpleGeographicMapCellPositionFactory));
    SimpleGeographicMapCellPositionFactory_init(this);
    return this;
}


GeographicMapCellPosition* SimpleGeographicMapCellPositionFactory_getInstance(SimpleGeographicMapCellPositionFactory* this, BasicGeographicMap* geographicMapInterface, int32_t i_column, int32_t i_row, int32_t columns, int32_t rows, int32_t width, int32_t height) {
        return GeographicMapCellPosition_new(i_column, i_row, columns, rows, width, height);
}

