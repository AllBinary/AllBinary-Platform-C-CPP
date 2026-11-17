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

typedef struct Unit3DecalGameResources Unit3DecalGameResources;
struct Unit3DecalGameResources {
    BasicGameResources base;
};

static Any* Unit3DecalGameResources_instance;

Unit3DecalGameResources* Unit3DecalGameResources_new(void);
BasicGameResources* Unit3DecalGameResources_getInstance(void);

void Unit3DecalGameResources_init(Unit3DecalGameResources* this);
void Unit3DecalGameResources_append(Unit3DecalGameResources* this, const char* ROOT, const char* sizeString);
const char* Unit3DecalGameResources_getString(Unit3DecalGameResources* this);

// Static fields with runtime initializers: call this once at startup
void Unit3DecalGameResources_staticInit(void) {
    Unit3DecalGameResources_instance = NullUtil_getInstance()->NULL_OBJECT;
}


BasicGameResources* Unit3DecalGameResources_getInstance(void) {
        if (Unit3DecalGameResources_instance == NullUtil_getInstance()->NULL_OBJECT) {
            Unit3DecalGameResources_instance = Unit3DecalGameResources_new();
        }
        return ((Unit3DecalGameResources*) Unit3DecalGameResources_instance);
}


void Unit3DecalGameResources_init(Unit3DecalGameResources* this) {
    BasicGameResources_init(&this->base);
        const char* ROOT = "/unit_decal";
        const char* SMALL = "_40_by_40.png";
        const char* MEDIUM = SMALL;
        const char* SIZE_FOUR = SMALL;
        const char* SIZE_FIVE = SMALL;
        const char* SIZE_SIX = SMALL;
        const char** SIZE = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ SMALL, MEDIUM, SIZE_FOUR, SIZE_FIVE, SIZE_SIX }) / sizeof(const char*), (const char*[]){ SMALL, MEDIUM, SIZE_FOUR, SIZE_FIVE, SIZE_SIX }));
        BasicGameResources_init((&this->base), ROOT, SIZE);
}

Unit3DecalGameResources* Unit3DecalGameResources_new(void) {
    Unit3DecalGameResources* this = calloc(1, sizeof(Unit3DecalGameResources));
    Unit3DecalGameResources_init(this);
    return this;
}


// throws Exception
void Unit3DecalGameResources_append(Unit3DecalGameResources* this, const char* ROOT, const char* sizeString) {
        BasicGameResources_append((&this->base), ROOT, sizeString);
}


// throws Exception
const char* Unit3DecalGameResources_getString(Unit3DecalGameResources* this) {
        if (AndroidUtil_isAndroid()) {
            return GameGraphicsResourceUtil_getStringForFeature(GameGraphicsResourceUtil_getInstance(), GraphicsFeatureFactory_getInstance()->SPRITE_QUARTER_ROTATION_GRAPHICS);
        } else {
            return BasicGameResources_getString((&this->base));
        }
}

