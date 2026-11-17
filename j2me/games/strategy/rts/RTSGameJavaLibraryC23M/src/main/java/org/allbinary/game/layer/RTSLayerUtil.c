/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2003 AllBinary 
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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/identification/GroupCommonFactory.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/direction/DirectionFactory.h"
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/game/combat/weapon/WeaponProperties.h"
#include "org/allbinary/game/identification/BasicGroupFactory.h"
#include "org/allbinary/game/part/PartInterface.h"
#include "org/allbinary/game/part/weapon/BasicWeaponPart.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/BaseRaceTrackGeographicMap.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct RTSLayerUtil RTSLayerUtil;
struct RTSLayerUtil {
    LogUtil* logUtil;
    GroupCommonFactory* groupCommonFactory;
    int64_t MAX_RELOAD_TIME;
};

static RTSLayerUtil* RTSLayerUtil_instance;

RTSLayerUtil* RTSLayerUtil_new(void);
RTSLayerUtil* RTSLayerUtil_getInstance(void);
static WeaponProperties* RTSLayerUtil_createWeaponProperties(RTSLayerUtil* this, WeaponProperties* weaponProperties, int32_t currentLevel, int32_t lastLevel);
void RTSLayerUtil_downgrade(RTSLayerUtil* this, RTSLayer* rtsLayer);
void RTSLayerUtil_upgrade(RTSLayerUtil* this, RTSLayer* rtsLayer);
int64_t RTSLayerUtil_getCostExponential(RTSLayerUtil* this, int64_t cost);
static int32_t RTSLayerUtil_getWeaponPropertiesCost(RTSLayerUtil* this, WeaponProperties* weaponProperties);
int32_t RTSLayerUtil_getCost(RTSLayerUtil* this, RTSLayer* rtsLayer);
int32_t RTSLayerUtil_getDowngradeCost(RTSLayerUtil* this, RTSLayer* rtsLayer);
int32_t RTSLayerUtil_getUpgradeCost(RTSLayerUtil* this, RTSLayer* rtsLayer);
void RTSLayerUtil_destroyAndClear(RTSLayerUtil* this, BasicArrayList* list);
ABHashtable* RTSLayerUtil_createFakeRTSLayerHashtable(RTSLayerUtil* this, BaseRaceTrackGeographicMap* baseRaceTrackGeographicMap);

// Static fields with runtime initializers: call this once at startup
void RTSLayerUtil_staticInit(void) {
    RTSLayerUtil_instance = RTSLayerUtil_new();
}

static void RTSLayerUtil_initFields(RTSLayerUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->groupCommonFactory = GroupCommonFactory_getInstance();
    this->MAX_RELOAD_TIME = ((int64_t) Integer_MAX_VALUE) / 100000LL;
}

void RTSLayerUtil_init(RTSLayerUtil* this) {
    RTSLayerUtil_initFields(this);
}

RTSLayerUtil* RTSLayerUtil_new(void) {
    RTSLayerUtil* this = calloc(1, sizeof(RTSLayerUtil));
    RTSLayerUtil_init(this);
    return this;
}


RTSLayerUtil* RTSLayerUtil_getInstance(void) {
        return RTSLayerUtil_instance;
}


static WeaponProperties* RTSLayerUtil_createWeaponProperties(RTSLayerUtil* this, WeaponProperties* weaponProperties, int32_t currentLevel, int32_t lastLevel) {
        int64_t reloadTime = WeaponProperties_getReloadTime(weaponProperties);
        if (lastLevel > currentLevel) {
            reloadTime = reloadTime + 50LL;
        } else if (lastLevel < currentLevel) {
            reloadTime = reloadTime - 50LL;
        }
        WeaponProperties* newWeaponProperties = WeaponProperties_new(reloadTime, WeaponProperties_getTargetingTime(weaponProperties), JAVA_CALL(WeaponProperties_getSpeed(weaponProperties), getUnscaled), WeaponProperties_getDamage(weaponProperties) / lastLevel * currentLevel, WeaponProperties_getDissipation(weaponProperties));
        return newWeaponProperties;
}


void RTSLayerUtil_downgrade(RTSLayerUtil* this, RTSLayer* rtsLayer) {
        RTSLayer_setLevel(rtsLayer, RTSLayer_getLevel(rtsLayer) - 1);
        PartInterface** partInterfaceArray = RTSLayer_getPartInterfaceArray(rtsLayer);
        int32_t size = java_array_length(partInterfaceArray);
        BasicWeaponPart* partInterface = nullptr;
        for (int32_t index = size; --index >= 0; ) {
            partInterface = ((BasicWeaponPart*) partInterfaceArray[index]);
            BasicWeaponPart_setWeaponProperties(partInterface, RTSLayerUtil_createWeaponProperties(this, BasicWeaponPart_getWeaponProperties(partInterface), RTSLayer_getLevel(rtsLayer), RTSLayer_getLevel(rtsLayer) + 1));
        }
        RTSLayer_select(rtsLayer);
}


void RTSLayerUtil_upgrade(RTSLayerUtil* this, RTSLayer* rtsLayer) {
        RTSLayer_setLevel(rtsLayer, RTSLayer_getLevel(rtsLayer) + 1);
        PartInterface** partInterfaceArray = RTSLayer_getPartInterfaceArray(rtsLayer);
        int32_t size = java_array_length(partInterfaceArray);
        BasicWeaponPart* partInterface = nullptr;
        for (int32_t index = size; --index >= 0; ) {
            partInterface = ((BasicWeaponPart*) partInterfaceArray[index]);
            BasicWeaponPart_setWeaponProperties(partInterface, RTSLayerUtil_createWeaponProperties(this, BasicWeaponPart_getWeaponProperties(partInterface), RTSLayer_getLevel(rtsLayer), RTSLayer_getLevel(rtsLayer) - 1));
        }
        RTSLayer_select(rtsLayer);
}


int64_t RTSLayerUtil_getCostExponential(RTSLayerUtil* this, int64_t cost) {
        return ((cost * cost * cost) / (cost * 1000LL));
}


static int32_t RTSLayerUtil_getWeaponPropertiesCost(RTSLayerUtil* this, WeaponProperties* weaponProperties) {
        int64_t cost = (WeaponProperties_getDamage(weaponProperties) + WeaponProperties_getRange(weaponProperties) + ((this->MAX_RELOAD_TIME / WeaponProperties_getReloadTime(weaponProperties)) >> 1));
        cost = RTSLayerUtil_getCostExponential(this, cost);
        return ((int32_t) cost);
}


int32_t RTSLayerUtil_getCost(RTSLayerUtil* this, RTSLayer* rtsLayer) {
        int32_t total = 0;
        PartInterface** partInterfaceArray = RTSLayer_getPartInterfaceArray(rtsLayer);
        int32_t size = java_array_length(partInterfaceArray);
        BasicWeaponPart* partInterface = nullptr;
        WeaponProperties* weaponProperties = nullptr;
        for (int32_t index = size - 1; index >= 0; index--) {
            partInterface = ((BasicWeaponPart*) partInterfaceArray[index]);
            weaponProperties = BasicWeaponPart_getWeaponProperties(partInterface);
            total += RTSLayerUtil_getWeaponPropertiesCost(this, weaponProperties);
        }
        return total;
}


int32_t RTSLayerUtil_getDowngradeCost(RTSLayerUtil* this, RTSLayer* rtsLayer) {
        PartInterface** partInterfaceArray = RTSLayer_getPartInterfaceArray(rtsLayer);
        int32_t size = java_array_length(partInterfaceArray);
        int32_t downgradeCost = 0;
        BasicWeaponPart* partInterface = nullptr;
        WeaponProperties* weaponProperties = nullptr;
        int32_t downgradeWeaponCost = 0;
        int32_t currentWeaponCost = 0;
        for (int32_t index = size - 1; index >= 0; index--) {
            partInterface = ((BasicWeaponPart*) partInterfaceArray[index]);
            weaponProperties = BasicWeaponPart_getWeaponProperties(partInterface);
            downgradeWeaponCost = RTSLayerUtil_getWeaponPropertiesCost(this, RTSLayerUtil_createWeaponProperties(this, weaponProperties, RTSLayer_getLevel(rtsLayer) - 1, RTSLayer_getLevel(rtsLayer)));
            currentWeaponCost = RTSLayerUtil_getWeaponPropertiesCost(this, weaponProperties);
            downgradeCost += (currentWeaponCost - downgradeWeaponCost);
        }
        downgradeCost = downgradeCost * 9 / 10;
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Total Cost: "), appendint, downgradeCost), toString), this, "getDowngradeCost");
        return downgradeCost;
}


int32_t RTSLayerUtil_getUpgradeCost(RTSLayerUtil* this, RTSLayer* rtsLayer) {
        int32_t upgradeCost = 0;
        PartInterface** partInterfaceArray = RTSLayer_getPartInterfaceArray(rtsLayer);
        int32_t size = java_array_length(partInterfaceArray);
        BasicWeaponPart* partInterface = nullptr;
        WeaponProperties* weaponProperties = nullptr;
        int32_t upgradedWeaponCost = 0;
        int32_t currentWeaponCost = 0;
        for (int32_t index = size - 1; index >= 0; index--) {
            partInterface = ((BasicWeaponPart*) partInterfaceArray[index]);
            weaponProperties = BasicWeaponPart_getWeaponProperties(partInterface);
            upgradedWeaponCost = RTSLayerUtil_getWeaponPropertiesCost(this, RTSLayerUtil_createWeaponProperties(this, weaponProperties, RTSLayer_getLevel(rtsLayer) + 1, RTSLayer_getLevel(rtsLayer)));
            currentWeaponCost = RTSLayerUtil_getWeaponPropertiesCost(this, weaponProperties);
            upgradeCost += (upgradedWeaponCost - currentWeaponCost);
        }
        LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Total Cost: "), appendint, upgradeCost), toString), this, "getUpgradeCost");
        return upgradeCost;
}


// throws Exception
void RTSLayerUtil_destroyAndClear(RTSLayerUtil* this, BasicArrayList* list) {
        RTSLayer* rtsLayer = nullptr;
        for (int32_t index = BasicArrayList_size(list) - 1; index >= 0; index--) {
            rtsLayer = ((RTSLayer*) BasicArrayList_get(list, index));
            RTSLayer_setDestroyed(rtsLayer, true);
        }
        BasicArrayList_clear(list);
}


ABHashtable* RTSLayerUtil_createFakeRTSLayerHashtable(RTSLayerUtil* this, BaseRaceTrackGeographicMap* baseRaceTrackGeographicMap) {
        ABHashtable* hashtable = StdUtil_createHashtable(StdUtil_getInstance());
        FakeLayerManager* layerManager = FakeLayerManager_new(GameInfo_NONE);
        FakeLayerManager_setGeographicMapInterface(layerManager, ((BasicGeographicMap**) java_array_from(sizeof(BasicGeographicMap*), sizeof((BasicGeographicMap*[]){ baseRaceTrackGeographicMap }) / sizeof(BasicGeographicMap*), (BasicGeographicMap*[]){ baseRaceTrackGeographicMap })));
        ABHashtable_put(hashtable, AllBinaryGameLayerManager_ID, layerManager);
        ABHashtable_put(hashtable, DirectionFactory_getInstance()->NAME, DirectionFactory_getInstance()->LEFT);
        ABHashtable_put(hashtable, this->groupCommonFactory->ID, BasicGroupFactory_getInstance()->NONE_ARRAY);
        return hashtable;
}

