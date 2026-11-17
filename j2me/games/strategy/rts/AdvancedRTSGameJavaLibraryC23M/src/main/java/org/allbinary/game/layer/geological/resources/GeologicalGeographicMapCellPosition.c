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
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"

typedef struct GeologicalGeographicMapCellPosition GeologicalGeographicMapCellPosition;
struct GeologicalGeographicMapCellPosition {
    GeographicMapCellPosition base;
    GeologicalResource* geologicalResource;
};


GeologicalGeographicMapCellPosition* GeologicalGeographicMapCellPosition_new(int32_t column, int32_t row, int32_t columns, int32_t rows, int32_t width, int32_t height, GeologicalResource* geologicalResource);

void GeologicalGeographicMapCellPosition_init(GeologicalGeographicMapCellPosition* this, int32_t column, int32_t row, int32_t columns, int32_t rows, int32_t width, int32_t height, GeologicalResource* geologicalResource);
GeologicalResource* GeologicalGeographicMapCellPosition_getGeologicalResource(GeologicalGeographicMapCellPosition* this);

static void GeologicalGeographicMapCellPosition_initFields(GeologicalGeographicMapCellPosition* this) {
    
}


void GeologicalGeographicMapCellPosition_init(GeologicalGeographicMapCellPosition* this, int32_t column, int32_t row, int32_t columns, int32_t rows, int32_t width, int32_t height, GeologicalResource* geologicalResource) {
        GeographicMapCellPosition_init(&this->base, column, row, columns, rows, width, height);
        GeologicalGeographicMapCellPosition_initFields(this);
        this->geologicalResource = geologicalResource;
}

GeologicalGeographicMapCellPosition* GeologicalGeographicMapCellPosition_new(int32_t column, int32_t row, int32_t columns, int32_t rows, int32_t width, int32_t height, GeologicalResource* geologicalResource) {
    GeologicalGeographicMapCellPosition* this = calloc(1, sizeof(GeologicalGeographicMapCellPosition));
    GeologicalGeographicMapCellPosition_init(this, column, row, columns, rows, width, height, geologicalResource);
    return this;
}


GeologicalResource* GeologicalGeographicMapCellPosition_getGeologicalResource(GeologicalGeographicMapCellPosition* this) {
        return this->geologicalResource;
}

