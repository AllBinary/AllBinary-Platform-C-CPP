/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2002 AllBinary 
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
// package org.allbinary.game.layer.geological.resources

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/game/rand/MyRandomFactory.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h"

typedef struct GeologicalGeographicMapCellPositionFactory GeologicalGeographicMapCellPositionFactory;
struct GeologicalGeographicMapCellPositionFactory {
    GeographicMapCellPositionFactoryInterface GeographicMapCellPositionFactoryInterface_interface;
    int32_t* resourcePerMapCellType;
};


GeologicalGeographicMapCellPositionFactory* GeologicalGeographicMapCellPositionFactory_new(int32_t* resourcePerMapCellType);

void GeologicalGeographicMapCellPositionFactory_init(GeologicalGeographicMapCellPositionFactory* this, int32_t* resourcePerMapCellType);
GeographicMapCellPosition* GeologicalGeographicMapCellPositionFactory_getInstance(GeologicalGeographicMapCellPositionFactory* this, BasicGeographicMap* geographicMapInterface, int32_t i_column, int32_t i_row, int32_t columns, int32_t rows, int32_t width, int32_t height);

static void GeologicalGeographicMapCellPositionFactory_initFields(GeologicalGeographicMapCellPositionFactory* this) {
    
}


void GeologicalGeographicMapCellPositionFactory_init(GeologicalGeographicMapCellPositionFactory* this, int32_t* resourcePerMapCellType) {
    GeologicalGeographicMapCellPositionFactory_initFields(this);
        this->resourcePerMapCellType = resourcePerMapCellType;
}

GeologicalGeographicMapCellPositionFactory* GeologicalGeographicMapCellPositionFactory_new(int32_t* resourcePerMapCellType) {
    GeologicalGeographicMapCellPositionFactory* this = calloc(1, sizeof(GeologicalGeographicMapCellPositionFactory));
    GeologicalGeographicMapCellPositionFactory_init(this, resourcePerMapCellType);
    return this;
}


// throws Exception
GeographicMapCellPosition* GeologicalGeographicMapCellPositionFactory_getInstance(GeologicalGeographicMapCellPositionFactory* this, BasicGeographicMap* geographicMapInterface, int32_t i_column, int32_t i_row, int32_t columns, int32_t rows, int32_t width, int32_t height) {
        AllBinaryTiledLayer* tiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface);
        int32_t resources = this->resourcePerMapCellType[AllBinaryTiledLayer_getCell(tiledLayer, i_column, i_row)] + MyRandomFactory_getAbsoluteNextInt(MyRandomFactory_getInstance(), 1000);
        return GeologicalGeographicMapCellPosition_new(i_column, i_row, columns, rows, width, height, GeologicalResource_new(resources));
}

