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

typedef struct RepairTechnology RepairTechnology;
struct RepairTechnology {
    RTSInterface RTSInterface_interface;
    int32_t level;
    int32_t maxLevel;
};


RepairTechnology* RepairTechnology_new(int32_t maxLevel);

void RepairTechnology_init(RepairTechnology* this, int32_t maxLevel);
bool RepairTechnology_isCompleted(RepairTechnology* this);
int32_t RepairTechnology_getPercentComplete(RepairTechnology* this);
int32_t RepairTechnology_getLevel(RepairTechnology* this);
int32_t RepairTechnology_getMaxLevel(RepairTechnology* this);
int32_t RepairTechnology_getCost(RepairTechnology* this);
void RepairTechnology_downgrade(RepairTechnology* this);
int32_t RepairTechnology_getDowngradeCost(RepairTechnology* this);
bool RepairTechnology_isDowngradeable(RepairTechnology* this);
int32_t RepairTechnology_getUpgradeCost(RepairTechnology* this);
bool RepairTechnology_isUpgradeable(RepairTechnology* this);
void RepairTechnology_upgrade(RepairTechnology* this);
bool RepairTechnology_isSelfUpgradeable(RepairTechnology* this);

static void RepairTechnology_initFields(RepairTechnology* this) {
    this->level = 0;
    
}


void RepairTechnology_init(RepairTechnology* this, int32_t maxLevel) {
    RepairTechnology_initFields(this);
        this->maxLevel = maxLevel;
}

RepairTechnology* RepairTechnology_new(int32_t maxLevel) {
    RepairTechnology* this = calloc(1, sizeof(RepairTechnology));
    RepairTechnology_init(this, maxLevel);
    return this;
}


bool RepairTechnology_isCompleted(RepairTechnology* this) {
        return false;
}


int32_t RepairTechnology_getPercentComplete(RepairTechnology* this) {
        return 0;
}


int32_t RepairTechnology_getLevel(RepairTechnology* this) {
        return this->level;
}


int32_t RepairTechnology_getMaxLevel(RepairTechnology* this) {
        return this->maxLevel;
}


int32_t RepairTechnology_getCost(RepairTechnology* this) {
        return 0;
}


void RepairTechnology_downgrade(RepairTechnology* this) {
}


int32_t RepairTechnology_getDowngradeCost(RepairTechnology* this) {
        return 0;
}


bool RepairTechnology_isDowngradeable(RepairTechnology* this) {
        return false;
}


int32_t RepairTechnology_getUpgradeCost(RepairTechnology* this) {
        return (RepairTechnology_getLevel(this) * RepairTechnology_getLevel(this)) * 1000;
}


bool RepairTechnology_isUpgradeable(RepairTechnology* this) {
        if (RepairTechnology_getLevel(this) < RepairTechnology_getMaxLevel(this)) {
            return true;
        } else {
            return false;
        }
}


void RepairTechnology_upgrade(RepairTechnology* this) {
        this->level++;
        UnitTechnologySingletonFactory* unitTechnologySingletonFactory = UnitTechnologySingletonFactory_getInstance();
        UnitTechnologySingletonFactory_setRepair(unitTechnologySingletonFactory, UnitTechnologySingletonFactory_getRepair(unitTechnologySingletonFactory) + (RepairTechnology_getLevel(this) * 10));
}


bool RepairTechnology_isSelfUpgradeable(RepairTechnology* this) {
        return false;
}

