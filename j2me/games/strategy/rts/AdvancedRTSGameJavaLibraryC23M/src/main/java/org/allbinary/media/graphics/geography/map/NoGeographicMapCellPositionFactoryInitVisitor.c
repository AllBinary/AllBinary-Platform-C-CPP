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
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInitVisitorInterface.h"

typedef struct NoGeographicMapCellPositionFactoryInitVisitor NoGeographicMapCellPositionFactoryInitVisitor;
struct NoGeographicMapCellPositionFactoryInitVisitor {
    GeographicMapCellPositionFactoryInitVisitorInterface GeographicMapCellPositionFactoryInitVisitorInterface_interface;
};


NoGeographicMapCellPositionFactoryInitVisitor* NoGeographicMapCellPositionFactoryInitVisitor_new(void);
void NoGeographicMapCellPositionFactoryInitVisitor_visit(NoGeographicMapCellPositionFactoryInitVisitor* this, AllBinaryTiledLayer* tiledLayer, GeographicMapCellPosition* cellPosition);

void NoGeographicMapCellPositionFactoryInitVisitor_init(NoGeographicMapCellPositionFactoryInitVisitor* this) {
}

NoGeographicMapCellPositionFactoryInitVisitor* NoGeographicMapCellPositionFactoryInitVisitor_new(void) {
    NoGeographicMapCellPositionFactoryInitVisitor* this = calloc(1, sizeof(NoGeographicMapCellPositionFactoryInitVisitor));
    NoGeographicMapCellPositionFactoryInitVisitor_init(this);
    return this;
}


// throws Exception
void NoGeographicMapCellPositionFactoryInitVisitor_visit(NoGeographicMapCellPositionFactoryInitVisitor* this, AllBinaryTiledLayer* tiledLayer, GeographicMapCellPosition* cellPosition) {
}

