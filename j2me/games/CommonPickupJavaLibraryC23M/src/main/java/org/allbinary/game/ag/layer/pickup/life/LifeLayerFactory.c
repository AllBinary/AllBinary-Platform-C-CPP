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
// package org.allbinary.game.ag.layer.pickup.life

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

typedef struct LifeLayerFactory LifeLayerFactory;
struct LifeLayerFactory {
    AllBinaryLayerFactoryInterface AllBinaryLayerFactoryInterface_interface;
};


LifeLayerFactory* LifeLayerFactory_new(void);
AllBinaryLayer* LifeLayerFactory_getInstance(LifeLayerFactory* this);

void LifeLayerFactory_init(LifeLayerFactory* this) {
}

LifeLayerFactory* LifeLayerFactory_new(void) {
    LifeLayerFactory* this = calloc(1, sizeof(LifeLayerFactory));
    LifeLayerFactory_init(this);
    return this;
}


// throws Exception
AllBinaryLayer* LifeLayerFactory_getInstance(LifeLayerFactory* this) {
        return LifeLayer_new();
}

