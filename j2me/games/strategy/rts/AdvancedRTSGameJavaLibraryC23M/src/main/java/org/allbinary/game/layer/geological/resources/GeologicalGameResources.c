/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2002 AllBinary 
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
// package org.allbinary.game.layer.geological.resources

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

typedef struct GeologicalGameResources GeologicalGameResources;
struct GeologicalGameResources {
    BasicGameResources base;
};

static Any* GeologicalGameResources_instance;

GeologicalGameResources* GeologicalGameResources_new(void);
BasicGameResources* GeologicalGameResources_getInstance(void);

void GeologicalGameResources_init(GeologicalGameResources* this);
void GeologicalGameResources_append(GeologicalGameResources* this, const char* ROOT, const char* sizeString);
const char* GeologicalGameResources_getString(GeologicalGameResources* this);

// Static fields with runtime initializers: call this once at startup
void GeologicalGameResources_staticInit(void) {
    GeologicalGameResources_instance = NullUtil_getInstance()->NULL_OBJECT;
}


BasicGameResources* GeologicalGameResources_getInstance(void) {
        if (GeologicalGameResources_instance == NullUtil_getInstance()->NULL_OBJECT) {
            GeologicalGameResources_instance = GeologicalGameResources_new();
        }
        return ((GeologicalGameResources*) GeologicalGameResources_instance);
}


void GeologicalGameResources_init(GeologicalGameResources* this) {
    BasicGameResources_init(&this->base);
        const char* ROOT = "/resource";
        const char* SMALL = "_20_by_20.png";
        const char* MEDIUM = SMALL;
        const char* SIZE_FOUR = SMALL;
        const char* SIZE_FIVE = SMALL;
        const char* SIZE_SIX = SMALL;
        const char** SIZE = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ SMALL, MEDIUM, SIZE_FOUR, SIZE_FIVE, SIZE_SIX }) / sizeof(const char*), (const char*[]){ SMALL, MEDIUM, SIZE_FOUR, SIZE_FIVE, SIZE_SIX }));
        BasicGameResources_init((&this->base), ROOT, SIZE);
}

GeologicalGameResources* GeologicalGameResources_new(void) {
    GeologicalGameResources* this = calloc(1, sizeof(GeologicalGameResources));
    GeologicalGameResources_init(this);
    return this;
}


// throws Exception
void GeologicalGameResources_append(GeologicalGameResources* this, const char* ROOT, const char* sizeString) {
        BasicGameResources_append((&this->base), ROOT, sizeString);
}


// throws Exception
const char* GeologicalGameResources_getString(GeologicalGameResources* this) {
        if (AndroidUtil_isAndroid()) {
            return GameGraphicsResourceUtil_getStringForFeature(GameGraphicsResourceUtil_getInstance(), GraphicsFeatureFactory_getInstance()->SPRITE_QUARTER_ROTATION_GRAPHICS);
        } else {
            return BasicGameResources_getString((&this->base));
        }
}

