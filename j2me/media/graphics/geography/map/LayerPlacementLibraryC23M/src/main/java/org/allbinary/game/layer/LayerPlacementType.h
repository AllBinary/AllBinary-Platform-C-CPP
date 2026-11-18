#ifndef ORG_ALLBINARY_GAME_LAYER_LAYERPLACEMENTTYPE_H
#define ORG_ALLBINARY_GAME_LAYER_LAYERPLACEMENTTYPE_H
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
#define LayerPlacementType_new1 LayerPlacementType_new
#define LayerPlacementType_init1 LayerPlacementType_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LayerPlacementType_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LayerPlacementType_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_LAYERPLACEMENTTYPE_H
