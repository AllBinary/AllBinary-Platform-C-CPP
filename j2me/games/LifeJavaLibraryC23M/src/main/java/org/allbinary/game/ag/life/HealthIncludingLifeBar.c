/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
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
// package org.allbinary.game.ag.life

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/health/Health.h"
#include "org/allbinary/game/health/HealthBarAnimation.h"
#include "org/allbinary/game/health/HealthBarTwodAnimation.h"
#include "org/allbinary/game/health/HealthInterface.h"
#include "org/allbinary/game/health/HealthListenerInterface.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/layer/AllBinaryLayer.h"

typedef struct HealthIncludingLifeBar HealthIncludingLifeBar;
struct HealthIncludingLifeBar {
    Paintable base;
    HealthListenerInterface HealthListenerInterface_interface;
    HealthBarAnimation* animationInterface;
    Life* life;
    HealthInterface* healthInterface;
    AllBinaryLayer* allbinaryLayer;
};


HealthIncludingLifeBar* HealthIncludingLifeBar_new(AllBinaryLayer* layerInterface, Life* life, Health* healthInterface, HealthBarAnimation* animationInterface, int32_t direction);
HealthIncludingLifeBar* HealthIncludingLifeBar_createHealthIncludingLifeBar(AllBinaryLayer* layerInterface, Life* life, Health* healthInterface, int32_t location, int32_t direction);

void HealthIncludingLifeBar_init(HealthIncludingLifeBar* this, AllBinaryLayer* layerInterface, Life* life, Health* healthInterface, HealthBarAnimation* animationInterface, int32_t direction);
void HealthIncludingLifeBar_onHealthChange(HealthIncludingLifeBar* this);
void HealthIncludingLifeBar_paint(HealthIncludingLifeBar* this, Graphics* graphics);
void HealthIncludingLifeBar_paintThreed(HealthIncludingLifeBar* this, Graphics* graphics);

static void HealthIncludingLifeBar_initFields(HealthIncludingLifeBar* this) {
    
    
    
    
}


// throws Exception
HealthIncludingLifeBar* HealthIncludingLifeBar_createHealthIncludingLifeBar(AllBinaryLayer* layerInterface, Life* life, Health* healthInterface, int32_t location, int32_t direction) {
        return HealthIncludingLifeBar_new(layerInterface, life, healthInterface, HealthBarTwodAnimation_new(layerInterface, location), direction);
}


void HealthIncludingLifeBar_init(HealthIncludingLifeBar* this, AllBinaryLayer* layerInterface, Life* life, Health* healthInterface, HealthBarAnimation* animationInterface, int32_t direction) {
    Paintable_init(&this->base);
    HealthIncludingLifeBar_initFields(this);
        this->allbinaryLayer = layerInterface;
        this->animationInterface = animationInterface;
        this->life = life;
        this->healthInterface = healthInterface;
        Health_addListener(this->healthInterface, this);
        HealthIncludingLifeBar_onHealthChange(this);
}

HealthIncludingLifeBar* HealthIncludingLifeBar_new(AllBinaryLayer* layerInterface, Life* life, Health* healthInterface, HealthBarAnimation* animationInterface, int32_t direction) {
    HealthIncludingLifeBar* this = calloc(1, sizeof(HealthIncludingLifeBar));
    HealthIncludingLifeBar_init(this, layerInterface, life, healthInterface, animationInterface, direction);
    return this;
}


void HealthIncludingLifeBar_onHealthChange(HealthIncludingLifeBar* this) {
        HealthBarAnimation_onHealthChange(this->animationInterface, ((Health_getHealth(this->healthInterface) + (Health_getMaxHealth(this->healthInterface) * Life_get(this->life))) * AllBinaryLayer_getWidth(this->allbinaryLayer)) / (Health_getMaxHealth(this->healthInterface) + (Health_getMaxHealth(this->healthInterface) * Life_getStartLives(this->life))));
}


void HealthIncludingLifeBar_paint(HealthIncludingLifeBar* this, Graphics* graphics) {
        HealthBarAnimation_paintXY(this->animationInterface, graphics, 0, 0);
}


void HealthIncludingLifeBar_paintThreed(HealthIncludingLifeBar* this, Graphics* graphics) {
        HealthBarAnimation_paintThreedXYZ(this->animationInterface, graphics, 0, 0, 0);
}

