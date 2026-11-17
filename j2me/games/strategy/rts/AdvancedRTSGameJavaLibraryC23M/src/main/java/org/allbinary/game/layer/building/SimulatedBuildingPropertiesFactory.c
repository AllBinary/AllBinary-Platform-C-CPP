/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.allbinary.game.layer.building

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/combat/damage/DamageFloaters.h"
#include "org/allbinary/game/tracking/TrackingEvent.h"
#include "org/allbinary/game/tracking/TrackingEventHandler.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/layer/building/BuildingPropertiesFactory.h"

typedef struct SimulatedBuildingPropertiesFactory SimulatedBuildingPropertiesFactory;
struct SimulatedBuildingPropertiesFactory {
    BuildingPropertiesFactory base;
};

static SimulatedBuildingPropertiesFactory* SimulatedBuildingPropertiesFactory_instanceC;

SimulatedBuildingPropertiesFactory* SimulatedBuildingPropertiesFactory_new(void);
SimulatedBuildingPropertiesFactory* SimulatedBuildingPropertiesFactory_getInstance(void);
int32_t SimulatedBuildingPropertiesFactory_getEfficiencyPerLevel(SimulatedBuildingPropertiesFactory* this, BuildingLayer* buildingLayer);
DamageFloaters* SimulatedBuildingPropertiesFactory_getDamageFloaters(SimulatedBuildingPropertiesFactory* this, BuildingLayer* buildingLayer);
Paintable* SimulatedBuildingPropertiesFactory_getHealthBar(SimulatedBuildingPropertiesFactory* this, BuildingLayer* buildingLayer);
ABHashtable* SimulatedBuildingPropertiesFactory_getHashtable(SimulatedBuildingPropertiesFactory* this);
TrackingEvent* SimulatedBuildingPropertiesFactory_getTrackingEvent(SimulatedBuildingPropertiesFactory* this, BuildingLayer* buildingLayer);

// Static fields with runtime initializers: call this once at startup
void SimulatedBuildingPropertiesFactory_staticInit(void) {
    SimulatedBuildingPropertiesFactory_instanceC = SimulatedBuildingPropertiesFactory_new();
}

void SimulatedBuildingPropertiesFactory_init(SimulatedBuildingPropertiesFactory* this) {
    BuildingPropertiesFactory_init(&this->base);
}

SimulatedBuildingPropertiesFactory* SimulatedBuildingPropertiesFactory_new(void) {
    SimulatedBuildingPropertiesFactory* this = calloc(1, sizeof(SimulatedBuildingPropertiesFactory));
    SimulatedBuildingPropertiesFactory_init(this);
    return this;
}


SimulatedBuildingPropertiesFactory* SimulatedBuildingPropertiesFactory_getInstance(void) {
        return SimulatedBuildingPropertiesFactory_instanceC;
}


int32_t SimulatedBuildingPropertiesFactory_getEfficiencyPerLevel(SimulatedBuildingPropertiesFactory* this, BuildingLayer* buildingLayer) {
        return 0;
}


DamageFloaters* SimulatedBuildingPropertiesFactory_getDamageFloaters(SimulatedBuildingPropertiesFactory* this, BuildingLayer* buildingLayer) {
        DamageFloaters* damageFloaters = DamageFloaters_getInstance();
        this->damageFloatersPaintableInterface = damageFloaters;
        return damageFloaters;
}


// throws Exception
Paintable* SimulatedBuildingPropertiesFactory_getHealthBar(SimulatedBuildingPropertiesFactory* this, BuildingLayer* buildingLayer) {
        return NullPaintable_getInstance();
}


ABHashtable* SimulatedBuildingPropertiesFactory_getHashtable(SimulatedBuildingPropertiesFactory* this) {
        return StdUtil_getInstance()->NULL_TABLE;
}


TrackingEvent* SimulatedBuildingPropertiesFactory_getTrackingEvent(SimulatedBuildingPropertiesFactory* this, BuildingLayer* buildingLayer) {
        return TrackingEvent_new(TrackingEventHandler_getInstance());
}

