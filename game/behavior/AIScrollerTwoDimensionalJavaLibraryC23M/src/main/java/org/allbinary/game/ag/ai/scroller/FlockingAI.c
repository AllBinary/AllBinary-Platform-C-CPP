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
// #include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/ai/BasicAI.h"
#include "org/allbinary/game/identification/BasicGroupFactory.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/layer/identification/GroupLayerManagerListener.h"
#include "org/allbinary/game/layer/weapon/WeaponLayer.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/math/MathUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct FlockingAI FlockingAI;
struct FlockingAI {
    BasicAI base;
    int32_t allowedDistance;
};


FlockingAI* FlockingAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void FlockingAI_init(FlockingAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);
void FlockingAI_processAI(FlockingAI* this, AllBinaryLayerManager* allBinaryLayerManager);
static int32_t FlockingAI_getXYDistance(FlockingAI* this, AllBinaryLayer* allBinaryLayer);

static void FlockingAI_initFields(FlockingAI* this) {
    
}


void FlockingAI_init(FlockingAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        FlockingAI_initFields(this);
        int32_t allowedDistance = ((int32_t) ABHashtable_get(hashtable, BasePatrolAI_MAX_DISTANCE));
        this->allowedDistance = INT_intValue(allowedDistance);
}

FlockingAI* FlockingAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    FlockingAI* this = calloc(1, sizeof(FlockingAI));
    FlockingAI_init(this, hashtable, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void FlockingAI_processAI(FlockingAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        int32_t maxDistance = 0;
        AllBinaryLayer* farAllbinaryLayer = AllBinaryLayer_NULL_ALLBINARY_LAYER;
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
            if (farAllbinaryLayer != AllBinaryLayer_NULL_ALLBINARY_LAYER) {
                ownerLayerInterface = FlockingAI_getOwnerLayerInterface(this);
                if (AllBinaryLayer_getXP(farAllbinaryLayer) < AllBinaryLayer_getXP(ownerLayerInterface)) {
                    FlockingAI_processKeyAI(this, Canvas_LEFT);
                } else if (AllBinaryLayer_getXP(farAllbinaryLayer) > AllBinaryLayer_getXP(ownerLayerInterface)) {
                    FlockingAI_processKeyAI(this, Canvas_RIGHT);
                } else if (AllBinaryLayer_getYP(farAllbinaryLayer) > AllBinaryLayer_getYP(ownerLayerInterface)) {
                    FlockingAI_processKeyAI(this, Canvas_UP);
                } else if (AllBinaryLayer_getYP(farAllbinaryLayer) < AllBinaryLayer_getYP(ownerLayerInterface)) {
                    FlockingAI_processKeyAI(this, Canvas_DOWN);
                }
            }
        }
}


static int32_t FlockingAI_getXYDistance(FlockingAI* this, AllBinaryLayer* allBinaryLayer) {
        AllBinaryLayer* ownerLayerInterface = FlockingAI_getOwnerLayerInterface(this);
        int32_t xTotalDistance = (AllBinaryLayer_getXP(allBinaryLayer) + AllBinaryLayer_getHalfWidth(allBinaryLayer)) - (AllBinaryLayer_getXP(ownerLayerInterface) + AllBinaryLayer_getHalfWidth(ownerLayerInterface));
        int32_t yTotalDistance = (AllBinaryLayer_getYP(allBinaryLayer) + AllBinaryLayer_getHalfHeight(allBinaryLayer)) - (AllBinaryLayer_getYP(ownerLayerInterface) + AllBinaryLayer_getHalfHeight(ownerLayerInterface));
        MathUtil* mathUtil = MathUtil_getInstance();
        int32_t totalDistance = MathUtil_abs(mathUtil, xTotalDistance) + MathUtil_abs(mathUtil, yTotalDistance);
        return totalDistance;
}

