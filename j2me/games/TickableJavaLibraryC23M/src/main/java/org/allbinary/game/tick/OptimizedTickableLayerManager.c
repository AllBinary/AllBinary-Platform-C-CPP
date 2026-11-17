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
// package org.allbinary.game.tick

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/layer/LayerManager.h"
#include "org/allbinary/layer/LayerManagerNoDebug.h"

typedef struct OptimizedTickableLayerManager OptimizedTickableLayerManager;
struct OptimizedTickableLayerManager {
    LayerManager base;
};


OptimizedTickableLayerManager* OptimizedTickableLayerManager_new(void);

void OptimizedTickableLayerManager_init(OptimizedTickableLayerManager* this);


void OptimizedTickableLayerManager_init(OptimizedTickableLayerManager* this) {
        LayerManager_init(&this->base, LayerManagerNoDebug_getInstance());
}

OptimizedTickableLayerManager* OptimizedTickableLayerManager_new(void) {
    OptimizedTickableLayerManager* this = calloc(1, sizeof(OptimizedTickableLayerManager));
    OptimizedTickableLayerManager_init(this);
    return this;
}

