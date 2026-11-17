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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct LayerPlacementType LayerPlacementType;
struct LayerPlacementType {
    int32_t type;
};


LayerPlacementType* LayerPlacementType_new(int32_t type);

void LayerPlacementType_init(LayerPlacementType* this, int32_t type);
int32_t LayerPlacementType_getType(LayerPlacementType* this);
void LayerPlacementType_setType(LayerPlacementType* this, int32_t type);

static void LayerPlacementType_initFields(LayerPlacementType* this) {
    
}


void LayerPlacementType_init(LayerPlacementType* this, int32_t type) {
    LayerPlacementType_initFields(this);
        this->type = type;
}

LayerPlacementType* LayerPlacementType_new(int32_t type) {
    LayerPlacementType* this = calloc(1, sizeof(LayerPlacementType));
    LayerPlacementType_init(this, type);
    return this;
}


int32_t LayerPlacementType_getType(LayerPlacementType* this) {
        return this->type;
}


void LayerPlacementType_setType(LayerPlacementType* this, int32_t type) {
        this->type = type;
}

