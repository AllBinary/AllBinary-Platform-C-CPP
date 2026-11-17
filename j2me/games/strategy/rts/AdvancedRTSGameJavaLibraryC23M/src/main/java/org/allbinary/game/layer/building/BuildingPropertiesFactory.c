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
#include "org/allbinary/game/combat/damage/PtsDamageFloaters.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#include "org/allbinary/game/graphics/hud/BasicHudFactory.h"
#include "org/allbinary/game/health/HealthBar.h"
#include "org/allbinary/game/health/HealthBarTwodAnimation.h"
#include "org/allbinary/game/tracking/TrackingEvent.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct BuildingPropertiesFactory BuildingPropertiesFactory;
struct BuildingPropertiesFactory {
    Paintable* damageFloatersPaintableInterface;
};

static BuildingPropertiesFactory* BuildingPropertiesFactory_instance;

BuildingPropertiesFactory* BuildingPropertiesFactory_new(void);
BuildingPropertiesFactory* BuildingPropertiesFactory_getInstance(void);
int32_t BuildingPropertiesFactory_getEfficiencyPerLevel(BuildingPropertiesFactory* this, BuildingLayer* buildingLayer);
DamageFloaters* BuildingPropertiesFactory_getDamageFloaters(BuildingPropertiesFactory* this, BuildingLayer* buildingLayer);
Paintable* BuildingPropertiesFactory_getHealthBar(BuildingPropertiesFactory* this, BuildingLayer* buildingLayer);
ABHashtable* BuildingPropertiesFactory_getHashtable(BuildingPropertiesFactory* this);
TrackingEvent* BuildingPropertiesFactory_getTrackingEvent(BuildingPropertiesFactory* this, BuildingLayer* buildingLayer);

// Static fields with runtime initializers: call this once at startup
void BuildingPropertiesFactory_staticInit(void) {
    BuildingPropertiesFactory_instance = BuildingPropertiesFactory_new();
}

static void BuildingPropertiesFactory_initFields(BuildingPropertiesFactory* this) {
    this->damageFloatersPaintableInterface = NullPaintable_getInstance();
}

void BuildingPropertiesFactory_init(BuildingPropertiesFactory* this) {
    BuildingPropertiesFactory_initFields(this);
}

BuildingPropertiesFactory* BuildingPropertiesFactory_new(void) {
    BuildingPropertiesFactory* this = calloc(1, sizeof(BuildingPropertiesFactory));
    BuildingPropertiesFactory_init(this);
    return this;
}


BuildingPropertiesFactory* BuildingPropertiesFactory_getInstance(void) {
        return BuildingPropertiesFactory_instance;
}


int32_t BuildingPropertiesFactory_getEfficiencyPerLevel(BuildingPropertiesFactory* this, BuildingLayer* buildingLayer) {
        return 10000 / BuildingLayer_getMaxLevel(buildingLayer) + 10000 % BuildingLayer_getMaxLevel(buildingLayer);
}


DamageFloaters* BuildingPropertiesFactory_getDamageFloaters(BuildingPropertiesFactory* this, BuildingLayer* buildingLayer) {
        DamageFloaters* damageFloaters = DamageFloaters_getInstance();
        if (Features_isFeature(Features_getInstance(), GameFeatureFactory_getInstance()->DAMAGE_FLOATERS)) {
            damageFloaters = PtsDamageFloaters_new(buildingLayer);
            this->damageFloatersPaintableInterface = damageFloaters;
        } else {
            damageFloaters = DamageFloaters_new();
        }
        return damageFloaters;
}


// throws Exception
Paintable* BuildingPropertiesFactory_getHealthBar(BuildingPropertiesFactory* this, BuildingLayer* buildingLayer) {
        Paintable* healthBar = NullPaintable_getInstance();
        if (Features_isFeature(Features_getInstance(), GameFeatureFactory_getInstance()->HEALTH_BARS)) {
            healthBar = HealthBar_new(buildingLayer, BuildingLayer_getHealthInterface(buildingLayer), HealthBarTwodAnimation_new(((AllBinaryLayer*) buildingLayer), BasicHudFactory_getInstance()->BOTTOMLEFT), -1);
        }
        return healthBar;
}


ABHashtable* BuildingPropertiesFactory_getHashtable(BuildingPropertiesFactory* this) {
        return StdUtil_createHashtable(StdUtil_getInstance());
}


TrackingEvent* BuildingPropertiesFactory_getTrackingEvent(BuildingPropertiesFactory* this, BuildingLayer* buildingLayer) {
        return TrackingEvent_new(buildingLayer);
}

