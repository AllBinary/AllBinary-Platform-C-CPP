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
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/game/graphics/hud/BasicHudFactory.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"

typedef struct HealthBarAnimation HealthBarAnimation;
struct HealthBarAnimation {
    Animation base;
    BasicColorFactory* basicColorFactory;
    int32_t x2;
    int32_t thickness;
    int32_t location;
    AllBinaryLayer* allbinaryLayer;
};


HealthBarAnimation* HealthBarAnimation_new(AllBinaryLayer* layerInterface, int32_t location);

void HealthBarAnimation_init(HealthBarAnimation* this, AllBinaryLayer* layerInterface, int32_t location);
void HealthBarAnimation_onHealthChange(HealthBarAnimation* this, int32_t newX2);
int32_t HealthBarAnimation_getY(HealthBarAnimation* this);

static void HealthBarAnimation_initFields(HealthBarAnimation* this) {
    this->basicColorFactory = BasicColorFactory_getInstance();
    this->x2 = 0;
    this->thickness = 0;
    
    
}


void HealthBarAnimation_init(HealthBarAnimation* this, AllBinaryLayer* layerInterface, int32_t location) {
    Animation_init(&this->base);
    HealthBarAnimation_initFields(this);
        this->allbinaryLayer = layerInterface;
        this->location = location;
        BasicHudFactory* basicHudFactory = BasicHudFactory_getInstance();
        if (this->location != basicHudFactory->TOPLEFT && this->location != basicHudFactory->BOTTOMLEFT) {
            java_throw(java_exception_new("Exception", "Location Not Valid"));
        }
        if (AllBinaryLayer_getWidth(layerInterface) > 40) {
            this->thickness = 3;
        } else if (AllBinaryLayer_getWidth(layerInterface) > 20) {
            this->thickness = 2;
        } else {
            this->thickness = 1;
        }
}

HealthBarAnimation* HealthBarAnimation_new(AllBinaryLayer* layerInterface, int32_t location) {
    HealthBarAnimation* this = calloc(1, sizeof(HealthBarAnimation));
    HealthBarAnimation_init(this, layerInterface, location);
    return this;
}


void HealthBarAnimation_onHealthChange(HealthBarAnimation* this, int32_t newX2) {
        this->x2 = newX2;
        int32_t quarter = (AllBinaryLayer_getWidth(this->allbinaryLayer) >> 2);
        if (this->x2 > quarter * 3) {
            this->basicColor = this->basicColorFactory->GREEN;
            this->colorP = JAVA_CALL(this->basicColor, intValue);
        } else if (this->x2 > quarter * 2) {
            this->basicColor = this->basicColorFactory->YELLOW;
            this->colorP = JAVA_CALL(this->basicColor, intValue);
        } else if (this->x2 > quarter) {
            this->basicColor = this->basicColorFactory->ORANGE;
            this->colorP = JAVA_CALL(this->basicColor, intValue);
        } else {
            this->basicColor = this->basicColorFactory->RED;
            this->colorP = JAVA_CALL(this->basicColor, intValue);
        }
}


int32_t HealthBarAnimation_getY(HealthBarAnimation* this) {
        BasicHudFactory* basicHudFactory = BasicHudFactory_getInstance();
        if (this->location == basicHudFactory->TOPLEFT) {
            return JAVA_CALL(AllBinaryLayer_getViewPosition(this->allbinaryLayer), getY) - 4;
        } else if (this->location == basicHudFactory->BOTTOMLEFT) {
            return JAVA_CALL(AllBinaryLayer_getViewPosition(this->allbinaryLayer), getY2) + 4;
        }
        return -1;
}

