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

typedef struct ReloadTechnology ReloadTechnology;
struct ReloadTechnology {
    RTSInterface RTSInterface_interface;
    int32_t level;
    int32_t maxLevel;
};


ReloadTechnology* ReloadTechnology_new(int32_t maxLevel);

void ReloadTechnology_init(ReloadTechnology* this, int32_t maxLevel);
bool ReloadTechnology_isCompleted(ReloadTechnology* this);
int32_t ReloadTechnology_getPercentComplete(ReloadTechnology* this);
int32_t ReloadTechnology_getLevel(ReloadTechnology* this);
int32_t ReloadTechnology_getMaxLevel(ReloadTechnology* this);
int32_t ReloadTechnology_getCost(ReloadTechnology* this);
void ReloadTechnology_downgrade(ReloadTechnology* this);
int32_t ReloadTechnology_getDowngradeCost(ReloadTechnology* this);
bool ReloadTechnology_isDowngradeable(ReloadTechnology* this);
int32_t ReloadTechnology_getUpgradeCost(ReloadTechnology* this);
bool ReloadTechnology_isUpgradeable(ReloadTechnology* this);
void ReloadTechnology_upgrade(ReloadTechnology* this);
bool ReloadTechnology_isSelfUpgradeable(ReloadTechnology* this);

static void ReloadTechnology_initFields(ReloadTechnology* this) {
    this->level = 0;
    
}


void ReloadTechnology_init(ReloadTechnology* this, int32_t maxLevel) {
    ReloadTechnology_initFields(this);
        this->maxLevel = maxLevel;
}

ReloadTechnology* ReloadTechnology_new(int32_t maxLevel) {
    ReloadTechnology* this = calloc(1, sizeof(ReloadTechnology));
    ReloadTechnology_init(this, maxLevel);
    return this;
}


bool ReloadTechnology_isCompleted(ReloadTechnology* this) {
        return false;
}


int32_t ReloadTechnology_getPercentComplete(ReloadTechnology* this) {
        return 0;
}


int32_t ReloadTechnology_getLevel(ReloadTechnology* this) {
        return this->level;
}


int32_t ReloadTechnology_getMaxLevel(ReloadTechnology* this) {
        return this->maxLevel;
}


int32_t ReloadTechnology_getCost(ReloadTechnology* this) {
        return 0;
}


void ReloadTechnology_downgrade(ReloadTechnology* this) {
}


int32_t ReloadTechnology_getDowngradeCost(ReloadTechnology* this) {
        return 0;
}


bool ReloadTechnology_isDowngradeable(ReloadTechnology* this) {
        return false;
}


int32_t ReloadTechnology_getUpgradeCost(ReloadTechnology* this) {
        return (ReloadTechnology_getLevel(this) * ReloadTechnology_getLevel(this)) * 1000;
}


bool ReloadTechnology_isUpgradeable(ReloadTechnology* this) {
        if (ReloadTechnology_getLevel(this) < ReloadTechnology_getMaxLevel(this)) {
            return true;
        } else {
            return false;
        }
}


void ReloadTechnology_upgrade(ReloadTechnology* this) {
        this->level++;
        UnitTechnologySingletonFactory* unitTechnologySingletonFactory = UnitTechnologySingletonFactory_getInstance();
        UnitTechnologySingletonFactory_setReload(unitTechnologySingletonFactory, UnitTechnologySingletonFactory_getReload(unitTechnologySingletonFactory) + (ReloadTechnology_getLevel(this) * 10));
}


bool ReloadTechnology_isSelfUpgradeable(ReloadTechnology* this) {
        return false;
}

