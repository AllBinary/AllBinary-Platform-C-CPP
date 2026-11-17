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
// package org.allbinary.media.graphics.geography.map.drop

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
#include "org/allbinary/graphics/CellPositionFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"

typedef struct DropCellPositionHistory DropCellPositionHistory;
struct DropCellPositionHistory {
    CellPositionFactory* cellPositionFactory;
    BasicArrayList* positionList;
    BasicArrayList* layerList;
};

static DropCellPositionHistory* DropCellPositionHistory_SINGLETON;

DropCellPositionHistory* DropCellPositionHistory_new(void);
DropCellPositionHistory* DropCellPositionHistory_getInstance(void);
void DropCellPositionHistory_add(DropCellPositionHistory* this, CellPosition* cellPosition, AllBinaryLayer* layerInterface);
void DropCellPositionHistory_addAll(DropCellPositionHistory* this, BasicArrayList* list, AllBinaryLayer* layerInterface);
void DropCellPositionHistory_remove(DropCellPositionHistory* this, CellPosition* cellPosition);
void DropCellPositionHistory_removeAll(DropCellPositionHistory* this, AllBinaryLayer* layerInterface);
void DropCellPositionHistory_clear(DropCellPositionHistory* this);
bool DropCellPositionHistory_isCellPositionWithDrop(DropCellPositionHistory* this, CellPosition* cellPosition);
bool DropCellPositionHistory_anyCellPositionWithDrop(DropCellPositionHistory* this, BasicArrayList* list);
CellPosition* DropCellPositionHistory_getCellPositionWithDrop(DropCellPositionHistory* this, BasicArrayList* list);
AllBinaryLayer* DropCellPositionHistory_getLayerInterface(DropCellPositionHistory* this, CellPosition* cellPosition);

// Static fields with runtime initializers: call this once at startup
void DropCellPositionHistory_staticInit(void) {
    DropCellPositionHistory_SINGLETON = DropCellPositionHistory_new();
}

static void DropCellPositionHistory_initFields(DropCellPositionHistory* this) {
    this->cellPositionFactory = CellPositionFactory_getInstance();
    this->positionList = BasicArrayListD_new();
    this->layerList = BasicArrayListD_new();
}

void DropCellPositionHistory_init(DropCellPositionHistory* this) {
    DropCellPositionHistory_initFields(this);
}

DropCellPositionHistory* DropCellPositionHistory_new(void) {
    DropCellPositionHistory* this = calloc(1, sizeof(DropCellPositionHistory));
    DropCellPositionHistory_init(this);
    return this;
}


DropCellPositionHistory* DropCellPositionHistory_getInstance(void) {
        return DropCellPositionHistory_SINGLETON;
}


void DropCellPositionHistory_add(DropCellPositionHistory* this, CellPosition* cellPosition, AllBinaryLayer* layerInterface) {
        BasicArrayList_add(this->positionList, cellPosition);
        BasicArrayList_add(this->layerList, layerInterface);
}


void DropCellPositionHistory_addAll(DropCellPositionHistory* this, BasicArrayList* list, AllBinaryLayer* layerInterface) {
        for (int32_t index = BasicArrayList_size(list) - 1; index >= 0; index--) {
            DropCellPositionHistory_add(this, ((CellPosition*) BasicArrayList_get(list, index)), layerInterface);
        }
}


void DropCellPositionHistory_remove(DropCellPositionHistory* this, CellPosition* cellPosition) {
        int32_t index = BasicArrayList_indexOf(this->positionList, cellPosition);
        if (index >= 0) {
            BasicArrayList_removeAt(this->positionList, index);
            BasicArrayList_removeAt(this->layerList, index);
        }
}


void DropCellPositionHistory_removeAll(DropCellPositionHistory* this, AllBinaryLayer* layerInterface) {
        int32_t index = 0;
        while (index != -1) {
            index = BasicArrayList_indexOf(this->layerList, layerInterface);
            if (index >= 0) {
                BasicArrayList_removeAt(this->positionList, index);
                BasicArrayList_removeAt(this->layerList, index);
            }
        }
}


void DropCellPositionHistory_clear(DropCellPositionHistory* this) {
        BasicArrayList_clear(this->positionList);
        BasicArrayList_clear(this->layerList);
}


bool DropCellPositionHistory_isCellPositionWithDrop(DropCellPositionHistory* this, CellPosition* cellPosition) {
        return BasicArrayList_contains(this->positionList, cellPosition);
}


bool DropCellPositionHistory_anyCellPositionWithDrop(DropCellPositionHistory* this, BasicArrayList* list) {
        for (int32_t index = BasicArrayList_size(list) - 1; index >= 0; index--) {
            if (DropCellPositionHistory_isCellPositionWithDrop(this, ((CellPosition*) BasicArrayList_get(list, index)))) {
                return true;
            }
        }
        return false;
}


CellPosition* DropCellPositionHistory_getCellPositionWithDrop(DropCellPositionHistory* this, BasicArrayList* list) {
        CellPosition* cellPosition = nullptr;
        for (int32_t index = BasicArrayList_size(list) - 1; index >= 0; index--) {
            cellPosition = ((CellPosition*) BasicArrayList_get(list, index));
            if (DropCellPositionHistory_isCellPositionWithDrop(this, cellPosition)) {
                return cellPosition;
            }
        }
        return this->cellPositionFactory->NONE;
}


AllBinaryLayer* DropCellPositionHistory_getLayerInterface(DropCellPositionHistory* this, CellPosition* cellPosition) {
        int32_t index = BasicArrayList_indexOf(this->positionList, cellPosition);
        if (index >= 0) {
            return ((AllBinaryLayer*) BasicArrayList_get(this->layerList, index));
        } else {
            return AllBinaryLayer_NULL_ALLBINARY_LAYER;
        }
}

