/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2006 AllBinary 
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
// package org.allbinary.game.view

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/view/ViewPositionFactoryInterface.h"

typedef struct StaticTileLayerViewPositionFactory StaticTileLayerViewPositionFactory;
struct StaticTileLayerViewPositionFactory {
    ViewPositionFactoryInterface ViewPositionFactoryInterface_interface;
};


StaticTileLayerViewPositionFactory* StaticTileLayerViewPositionFactory_new(void);
ViewPositionBase* StaticTileLayerViewPositionFactory_getInstance(StaticTileLayerViewPositionFactory* this);

void StaticTileLayerViewPositionFactory_init(StaticTileLayerViewPositionFactory* this) {
}

StaticTileLayerViewPositionFactory* StaticTileLayerViewPositionFactory_new(void) {
    StaticTileLayerViewPositionFactory* this = calloc(1, sizeof(StaticTileLayerViewPositionFactory));
    StaticTileLayerViewPositionFactory_init(this);
    return this;
}


// throws Exception
ViewPositionBase* StaticTileLayerViewPositionFactory_getInstance(StaticTileLayerViewPositionFactory* this) {
        return StaticTileLayerIntoPositionViewPosition_new();
}

