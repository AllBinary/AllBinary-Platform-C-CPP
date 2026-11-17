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
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"

typedef struct GeographicMapCellPosition GeographicMapCellPosition;
struct GeographicMapCellPosition {
    CellPosition base;
    GPoint* point;
    GPoint* midPoint;
};


GeographicMapCellPosition* GeographicMapCellPosition_new(int32_t column, int32_t row, int32_t columns, int32_t rows, int32_t width, int32_t height);

void GeographicMapCellPosition_init(GeographicMapCellPosition* this, int32_t column, int32_t row, int32_t columns, int32_t rows, int32_t width, int32_t height);
GPoint* GeographicMapCellPosition_getPoint(GeographicMapCellPosition* this);
GPoint* GeographicMapCellPosition_getMidPoint(GeographicMapCellPosition* this);
void GeographicMapCellPosition_setMidPoint(GeographicMapCellPosition* this, GPoint* midPoint);

static void GeographicMapCellPosition_initFields(GeographicMapCellPosition* this) {
    
    
}


void GeographicMapCellPosition_init(GeographicMapCellPosition* this, int32_t column, int32_t row, int32_t columns, int32_t rows, int32_t width, int32_t height) {
        CellPosition_init(&this->base, column, row, columns, rows);
        GeographicMapCellPosition_initFields(this);
        int32_t x = GeographicMapCellPosition_getColumn(this) * width;
        int32_t y = GeographicMapCellPosition_getRow(this) * height;
        PointFactory* pointFactory = PointFactory_getInstance();
        this->point = PointFactory_createXY(pointFactory, x, y);
        this->midPoint = PointFactory_createXY(pointFactory, x + (width >> 1), y + (height >> 1));
}

GeographicMapCellPosition* GeographicMapCellPosition_new(int32_t column, int32_t row, int32_t columns, int32_t rows, int32_t width, int32_t height) {
    GeographicMapCellPosition* this = calloc(1, sizeof(GeographicMapCellPosition));
    GeographicMapCellPosition_init(this, column, row, columns, rows, width, height);
    return this;
}


GPoint* GeographicMapCellPosition_getPoint(GeographicMapCellPosition* this) {
        return this->point;
}


GPoint* GeographicMapCellPosition_getMidPoint(GeographicMapCellPosition* this) {
        return this->midPoint;
}


void GeographicMapCellPosition_setMidPoint(GeographicMapCellPosition* this, GPoint* midPoint) {
        this->midPoint = midPoint;
}

