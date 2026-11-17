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
// package org.allbinary.game.collision

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureUtil.h"
#include "org/allbinary/layer/AllBinaryLayer.h"

typedef struct LayerCollisionUtil LayerCollisionUtil;
struct LayerCollisionUtil {
    CollisionProcessor* collisionProcessor;
};

static LayerCollisionUtil* LayerCollisionUtil_instance;

LayerCollisionUtil* LayerCollisionUtil_new(void);
LayerCollisionUtil* LayerCollisionUtil_getInstance(void);

void LayerCollisionUtil_init(LayerCollisionUtil* this);
bool LayerCollisionUtil_isCollision(LayerCollisionUtil* this, AllBinaryLayer* myLayer, AllBinaryLayer* myLayer2);

// Static fields with runtime initializers: call this once at startup
void LayerCollisionUtil_staticInit(void) {
    LayerCollisionUtil_instance = LayerCollisionUtil_new();
}

static void LayerCollisionUtil_initFields(LayerCollisionUtil* this) {
    this->collisionProcessor = nullptr;
}


LayerCollisionUtil* LayerCollisionUtil_getInstance(void) {
        return LayerCollisionUtil_instance;
}


void LayerCollisionUtil_init(LayerCollisionUtil* this) {
    LayerCollisionUtil_initFields(this);
        Features* features = Features_getInstance();
        GameFeatureFactory* gameFeatureFactory = GameFeatureFactory_getInstance();
        if (OpenGLFeatureUtil_isAnyThreed(OpenGLFeatureUtil_getInstance()) && !Features_isFeature(features, gameFeatureFactory->COLLISIONS_FORCED_TWO_DIMENSIONAL)) {
            this->collisionProcessor = CollisionThreedProcessor_new();
        } else {
            this->collisionProcessor = Collision2DProcessor_new();
        }
}

LayerCollisionUtil* LayerCollisionUtil_new(void) {
    LayerCollisionUtil* this = calloc(1, sizeof(LayerCollisionUtil));
    LayerCollisionUtil_init(this);
    return this;
}


bool LayerCollisionUtil_isCollision(LayerCollisionUtil* this, AllBinaryLayer* myLayer, AllBinaryLayer* myLayer2) {
        return CollisionProcessor_isCollision(this->collisionProcessor, myLayer, myLayer2);
}

