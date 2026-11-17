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
// package org.allbinary.game.layer.pickup

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

typedef struct RaceTrackPickupLayerFactory RaceTrackPickupLayerFactory;
struct RaceTrackPickupLayerFactory {
    AllBinaryLayerFactoryInterface AllBinaryLayerFactoryInterface_interface;
};


RaceTrackPickupLayerFactory* RaceTrackPickupLayerFactory_new(void);
AllBinaryLayer* RaceTrackPickupLayerFactory_getInstance(RaceTrackPickupLayerFactory* this);

void RaceTrackPickupLayerFactory_init(RaceTrackPickupLayerFactory* this) {
}

RaceTrackPickupLayerFactory* RaceTrackPickupLayerFactory_new(void) {
    RaceTrackPickupLayerFactory* this = calloc(1, sizeof(RaceTrackPickupLayerFactory));
    RaceTrackPickupLayerFactory_init(this);
    return this;
}


// throws Exception
AllBinaryLayer* RaceTrackPickupLayerFactory_getInstance(RaceTrackPickupLayerFactory* this) {
        return RaceTrackPickupLayer_new();
}

