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
// package org.allbinary.layer.relationship

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/layer/relationship/RelativeLayerRelationship.h"

typedef struct MiddleRelativeLayerRelationship MiddleRelativeLayerRelationship;
struct MiddleRelativeLayerRelationship {
    RelativeLayerRelationship base;
};


MiddleRelativeLayerRelationship* MiddleRelativeLayerRelationship_new(AllBinaryLayer* layer);

void MiddleRelativeLayerRelationship_init(MiddleRelativeLayerRelationship* this, AllBinaryLayer* layer);


void MiddleRelativeLayerRelationship_init(MiddleRelativeLayerRelationship* this, AllBinaryLayer* layer) {
        RelativeLayerRelationship_init(&this->base, layer, PointFactory_createXY(PointFactory_getInstance(), AllBinaryLayer_getHalfWidth(layer), AllBinaryLayer_getHalfHeight(layer)), BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance()));
}

MiddleRelativeLayerRelationship* MiddleRelativeLayerRelationship_new(AllBinaryLayer* layer) {
    MiddleRelativeLayerRelationship* this = calloc(1, sizeof(MiddleRelativeLayerRelationship));
    MiddleRelativeLayerRelationship_init(this, layer);
    return this;
}

