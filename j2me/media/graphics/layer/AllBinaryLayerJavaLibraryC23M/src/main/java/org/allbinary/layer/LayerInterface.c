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
#include "org/allbinary/game/identification/GroupInterfaceCompositeInterface.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#include "org/allbinary/layer/NamedInterface.h"
#include "org/allbinary/layer/PositionInterface.h"

typedef struct LayerInterface LayerInterface;
struct LayerInterface {
    int32_t (*getHeight)(void* this);
    int32_t (*getWidth)(void* this);
    int32_t (*getHalfHeight)(void* this);
    int32_t (*getHalfWidth)(void* this);
    int32_t (*getXP)(void* this);
    int32_t (*getYP)(void* this);
    int32_t (*getZP)(void* this);
    int32_t (*getX2)(void* this);
    int32_t (*getY2)(void* this);
    int32_t (*getZ2)(void* this);
    bool (*isVisible)(void* this);
    void (*moveDXYZ)(void* this, int32_t dx, int32_t dy, int32_t dz);
    void (*setVisible)(void* this, bool visible);
    bool (*implmentsTickableInterface)(void* this);
    bool (*implmentsCollidableInterface)(void* this);
    bool (*implmentsGameInputInterface)(void* this);
    bool (*implmentsArtificialIntelligenceCompositeInterface)(void* this);
    int32_t (*getType)(void* this);
};


