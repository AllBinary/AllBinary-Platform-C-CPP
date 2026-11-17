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
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#include "org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/math/MathUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct BasePatrolAI BasePatrolAI;
struct BasePatrolAI {
    BasicAI base;
    int32_t maxDistance;
    int32_t currentDistance;
    int32_t xTotalDistance;
    int32_t lastKeyDirection;
    int32_t keyDirection;
};

int32_t BasePatrolAI_MAX_DISTANCE;
int32_t BasePatrolAI_DIRECTION_ARRAY;
int32_t BasePatrolAI_FIRING_DISTANCE;
int32_t BasePatrolAI_SPEED;

BasePatrolAI* BasePatrolAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void BasePatrolAI_init(BasePatrolAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);
void BasePatrolAI_update(BasePatrolAI* this);
static void BasePatrolAI_updateTotalDistance(BasePatrolAI* this);
static void BasePatrolAI_changeDirectionIfReachedPacingAreaMax(BasePatrolAI* this);
void BasePatrolAI_nextDirection(BasePatrolAI* this);
void BasePatrolAI_disable(BasePatrolAI* this);

// Static fields with runtime initializers: call this once at startup
void BasePatrolAI_staticInit(void) {
    BasePatrolAI_MAX_DISTANCE = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 2);
    BasePatrolAI_DIRECTION_ARRAY = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 3);
    BasePatrolAI_FIRING_DISTANCE = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 4);
    BasePatrolAI_SPEED = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 5);
}

static void BasePatrolAI_initFields(BasePatrolAI* this) {
    
    
    this->xTotalDistance = 0;
    this->lastKeyDirection = Canvas_RIGHT;
    this->keyDirection = Canvas_RIGHT;
}


void BasePatrolAI_init(BasePatrolAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        BasePatrolAI_initFields(this);
        this->maxDistance = ((int32_t) ABHashtable_get(hashtable, BasePatrolAI_MAX_DISTANCE));
        this->currentDistance = Integer_intValue(this->maxDistance);
}

BasePatrolAI* BasePatrolAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    BasePatrolAI* this = calloc(1, sizeof(BasePatrolAI));
    BasePatrolAI_init(this, hashtable, ownerLayerInterface, gameInput);
    return this;
}


void BasePatrolAI_update(BasePatrolAI* this) {
        BasePatrolAI_updateTotalDistance(this);
        BasePatrolAI_changeDirectionIfReachedPacingAreaMax(this);
}


static void BasePatrolAI_updateTotalDistance(BasePatrolAI* this) {
        VelocityInterfaceCompositeInterface* velocityInterfaceCompositeInterface = ((VelocityInterfaceCompositeInterface*) BasePatrolAI_getOwnerLayerInterface(this));
        BasicVelocityProperties* velocityProperties = VelocityInterfaceCompositeInterface_getVelocityProperties(velocityInterfaceCompositeInterface);
        this->xTotalDistance += JAVA_CALL(BasicVelocityProperties_getVelocityXBasicDecimalP(velocityProperties), getScaled);
}


static void BasePatrolAI_changeDirectionIfReachedPacingAreaMax(BasePatrolAI* this) {
        MathUtil* mathUtil = MathUtil_getInstance();
        int32_t totalDistance = MathUtil_abs(mathUtil, this->xTotalDistance);
        if (totalDistance > this->currentDistance) {
            BasePatrolAI_nextDirection(this);
        }
}


void BasePatrolAI_nextDirection(BasePatrolAI* this) {
        if (this->lastKeyDirection == Canvas_LEFT) {
            this->keyDirection = Canvas_RIGHT;
            this->lastKeyDirection = this->keyDirection;
            this->xTotalDistance = 0;
        } else if (this->lastKeyDirection == Canvas_RIGHT) {
            this->keyDirection = Canvas_LEFT;
            this->lastKeyDirection = this->keyDirection;
            this->xTotalDistance = 0;
        }
}


void BasePatrolAI_disable(BasePatrolAI* this) {
}

