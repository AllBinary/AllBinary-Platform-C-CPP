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
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/direction/DirectionCompositeInterface.h"
#include "org/allbinary/direction/DirectionFactory.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/tracking/TrackingEvent.h"
#include "org/allbinary/game/tracking/TrackingEventHandler.h"
#include "org/allbinary/game/tracking/TrackingEventListenerInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/layer/LayerInterface.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/ag/ai/scroller/BasePatrolAI.h"

typedef struct PacePatrolAI PacePatrolAI;
struct PacePatrolAI {
    BasePatrolAI base;
    TrackingEventListenerInterface TrackingEventListenerInterface_interface;
    BasicArrayList* trackingList;
    int32_t firingDistance;
    bool isFollowLimitedByTerrain;
};


PacePatrolAI* PacePatrolAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void PacePatrolAI_init(PacePatrolAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);
void PacePatrolAI_processAI(PacePatrolAI* this, AllBinaryLayerManager* allBinaryLayerManager);
static Direction* PacePatrolAI_setFiringDirectionForTargetIfInRange(PacePatrolAI* this);
void PacePatrolAI_disable(PacePatrolAI* this);
void PacePatrolAI_onEvent(PacePatrolAI* this, AllBinaryEventObject* eventObject);
void PacePatrolAI_onMovement(PacePatrolAI* this, TrackingEvent* trackingEvent);
int32_t PacePatrolAI_getFiringDistance(PacePatrolAI* this);
void PacePatrolAI_setFiringDistance(PacePatrolAI* this, int32_t firingDistance);

static void PacePatrolAI_initFields(PacePatrolAI* this) {
    
    this->firingDistance = 0;
    this->isFollowLimitedByTerrain = false;
}


void PacePatrolAI_init(PacePatrolAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        BasePatrolAI_init(&this->base, hashtable, ownerLayerInterface, gameInput);
        PacePatrolAI_initFields(this);
        TrackingEventHandler_addListenerInterface(TrackingEventHandler_getInstance(), this);
        this->trackingList = BasicArrayListD_new();
}

PacePatrolAI* PacePatrolAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    PacePatrolAI* this = calloc(1, sizeof(PacePatrolAI));
    PacePatrolAI_init(this, hashtable, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void PacePatrolAI_processAI(PacePatrolAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        PacePatrolAI_update(this);
        Direction* direction = PacePatrolAI_setFiringDirectionForTargetIfInRange(this);
        DirectionFactory* directionFactory = DirectionFactory_getInstance();
        if (direction == directionFactory->LEFT) {
            if (this->lastKeyDirection != this->base.keyDirection || !this->isFollowLimitedByTerrain) {
                BasePatrolAI_processKeyAI((&this->base), Canvas_LEFT);
            }
            this->base.keyDirection = Canvas_LEFT;
            this->lastKeyDirection = this->base.keyDirection;
            this->base.xTotalDistance = 0;
            BasePatrolAI_processKeyAI((&this->base), Canvas_KEY_NUM1);
        } else if (direction == directionFactory->RIGHT) {
            if (this->lastKeyDirection != this->base.keyDirection || !this->isFollowLimitedByTerrain) {
                BasePatrolAI_processKeyAI((&this->base), Canvas_RIGHT);
            }
            this->base.keyDirection = Canvas_RIGHT;
            this->lastKeyDirection = this->base.keyDirection;
            this->base.xTotalDistance = 0;
            BasePatrolAI_processKeyAI((&this->base), Canvas_KEY_NUM1);
        } else {
            BasePatrolAI_processKeyAI((&this->base), this->keyDirection);
        }
}


static Direction* PacePatrolAI_setFiringDirectionForTargetIfInRange(PacePatrolAI* this) {
        DirectionFactory* directionFactory = DirectionFactory_getInstance();
        AllBinaryLayer* ownerLayerInterface = PacePatrolAI_getOwnerLayerInterface(this);
        Direction* direction = directionFactory->NOT_BORDERED_WITH;
        TrackingEvent* lastTrackingEvent = nullptr;
        LayerInterface* lastTrackingLayerInterface = nullptr;
        DirectionCompositeInterface* directionCompositeInterface = nullptr;
        int32_t size = BasicArrayList_size(this->trackingList);
        for (int32_t index = 0; index < size; index++) {
            lastTrackingEvent = ((TrackingEvent*) BasicArrayList_get(this->trackingList, 0));
            lastTrackingLayerInterface = TrackingEvent_getLayerInterface(lastTrackingEvent);
            int32_t x = LayerInterface_getXP(lastTrackingLayerInterface);
            int32_t y = LayerInterface_getYP(lastTrackingLayerInterface);
            int32_t yDistance = AllBinaryLayer_getYP(ownerLayerInterface) - y - AllBinaryLayer_getHeight(ownerLayerInterface);
            int32_t xDistance = AllBinaryLayer_getXP(ownerLayerInterface) - x - AllBinaryLayer_getWidth(ownerLayerInterface);
            int32_t absXDistance = ((xDistance) < 0 ? -(xDistance) : (xDistance));
            int32_t absYDistance = ((yDistance) < 0 ? -(yDistance) : (yDistance));
            if (absYDistance <= 100) {
                if (absXDistance < PacePatrolAI_getFiringDistance(this) / 2) {
                    directionCompositeInterface = ((DirectionCompositeInterface*) PacePatrolAI_getOwnerLayerInterface(this));
                    if (xDistance < 0 && DirectionCompositeInterface_getDirection(directionCompositeInterface) == directionFactory->RIGHT) {
                        direction = directionFactory->RIGHT;
                    } else if (xDistance > 0 && DirectionCompositeInterface_getDirection(directionCompositeInterface) == directionFactory->LEFT) {
                        direction = directionFactory->LEFT;
                    }
                }
            }
        }
        return direction;
}


void PacePatrolAI_disable(PacePatrolAI* this) {
}


void PacePatrolAI_onEvent(PacePatrolAI* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void PacePatrolAI_onMovement(PacePatrolAI* this, TrackingEvent* trackingEvent) {
        BasicArrayList_clear(this->trackingList);
        BasicArrayList_add(this->trackingList, trackingEvent);
}


int32_t PacePatrolAI_getFiringDistance(PacePatrolAI* this) {
        return this->firingDistance;
}


void PacePatrolAI_setFiringDistance(PacePatrolAI* this, int32_t firingDistance) {
        this->firingDistance = firingDistance;
}

