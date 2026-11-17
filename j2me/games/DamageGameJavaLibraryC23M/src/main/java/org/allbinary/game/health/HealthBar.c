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
// package org.allbinary.game.health

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/game/health/HealthListenerInterface.h"

typedef struct HealthBar HealthBar;
struct HealthBar {
    Paintable base;
    HealthListenerInterface HealthListenerInterface_interface;
    HealthBarAnimation* animationInterface;
    HealthInterface* healthInterface;
    AllBinaryLayer* allbinaryLayer;
};


HealthBar* HealthBar_new(AllBinaryLayer* layerInterface, Health* healthInterface, HealthBarAnimation* animationInterface, int32_t direction);

void HealthBar_init(HealthBar* this, AllBinaryLayer* layerInterface, Health* healthInterface, HealthBarAnimation* animationInterface, int32_t direction);
void HealthBar_onHealthChange(HealthBar* this);
void HealthBar_paint(HealthBar* this, Graphics* graphics);
void HealthBar_paintThreed(HealthBar* this, Graphics* graphics);

static void HealthBar_initFields(HealthBar* this) {
    
    
    
}


void HealthBar_init(HealthBar* this, AllBinaryLayer* layerInterface, Health* healthInterface, HealthBarAnimation* animationInterface, int32_t direction) {
    Paintable_init(&this->base);
    HealthBar_initFields(this);
        this->allbinaryLayer = layerInterface;
        this->animationInterface = animationInterface;
        this->healthInterface = healthInterface;
        HealthInterface_addListener(this->healthInterface, this);
        HealthBar_onHealthChange(this);
}

HealthBar* HealthBar_new(AllBinaryLayer* layerInterface, Health* healthInterface, HealthBarAnimation* animationInterface, int32_t direction) {
    HealthBar* this = calloc(1, sizeof(HealthBar));
    HealthBar_init(this, layerInterface, healthInterface, animationInterface, direction);
    return this;
}


void HealthBar_onHealthChange(HealthBar* this) {
        HealthBarAnimation_onHealthChange(this->animationInterface, HealthInterface_getHealth(this->healthInterface) * AllBinaryLayer_getWidth(this->allbinaryLayer) / HealthInterface_getMaxHealth(this->healthInterface));
}


void HealthBar_paint(HealthBar* this, Graphics* graphics) {
        HealthBarAnimation_paintXY(this->animationInterface, graphics, 0, 0);
}


void HealthBar_paintThreed(HealthBar* this, Graphics* graphics) {
        HealthBarAnimation_paintThreedXYZ(this->animationInterface, graphics, 0, 0, 0);
}

