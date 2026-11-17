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
#include "org/allbinary/animation/RotationAnimation.h"
#include "org/allbinary/layer/LayerInterface.h"
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionTracking.h"
#include "org/allbinary/game/layer/VehiclePropertiesCompositeInterface.h"

typedef struct VehicleLayerInterface VehicleLayerInterface;
struct VehicleLayerInterface {
    BasicArrayList* (*getGameKeyEventList)(void* this);
    BasicDecimal* (*getSpeedBasicDecimal)(void* this);
    bool (*isReadyForExplosion)(void* this);
    RotationAnimation* (*getRotationAnimationInterface)(void* this);
    void (*setRotationAnimationInterface)(void* this, RotationAnimation* animationInterface);
    bool (*isDestroyed)(void* this);
    bool (*isFinish)(void* this);
    int32_t (*getFinalPosition)(void* this);
    void (*handleFinish)(void* this);
    GeographicMapCellPositionTracking* (*getGeographicMapCellPositionTracking)(void* this);
    GeographicMapCellHistory** (*getGeographicMapCellHistoryArray)(void* this);
    void (*setGeographicMapCellHistoryArray)(void* this, GeographicMapCellHistory** geographicMapCellHistory);
};


