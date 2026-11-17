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
// package org.allbinary.game.ag.ai.scroller

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/terrain/BasicTerrainInfo.h"
#include "org/allbinary/game/terrain/TerrainEvent.h"
#include "org/allbinary/game/terrain/TerrainEventCircularStaticPool.h"
#include "org/allbinary/game/terrain/TerrainEventHandler.h"
#include "org/allbinary/game/terrain/TerrainEventListener.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/math/Angle.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/ag/ai/scroller/PacePatrolAI.h"

typedef struct TerrainPatrolAI TerrainPatrolAI;
struct TerrainPatrolAI {
    PacePatrolAI base;
    TerrainEventListener* terrainEventListener;
    Angle* DOWN;
    BasicTerrainInfo* CLIFF;
};


TerrainPatrolAI* TerrainPatrolAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void TerrainPatrolAI_init(TerrainPatrolAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);
void TerrainPatrolAI_update(TerrainPatrolAI* this);
static void TerrainPatrolAI_changeDirectionIfCliffReached(TerrainPatrolAI* this);

static void TerrainPatrolAI_initFields(TerrainPatrolAI* this) {
    this->terrainEventListener = TerrainEventListener_new();
    this->DOWN = AngleFactory_getInstance()->DOWN;
    this->CLIFF = BasicTerrainInfo_new(this->DOWN);
}


void TerrainPatrolAI_init(TerrainPatrolAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        PacePatrolAI_init(&this->base, hashtable, ownerLayerInterface, gameInput);
        TerrainPatrolAI_initFields(this);
        TerrainEventHandler_addListener(TerrainEventHandler_getInstance(ownerLayerInterface), this->terrainEventListener);
        TerrainEventListener_onTerrainEvent(this->terrainEventListener, TerrainEventCircularStaticPool_getNext(TerrainEventCircularStaticPool_getInstance(), this->CLIFF));
}

TerrainPatrolAI* TerrainPatrolAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    TerrainPatrolAI* this = calloc(1, sizeof(TerrainPatrolAI));
    TerrainPatrolAI_init(this, hashtable, ownerLayerInterface, gameInput);
    return this;
}


void TerrainPatrolAI_update(TerrainPatrolAI* this) {
        PacePatrolAI_update((&this->base));
        TerrainPatrolAI_changeDirectionIfCliffReached(this);
}


static void TerrainPatrolAI_changeDirectionIfCliffReached(TerrainPatrolAI* this) {
        BasicArrayList* list = TerrainEventListener_getList(this->terrainEventListener);
        int32_t size = BasicArrayList_size(list);
        for (int32_t index = 0; index < size; index++) {
            TerrainEvent* terrainEvent = ((TerrainEvent*) BasicArrayList_removeAt(list, index));
            BasicTerrainInfo* basicTerrainInfo = TerrainEvent_getBasicTerrainInfo(terrainEvent);
            Angle* angle = BasicTerrainInfo_getAngle(basicTerrainInfo);
            if (angle == this->DOWN) {
                TerrainPatrolAI_nextDirection(this);
                if (!this->isFollowLimitedByTerrain) {
                    JAVA_CALL(this->logUtil, putF, "Following Limited", this, "onTerrainEvent");
                    this->isFollowLimitedByTerrain = true;
                }
            }
        }
}

