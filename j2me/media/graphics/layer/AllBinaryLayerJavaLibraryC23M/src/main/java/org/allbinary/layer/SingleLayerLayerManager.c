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
// package org.allbinary.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/layer/LayerManager.h"

typedef struct SingleLayerLayerManager SingleLayerLayerManager;
struct SingleLayerLayerManager {
    LayerManager base;
};


SingleLayerLayerManager* SingleLayerLayerManager_new(void);

void SingleLayerLayerManager_init(SingleLayerLayerManager* this);


void SingleLayerLayerManager_init(SingleLayerLayerManager* this) {
        LayerManager_init(&this->base, LayerManagerNoDebug_getInstance());
}

SingleLayerLayerManager* SingleLayerLayerManager_new(void) {
    SingleLayerLayerManager* this = calloc(1, sizeof(SingleLayerLayerManager));
    SingleLayerLayerManager_init(this);
    return this;
}

