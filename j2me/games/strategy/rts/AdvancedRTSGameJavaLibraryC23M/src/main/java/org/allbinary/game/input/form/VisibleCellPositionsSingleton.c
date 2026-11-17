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
// package org.allbinary.game.input.form

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/game/SimpleTiledLayer.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/layer/RTSLayerEvent.h"
#include "org/allbinary/game/layer/building/event/BuildingEventListenerInterface.h"
#include "org/allbinary/game/layer/building/event/LocalPlayerBuildingEventHandler.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/graphics/CellPosition.h"
#include "org/allbinary/layer/event/ScrollMapEvent.h"
#include "org/allbinary/layer/event/ScrollMapEventHandler.h"
#include "org/allbinary/layer/event/ScrollMapEventListenerInterface.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"

typedef struct VisibleCellPositionsSingleton VisibleCellPositionsSingleton;
struct VisibleCellPositionsSingleton {
    BuildingEventListenerInterface BuildingEventListenerInterface_interface;
    ScrollMapEventListenerInterface ScrollMapEventListenerInterface_interface;
    int16_t** stationaryVisibleCellPositions;
    int16_t** visibleCellPositions;
    int16_t** currentlyVisibleCellPositions;
    SimpleTiledLayer* ALL_VISIBLE_TILEDLAYER;
    SimpleTiledLayer* simpleTiledLayer;
    SimpleTiledLayer* paintSimpleTiledLayer;
    int32_t currentIndex;
};

static VisibleCellPositionsSingleton* VisibleCellPositionsSingleton_instance;

VisibleCellPositionsSingleton* VisibleCellPositionsSingleton_new(void);
VisibleCellPositionsSingleton* VisibleCellPositionsSingleton_getInstance(void);

void VisibleCellPositionsSingleton_init(VisibleCellPositionsSingleton* this);
void VisibleCellPositionsSingleton_init(VisibleCellPositionsSingleton* this, SimpleTiledLayer* simpleTiledLayer);
void VisibleCellPositionsSingleton_onEvent(VisibleCellPositionsSingleton* this, AllBinaryEventObject* eventObject);
void VisibleCellPositionsSingleton_onBuildingEvent(VisibleCellPositionsSingleton* this, RTSLayerEvent* event);
void VisibleCellPositionsSingleton_onMoveEvent(VisibleCellPositionsSingleton* this, ScrollMapEvent* scrollMapEvent);
void VisibleCellPositionsSingleton_addStationaryCellPositions(VisibleCellPositionsSingleton* this, BasicArrayList* list);
void VisibleCellPositionsSingleton_removeStationaryCellPositions(VisibleCellPositionsSingleton* this, BasicArrayList* list);
void VisibleCellPositionsSingleton_update(VisibleCellPositionsSingleton* this);
bool VisibleCellPositionsSingleton_shouldProcess(VisibleCellPositionsSingleton* this);
void VisibleCellPositionsSingleton_addCellPositions(VisibleCellPositionsSingleton* this, BasicArrayList* list);
bool VisibleCellPositionsSingleton_isVisible(VisibleCellPositionsSingleton* this, CellPosition* cellPosition);
void VisibleCellPositionsSingleton_move(VisibleCellPositionsSingleton* this, int32_t dx, int32_t dy);
void VisibleCellPositionsSingleton_paint(VisibleCellPositionsSingleton* this, Graphics* graphics);
static void VisibleCellPositionsSingleton_setSimpleTiledLayer(VisibleCellPositionsSingleton* this, SimpleTiledLayer* simpleTiledLayer);
SimpleTiledLayer* VisibleCellPositionsSingleton_getSimpleTiledLayer(VisibleCellPositionsSingleton* this);

// Static fields with runtime initializers: call this once at startup
void VisibleCellPositionsSingleton_staticInit(void) {
    VisibleCellPositionsSingleton_instance = VisibleCellPositionsSingleton_new();
}

static void VisibleCellPositionsSingleton_initFields(VisibleCellPositionsSingleton* this) {
    this->stationaryVisibleCellPositions = NullUtil_getInstance()->NULL_SHORT_ARRAY_ARRAY;
    this->visibleCellPositions = NullUtil_getInstance()->NULL_SHORT_ARRAY_ARRAY;
    this->currentlyVisibleCellPositions = NullUtil_getInstance()->NULL_SHORT_ARRAY_ARRAY;
    this->ALL_VISIBLE_TILEDLAYER = SimpleTiledLayer_new(0, 0, 0, 0);
    this->simpleTiledLayer = this->ALL_VISIBLE_TILEDLAYER;
    this->paintSimpleTiledLayer = this->ALL_VISIBLE_TILEDLAYER;
    this->currentIndex = 0;
}


VisibleCellPositionsSingleton* VisibleCellPositionsSingleton_getInstance(void) {
        return VisibleCellPositionsSingleton_instance;
}


void VisibleCellPositionsSingleton_init(VisibleCellPositionsSingleton* this) {
    VisibleCellPositionsSingleton_initFields(this);
        LocalPlayerBuildingEventHandler_addListenerInterface(LocalPlayerBuildingEventHandler_getInstance(), this);
        ScrollMapEventHandler_addListenerInterface(ScrollMapEventHandler_getInstance(), this);
}

VisibleCellPositionsSingleton* VisibleCellPositionsSingleton_new(void) {
    VisibleCellPositionsSingleton* this = calloc(1, sizeof(VisibleCellPositionsSingleton));
    VisibleCellPositionsSingleton_init(this);
    return this;
}


void VisibleCellPositionsSingleton_init(VisibleCellPositionsSingleton* this, SimpleTiledLayer* simpleTiledLayer) {
        this->paintSimpleTiledLayer = this->ALL_VISIBLE_TILEDLAYER;
        this->currentIndex = 0;
        int32_t rows = SimpleTiledLayer_getRows(simpleTiledLayer);
        int32_t columns = SimpleTiledLayer_getColumns(simpleTiledLayer);
        this->stationaryVisibleCellPositions = ((int16_t**) java_array_new2(sizeof(int16_t), rows, columns));
        this->visibleCellPositions = ((int16_t**) java_array_new2(sizeof(int16_t), rows, columns));
        this->currentlyVisibleCellPositions = ((int16_t**) java_array_new2(sizeof(int16_t), rows, columns));
        VisibleCellPositionsSingleton_setSimpleTiledLayer(this, simpleTiledLayer);
}


void VisibleCellPositionsSingleton_onEvent(VisibleCellPositionsSingleton* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


// throws Exception
void VisibleCellPositionsSingleton_onBuildingEvent(VisibleCellPositionsSingleton* this, RTSLayerEvent* event) {
        this->paintSimpleTiledLayer = this->simpleTiledLayer;
}


// throws Exception
void VisibleCellPositionsSingleton_onMoveEvent(VisibleCellPositionsSingleton* this, ScrollMapEvent* scrollMapEvent) {
        VisibleCellPositionsSingleton_move(this, ScrollMapEvent_getDx(scrollMapEvent), ScrollMapEvent_getDy(scrollMapEvent));
}


void VisibleCellPositionsSingleton_addStationaryCellPositions(VisibleCellPositionsSingleton* this, BasicArrayList* list) {
        for (int32_t index = BasicArrayList_size(list) - 1; index >= 0; index--) {
            CellPosition* cellPosition = ((CellPosition*) BasicArrayList_get(list, index));
            this->stationaryVisibleCellPositions[CellPosition_getRow(cellPosition)][CellPosition_getColumn(cellPosition)]++;
        }
}


void VisibleCellPositionsSingleton_removeStationaryCellPositions(VisibleCellPositionsSingleton* this, BasicArrayList* list) {
        for (int32_t index = BasicArrayList_size(list) - 1; index >= 0; index--) {
            CellPosition* cellPosition = ((CellPosition*) BasicArrayList_get(list, index));
            this->stationaryVisibleCellPositions[CellPosition_getRow(cellPosition)][CellPosition_getColumn(cellPosition)]--;
        }
}


void VisibleCellPositionsSingleton_update(VisibleCellPositionsSingleton* this) {
        if (this->currentIndex == 0) {
            int16_t** temp = this->currentlyVisibleCellPositions;
            this->currentlyVisibleCellPositions = this->visibleCellPositions;
            this->visibleCellPositions = temp;
            for (int32_t index = java_array_length(this->visibleCellPositions) - 1; index >= 0; index--) {
                for (int32_t index2 = java_array_length(this->visibleCellPositions[0]) - 1; index2 >= 0; index2--) {
                    this->visibleCellPositions[index][index2] = this->stationaryVisibleCellPositions[index][index2];
                }
            }
        }
        this->currentIndex++;
        if (this->currentIndex > 10) {
            this->currentIndex = 0;
        }
}


bool VisibleCellPositionsSingleton_shouldProcess(VisibleCellPositionsSingleton* this) {
        if (this->currentIndex == 0) {
            return true;
        } else {
            return false;
        }
}


void VisibleCellPositionsSingleton_addCellPositions(VisibleCellPositionsSingleton* this, BasicArrayList* list) {
        for (int32_t index = BasicArrayList_size(list) - 1; index >= 0; index--) {
            CellPosition* cellPosition = ((CellPosition*) BasicArrayList_get(list, index));
            this->visibleCellPositions[CellPosition_getRow(cellPosition)][CellPosition_getColumn(cellPosition)]++;
        }
}


bool VisibleCellPositionsSingleton_isVisible(VisibleCellPositionsSingleton* this, CellPosition* cellPosition) {
        if (this->visibleCellPositions[CellPosition_getRow(cellPosition)][CellPosition_getColumn(cellPosition)] > 0) {
            return true;
        } else {
            return false;
        }
}


void VisibleCellPositionsSingleton_move(VisibleCellPositionsSingleton* this, int32_t dx, int32_t dy) {
        JAVA_CALL(VisibleCellPositionsSingleton_getSimpleTiledLayer(this), moveDXY, dx, dy);
}


void VisibleCellPositionsSingleton_paint(VisibleCellPositionsSingleton* this, Graphics* graphics) {
        SimpleTiledLayer_paint(this->paintSimpleTiledLayer, graphics, this->currentlyVisibleCellPositions);
}


static void VisibleCellPositionsSingleton_setSimpleTiledLayer(VisibleCellPositionsSingleton* this, SimpleTiledLayer* simpleTiledLayer) {
        this->simpleTiledLayer = simpleTiledLayer;
}


SimpleTiledLayer* VisibleCellPositionsSingleton_getSimpleTiledLayer(VisibleCellPositionsSingleton* this) {
        return this->simpleTiledLayer;
}

