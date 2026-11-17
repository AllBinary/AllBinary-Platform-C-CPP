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
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/RelativeRelationship.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct RelativeLayerRelationship RelativeLayerRelationship;
struct RelativeLayerRelationship {
    RelativeRelationship base;
    AllBinaryLayer* layer;
};


RelativeLayerRelationship* RelativeLayerRelationship_new(AllBinaryLayer* layer, GPoint* point, BasicArrayList* typesAllowedList);

void RelativeLayerRelationship_init(RelativeLayerRelationship* this, AllBinaryLayer* layer, GPoint* point, BasicArrayList* typesAllowedList);
int32_t RelativeLayerRelationship_getX(RelativeLayerRelationship* this);
int32_t RelativeLayerRelationship_getY(RelativeLayerRelationship* this);
int32_t RelativeLayerRelationship_getZ(RelativeLayerRelationship* this);

static void RelativeLayerRelationship_initFields(RelativeLayerRelationship* this) {
    this->layer = AllBinaryLayer_NULL_ALLBINARY_LAYER;
}


void RelativeLayerRelationship_init(RelativeLayerRelationship* this, AllBinaryLayer* layer, GPoint* point, BasicArrayList* typesAllowedList) {
        RelativeRelationship_init(&this->base, point, typesAllowedList);
        RelativeLayerRelationship_initFields(this);
        this->layer = layer;
}

RelativeLayerRelationship* RelativeLayerRelationship_new(AllBinaryLayer* layer, GPoint* point, BasicArrayList* typesAllowedList) {
    RelativeLayerRelationship* this = calloc(1, sizeof(RelativeLayerRelationship));
    RelativeLayerRelationship_init(this, layer, point, typesAllowedList);
    return this;
}


int32_t RelativeLayerRelationship_getX(RelativeLayerRelationship* this) {
        return AllBinaryLayer_getXP(this->layer) + RelativeRelationship_getX((&this->base));
}


int32_t RelativeLayerRelationship_getY(RelativeLayerRelationship* this) {
        return AllBinaryLayer_getYP(this->layer) + RelativeRelationship_getY((&this->base));
}


int32_t RelativeLayerRelationship_getZ(RelativeLayerRelationship* this) {
        return AllBinaryLayer_getZP(this->layer) + RelativeRelationship_getZ((&this->base));
}

