// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/scroller/PacePatrolAI.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/direction/DirectionCompositeInterface.h"
#include "org/allbinary/direction/DirectionFactory.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/tracking/TrackingEvent.h"
#include "org/allbinary/game/tracking/TrackingEventHandler.h"
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
#if __has_include("org/allbinary/game/tracking/TrackingEventHandler.h")
#include "org/allbinary/game/tracking/TrackingEventHandler.h"
#endif
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif





static Direction* PacePatrolAI_setFiringDirectionForTargetIfInRange(PacePatrolAI* this);






void PacePatrolAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PacePatrolAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PacePatrolAI", "BasePatrolAI");
    java_register_method("PacePatrolAI", "processAI", (void*) PacePatrolAI_processAI);
    java_register_method("PacePatrolAI", "setFiringDirectionForTargetIfInRange", (void*) PacePatrolAI_setFiringDirectionForTargetIfInRange);
    java_register_method("PacePatrolAI", "disable", (void*) PacePatrolAI_disable);
    java_register_method("PacePatrolAI", "onEvent", (void*) PacePatrolAI_onEvent);
    java_register_method("PacePatrolAI", "onMovement", (void*) PacePatrolAI_onMovement);
    java_register_method("PacePatrolAI", "getFiringDistance", (void*) PacePatrolAI_getFiringDistance);
    java_register_method("PacePatrolAI", "setFiringDistance", (void*) PacePatrolAI_setFiringDistance);
}

static void PacePatrolAI_initFields(PacePatrolAI* this) {
    
    this->firingDistance = 0;
    this->isFollowLimitedByTerrain = false;
}


void PacePatrolAI_init(PacePatrolAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    PacePatrolAI_register();
        BasePatrolAI_init(&this->base, hashtable, ownerLayerInterface, gameInput);
        PacePatrolAI_initFields(this);
        BasicEventHandler_addListenerInterface(TrackingEventHandler_getInstance(), this);
        this->trackingList = BasicArrayListD_new();
}

PacePatrolAI* PacePatrolAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    PacePatrolAI* this = java_object_alloc(sizeof(PacePatrolAI), "PacePatrolAI");
    PacePatrolAI_init(this, hashtable, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void PacePatrolAI_processAI(PacePatrolAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        BasePatrolAI_update(this);
        Direction* direction = PacePatrolAI_setFiringDirectionForTargetIfInRange(this);
        DirectionFactory* directionFactory = DirectionFactory_getInstance();
        if (direction == directionFactory->LEFT) {
            if (this->base.lastKeyDirection != this->base.keyDirection || !this->isFollowLimitedByTerrain) {
                BasicAI_processKeyAI((&this->base), (Canvas_staticInit(), Canvas_LEFT));
            }
            this->base.keyDirection = (Canvas_staticInit(), Canvas_LEFT);
            this->base.lastKeyDirection = this->base.keyDirection;
            this->base.xTotalDistance = 0;
            BasicAI_processKeyAI((&this->base), (Canvas_staticInit(), Canvas_KEY_NUM1));
        } else if (direction == directionFactory->RIGHT) {
            if (this->base.lastKeyDirection != this->base.keyDirection || !this->isFollowLimitedByTerrain) {
                BasicAI_processKeyAI((&this->base), (Canvas_staticInit(), Canvas_RIGHT));
            }
            this->base.keyDirection = (Canvas_staticInit(), Canvas_RIGHT);
            this->base.lastKeyDirection = this->base.keyDirection;
            this->base.xTotalDistance = 0;
            BasicAI_processKeyAI((&this->base), (Canvas_staticInit(), Canvas_KEY_NUM1));
        } else {
            BasicAI_processKeyAI((&this->base), this->base.keyDirection);
        }
}


static Direction* PacePatrolAI_setFiringDirectionForTargetIfInRange(PacePatrolAI* this) {
        DirectionFactory* directionFactory = DirectionFactory_getInstance();
        AllBinaryLayer* ownerLayerInterface = BasicAI_getOwnerLayerInterface(this);
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
                    directionCompositeInterface = ((DirectionCompositeInterface*) BasicAI_getOwnerLayerInterface(this));
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

