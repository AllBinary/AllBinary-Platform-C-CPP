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

typedef struct HealthTechnology HealthTechnology;
struct HealthTechnology {
    RTSInterface RTSInterface_interface;
    int32_t level;
    int32_t maxLevel;
};


HealthTechnology* HealthTechnology_new(int32_t maxLevel);

void HealthTechnology_init(HealthTechnology* this, int32_t maxLevel);
bool HealthTechnology_isCompleted(HealthTechnology* this);
int32_t HealthTechnology_getPercentComplete(HealthTechnology* this);
int32_t HealthTechnology_getLevel(HealthTechnology* this);
int32_t HealthTechnology_getMaxLevel(HealthTechnology* this);
int32_t HealthTechnology_getCost(HealthTechnology* this);
void HealthTechnology_downgrade(HealthTechnology* this);
int32_t HealthTechnology_getDowngradeCost(HealthTechnology* this);
bool HealthTechnology_isDowngradeable(HealthTechnology* this);
int32_t HealthTechnology_getUpgradeCost(HealthTechnology* this);
bool HealthTechnology_isUpgradeable(HealthTechnology* this);
void HealthTechnology_upgrade(HealthTechnology* this);
bool HealthTechnology_isSelfUpgradeable(HealthTechnology* this);

static void HealthTechnology_initFields(HealthTechnology* this) {
    this->level = 0;
    
}


void HealthTechnology_init(HealthTechnology* this, int32_t maxLevel) {
    HealthTechnology_initFields(this);
        this->maxLevel = maxLevel;
}

HealthTechnology* HealthTechnology_new(int32_t maxLevel) {
    HealthTechnology* this = calloc(1, sizeof(HealthTechnology));
    HealthTechnology_init(this, maxLevel);
    return this;
}


bool HealthTechnology_isCompleted(HealthTechnology* this) {
        return false;
}


int32_t HealthTechnology_getPercentComplete(HealthTechnology* this) {
        return 0;
}


int32_t HealthTechnology_getLevel(HealthTechnology* this) {
        return this->level;
}


int32_t HealthTechnology_getMaxLevel(HealthTechnology* this) {
        return this->maxLevel;
}


int32_t HealthTechnology_getCost(HealthTechnology* this) {
        return 0;
}


void HealthTechnology_downgrade(HealthTechnology* this) {
}


int32_t HealthTechnology_getDowngradeCost(HealthTechnology* this) {
        return 0;
}


bool HealthTechnology_isDowngradeable(HealthTechnology* this) {
        return false;
}


int32_t HealthTechnology_getUpgradeCost(HealthTechnology* this) {
        return (HealthTechnology_getLevel(this) * HealthTechnology_getLevel(this)) * 1000;
}


bool HealthTechnology_isUpgradeable(HealthTechnology* this) {
        if (HealthTechnology_getLevel(this) < HealthTechnology_getMaxLevel(this)) {
            return true;
        } else {
            return false;
        }
}


void HealthTechnology_upgrade(HealthTechnology* this) {
        this->level++;
        UnitTechnologySingletonFactory* unitTechnologySingletonFactory = UnitTechnologySingletonFactory_getInstance();
        UnitTechnologySingletonFactory_setHealth(unitTechnologySingletonFactory, UnitTechnologySingletonFactory_getHealth(unitTechnologySingletonFactory) + (HealthTechnology_getLevel(this) * 100));
}


bool HealthTechnology_isSelfUpgradeable(HealthTechnology* this) {
        return false;
}

