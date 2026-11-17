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
#include "org/allbinary/game/layer/behavior/GameLayerBehavior.h"
#include "org/allbinary/game/physics/acceleration/BasicAccelerationProperties.h"
#include "org/allbinary/game/physics/velocity/VelocityProperties.h"

typedef struct TopViewGameLayerBehavior TopViewGameLayerBehavior;
struct TopViewGameLayerBehavior {
    GameLayerBehavior base;
    int32_t maxGravityActionIndex;
    bool isJumpAction;
    bool isJumpOver;
    bool isFallingWithoutJumpAttempt;
    int32_t gravityActionIndex;
};


TopViewGameLayerBehavior* TopViewGameLayerBehavior_new(int32_t maxGravityActionIndex);

void TopViewGameLayerBehavior_init(TopViewGameLayerBehavior* this, int32_t maxGravityActionIndex);
void TopViewGameLayerBehavior_gravity(TopViewGameLayerBehavior* this);
void TopViewGameLayerBehavior_land(TopViewGameLayerBehavior* this, VelocityProperties* velocityProperties);
void TopViewGameLayerBehavior_landReset(TopViewGameLayerBehavior* this);
void TopViewGameLayerBehavior_up(TopViewGameLayerBehavior* this, VelocityProperties* velocityProperties, BasicAccelerationProperties* acceleration, InitialJumpBehavior* jumpBehavior, int32_t accelerationMultiplier);
void TopViewGameLayerBehavior_inputFrames(TopViewGameLayerBehavior* this, VelocityProperties* velocityProperties);

static void TopViewGameLayerBehavior_initFields(TopViewGameLayerBehavior* this) {
    
    this->isJumpAction = true;
    this->isJumpOver = false;
    this->isFallingWithoutJumpAttempt = false;
    this->gravityActionIndex = 0;
}


void TopViewGameLayerBehavior_init(TopViewGameLayerBehavior* this, int32_t maxGravityActionIndex) {
    GameLayerBehavior_init(&this->base);
    TopViewGameLayerBehavior_initFields(this);
        this->maxGravityActionIndex = maxGravityActionIndex;
}

TopViewGameLayerBehavior* TopViewGameLayerBehavior_new(int32_t maxGravityActionIndex) {
    TopViewGameLayerBehavior* this = calloc(1, sizeof(TopViewGameLayerBehavior));
    TopViewGameLayerBehavior_init(this, maxGravityActionIndex);
    return this;
}


void TopViewGameLayerBehavior_gravity(TopViewGameLayerBehavior* this) {
        if (this->gravityActionIndex == 0) {
            this->gravityActionIndex++;
            this->isFallingWithoutJumpAttempt = true;
        }
}


void TopViewGameLayerBehavior_land(TopViewGameLayerBehavior* this, VelocityProperties* velocityProperties) {
        JAVA_CALL(VelocityProperties_getVelocityYBasicDecimalP(velocityProperties), setint, 0);
        TopViewGameLayerBehavior_landReset(this);
}


void TopViewGameLayerBehavior_landReset(TopViewGameLayerBehavior* this) {
        this->gravityActionIndex = 0;
        this->isFallingWithoutJumpAttempt = false;
        this->isJumpAction = true;
        this->isJumpOver = false;
}


void TopViewGameLayerBehavior_up(TopViewGameLayerBehavior* this, VelocityProperties* velocityProperties, BasicAccelerationProperties* acceleration, InitialJumpBehavior* jumpBehavior, int32_t accelerationMultiplier) {
        if (!this->isJumpOver) {
            if (this->gravityActionIndex < this->maxGravityActionIndex) {
                int32_t acceleration2 = -BasicAccelerationProperties_getForward(acceleration) * accelerationMultiplier;
                JAVA_CALL(VelocityProperties_getVelocityYBasicDecimalP(velocityProperties), addint, acceleration2);
                VelocityProperties_limitXYToForwardAndReverseMaxVelocity(velocityProperties);
                this->gravityActionIndex++;
            } else {
            }
        } else {
        }
        if (this->isJumpAction) {
            InitialJumpBehavior_process(jumpBehavior);
            this->isJumpAction = false;
        }
}


void TopViewGameLayerBehavior_inputFrames(TopViewGameLayerBehavior* this, VelocityProperties* velocityProperties) {
        if (this->gravityActionIndex > 0 && JAVA_CALL(VelocityProperties_getVelocityYBasicDecimalP(velocityProperties), getUnscaled) > 0) {
            this->isJumpOver = true;
        }
}

