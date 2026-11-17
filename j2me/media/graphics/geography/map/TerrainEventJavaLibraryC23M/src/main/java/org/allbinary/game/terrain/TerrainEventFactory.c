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
// package org.allbinary.game.terrain

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObjectFactoryInterface.h"

typedef struct TerrainEventFactory TerrainEventFactory;
struct TerrainEventFactory {
    AllBinaryEventObjectFactoryInterface AllBinaryEventObjectFactoryInterface_interface;
};


TerrainEventFactory* TerrainEventFactory_new(void);

void TerrainEventFactory_init(TerrainEventFactory* this);
AllBinaryEventObject* TerrainEventFactory_getInstance(TerrainEventFactory* this);


void TerrainEventFactory_init(TerrainEventFactory* this) {
}

TerrainEventFactory* TerrainEventFactory_new(void) {
    TerrainEventFactory* this = calloc(1, sizeof(TerrainEventFactory));
    TerrainEventFactory_init(this);
    return this;
}


AllBinaryEventObject* TerrainEventFactory_getInstance(TerrainEventFactory* this) {
        return TerrainEvent_new(NullUtil_getInstance()->NULL_OBJECT);
}

