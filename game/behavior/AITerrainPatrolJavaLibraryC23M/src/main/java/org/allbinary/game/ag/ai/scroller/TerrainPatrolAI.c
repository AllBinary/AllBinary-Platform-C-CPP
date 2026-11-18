// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/scroller/TerrainPatrolAI.h"
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
#if __has_include("org/allbinary/math/AngleFactory.h")
#include "org/allbinary/math/AngleFactory.h"
#endif
#if __has_include("org/allbinary/game/terrain/TerrainEventHandler.h")
#include "org/allbinary/game/terrain/TerrainEventHandler.h"
#endif
#if __has_include("org/allbinary/game/terrain/TerrainEventCircularStaticPool.h")
#include "org/allbinary/game/terrain/TerrainEventCircularStaticPool.h"
#endif





static void TerrainPatrolAI_changeDirectionIfCliffReached(TerrainPatrolAI* this);

void TerrainPatrolAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TerrainPatrolAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TerrainPatrolAI", "PacePatrolAI");
    java_register_method("TerrainPatrolAI", "update", (void*) TerrainPatrolAI_update);
    java_register_method("TerrainPatrolAI", "changeDirectionIfCliffReached", (void*) TerrainPatrolAI_changeDirectionIfCliffReached);
}

static void TerrainPatrolAI_initFields(TerrainPatrolAI* this) {
    this->terrainEventListener = TerrainEventListener_new();
    this->DOWN = AngleFactory_getInstance()->DOWN;
    this->CLIFF = BasicTerrainInfo_new(this->DOWN);
}


void TerrainPatrolAI_init(TerrainPatrolAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    TerrainPatrolAI_register();
        PacePatrolAI_init(&this->base, hashtable, ownerLayerInterface, gameInput);
        TerrainPatrolAI_initFields(this);
        TerrainEventHandler_addListener(TerrainEventHandler_getInstance(ownerLayerInterface), this->terrainEventListener);
        TerrainEventListener_onTerrainEvent(this->terrainEventListener, TerrainEventCircularStaticPool_getNext(TerrainEventCircularStaticPool_getInstance(), this->CLIFF));
}

TerrainPatrolAI* TerrainPatrolAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    TerrainPatrolAI* this = java_object_alloc(sizeof(TerrainPatrolAI), "TerrainPatrolAI");
    TerrainPatrolAI_init(this, hashtable, ownerLayerInterface, gameInput);
    return this;
}


void TerrainPatrolAI_update(TerrainPatrolAI* this) {
        BasePatrolAI_update((&this->base));
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
                BasePatrolAI_nextDirection(this);
                if (!this->base.isFollowLimitedByTerrain) {
                    LogUtil_putF(this->base.base.base.logUtil, "Following Limited", this, "onTerrainEvent");
                    this->base.isFollowLimitedByTerrain = true;
                }
            }
        }
}

