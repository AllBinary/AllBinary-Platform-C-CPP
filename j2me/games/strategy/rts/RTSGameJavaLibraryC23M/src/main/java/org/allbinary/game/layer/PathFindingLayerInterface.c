/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
#include "org/allbinary/game/combat/destroy/DestroyableInterface.h"
#include "org/allbinary/game/identification/GroupInterfaceCompositeInterface.h"
#include "org/allbinary/game/input/GameKeyEventSourceInterface.h"
#include "org/allbinary/game/layer/waypoint/WaypointLayerInterface.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct PathFindingLayerInterface PathFindingLayerInterface;
struct PathFindingLayerInterface {
    BasicArrayList* (*getEndGeographicMapCellPositionList)(void* this);
    bool (*shouldHandleStartSameAsEnd)(void* this);
    GeographicMapCellPositionAreaBase* (*getGeographicMapCellPositionArea)(void* this);
    SelectionHudPaintable* (*getHudPaintable)(void* this);
    void (*handleCost)(void* this, PathFindingLayerInterface* ownerLayer);
    PathFindingLayerInterface* (*getParentLayer)(void* this);
    RTSLayer2LogHelper* (*getRTSLayer2LogHelper)(void* this);
    void (*setTarget)(void* this, PathFindingLayerInterface* targetGameLayer);
};


