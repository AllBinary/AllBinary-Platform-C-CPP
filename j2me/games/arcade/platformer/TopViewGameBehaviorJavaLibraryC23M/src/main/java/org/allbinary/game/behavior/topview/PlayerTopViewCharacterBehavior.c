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
// package org.allbinary.game.behavior.topview

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/game/tracking/TrackingEventCircularStaticPool.h"
#include "org/allbinary/game/tracking/TrackingEventHandler.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMapUtil.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/game/behavior/topview/TopViewCharacterBehavior.h"

typedef struct PlayerTopViewCharacterBehavior PlayerTopViewCharacterBehavior;
struct PlayerTopViewCharacterBehavior {
    TopViewCharacterBehavior base;
    LogUtil* logUtil;
};


PlayerTopViewCharacterBehavior* PlayerTopViewCharacterBehavior_new(void);
void PlayerTopViewCharacterBehavior_terrainEvent(PlayerTopViewCharacterBehavior* this, AllBinaryLayer* layer, Direction* direction, int32_t x, int32_t y, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellPosition* geographicMapCellPosition);
void PlayerTopViewCharacterBehavior_terrainMove(PlayerTopViewCharacterBehavior* this, AllBinaryLayer* layer, BasicGeographicMap** geographicMapInterfaceArray, int32_t x, int32_t y);
static void PlayerTopViewCharacterBehavior_moveIfOnScreen(PlayerTopViewCharacterBehavior* this, AllBinaryLayer* layer, int32_t ax, int32_t ay);
static bool PlayerTopViewCharacterBehavior_isTiledLayerMoveable(PlayerTopViewCharacterBehavior* this, AllBinaryTiledLayer* terrainTiledLayer, int32_t x, int32_t y);

static void PlayerTopViewCharacterBehavior_initFields(PlayerTopViewCharacterBehavior* this) {
    this->logUtil = LogUtil_getInstance();
}

void PlayerTopViewCharacterBehavior_init(PlayerTopViewCharacterBehavior* this) {
    TopViewCharacterBehavior_init(&this->base);
    PlayerTopViewCharacterBehavior_initFields(this);
}

PlayerTopViewCharacterBehavior* PlayerTopViewCharacterBehavior_new(void) {
    PlayerTopViewCharacterBehavior* this = calloc(1, sizeof(PlayerTopViewCharacterBehavior));
    PlayerTopViewCharacterBehavior_init(this);
    return this;
}


// throws Exception
void PlayerTopViewCharacterBehavior_terrainEvent(PlayerTopViewCharacterBehavior* this, AllBinaryLayer* layer, Direction* direction, int32_t x, int32_t y, BasicGeographicMap** geographicMapInterfaceArray, GeographicMapCellPosition* geographicMapCellPosition) {
        TrackingEventHandler_fireEvent(TrackingEventHandler_getInstance(), TrackingEventCircularStaticPool_getNextInstance(TrackingEventCircularStaticPool_getInstance(), layer));
}


void PlayerTopViewCharacterBehavior_terrainMove(PlayerTopViewCharacterBehavior* this, AllBinaryLayer* layer, BasicGeographicMap** geographicMapInterfaceArray, int32_t x, int32_t y) {
        BasicGeographicMapUtil* basicGeographicMapUtil = BasicGeographicMapUtil_getInstance();
        BasicGeographicMapUtil_setPosition(basicGeographicMapUtil, geographicMapInterfaceArray, x, y);
}


static void PlayerTopViewCharacterBehavior_moveIfOnScreen(PlayerTopViewCharacterBehavior* this, AllBinaryLayer* layer, int32_t ax, int32_t ay) {
}


static bool PlayerTopViewCharacterBehavior_isTiledLayerMoveable(PlayerTopViewCharacterBehavior* this, AllBinaryTiledLayer* terrainTiledLayer, int32_t x, int32_t y) {
        return (AllBinaryTiledLayer_getXP(terrainTiledLayer) + DisplayInfoSingleton_getLastWidth(DisplayInfoSingleton_getInstance()) < AllBinaryTiledLayer_getWidth(terrainTiledLayer) || x < 0) && (AllBinaryTiledLayer_getXP(terrainTiledLayer) > 0 || x > 0);
}

