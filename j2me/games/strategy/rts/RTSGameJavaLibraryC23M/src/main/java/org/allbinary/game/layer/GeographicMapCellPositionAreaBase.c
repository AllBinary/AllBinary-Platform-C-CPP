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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/layer/GeographicMapCellPositionAreaInterface.h"

typedef struct GeographicMapCellPositionAreaBase GeographicMapCellPositionAreaBase;
struct GeographicMapCellPositionAreaBase {
    GeographicMapCellPositionAreaInterface GeographicMapCellPositionAreaInterface_interface;
};

GeographicMapCellPositionAreaBase* GeographicMapCellPositionAreaBase_NULL_GEOGRPAHIC_MAP_POSITION_AREA_BASE;

GeographicMapCellPositionAreaBase* GeographicMapCellPositionAreaBase_new(void);
GeographicMapCellPosition* GeographicMapCellPositionAreaBase_getNextSurroundingGeographicMapCellPosition(GeographicMapCellPositionAreaBase* this);
BasicArrayList* GeographicMapCellPositionAreaBase_getOccupyingGeographicMapCellPositionList(GeographicMapCellPositionAreaBase* this);
BasicArrayList* GeographicMapCellPositionAreaBase_getSurroundingGeographicMapCellPositionList(GeographicMapCellPositionAreaBase* this);
void GeographicMapCellPositionAreaBase_update(GeographicMapCellPositionAreaBase* this, BasicGeographicMap* geographicMapInterface);

// Static fields with runtime initializers: call this once at startup
void GeographicMapCellPositionAreaBase_staticInit(void) {
    GeographicMapCellPositionAreaBase_NULL_GEOGRPAHIC_MAP_POSITION_AREA_BASE = GeographicMapCellPositionAreaBase_new();
}

void GeographicMapCellPositionAreaBase_init(GeographicMapCellPositionAreaBase* this) {
}

GeographicMapCellPositionAreaBase* GeographicMapCellPositionAreaBase_new(void) {
    GeographicMapCellPositionAreaBase* this = calloc(1, sizeof(GeographicMapCellPositionAreaBase));
    GeographicMapCellPositionAreaBase_init(this);
    return this;
}


GeographicMapCellPosition* GeographicMapCellPositionAreaBase_getNextSurroundingGeographicMapCellPosition(GeographicMapCellPositionAreaBase* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


BasicArrayList* GeographicMapCellPositionAreaBase_getOccupyingGeographicMapCellPositionList(GeographicMapCellPositionAreaBase* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


BasicArrayList* GeographicMapCellPositionAreaBase_getSurroundingGeographicMapCellPositionList(GeographicMapCellPositionAreaBase* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
void GeographicMapCellPositionAreaBase_update(GeographicMapCellPositionAreaBase* this, BasicGeographicMap* geographicMapInterface) {
        java_throw(java_exception_new("RuntimeException", ""));
}

