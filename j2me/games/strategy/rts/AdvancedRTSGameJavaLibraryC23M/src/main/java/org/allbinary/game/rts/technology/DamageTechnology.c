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

typedef struct DamageTechnology DamageTechnology;
struct DamageTechnology {
    RTSInterface RTSInterface_interface;
    int32_t level;
    int32_t maxLevel;
};


DamageTechnology* DamageTechnology_new(int32_t maxLevel);

void DamageTechnology_init(DamageTechnology* this, int32_t maxLevel);
bool DamageTechnology_isCompleted(DamageTechnology* this);
int32_t DamageTechnology_getPercentComplete(DamageTechnology* this);
int32_t DamageTechnology_getLevel(DamageTechnology* this);
int32_t DamageTechnology_getMaxLevel(DamageTechnology* this);
int32_t DamageTechnology_getCost(DamageTechnology* this);
void DamageTechnology_downgrade(DamageTechnology* this);
int32_t DamageTechnology_getDowngradeCost(DamageTechnology* this);
bool DamageTechnology_isDowngradeable(DamageTechnology* this);
int32_t DamageTechnology_getUpgradeCost(DamageTechnology* this);
bool DamageTechnology_isUpgradeable(DamageTechnology* this);
void DamageTechnology_upgrade(DamageTechnology* this);
bool DamageTechnology_isSelfUpgradeable(DamageTechnology* this);

static void DamageTechnology_initFields(DamageTechnology* this) {
    this->level = 0;
    
}


void DamageTechnology_init(DamageTechnology* this, int32_t maxLevel) {
    DamageTechnology_initFields(this);
        this->maxLevel = maxLevel;
}

DamageTechnology* DamageTechnology_new(int32_t maxLevel) {
    DamageTechnology* this = calloc(1, sizeof(DamageTechnology));
    DamageTechnology_init(this, maxLevel);
    return this;
}


bool DamageTechnology_isCompleted(DamageTechnology* this) {
        return false;
}


int32_t DamageTechnology_getPercentComplete(DamageTechnology* this) {
        return 0;
}


int32_t DamageTechnology_getLevel(DamageTechnology* this) {
        return this->level;
}


int32_t DamageTechnology_getMaxLevel(DamageTechnology* this) {
        return this->maxLevel;
}


int32_t DamageTechnology_getCost(DamageTechnology* this) {
        return 0;
}


void DamageTechnology_downgrade(DamageTechnology* this) {
}


int32_t DamageTechnology_getDowngradeCost(DamageTechnology* this) {
        return 0;
}


bool DamageTechnology_isDowngradeable(DamageTechnology* this) {
        return false;
}


int32_t DamageTechnology_getUpgradeCost(DamageTechnology* this) {
        return (DamageTechnology_getLevel(this) * DamageTechnology_getLevel(this)) * 1000;
}


bool DamageTechnology_isUpgradeable(DamageTechnology* this) {
        if (DamageTechnology_getLevel(this) < DamageTechnology_getMaxLevel(this)) {
            return true;
        } else {
            return false;
        }
}


void DamageTechnology_upgrade(DamageTechnology* this) {
        this->level++;
        UnitTechnologySingletonFactory* unitTechnologySingletonFactory = UnitTechnologySingletonFactory_getInstance();
        UnitTechnologySingletonFactory_setDamage(unitTechnologySingletonFactory, UnitTechnologySingletonFactory_getDamage(unitTechnologySingletonFactory) + (DamageTechnology_getLevel(this) * 100));
}


bool DamageTechnology_isSelfUpgradeable(DamageTechnology* this) {
        return false;
}

