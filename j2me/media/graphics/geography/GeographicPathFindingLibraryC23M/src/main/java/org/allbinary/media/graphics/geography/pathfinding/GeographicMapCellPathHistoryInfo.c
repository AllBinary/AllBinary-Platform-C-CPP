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
// package org.allbinary.media.graphics.geography.pathfinding

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h"

typedef struct GeographicMapCellPathHistoryInfo GeographicMapCellPathHistoryInfo;
struct GeographicMapCellPathHistoryInfo {
    GeographicMapCellPosition* previousGeographicMapCellPosition;
    GeographicMapCellPosition* previousOnPathGeographicMapCellPosition;
    GeographicMapCellPosition* nextUnvisitedOnPathGeographicMapCellPosition;
    GeographicMapCellPosition* nextOnPathGeographicMapCellPosition;
    GeographicMapCellPosition* nextChosenOnPathGeographicMapCellPosition;
};


GeographicMapCellPathHistoryInfo* GeographicMapCellPathHistoryInfo_new(void);
GeographicMapCellPosition* GeographicMapCellPathHistoryInfo_getPreviousGeographicMapCellPosition(GeographicMapCellPathHistoryInfo* this);
void GeographicMapCellPathHistoryInfo_setPreviousGeographicMapCellPosition(GeographicMapCellPathHistoryInfo* this, GeographicMapCellPosition* previousGeographicMapCellPosition);
GeographicMapCellPosition* GeographicMapCellPathHistoryInfo_getPreviousOnPathGeographicMapCellPosition(GeographicMapCellPathHistoryInfo* this);
void GeographicMapCellPathHistoryInfo_setPreviousOnPathGeographicMapCellPosition(GeographicMapCellPathHistoryInfo* this, GeographicMapCellPosition* previousOnPathGeographicMapCellPosition);
GeographicMapCellPosition* GeographicMapCellPathHistoryInfo_getNextUnvisitedOnPathGeographicMapCellPosition(GeographicMapCellPathHistoryInfo* this);
void GeographicMapCellPathHistoryInfo_setNextUnvisitedOnPathGeographicMapCellPosition(GeographicMapCellPathHistoryInfo* this, GeographicMapCellPosition* nextUnvisitedOnPathGeographicMapCellPosition);
GeographicMapCellPosition* GeographicMapCellPathHistoryInfo_getNextOnPathGeographicMapCellPosition(GeographicMapCellPathHistoryInfo* this);
void GeographicMapCellPathHistoryInfo_setNextOnPathGeographicMapCellPosition(GeographicMapCellPathHistoryInfo* this, GeographicMapCellPosition* nextOnPathGeographicMapCellPosition);
GeographicMapCellPosition* GeographicMapCellPathHistoryInfo_getNextChosenOnPathGeographicMapCellPosition(GeographicMapCellPathHistoryInfo* this);
void GeographicMapCellPathHistoryInfo_setNextChosenOnPathGeographicMapCellPosition(GeographicMapCellPathHistoryInfo* this, GeographicMapCellPosition* nextChosenOnPathGeographicMapCellPosition);

static void GeographicMapCellPathHistoryInfo_initFields(GeographicMapCellPathHistoryInfo* this) {
    this->previousGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    this->previousOnPathGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    this->nextUnvisitedOnPathGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    this->nextOnPathGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    this->nextChosenOnPathGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
}

void GeographicMapCellPathHistoryInfo_init(GeographicMapCellPathHistoryInfo* this) {
    GeographicMapCellPathHistoryInfo_initFields(this);
}

GeographicMapCellPathHistoryInfo* GeographicMapCellPathHistoryInfo_new(void) {
    GeographicMapCellPathHistoryInfo* this = calloc(1, sizeof(GeographicMapCellPathHistoryInfo));
    GeographicMapCellPathHistoryInfo_init(this);
    return this;
}


GeographicMapCellPosition* GeographicMapCellPathHistoryInfo_getPreviousGeographicMapCellPosition(GeographicMapCellPathHistoryInfo* this) {
        return this->previousGeographicMapCellPosition;
}


void GeographicMapCellPathHistoryInfo_setPreviousGeographicMapCellPosition(GeographicMapCellPathHistoryInfo* this, GeographicMapCellPosition* previousGeographicMapCellPosition) {
        this->previousGeographicMapCellPosition = previousGeographicMapCellPosition;
}


GeographicMapCellPosition* GeographicMapCellPathHistoryInfo_getPreviousOnPathGeographicMapCellPosition(GeographicMapCellPathHistoryInfo* this) {
        return this->previousOnPathGeographicMapCellPosition;
}


void GeographicMapCellPathHistoryInfo_setPreviousOnPathGeographicMapCellPosition(GeographicMapCellPathHistoryInfo* this, GeographicMapCellPosition* previousOnPathGeographicMapCellPosition) {
        this->previousOnPathGeographicMapCellPosition = previousOnPathGeographicMapCellPosition;
}


GeographicMapCellPosition* GeographicMapCellPathHistoryInfo_getNextUnvisitedOnPathGeographicMapCellPosition(GeographicMapCellPathHistoryInfo* this) {
        return this->nextUnvisitedOnPathGeographicMapCellPosition;
}


void GeographicMapCellPathHistoryInfo_setNextUnvisitedOnPathGeographicMapCellPosition(GeographicMapCellPathHistoryInfo* this, GeographicMapCellPosition* nextUnvisitedOnPathGeographicMapCellPosition) {
        this->nextUnvisitedOnPathGeographicMapCellPosition = nextUnvisitedOnPathGeographicMapCellPosition;
}


GeographicMapCellPosition* GeographicMapCellPathHistoryInfo_getNextOnPathGeographicMapCellPosition(GeographicMapCellPathHistoryInfo* this) {
        return this->nextOnPathGeographicMapCellPosition;
}


void GeographicMapCellPathHistoryInfo_setNextOnPathGeographicMapCellPosition(GeographicMapCellPathHistoryInfo* this, GeographicMapCellPosition* nextOnPathGeographicMapCellPosition) {
        this->nextOnPathGeographicMapCellPosition = nextOnPathGeographicMapCellPosition;
}


GeographicMapCellPosition* GeographicMapCellPathHistoryInfo_getNextChosenOnPathGeographicMapCellPosition(GeographicMapCellPathHistoryInfo* this) {
        return this->nextChosenOnPathGeographicMapCellPosition;
}


void GeographicMapCellPathHistoryInfo_setNextChosenOnPathGeographicMapCellPosition(GeographicMapCellPathHistoryInfo* this, GeographicMapCellPosition* nextChosenOnPathGeographicMapCellPosition) {
        this->nextChosenOnPathGeographicMapCellPosition = nextChosenOnPathGeographicMapCellPosition;
}

