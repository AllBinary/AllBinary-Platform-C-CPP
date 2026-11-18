// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/scroller/FlockingAI.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/identification/BasicGroupFactory.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/layer/identification/GroupLayerManagerListener.h"
#include "org/allbinary/game/layer/weapon/WeaponLayer.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/math/MathUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/ag/ai/scroller/BasePatrolAI.h"
#if __has_include("org/allbinary/game/identification/BasicGroupFactory.h")
#include "org/allbinary/game/identification/BasicGroupFactory.h"
#endif





static int32_t FlockingAI_getXYDistance(FlockingAI* this, AllBinaryLayer* allBinaryLayer);

void FlockingAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void FlockingAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FlockingAI", "BasicAI");
    java_register_method("FlockingAI", "processAI", (void*) FlockingAI_processAI);
    java_register_method("FlockingAI", "getXYDistance", (void*) FlockingAI_getXYDistance);
}

static void FlockingAI_initFields(FlockingAI* this) {
    
}


void FlockingAI_init(FlockingAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    FlockingAI_register();
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        FlockingAI_initFields(this);
        int32_t allowedDistance = ((int32_t) Hashtable_get(hashtable, (BasePatrolAI_staticInit(), BasePatrolAI_MAX_DISTANCE)));
        this->allowedDistance = Integer_intValue(allowedDistance);
}

FlockingAI* FlockingAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    FlockingAI* this = java_object_alloc(sizeof(FlockingAI), "FlockingAI");
    FlockingAI_init(this, hashtable, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void FlockingAI_processAI(FlockingAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        int32_t maxDistance = 0;
        AllBinaryLayer* farAllbinaryLayer = (AllBinaryLayer_staticInit(), AllBinaryLayer_NULL_ALLBINARY_LAYER);
        GroupLayerManagerListener* groupLayerManagerListener = GroupLayerManagerListener_getInstance();
        BasicArrayList* list = GroupLayerManagerListener_getList(groupLayerManagerListener, BasicGroupFactory_getInstance()->ENEMY);
        int32_t size = BasicArrayList_size(list);
        AllBinaryLayer* allBinaryLayer = nullptr;
        AllBinaryLayer* ownerLayerInterface = nullptr;
        for (int32_t index = 0; index < size; index++) {
            allBinaryLayer = ((AllBinaryLayer*) BasicArrayList_get(list, index));
            if (AllBinaryLayer_getType(allBinaryLayer) != WeaponLayer_getStaticType()) {
                int32_t distance = FlockingAI_getXYDistance(this, allBinaryLayer);
                if (distance > maxDistance) {
                    maxDistance = distance;
                    farAllbinaryLayer = allBinaryLayer;
                    if (distance > this->allowedDistance) {
                        break;
                    }
                }
            }
        }
        if (maxDistance > this->allowedDistance) {
            if (farAllbinaryLayer != (AllBinaryLayer_staticInit(), AllBinaryLayer_NULL_ALLBINARY_LAYER)) {
                ownerLayerInterface = BasicAI_getOwnerLayerInterface(this);
                if (AllBinaryLayer_getXP(farAllbinaryLayer) < AllBinaryLayer_getXP(ownerLayerInterface)) {
                    BasicAI_processKeyAI(this, (Canvas_staticInit(), Canvas_LEFT));
                } else if (AllBinaryLayer_getXP(farAllbinaryLayer) > AllBinaryLayer_getXP(ownerLayerInterface)) {
                    BasicAI_processKeyAI(this, (Canvas_staticInit(), Canvas_RIGHT));
                } else if (AllBinaryLayer_getYP(farAllbinaryLayer) > AllBinaryLayer_getYP(ownerLayerInterface)) {
                    BasicAI_processKeyAI(this, (Canvas_staticInit(), Canvas_UP));
                } else if (AllBinaryLayer_getYP(farAllbinaryLayer) < AllBinaryLayer_getYP(ownerLayerInterface)) {
                    BasicAI_processKeyAI(this, (Canvas_staticInit(), Canvas_DOWN));
                }
            }
        }
}


static int32_t FlockingAI_getXYDistance(FlockingAI* this, AllBinaryLayer* allBinaryLayer) {
        AllBinaryLayer* ownerLayerInterface = BasicAI_getOwnerLayerInterface(this);
        int32_t xTotalDistance = (AllBinaryLayer_getXP(allBinaryLayer) + AllBinaryLayer_getHalfWidth(allBinaryLayer)) - (AllBinaryLayer_getXP(ownerLayerInterface) + AllBinaryLayer_getHalfWidth(ownerLayerInterface));
        int32_t yTotalDistance = (AllBinaryLayer_getYP(allBinaryLayer) + AllBinaryLayer_getHalfHeight(allBinaryLayer)) - (AllBinaryLayer_getYP(ownerLayerInterface) + AllBinaryLayer_getHalfHeight(ownerLayerInterface));
        MathUtil* mathUtil = MathUtil_getInstance();
        int32_t totalDistance = MathUtil_abs(mathUtil, xTotalDistance) + MathUtil_abs(mathUtil, yTotalDistance);
        return totalDistance;
}

