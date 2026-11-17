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
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h"

typedef struct NullRTSGameLayerPositionFinder NullRTSGameLayerPositionFinder;
struct NullRTSGameLayerPositionFinder {
    LayerPositionFinderInterface LayerPositionFinderInterface_interface;
};

static NullRTSGameLayerPositionFinder* NullRTSGameLayerPositionFinder_instance;

NullRTSGameLayerPositionFinder* NullRTSGameLayerPositionFinder_new(void);
NullRTSGameLayerPositionFinder* NullRTSGameLayerPositionFinder_getInstance(void);

void NullRTSGameLayerPositionFinder_init(NullRTSGameLayerPositionFinder* this);
AllBinaryLayer* NullRTSGameLayerPositionFinder_getLayerInterface(NullRTSGameLayerPositionFinder* this, GeographicMapCellPosition* geographicMapCellPosition);

// Static fields with runtime initializers: call this once at startup
void NullRTSGameLayerPositionFinder_staticInit(void) {
    NullRTSGameLayerPositionFinder_instance = NullRTSGameLayerPositionFinder_new();
}


NullRTSGameLayerPositionFinder* NullRTSGameLayerPositionFinder_getInstance(void) {
        return NullRTSGameLayerPositionFinder_instance;
}


void NullRTSGameLayerPositionFinder_init(NullRTSGameLayerPositionFinder* this) {
}

NullRTSGameLayerPositionFinder* NullRTSGameLayerPositionFinder_new(void) {
    NullRTSGameLayerPositionFinder* this = calloc(1, sizeof(NullRTSGameLayerPositionFinder));
    NullRTSGameLayerPositionFinder_init(this);
    return this;
}


AllBinaryLayer* NullRTSGameLayerPositionFinder_getLayerInterface(NullRTSGameLayerPositionFinder* this, GeographicMapCellPosition* geographicMapCellPosition) {
        AllBinaryLayer* layerInterface = DropCellPositionHistory_getLayerInterface(DropCellPositionHistory_getInstance(), geographicMapCellPosition);
        return layerInterface;
}

