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
// package org.allbinary.game.layer.waypoint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/graphics/CellPosition.h"
#include "org/allbinary/layer/AllBinaryLayer.h"

typedef struct WaypointCellPositionHistory WaypointCellPositionHistory;
struct WaypointCellPositionHistory {
    BasicArrayList* positionList;
    BasicArrayList* layerList;
};

static WaypointCellPositionHistory* WaypointCellPositionHistory_SINGLETON;

WaypointCellPositionHistory* WaypointCellPositionHistory_new(void);
WaypointCellPositionHistory* WaypointCellPositionHistory_getInstance(void);
void WaypointCellPositionHistory_add(WaypointCellPositionHistory* this, CellPosition* cellPosition, AllBinaryLayer* layerInterface);
void WaypointCellPositionHistory_addList(WaypointCellPositionHistory* this, BasicArrayList* list, AllBinaryLayer* layerInterface);
void WaypointCellPositionHistory_remove(WaypointCellPositionHistory* this, CellPosition* cellPosition);
void WaypointCellPositionHistory_removeLayer(WaypointCellPositionHistory* this, AllBinaryLayer* layerInterface);
void WaypointCellPositionHistory_clear(WaypointCellPositionHistory* this);
bool WaypointCellPositionHistory_isCellPositionWithDrop(WaypointCellPositionHistory* this, CellPosition* cellPosition);
bool WaypointCellPositionHistory_anyCellPositionWithDrop(WaypointCellPositionHistory* this, BasicArrayList* list);
AllBinaryLayer* WaypointCellPositionHistory_getLayerInterface(WaypointCellPositionHistory* this, CellPosition* cellPosition);

// Static fields with runtime initializers: call this once at startup
void WaypointCellPositionHistory_staticInit(void) {
    WaypointCellPositionHistory_SINGLETON = WaypointCellPositionHistory_new();
}

static void WaypointCellPositionHistory_initFields(WaypointCellPositionHistory* this) {
    this->positionList = BasicArrayListD_new();
    this->layerList = BasicArrayListD_new();
}

void WaypointCellPositionHistory_init(WaypointCellPositionHistory* this) {
    WaypointCellPositionHistory_initFields(this);
}

WaypointCellPositionHistory* WaypointCellPositionHistory_new(void) {
    WaypointCellPositionHistory* this = calloc(1, sizeof(WaypointCellPositionHistory));
    WaypointCellPositionHistory_init(this);
    return this;
}


WaypointCellPositionHistory* WaypointCellPositionHistory_getInstance(void) {
        return WaypointCellPositionHistory_SINGLETON;
}


void WaypointCellPositionHistory_add(WaypointCellPositionHistory* this, CellPosition* cellPosition, AllBinaryLayer* layerInterface) {
        BasicArrayList_add(this->positionList, cellPosition);
        BasicArrayList_add(this->layerList, layerInterface);
}


void WaypointCellPositionHistory_addList(WaypointCellPositionHistory* this, BasicArrayList* list, AllBinaryLayer* layerInterface) {
        for (int32_t index = BasicArrayList_size(list) - 1; index >= 0; index--) {
            WaypointCellPositionHistory_add(this, ((CellPosition*) BasicArrayList_get(list, index)), layerInterface);
        }
}


void WaypointCellPositionHistory_remove(WaypointCellPositionHistory* this, CellPosition* cellPosition) {
        int32_t index = BasicArrayList_indexOf(this->positionList, cellPosition);
        if (index >= 0) {
            BasicArrayList_removeAt(this->positionList, index);
            BasicArrayList_removeAt(this->layerList, index);
        }
}


void WaypointCellPositionHistory_removeLayer(WaypointCellPositionHistory* this, AllBinaryLayer* layerInterface) {
        int32_t index = 0;
        while (index != -1) {
            index = BasicArrayList_indexOf(this->layerList, layerInterface);
            if (index >= 0) {
                BasicArrayList_removeAt(this->positionList, index);
                BasicArrayList_removeAt(this->layerList, index);
            }
        }
}


void WaypointCellPositionHistory_clear(WaypointCellPositionHistory* this) {
        BasicArrayList_clear(this->positionList);
        BasicArrayList_clear(this->layerList);
}


bool WaypointCellPositionHistory_isCellPositionWithDrop(WaypointCellPositionHistory* this, CellPosition* cellPosition) {
        return BasicArrayList_contains(this->positionList, cellPosition);
}


bool WaypointCellPositionHistory_anyCellPositionWithDrop(WaypointCellPositionHistory* this, BasicArrayList* list) {
        for (int32_t index = BasicArrayList_size(list) - 1; index >= 0; index--) {
            if (WaypointCellPositionHistory_isCellPositionWithDrop(this, ((CellPosition*) BasicArrayList_get(list, index)))) {
                return true;
            }
        }
        return false;
}


AllBinaryLayer* WaypointCellPositionHistory_getLayerInterface(WaypointCellPositionHistory* this, CellPosition* cellPosition) {
        int32_t index = BasicArrayList_indexOf(this->positionList, cellPosition);
        if (index >= 0) {
            return ((AllBinaryLayer*) BasicArrayList_get(this->layerList, index));
        } else {
            return AllBinaryLayer_NULL_ALLBINARY_LAYER;
        }
}

