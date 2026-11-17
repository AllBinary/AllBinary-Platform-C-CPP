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
// package org.allbinary.game.layer.unit

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/resources/BasicGameResources.h"
#include "org/allbinary/game/layer/resources/GameGraphicsResourceUtil.h"
#include "org/allbinary/AndroidUtil.h"
#include "org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h"
#include "org/allbinary/logic/NullUtil.h"

typedef struct Unit1DecalGameResources Unit1DecalGameResources;
struct Unit1DecalGameResources {
    BasicGameResources base;
};

static Any* Unit1DecalGameResources_instance;

Unit1DecalGameResources* Unit1DecalGameResources_new(void);
BasicGameResources* Unit1DecalGameResources_getInstance(void);

void Unit1DecalGameResources_init(Unit1DecalGameResources* this);
void Unit1DecalGameResources_append(Unit1DecalGameResources* this, const char* ROOT, const char* sizeString);
const char* Unit1DecalGameResources_getString(Unit1DecalGameResources* this);

// Static fields with runtime initializers: call this once at startup
void Unit1DecalGameResources_staticInit(void) {
    Unit1DecalGameResources_instance = NullUtil_getInstance()->NULL_OBJECT;
}


BasicGameResources* Unit1DecalGameResources_getInstance(void) {
        if (Unit1DecalGameResources_instance == NullUtil_getInstance()->NULL_OBJECT) {
            Unit1DecalGameResources_instance = Unit1DecalGameResources_new();
        }
        return ((Unit1DecalGameResources*) Unit1DecalGameResources_instance);
}


void Unit1DecalGameResources_init(Unit1DecalGameResources* this) {
    BasicGameResources_init(&this->base);
        const char* ROOT = "/unit_decal";
        const char* SMALL = "_20_by_20.png";
        const char* MEDIUM = SMALL;
        const char* SIZE_FOUR = SMALL;
        const char* SIZE_FIVE = SMALL;
        const char* SIZE_SIX = SMALL;
        const char** SIZE = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ SMALL, MEDIUM, SIZE_FOUR, SIZE_FIVE, SIZE_SIX }) / sizeof(const char*), (const char*[]){ SMALL, MEDIUM, SIZE_FOUR, SIZE_FIVE, SIZE_SIX }));
        BasicGameResources_init((&this->base), ROOT, SIZE);
}

Unit1DecalGameResources* Unit1DecalGameResources_new(void) {
    Unit1DecalGameResources* this = calloc(1, sizeof(Unit1DecalGameResources));
    Unit1DecalGameResources_init(this);
    return this;
}


// throws Exception
void Unit1DecalGameResources_append(Unit1DecalGameResources* this, const char* ROOT, const char* sizeString) {
        BasicGameResources_append((&this->base), ROOT, sizeString);
}


// throws Exception
const char* Unit1DecalGameResources_getString(Unit1DecalGameResources* this) {
        if (AndroidUtil_isAndroid()) {
            return GameGraphicsResourceUtil_getStringForFeature(GameGraphicsResourceUtil_getInstance(), GraphicsFeatureFactory_getInstance()->SPRITE_QUARTER_ROTATION_GRAPHICS);
        } else {
            return BasicGameResources_getString((&this->base));
        }
}

