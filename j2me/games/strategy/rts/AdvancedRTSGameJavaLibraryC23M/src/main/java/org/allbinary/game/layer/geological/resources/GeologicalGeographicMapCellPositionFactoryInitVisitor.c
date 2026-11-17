/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2006 AllBinary 
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
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInitVisitorInterface.h"

typedef struct GeologicalGeographicMapCellPositionFactoryInitVisitor GeologicalGeographicMapCellPositionFactoryInitVisitor;
struct GeologicalGeographicMapCellPositionFactoryInitVisitor {
    GeographicMapCellPositionFactoryInitVisitorInterface GeographicMapCellPositionFactoryInitVisitorInterface_interface;
};


GeologicalGeographicMapCellPositionFactoryInitVisitor* GeologicalGeographicMapCellPositionFactoryInitVisitor_new(void);
void GeologicalGeographicMapCellPositionFactoryInitVisitor_visit(GeologicalGeographicMapCellPositionFactoryInitVisitor* this, AllBinaryTiledLayer* tiledLayer, GeographicMapCellPosition* cellPosition);

void GeologicalGeographicMapCellPositionFactoryInitVisitor_init(GeologicalGeographicMapCellPositionFactoryInitVisitor* this) {
}

GeologicalGeographicMapCellPositionFactoryInitVisitor* GeologicalGeographicMapCellPositionFactoryInitVisitor_new(void) {
    GeologicalGeographicMapCellPositionFactoryInitVisitor* this = calloc(1, sizeof(GeologicalGeographicMapCellPositionFactoryInitVisitor));
    GeologicalGeographicMapCellPositionFactoryInitVisitor_init(this);
    return this;
}


// throws Exception
void GeologicalGeographicMapCellPositionFactoryInitVisitor_visit(GeologicalGeographicMapCellPositionFactoryInitVisitor* this, AllBinaryTiledLayer* tiledLayer, GeographicMapCellPosition* cellPosition) {
        GeologicalGeographicMapCellPosition* geologicalGeographicMapCellPosition = (((GeologicalGeographicMapCellPosition*) cellPosition));
        JAVA_CALL(GeologicalGeographicMapCellPosition_getGeologicalResource(geologicalGeographicMapCellPosition), init);
}

