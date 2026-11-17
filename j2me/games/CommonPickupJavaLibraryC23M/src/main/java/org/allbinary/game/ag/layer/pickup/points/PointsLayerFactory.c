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
// package org.allbinary.game.ag.layer.pickup.points

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerFactoryInterface.h"

typedef struct PointsLayerFactory PointsLayerFactory;
struct PointsLayerFactory {
    AllBinaryLayerFactoryInterface AllBinaryLayerFactoryInterface_interface;
    int32_t points;
};


PointsLayerFactory* PointsLayerFactory_new(int32_t points);

void PointsLayerFactory_init(PointsLayerFactory* this, int32_t points);
AllBinaryLayer* PointsLayerFactory_getInstance(PointsLayerFactory* this);

static void PointsLayerFactory_initFields(PointsLayerFactory* this) {
    
}


void PointsLayerFactory_init(PointsLayerFactory* this, int32_t points) {
    PointsLayerFactory_initFields(this);
        this->points = points;
}

PointsLayerFactory* PointsLayerFactory_new(int32_t points) {
    PointsLayerFactory* this = calloc(1, sizeof(PointsLayerFactory));
    PointsLayerFactory_init(this, points);
    return this;
}


// throws Exception
AllBinaryLayer* PointsLayerFactory_getInstance(PointsLayerFactory* this) {
        return PointsLayer_new(this->points);
}

