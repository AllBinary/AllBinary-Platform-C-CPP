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
#include "org/allbinary/game/input/LayerPositionFinderInterface.h"
#include "org/allbinary/game/layer/waypoint/WaypointCellPositionHistory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h"

typedef struct AdvancedRTSGameLayerPositionFinder AdvancedRTSGameLayerPositionFinder;
struct AdvancedRTSGameLayerPositionFinder {
    LayerPositionFinderInterface LayerPositionFinderInterface_interface;
};

static AdvancedRTSGameLayerPositionFinder* AdvancedRTSGameLayerPositionFinder_instance;

AdvancedRTSGameLayerPositionFinder* AdvancedRTSGameLayerPositionFinder_new(void);
AdvancedRTSGameLayerPositionFinder* AdvancedRTSGameLayerPositionFinder_getInstance(void);

void AdvancedRTSGameLayerPositionFinder_init(AdvancedRTSGameLayerPositionFinder* this);
AllBinaryLayer* AdvancedRTSGameLayerPositionFinder_getLayerInterface(AdvancedRTSGameLayerPositionFinder* this, GeographicMapCellPosition* geographicMapCellPosition);

// Static fields with runtime initializers: call this once at startup
void AdvancedRTSGameLayerPositionFinder_staticInit(void) {
    AdvancedRTSGameLayerPositionFinder_instance = AdvancedRTSGameLayerPositionFinder_new();
}


AdvancedRTSGameLayerPositionFinder* AdvancedRTSGameLayerPositionFinder_getInstance(void) {
        return AdvancedRTSGameLayerPositionFinder_instance;
}


void AdvancedRTSGameLayerPositionFinder_init(AdvancedRTSGameLayerPositionFinder* this) {
}

AdvancedRTSGameLayerPositionFinder* AdvancedRTSGameLayerPositionFinder_new(void) {
    AdvancedRTSGameLayerPositionFinder* this = calloc(1, sizeof(AdvancedRTSGameLayerPositionFinder));
    AdvancedRTSGameLayerPositionFinder_init(this);
    return this;
}


AllBinaryLayer* AdvancedRTSGameLayerPositionFinder_getLayerInterface(AdvancedRTSGameLayerPositionFinder* this, GeographicMapCellPosition* geographicMapCellPosition) {
        AllBinaryLayer* layerInterface = DropCellPositionHistory_getLayerInterface(DropCellPositionHistory_getInstance(), geographicMapCellPosition);
        if (layerInterface == AllBinaryLayer_NULL_ALLBINARY_LAYER) {
            layerInterface = WaypointCellPositionHistory_getLayerInterface(WaypointCellPositionHistory_getInstance(), geographicMapCellPosition);
        }
        return layerInterface;
}

