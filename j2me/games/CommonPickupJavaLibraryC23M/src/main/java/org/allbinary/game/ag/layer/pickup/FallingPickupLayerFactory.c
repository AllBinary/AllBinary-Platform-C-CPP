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
// package org.allbinary.game.ag.layer.pickup

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerFactoryInterface.h"

typedef struct FallingPickupLayerFactory FallingPickupLayerFactory;
struct FallingPickupLayerFactory {
    AllBinaryLayerFactoryInterface AllBinaryLayerFactoryInterface_interface;
};


FallingPickupLayerFactory* FallingPickupLayerFactory_new(void);
AllBinaryLayer* FallingPickupLayerFactory_getInstance(FallingPickupLayerFactory* this);

void FallingPickupLayerFactory_init(FallingPickupLayerFactory* this) {
}

FallingPickupLayerFactory* FallingPickupLayerFactory_new(void) {
    FallingPickupLayerFactory* this = calloc(1, sizeof(FallingPickupLayerFactory));
    FallingPickupLayerFactory_init(this);
    return this;
}


// throws Exception
AllBinaryLayer* FallingPickupLayerFactory_getInstance(FallingPickupLayerFactory* this) {
        return FallingPickupLayer_new(RemoteInfo_REMOTE_INFO);
}

