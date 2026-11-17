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
// package org.allbinary.game.ag.layer.pickup.health

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

typedef struct HealLayerFactory HealLayerFactory;
struct HealLayerFactory {
    AllBinaryLayerFactoryInterface AllBinaryLayerFactoryInterface_interface;
};


HealLayerFactory* HealLayerFactory_new(void);
AllBinaryLayer* HealLayerFactory_getInstance(HealLayerFactory* this);

void HealLayerFactory_init(HealLayerFactory* this) {
}

HealLayerFactory* HealLayerFactory_new(void) {
    HealLayerFactory* this = calloc(1, sizeof(HealLayerFactory));
    HealLayerFactory_init(this);
    return this;
}


// throws Exception
AllBinaryLayer* HealLayerFactory_getInstance(HealLayerFactory* this) {
        return HealLayer_new();
}

