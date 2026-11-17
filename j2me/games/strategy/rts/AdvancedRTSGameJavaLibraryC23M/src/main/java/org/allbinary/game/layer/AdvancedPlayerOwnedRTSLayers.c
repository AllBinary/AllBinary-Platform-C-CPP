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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/layer/PlayerOwnedRTSLayers.h"

typedef struct AdvancedPlayerOwnedRTSLayers AdvancedPlayerOwnedRTSLayers;
struct AdvancedPlayerOwnedRTSLayers {
    PlayerOwnedRTSLayers base;
    BasicArrayList* unitsList;
    BasicArrayList* waypointsList;
    BasicArrayList* buildingList;
    BasicArrayList* baseList;
    BasicArrayList* garrisonList;
    BasicArrayList* houseList;
    BasicArrayList* labList;
    BasicArrayList* factoryList;
};


AdvancedPlayerOwnedRTSLayers* AdvancedPlayerOwnedRTSLayers_new(void);
void AdvancedPlayerOwnedRTSLayers_addUnit(AdvancedPlayerOwnedRTSLayers* this, RTSLayer* rtsLayer);
void AdvancedPlayerOwnedRTSLayers_addWaypoint(AdvancedPlayerOwnedRTSLayers* this, RTSLayer* rtsLayer);
void AdvancedPlayerOwnedRTSLayers_addBase(AdvancedPlayerOwnedRTSLayers* this, RTSLayer* rtsLayer);
void AdvancedPlayerOwnedRTSLayers_addGarrison(AdvancedPlayerOwnedRTSLayers* this, RTSLayer* rtsLayer);
void AdvancedPlayerOwnedRTSLayers_addHouse(AdvancedPlayerOwnedRTSLayers* this, RTSLayer* rtsLayer);
void AdvancedPlayerOwnedRTSLayers_addLab(AdvancedPlayerOwnedRTSLayers* this, RTSLayer* rtsLayer);
void AdvancedPlayerOwnedRTSLayers_addFactory(AdvancedPlayerOwnedRTSLayers* this, RTSLayer* rtsLayer);
void AdvancedPlayerOwnedRTSLayers_removeUnit(AdvancedPlayerOwnedRTSLayers* this, AllBinaryGameLayer* gameLayer);
void AdvancedPlayerOwnedRTSLayers_removeWaypoint(AdvancedPlayerOwnedRTSLayers* this, AllBinaryGameLayer* gameLayer);
BasicArrayList* AdvancedPlayerOwnedRTSLayers_getUnitsList(AdvancedPlayerOwnedRTSLayers* this);
BasicArrayList* AdvancedPlayerOwnedRTSLayers_getWaypointsList(AdvancedPlayerOwnedRTSLayers* this);
BasicArrayList* AdvancedPlayerOwnedRTSLayers_getBaseList(AdvancedPlayerOwnedRTSLayers* this);
BasicArrayList* AdvancedPlayerOwnedRTSLayers_getGarrisonList(AdvancedPlayerOwnedRTSLayers* this);
BasicArrayList* AdvancedPlayerOwnedRTSLayers_getHouseList(AdvancedPlayerOwnedRTSLayers* this);
BasicArrayList* AdvancedPlayerOwnedRTSLayers_getLabList(AdvancedPlayerOwnedRTSLayers* this);
BasicArrayList* AdvancedPlayerOwnedRTSLayers_getFactoryList(AdvancedPlayerOwnedRTSLayers* this);
int32_t AdvancedPlayerOwnedRTSLayers_getTotalBuildings(AdvancedPlayerOwnedRTSLayers* this);
void AdvancedPlayerOwnedRTSLayers_removeBuilding(AdvancedPlayerOwnedRTSLayers* this, AllBinaryGameLayer* layerInterface);
const char* AdvancedPlayerOwnedRTSLayers_toString(AdvancedPlayerOwnedRTSLayers* this);
BasicArrayList* AdvancedPlayerOwnedRTSLayers_getBuildingList(AdvancedPlayerOwnedRTSLayers* this);

static void AdvancedPlayerOwnedRTSLayers_initFields(AdvancedPlayerOwnedRTSLayers* this) {
    this->unitsList = BasicArrayListD_new();
    this->waypointsList = BasicArrayListD_new();
    this->buildingList = BasicArrayListD_new();
    this->baseList = BasicArrayListD_new();
    this->garrisonList = BasicArrayListD_new();
    this->houseList = BasicArrayListD_new();
    this->labList = BasicArrayListD_new();
    this->factoryList = BasicArrayListD_new();
}

void AdvancedPlayerOwnedRTSLayers_init(AdvancedPlayerOwnedRTSLayers* this) {
    PlayerOwnedRTSLayers_init(&this->base);
    AdvancedPlayerOwnedRTSLayers_initFields(this);
}

AdvancedPlayerOwnedRTSLayers* AdvancedPlayerOwnedRTSLayers_new(void) {
    AdvancedPlayerOwnedRTSLayers* this = calloc(1, sizeof(AdvancedPlayerOwnedRTSLayers));
    AdvancedPlayerOwnedRTSLayers_init(this);
    return this;
}


void AdvancedPlayerOwnedRTSLayers_addUnit(AdvancedPlayerOwnedRTSLayers* this, RTSLayer* rtsLayer) {
        BasicArrayList_add(this->unitsList, rtsLayer);
        JAVA_CALL(this->rtsLayerList, add, rtsLayer);
}


void AdvancedPlayerOwnedRTSLayers_addWaypoint(AdvancedPlayerOwnedRTSLayers* this, RTSLayer* rtsLayer) {
        BasicArrayList_add(this->waypointsList, rtsLayer);
        JAVA_CALL(this->rtsLayerList, add, rtsLayer);
}


void AdvancedPlayerOwnedRTSLayers_addBase(AdvancedPlayerOwnedRTSLayers* this, RTSLayer* rtsLayer) {
        BasicArrayList_add(this->baseList, rtsLayer);
        BasicArrayList_add(this->buildingList, rtsLayer);
        JAVA_CALL(this->rtsLayerList, add, rtsLayer);
}


void AdvancedPlayerOwnedRTSLayers_addGarrison(AdvancedPlayerOwnedRTSLayers* this, RTSLayer* rtsLayer) {
        BasicArrayList_add(this->garrisonList, rtsLayer);
        BasicArrayList_add(this->buildingList, rtsLayer);
        JAVA_CALL(this->rtsLayerList, add, rtsLayer);
}


void AdvancedPlayerOwnedRTSLayers_addHouse(AdvancedPlayerOwnedRTSLayers* this, RTSLayer* rtsLayer) {
        BasicArrayList_add(this->houseList, rtsLayer);
        BasicArrayList_add(this->buildingList, rtsLayer);
        JAVA_CALL(this->rtsLayerList, add, rtsLayer);
}


void AdvancedPlayerOwnedRTSLayers_addLab(AdvancedPlayerOwnedRTSLayers* this, RTSLayer* rtsLayer) {
        BasicArrayList_add(this->labList, rtsLayer);
        BasicArrayList_add(this->buildingList, rtsLayer);
        JAVA_CALL(this->rtsLayerList, add, rtsLayer);
}


void AdvancedPlayerOwnedRTSLayers_addFactory(AdvancedPlayerOwnedRTSLayers* this, RTSLayer* rtsLayer) {
        BasicArrayList_add(this->factoryList, rtsLayer);
        BasicArrayList_add(this->buildingList, rtsLayer);
        JAVA_CALL(this->rtsLayerList, add, rtsLayer);
}


void AdvancedPlayerOwnedRTSLayers_removeUnit(AdvancedPlayerOwnedRTSLayers* this, AllBinaryGameLayer* gameLayer) {
        BasicArrayList_remove(this->unitsList, gameLayer);
        JAVA_CALL(this->rtsLayerList, remove, gameLayer);
}


void AdvancedPlayerOwnedRTSLayers_removeWaypoint(AdvancedPlayerOwnedRTSLayers* this, AllBinaryGameLayer* gameLayer) {
        BasicArrayList_remove(this->waypointsList, gameLayer);
        JAVA_CALL(this->rtsLayerList, remove, gameLayer);
}


BasicArrayList* AdvancedPlayerOwnedRTSLayers_getUnitsList(AdvancedPlayerOwnedRTSLayers* this) {
        return this->unitsList;
}


BasicArrayList* AdvancedPlayerOwnedRTSLayers_getWaypointsList(AdvancedPlayerOwnedRTSLayers* this) {
        return this->waypointsList;
}


BasicArrayList* AdvancedPlayerOwnedRTSLayers_getBaseList(AdvancedPlayerOwnedRTSLayers* this) {
        return this->baseList;
}


BasicArrayList* AdvancedPlayerOwnedRTSLayers_getGarrisonList(AdvancedPlayerOwnedRTSLayers* this) {
        return this->garrisonList;
}


BasicArrayList* AdvancedPlayerOwnedRTSLayers_getHouseList(AdvancedPlayerOwnedRTSLayers* this) {
        return this->houseList;
}


BasicArrayList* AdvancedPlayerOwnedRTSLayers_getLabList(AdvancedPlayerOwnedRTSLayers* this) {
        return this->labList;
}


BasicArrayList* AdvancedPlayerOwnedRTSLayers_getFactoryList(AdvancedPlayerOwnedRTSLayers* this) {
        return this->factoryList;
}


int32_t AdvancedPlayerOwnedRTSLayers_getTotalBuildings(AdvancedPlayerOwnedRTSLayers* this) {
        return BasicArrayList_size(this->baseList) + BasicArrayList_size(this->garrisonList) + BasicArrayList_size(this->houseList) + BasicArrayList_size(this->labList) + BasicArrayList_size(this->factoryList);
}


void AdvancedPlayerOwnedRTSLayers_removeBuilding(AdvancedPlayerOwnedRTSLayers* this, AllBinaryGameLayer* layerInterface) {
        BasicArrayList_add(this->buildingList, layerInterface);
        if (JAVA_CALL(AdvancedPlayerOwnedRTSLayers_getBaseList(this), remove, layerInterface)) {
            JAVA_CALL(this->rtsLayerList, remove, layerInterface);
        } else if (JAVA_CALL(AdvancedPlayerOwnedRTSLayers_getFactoryList(this), remove, layerInterface)) {
            JAVA_CALL(this->rtsLayerList, remove, layerInterface);
        } else if (JAVA_CALL(AdvancedPlayerOwnedRTSLayers_getGarrisonList(this), remove, layerInterface)) {
            JAVA_CALL(this->rtsLayerList, remove, layerInterface);
        } else if (JAVA_CALL(AdvancedPlayerOwnedRTSLayers_getLabList(this), remove, layerInterface)) {
            JAVA_CALL(this->rtsLayerList, remove, layerInterface);
        } else if (JAVA_CALL(AdvancedPlayerOwnedRTSLayers_getHouseList(this), remove, layerInterface)) {
            JAVA_CALL(this->rtsLayerList, remove, layerInterface);
        }
}


const char* AdvancedPlayerOwnedRTSLayers_toString(AdvancedPlayerOwnedRTSLayers* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, PlayerOwnedRTSLayers_toString((&this->base)));
        StringMaker_append(stringBuffer, " Bases: ");
        StringMaker_appendint(stringBuffer, JAVA_CALL(AdvancedPlayerOwnedRTSLayers_getBaseList(this), size));
        StringMaker_append(stringBuffer, " Factory: ");
        StringMaker_appendint(stringBuffer, JAVA_CALL(AdvancedPlayerOwnedRTSLayers_getFactoryList(this), size));
        StringMaker_append(stringBuffer, " Garrison: ");
        StringMaker_appendint(stringBuffer, JAVA_CALL(AdvancedPlayerOwnedRTSLayers_getGarrisonList(this), size));
        StringMaker_append(stringBuffer, " Labs: ");
        StringMaker_appendint(stringBuffer, JAVA_CALL(AdvancedPlayerOwnedRTSLayers_getLabList(this), size));
        StringMaker_append(stringBuffer, " Houses: ");
        StringMaker_appendint(stringBuffer, JAVA_CALL(AdvancedPlayerOwnedRTSLayers_getHouseList(this), size));
        StringMaker_append(stringBuffer, " Waypoints: ");
        StringMaker_appendint(stringBuffer, JAVA_CALL(AdvancedPlayerOwnedRTSLayers_getWaypointsList(this), size));
        StringMaker_append(stringBuffer, " Units: ");
        StringMaker_appendint(stringBuffer, JAVA_CALL(AdvancedPlayerOwnedRTSLayers_getUnitsList(this), size));
        return StringMaker_toString(stringBuffer);
}


BasicArrayList* AdvancedPlayerOwnedRTSLayers_getBuildingList(AdvancedPlayerOwnedRTSLayers* this) {
        return this->buildingList;
}

