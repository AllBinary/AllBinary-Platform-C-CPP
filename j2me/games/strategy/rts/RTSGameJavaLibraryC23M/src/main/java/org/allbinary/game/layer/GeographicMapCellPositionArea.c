/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2003 AllBinary 
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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/game/layer/geographic/map/LayerCoveringCellPositionsUtil.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/CellPositionsUtil.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/util/BasicArrayListS.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/game/layer/GeographicMapCellPositionAreaBase.h"

typedef struct GeographicMapCellPositionArea GeographicMapCellPositionArea;
struct GeographicMapCellPositionArea {
    GeographicMapCellPositionAreaBase base;
    CellPositionsUtil* cellPositionsUtil;
    LayerCoveringCellPositionsUtil* layerCoveringCellPositionsUtil;
    BasicArrayList* reusableOccupyingGeographicMapCellPositionList;
    BasicArrayList* reusableSurroundingGeographicMapCellPositionList;
    CircularIndexUtil* surroundingCircularIndexUtil;
    AllBinaryLayer* layerInterface;
    BasicArrayList* LIST;
    BasicArrayList* occupyingGeographicMapCellPositionList;
    BasicArrayList* surroundingGeographicMapCellPositionList;
};


GeographicMapCellPositionArea* GeographicMapCellPositionArea_new(AllBinaryLayer* layerInterface);

void GeographicMapCellPositionArea_init(GeographicMapCellPositionArea* this, AllBinaryLayer* layerInterface);
void GeographicMapCellPositionArea_update(GeographicMapCellPositionArea* this, BasicGeographicMap* geographicMapInterface);
BasicArrayList* GeographicMapCellPositionArea_getOccupyingGeographicMapCellPositionList(GeographicMapCellPositionArea* this);
BasicArrayList* GeographicMapCellPositionArea_getSurroundingGeographicMapCellPositionList(GeographicMapCellPositionArea* this);
GeographicMapCellPosition* GeographicMapCellPositionArea_getNextSurroundingGeographicMapCellPosition(GeographicMapCellPositionArea* this);

static void GeographicMapCellPositionArea_initFields(GeographicMapCellPositionArea* this) {
    this->cellPositionsUtil = CellPositionsUtil_getInstance();
    this->layerCoveringCellPositionsUtil = LayerCoveringCellPositionsUtil_getInstance();
    this->reusableOccupyingGeographicMapCellPositionList = BasicArrayListS_new(4);
    this->reusableSurroundingGeographicMapCellPositionList = BasicArrayListS_new(12);
    this->surroundingCircularIndexUtil = CircularIndexUtil_createInstance(0);
    
    this->LIST = BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
    this->occupyingGeographicMapCellPositionList = this->LIST;
    this->surroundingGeographicMapCellPositionList = this->LIST;
}


void GeographicMapCellPositionArea_init(GeographicMapCellPositionArea* this, AllBinaryLayer* layerInterface) {
    GeographicMapCellPositionAreaBase_init(&this->base);
    GeographicMapCellPositionArea_initFields(this);
        this->layerInterface = layerInterface;
}

GeographicMapCellPositionArea* GeographicMapCellPositionArea_new(AllBinaryLayer* layerInterface) {
    GeographicMapCellPositionArea* this = calloc(1, sizeof(GeographicMapCellPositionArea));
    GeographicMapCellPositionArea_init(this, layerInterface);
    return this;
}


// throws Exception
void GeographicMapCellPositionArea_update(GeographicMapCellPositionArea* this, BasicGeographicMap* geographicMapInterface) {
        this->occupyingGeographicMapCellPositionList = LayerCoveringCellPositionsUtil_getAllXY(this->layerCoveringCellPositionsUtil, geographicMapInterface, this->layerInterface, AllBinaryLayer_getXP(this->layerInterface), AllBinaryLayer_getYP(this->layerInterface), this->reusableOccupyingGeographicMapCellPositionList);
        this->surroundingGeographicMapCellPositionList = CellPositionsUtil_getAllSurrounding(this->cellPositionsUtil, geographicMapInterface, this->occupyingGeographicMapCellPositionList, this->reusableSurroundingGeographicMapCellPositionList);
        CircularIndexUtil_setSize(this->surroundingCircularIndexUtil, BasicArrayList_size(this->surroundingGeographicMapCellPositionList));
}


BasicArrayList* GeographicMapCellPositionArea_getOccupyingGeographicMapCellPositionList(GeographicMapCellPositionArea* this) {
        return this->occupyingGeographicMapCellPositionList;
}


BasicArrayList* GeographicMapCellPositionArea_getSurroundingGeographicMapCellPositionList(GeographicMapCellPositionArea* this) {
        return this->surroundingGeographicMapCellPositionList;
}


GeographicMapCellPosition* GeographicMapCellPositionArea_getNextSurroundingGeographicMapCellPosition(GeographicMapCellPositionArea* this) {
        GeographicMapCellPosition* geographicMapCellPosition = ((GeographicMapCellPosition*) BasicArrayList_get(this->surroundingGeographicMapCellPositionList, CircularIndexUtil_getIndex(this->surroundingCircularIndexUtil)));
        CircularIndexUtil_next(this->surroundingCircularIndexUtil);
        return geographicMapCellPosition;
}

