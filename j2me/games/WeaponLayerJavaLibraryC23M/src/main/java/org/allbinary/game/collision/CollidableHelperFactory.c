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
#include "org/allbinary/layer/AllBinaryLayer.h"

typedef struct CollidableHelperFactory CollidableHelperFactory;
struct CollidableHelperFactory {
    char unused;
};


CollidableHelperFactory* CollidableHelperFactory_new(void);
CollisionHelper* CollidableHelperFactory_getInstance(void);

void CollidableHelperFactory_init(CollidableHelperFactory* this) {
}

CollidableHelperFactory* CollidableHelperFactory_new(void) {
    CollidableHelperFactory* this = calloc(1, sizeof(CollidableHelperFactory));
    CollidableHelperFactory_init(this);
    return this;
}


CollisionHelper* CollidableHelperFactory_getInstance(void) {
        if (Features_isFeature(Features_getInstance(), GameFeatureFactory_getInstance()->COLLISIONS_WITH_SOURCE)) {
            return CollisionHelper_new(AllBinaryLayer_NULL_ALLBINARY_LAYER);
        } else {
            return SourceCollisionHelper_new(AllBinaryLayer_NULL_ALLBINARY_LAYER);
        }
}

