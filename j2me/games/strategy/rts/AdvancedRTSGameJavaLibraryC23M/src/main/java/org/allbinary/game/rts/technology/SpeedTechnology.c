/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2006 AllBinary 
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
// package org.allbinary.game.rts.technology

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/RTSInterface.h"

typedef struct SpeedTechnology SpeedTechnology;
struct SpeedTechnology {
    RTSInterface RTSInterface_interface;
    int32_t level;
    int32_t maxLevel;
};


SpeedTechnology* SpeedTechnology_new(int32_t maxLevel);

void SpeedTechnology_init(SpeedTechnology* this, int32_t maxLevel);
bool SpeedTechnology_isCompleted(SpeedTechnology* this);
int32_t SpeedTechnology_getPercentComplete(SpeedTechnology* this);
int32_t SpeedTechnology_getLevel(SpeedTechnology* this);
int32_t SpeedTechnology_getMaxLevel(SpeedTechnology* this);
int32_t SpeedTechnology_getCost(SpeedTechnology* this);
void SpeedTechnology_downgrade(SpeedTechnology* this);
int32_t SpeedTechnology_getDowngradeCost(SpeedTechnology* this);
bool SpeedTechnology_isDowngradeable(SpeedTechnology* this);
int32_t SpeedTechnology_getUpgradeCost(SpeedTechnology* this);
bool SpeedTechnology_isUpgradeable(SpeedTechnology* this);
void SpeedTechnology_upgrade(SpeedTechnology* this);
bool SpeedTechnology_isSelfUpgradeable(SpeedTechnology* this);

static void SpeedTechnology_initFields(SpeedTechnology* this) {
    this->level = 0;
    
}


void SpeedTechnology_init(SpeedTechnology* this, int32_t maxLevel) {
    SpeedTechnology_initFields(this);
        this->maxLevel = maxLevel;
}

SpeedTechnology* SpeedTechnology_new(int32_t maxLevel) {
    SpeedTechnology* this = calloc(1, sizeof(SpeedTechnology));
    SpeedTechnology_init(this, maxLevel);
    return this;
}


bool SpeedTechnology_isCompleted(SpeedTechnology* this) {
        return false;
}


int32_t SpeedTechnology_getPercentComplete(SpeedTechnology* this) {
        return 0;
}


int32_t SpeedTechnology_getLevel(SpeedTechnology* this) {
        return this->level;
}


int32_t SpeedTechnology_getMaxLevel(SpeedTechnology* this) {
        return this->maxLevel;
}


int32_t SpeedTechnology_getCost(SpeedTechnology* this) {
        return 0;
}


void SpeedTechnology_downgrade(SpeedTechnology* this) {
}


int32_t SpeedTechnology_getDowngradeCost(SpeedTechnology* this) {
        return 0;
}


bool SpeedTechnology_isDowngradeable(SpeedTechnology* this) {
        return false;
}


int32_t SpeedTechnology_getUpgradeCost(SpeedTechnology* this) {
        return (SpeedTechnology_getLevel(this) * SpeedTechnology_getLevel(this)) * 1000;
}


bool SpeedTechnology_isUpgradeable(SpeedTechnology* this) {
        if (SpeedTechnology_getLevel(this) < SpeedTechnology_getMaxLevel(this)) {
            return true;
        } else {
            return false;
        }
}


void SpeedTechnology_upgrade(SpeedTechnology* this) {
        this->level++;
        UnitTechnologySingletonFactory* unitTechnologySingletonFactory = UnitTechnologySingletonFactory_getInstance();
        UnitTechnologySingletonFactory_setSpeed(unitTechnologySingletonFactory, UnitTechnologySingletonFactory_getSpeed(unitTechnologySingletonFactory) + (SpeedTechnology_getLevel(this) * 100));
}


bool SpeedTechnology_isSelfUpgradeable(SpeedTechnology* this) {
        return false;
}

