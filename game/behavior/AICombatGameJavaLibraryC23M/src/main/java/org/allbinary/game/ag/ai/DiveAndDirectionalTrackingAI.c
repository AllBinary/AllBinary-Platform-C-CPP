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
// package org.allbinary.game.ag.ai

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/direction/DirectionFactory.h"
#include "org/allbinary/direction/DirectionalCompositeInterface.h"
#include "org/allbinary/direction/DirectionalInterface.h"
#include "org/allbinary/game/ai/BasicAI.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEvent.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEventListenerInterface.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#include "org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h"
#include "org/allbinary/game/tracking/TrackingEvent.h"
#include "org/allbinary/game/tracking/TrackingEventHandler.h"
#include "org/allbinary/game/tracking/TrackingEventListenerInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/math/MathUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct DiveAndDirectionalTrackingAI DiveAndDirectionalTrackingAI;
struct DiveAndDirectionalTrackingAI {
    BasicAI base;
    TrackingEventListenerInterface TrackingEventListenerInterface_interface;
    DestroyedEventListenerInterface DestroyedEventListenerInterface_interface;
    MathUtil* mathUtil;
    DirectionFactory* directionFactory;
    GameTickTimeDelayHelper* gameTickTimeDelayHelper;
    TimeDelayHelper* timeDelayHelper;
    BasicArrayList* list;
    DirectionalInterface* directionalInterface;
    BasicVelocityProperties* velocityInterface;
    int32_t* directionToKeyMap;
    bool initialDropped;
    bool diveP;
    Direction* directionOfTarget;
    int32_t MIN_DISTANCE;
    AllBinaryLayer* lastTrackingLayerInterface;
    ArtificialIntelligenceInterface* artificialIntelligenceInterface;
    Visitor* aiVistor;
    Direction* lastDirection;
};


DiveAndDirectionalTrackingAI* DiveAndDirectionalTrackingAI_new(AllBinaryLayer* ownerLayerInterface, ArtificialIntelligenceInterface* artificialIntelligenceInterface, GameInput* gameInput, Visitor* visitor);

void DiveAndDirectionalTrackingAI_init(DiveAndDirectionalTrackingAI* this, AllBinaryLayer* ownerLayerInterface, ArtificialIntelligenceInterface* artificialIntelligenceInterface, GameInput* gameInput, Visitor* visitor);
void DiveAndDirectionalTrackingAI_processAI(DiveAndDirectionalTrackingAI* this, AllBinaryLayerManager* allBinaryLayerManager);
static void DiveAndDirectionalTrackingAI_init(DiveAndDirectionalTrackingAI* this);
static void DiveAndDirectionalTrackingAI_target(DiveAndDirectionalTrackingAI* this, AllBinaryLayerManager* allBinaryLayerManager);
static void DiveAndDirectionalTrackingAI_verticalTargeting(DiveAndDirectionalTrackingAI* this, int32_t x);
static void DiveAndDirectionalTrackingAI_horizontalTargeting(DiveAndDirectionalTrackingAI* this, int32_t y);
static void DiveAndDirectionalTrackingAI_setDive(DiveAndDirectionalTrackingAI* this);
static void DiveAndDirectionalTrackingAI_moveRight(DiveAndDirectionalTrackingAI* this);
static void DiveAndDirectionalTrackingAI_moveLeft(DiveAndDirectionalTrackingAI* this);
static void DiveAndDirectionalTrackingAI_moveDown(DiveAndDirectionalTrackingAI* this);
static void DiveAndDirectionalTrackingAI_moveUp(DiveAndDirectionalTrackingAI* this);
static void DiveAndDirectionalTrackingAI_dive(DiveAndDirectionalTrackingAI* this);
static void DiveAndDirectionalTrackingAI_attack(DiveAndDirectionalTrackingAI* this);
static void DiveAndDirectionalTrackingAI_drop(DiveAndDirectionalTrackingAI* this);
static bool DiveAndDirectionalTrackingAI_isBeyondTarget(DiveAndDirectionalTrackingAI* this);
void DiveAndDirectionalTrackingAI_onEvent(DiveAndDirectionalTrackingAI* this, AllBinaryEventObject* eventObject);
void DiveAndDirectionalTrackingAI_onMovement(DiveAndDirectionalTrackingAI* this, TrackingEvent* trackingEvent);
void DiveAndDirectionalTrackingAI_onDestroyed(DiveAndDirectionalTrackingAI* this, DestroyedEvent* destroyedEvent);
void DiveAndDirectionalTrackingAI_setLastDirection(DiveAndDirectionalTrackingAI* this, Direction* lastDirection);
void DiveAndDirectionalTrackingAI_setLastKey(DiveAndDirectionalTrackingAI* this, int32_t lastKey);
Direction* DiveAndDirectionalTrackingAI_getLastDirection(DiveAndDirectionalTrackingAI* this);
const char* DiveAndDirectionalTrackingAI_toString(DiveAndDirectionalTrackingAI* this);

static void DiveAndDirectionalTrackingAI_initFields(DiveAndDirectionalTrackingAI* this) {
    this->mathUtil = MathUtil_getInstance();
    this->directionFactory = DirectionFactory_getInstance();
    this->gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory_getInstance();
    this->timeDelayHelper = TimeDelayHelper_new(500);
    this->list = BasicArrayListD_new();
    
    
    this->directionToKeyMap = ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ Canvas_LEFT, Canvas_DOWN, Canvas_UP, Canvas_RIGHT }) / sizeof(int32_t), (int32_t[]){ Canvas_LEFT, Canvas_DOWN, Canvas_UP, Canvas_RIGHT }));
    this->initialDropped = false;
    this->diveP = false;
    this->directionOfTarget = Direction_getInstance(0);
    this->MIN_DISTANCE = 40;
    this->lastTrackingLayerInterface = AllBinaryLayer_NULL_ALLBINARY_LAYER;
    
    
    this->lastDirection = DirectionFactory_getInstance()->NO_DIRECTION;
}


void DiveAndDirectionalTrackingAI_init(DiveAndDirectionalTrackingAI* this, AllBinaryLayer* ownerLayerInterface, ArtificialIntelligenceInterface* artificialIntelligenceInterface, GameInput* gameInput, Visitor* visitor) {
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        DiveAndDirectionalTrackingAI_initFields(this);
        this->aiVistor = visitor;
        this->artificialIntelligenceInterface = artificialIntelligenceInterface;
        DirectionalCompositeInterface* directionalCompositeInterface = ((DirectionalCompositeInterface*) DiveAndDirectionalTrackingAI_getOwnerLayerInterface(this));
        this->directionalInterface = DirectionalCompositeInterface_getDirectionalInterface(directionalCompositeInterface);
        VelocityInterfaceCompositeInterface* velocityInterfaceCompositeInterface = ((VelocityInterfaceCompositeInterface*) DiveAndDirectionalTrackingAI_getOwnerLayerInterface(this));
        this->velocityInterface = VelocityInterfaceCompositeInterface_getVelocityProperties(velocityInterfaceCompositeInterface);
        DestroyedEventHandler_addListenerInterface(DestroyedEventHandler_getInstance(), this);
        DiveAndDirectionalTrackingAI_init(this);
}

DiveAndDirectionalTrackingAI* DiveAndDirectionalTrackingAI_new(AllBinaryLayer* ownerLayerInterface, ArtificialIntelligenceInterface* artificialIntelligenceInterface, GameInput* gameInput, Visitor* visitor) {
    DiveAndDirectionalTrackingAI* this = calloc(1, sizeof(DiveAndDirectionalTrackingAI));
    DiveAndDirectionalTrackingAI_init(this, ownerLayerInterface, artificialIntelligenceInterface, gameInput, visitor);
    return this;
}


// throws Exception
void DiveAndDirectionalTrackingAI_processAI(DiveAndDirectionalTrackingAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        if (DiveAndDirectionalTrackingAI_isBeyondTarget(this)) {
            DiveAndDirectionalTrackingAI_init(this);
            BasicVelocityProperties_zero(this->velocityInterface);
        }
        if (!this->diveP) {
            DiveAndDirectionalTrackingAI_target(this, allBinaryLayerManager);
        } else {
            DiveAndDirectionalTrackingAI_dive(this);
            DiveAndDirectionalTrackingAI_attack(this);
        }
        BasicArrayList_clear(this->list);
}


static void DiveAndDirectionalTrackingAI_init(DiveAndDirectionalTrackingAI* this) {
        this->diveP = false;
        this->directionOfTarget = DirectionFactory_getInstance()->NOT_BORDERED_WITH;
        TrackingEventHandler_addListenerInterface(TrackingEventHandler_getInstance(), this);
}


// throws Exception
static void DiveAndDirectionalTrackingAI_target(DiveAndDirectionalTrackingAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        if (BasicArrayList_size(this->list) == 0) {
            return;
        }
        TrackingEvent* lastTrackingEvent = ((TrackingEvent*) BasicArrayList_removeAt(this->list, 0));
        this->lastTrackingLayerInterface = TrackingEvent_getLayerInterface(lastTrackingEvent);
        AllBinaryLayer* layerInterface = this->lastTrackingLayerInterface;
        AllBinaryLayer* ownerLayerInterface = DiveAndDirectionalTrackingAI_getOwnerLayerInterface(this);
        Group** groupArray = AllBinaryLayer_getGroupInterface(layerInterface);
        Group** ownerGroupArray = AllBinaryLayer_getGroupInterface(ownerLayerInterface);
        if (groupArray == ownerGroupArray) {
            return;
        }
        int32_t x = AllBinaryLayer_getXP(this->lastTrackingLayerInterface);
        int32_t y = AllBinaryLayer_getYP(this->lastTrackingLayerInterface);
        int32_t yDistance = AllBinaryLayer_getYP(ownerLayerInterface) - y - AllBinaryLayer_getHeight(ownerLayerInterface);
        int32_t xDistance = AllBinaryLayer_getXP(ownerLayerInterface) - x - AllBinaryLayer_getWidth(ownerLayerInterface);
        DirectionFactory* directionFactory = DirectionFactory_getInstance();
        if (MathUtil_abs(this->mathUtil, yDistance) > MathUtil_abs(this->mathUtil, xDistance)) {
            if (yDistance > this->MIN_DISTANCE) {
                this->directionOfTarget = directionFactory->UP;
            } else if (yDistance < -this->MIN_DISTANCE) {
                this->directionOfTarget = directionFactory->DOWN;
            }
        } else {
            if (xDistance > this->MIN_DISTANCE) {
                this->directionOfTarget = directionFactory->LEFT;
            } else if (xDistance < -this->MIN_DISTANCE) {
                this->directionOfTarget = directionFactory->RIGHT;
            }
        }
        if (!this->initialDropped && this->directionOfTarget != directionFactory->NOT_BORDERED_WITH) {
            DiveAndDirectionalTrackingAI_drop(this);
        }
        if (this->initialDropped) {
            if (this->directionOfTarget == directionFactory->UP || this->directionOfTarget == directionFactory->DOWN) {
                DiveAndDirectionalTrackingAI_verticalTargeting(this, x);
            } else if (this->directionOfTarget == directionFactory->LEFT || this->directionOfTarget == directionFactory->RIGHT) {
                DiveAndDirectionalTrackingAI_horizontalTargeting(this, y);
            } else {
                ArtificialIntelligenceInterface_processAI(this->artificialIntelligenceInterface, allBinaryLayerManager);
            }
        }
}


// throws Exception
static void DiveAndDirectionalTrackingAI_verticalTargeting(DiveAndDirectionalTrackingAI* this, int32_t x) {
        AllBinaryLayer* ownerLayerInterface = DiveAndDirectionalTrackingAI_getOwnerLayerInterface(this);
        if (AllBinaryLayer_getXP(ownerLayerInterface) < x) {
            DiveAndDirectionalTrackingAI_moveRight(this);
        }
        if (AllBinaryLayer_getXP(ownerLayerInterface) > x) {
            DiveAndDirectionalTrackingAI_moveLeft(this);
        }
        if (AllBinaryLayer_getXP(ownerLayerInterface) > x - 3 && AllBinaryLayer_getXP(ownerLayerInterface) < x + 3) {
            DiveAndDirectionalTrackingAI_setDive(this);
        }
}


// throws Exception
static void DiveAndDirectionalTrackingAI_horizontalTargeting(DiveAndDirectionalTrackingAI* this, int32_t y) {
        AllBinaryLayer* ownerLayerInterface = DiveAndDirectionalTrackingAI_getOwnerLayerInterface(this);
        if (AllBinaryLayer_getYP(ownerLayerInterface) < y) {
            DiveAndDirectionalTrackingAI_moveDown(this);
        }
        if (AllBinaryLayer_getYP(ownerLayerInterface) > y) {
            DiveAndDirectionalTrackingAI_moveUp(this);
        }
        if (AllBinaryLayer_getYP(ownerLayerInterface) > y - 3 && AllBinaryLayer_getYP(ownerLayerInterface) < y + 3) {
            DiveAndDirectionalTrackingAI_setDive(this);
        }
}


static void DiveAndDirectionalTrackingAI_setDive(DiveAndDirectionalTrackingAI* this) {
        this->diveP = true;
        BasicVelocityProperties_zero(this->velocityInterface);
        TrackingEventHandler_removeListener(TrackingEventHandler_getInstance(), this);
}


// throws Exception
static void DiveAndDirectionalTrackingAI_moveRight(DiveAndDirectionalTrackingAI* this) {
        DiveAndDirectionalTrackingAI_setLastDirection(this, this->directionFactory->RIGHT);
        DirectionalInterface_setFrameByDirection(this->directionalInterface, this->lastDirection);
        Visitor_visit(this->aiVistor, this);
}


// throws Exception
static void DiveAndDirectionalTrackingAI_moveLeft(DiveAndDirectionalTrackingAI* this) {
        DiveAndDirectionalTrackingAI_setLastDirection(this, this->directionFactory->LEFT);
        DirectionalInterface_setFrameByDirection(this->directionalInterface, this->lastDirection);
        Visitor_visit(this->aiVistor, this);
}


// throws Exception
static void DiveAndDirectionalTrackingAI_moveDown(DiveAndDirectionalTrackingAI* this) {
        DiveAndDirectionalTrackingAI_setLastDirection(this, this->directionFactory->DOWN);
        DirectionalInterface_setFrameByDirection(this->directionalInterface, this->lastDirection);
        Visitor_visit(this->aiVistor, this);
}


// throws Exception
static void DiveAndDirectionalTrackingAI_moveUp(DiveAndDirectionalTrackingAI* this) {
        DiveAndDirectionalTrackingAI_setLastDirection(this, this->directionFactory->UP);
        DirectionalInterface_setFrameByDirection(this->directionalInterface, this->lastDirection);
        Visitor_visit(this->aiVistor, this);
}


// throws Exception
static void DiveAndDirectionalTrackingAI_dive(DiveAndDirectionalTrackingAI* this) {
        DirectionalInterface_setFrameByDirection(this->directionalInterface, this->directionOfTarget);
        Visitor_visit(this->aiVistor, this);
}


// throws Exception
static void DiveAndDirectionalTrackingAI_attack(DiveAndDirectionalTrackingAI* this) {
        BasicAI_processKeyAI((&this->base), Canvas_KEY_NUM1);
}


// throws Exception
static void DiveAndDirectionalTrackingAI_drop(DiveAndDirectionalTrackingAI* this) {
        if (TimeDelayHelper_isTime(this->timeDelayHelper, this->gameTickTimeDelayHelper->startTime)) {
            this->initialDropped = true;
            Visitor_visit(this->aiVistor, this);
        }
}


static bool DiveAndDirectionalTrackingAI_isBeyondTarget(DiveAndDirectionalTrackingAI* this) {
        if (this->directionOfTarget == this->directionFactory->DOWN) {
            if (JAVA_CALL(DiveAndDirectionalTrackingAI_getOwnerLayerInterface(this), getYP) > AllBinaryLayer_getYP(this->lastTrackingLayerInterface) + this->MIN_DISTANCE) {
                return true;
            } else {
                return false;
            }
        } else if (this->directionOfTarget == this->directionFactory->UP) {
            if (JAVA_CALL(DiveAndDirectionalTrackingAI_getOwnerLayerInterface(this), getYP) < AllBinaryLayer_getYP(this->lastTrackingLayerInterface) + this->MIN_DISTANCE) {
                return true;
            } else {
                return false;
            }
        } else if (this->directionOfTarget == this->directionFactory->RIGHT) {
            if (JAVA_CALL(DiveAndDirectionalTrackingAI_getOwnerLayerInterface(this), getXP) > AllBinaryLayer_getXP(this->lastTrackingLayerInterface) + this->MIN_DISTANCE) {
                return true;
            } else {
                return false;
            }
        } else if (this->directionOfTarget == this->directionFactory->LEFT) {
            if (JAVA_CALL(DiveAndDirectionalTrackingAI_getOwnerLayerInterface(this), getXP) < AllBinaryLayer_getXP(this->lastTrackingLayerInterface) + this->MIN_DISTANCE) {
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
}


void DiveAndDirectionalTrackingAI_onEvent(DiveAndDirectionalTrackingAI* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void DiveAndDirectionalTrackingAI_onMovement(DiveAndDirectionalTrackingAI* this, TrackingEvent* trackingEvent) {
        BasicArrayList_add(this->list, trackingEvent);
}


void DiveAndDirectionalTrackingAI_onDestroyed(DiveAndDirectionalTrackingAI* this, DestroyedEvent* destroyedEvent) {
        if (DiveAndDirectionalTrackingAI_getOwnerLayerInterface(this) == DestroyedEvent_getLayerInterface(destroyedEvent)) {
            TrackingEventHandler_removeListener(TrackingEventHandler_getInstance(), this);
            DestroyedEventHandler_removeListener(DestroyedEventHandler_getInstance(), this);
        }
}


void DiveAndDirectionalTrackingAI_setLastDirection(DiveAndDirectionalTrackingAI* this, Direction* lastDirection) {
        this->lastDirection = lastDirection;
        int32_t value = JAVA_CALL(DiveAndDirectionalTrackingAI_getLastDirection(this), getValue);
        if (value < 4) {
            BasicAI_setLastKey((&this->base), this->directionToKeyMap[value]);
        }
}


void DiveAndDirectionalTrackingAI_setLastKey(DiveAndDirectionalTrackingAI* this, int32_t lastKey) {
        BasicAI_setLastKey((&this->base), lastKey);
        if (DiveAndDirectionalTrackingAI_getLastKey(this) == Canvas_LEFT) {
            this->lastDirection = DirectionFactory_getInstance()->LEFT;
        } else if (DiveAndDirectionalTrackingAI_getLastKey(this) == Canvas_DOWN) {
            this->lastDirection = DirectionFactory_getInstance()->DOWN;
        } else if (DiveAndDirectionalTrackingAI_getLastKey(this) == Canvas_UP) {
            this->lastDirection = DirectionFactory_getInstance()->UP;
        } else if (DiveAndDirectionalTrackingAI_getLastKey(this) == Canvas_RIGHT) {
            this->lastDirection = DirectionFactory_getInstance()->RIGHT;
        }
}


Direction* DiveAndDirectionalTrackingAI_getLastDirection(DiveAndDirectionalTrackingAI* this) {
        return this->lastDirection;
}


const char* DiveAndDirectionalTrackingAI_toString(DiveAndDirectionalTrackingAI* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, BasicAI_toString((&this->base)));
        StringMaker_append(stringBuffer, " LastDirection: ");
        StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), DiveAndDirectionalTrackingAI_getLastDirection(this)));
        return StringMaker_toString(stringBuffer);
}

