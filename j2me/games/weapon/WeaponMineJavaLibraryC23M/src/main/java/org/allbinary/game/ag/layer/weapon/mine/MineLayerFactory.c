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
// package org.allbinary.game.ag.layer.weapon.mine

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
#include "org/allbinary/view/ViewPositionFactoryInterface.h"

typedef struct MineLayerFactory MineLayerFactory;
struct MineLayerFactory {
    AllBinaryLayerFactoryInterface AllBinaryLayerFactoryInterface_interface;
    ViewPositionFactoryInterface* viewPositionFactoryInterface;
};


MineLayerFactory* MineLayerFactory_new(ViewPositionFactoryInterface* viewPositionFactoryInterface);

void MineLayerFactory_init(MineLayerFactory* this, ViewPositionFactoryInterface* viewPositionFactoryInterface);
AllBinaryLayer* MineLayerFactory_getInstance(MineLayerFactory* this);

static void MineLayerFactory_initFields(MineLayerFactory* this) {
    
}


void MineLayerFactory_init(MineLayerFactory* this, ViewPositionFactoryInterface* viewPositionFactoryInterface) {
    MineLayerFactory_initFields(this);
        this->viewPositionFactoryInterface = viewPositionFactoryInterface;
}

MineLayerFactory* MineLayerFactory_new(ViewPositionFactoryInterface* viewPositionFactoryInterface) {
    MineLayerFactory* this = calloc(1, sizeof(MineLayerFactory));
    MineLayerFactory_init(this, viewPositionFactoryInterface);
    return this;
}


// throws Exception
AllBinaryLayer* MineLayerFactory_getInstance(MineLayerFactory* this) {
        return MineLayer_new(ViewPositionFactoryInterface_getInstance(this->viewPositionFactoryInterface));
}

