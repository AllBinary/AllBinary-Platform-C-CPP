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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h"
#include "org/allbinary/game/input/LayerPositionFinderInterface.h"

typedef struct RTSGameLayerPositionFinder RTSGameLayerPositionFinder;
struct RTSGameLayerPositionFinder {
    LayerPositionFinderInterface LayerPositionFinderInterface_interface;
};

static RTSGameLayerPositionFinder* RTSGameLayerPositionFinder_instance;

RTSGameLayerPositionFinder* RTSGameLayerPositionFinder_new(void);
RTSGameLayerPositionFinder* RTSGameLayerPositionFinder_getInstance(void);

void RTSGameLayerPositionFinder_init(RTSGameLayerPositionFinder* this);
AllBinaryLayer* RTSGameLayerPositionFinder_getLayerInterface(RTSGameLayerPositionFinder* this, GeographicMapCellPosition* geographicMapCellPosition);

// Static fields with runtime initializers: call this once at startup
void RTSGameLayerPositionFinder_staticInit(void) {
    RTSGameLayerPositionFinder_instance = RTSGameLayerPositionFinder_new();
}


RTSGameLayerPositionFinder* RTSGameLayerPositionFinder_getInstance(void) {
        return RTSGameLayerPositionFinder_instance;
}


void RTSGameLayerPositionFinder_init(RTSGameLayerPositionFinder* this) {
}

RTSGameLayerPositionFinder* RTSGameLayerPositionFinder_new(void) {
    RTSGameLayerPositionFinder* this = calloc(1, sizeof(RTSGameLayerPositionFinder));
    RTSGameLayerPositionFinder_init(this);
    return this;
}


AllBinaryLayer* RTSGameLayerPositionFinder_getLayerInterface(RTSGameLayerPositionFinder* this, GeographicMapCellPosition* geographicMapCellPosition) {
        return DropCellPositionHistory_getLayerInterface(DropCellPositionHistory_getInstance(), geographicMapCellPosition);
}

