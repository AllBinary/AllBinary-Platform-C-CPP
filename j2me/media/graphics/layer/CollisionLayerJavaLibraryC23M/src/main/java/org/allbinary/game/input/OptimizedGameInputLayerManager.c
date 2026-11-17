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
// package org.allbinary.game.input

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

typedef struct OptimizedGameInputLayerManager OptimizedGameInputLayerManager;
struct OptimizedGameInputLayerManager {
    LayerManager base;
};


OptimizedGameInputLayerManager* OptimizedGameInputLayerManager_new(void);

void OptimizedGameInputLayerManager_init(OptimizedGameInputLayerManager* this);


void OptimizedGameInputLayerManager_init(OptimizedGameInputLayerManager* this) {
        LayerManager_init(&this->base, LayerManagerNoDebug_getInstance());
}

OptimizedGameInputLayerManager* OptimizedGameInputLayerManager_new(void) {
    OptimizedGameInputLayerManager* this = calloc(1, sizeof(OptimizedGameInputLayerManager));
    OptimizedGameInputLayerManager_init(this);
    return this;
}

