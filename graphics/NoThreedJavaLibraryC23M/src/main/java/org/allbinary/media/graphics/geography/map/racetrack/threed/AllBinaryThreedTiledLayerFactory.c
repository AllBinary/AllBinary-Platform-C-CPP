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
// package org.allbinary.media.graphics.geography.map.racetrack.threed

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackData.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackInfo.h"

typedef struct AllBinaryThreedTiledLayerFactory AllBinaryThreedTiledLayerFactory;
struct AllBinaryThreedTiledLayerFactory {
    char unused;
};

static AllBinaryThreedTiledLayerFactory* AllBinaryThreedTiledLayerFactory_instance;

AllBinaryThreedTiledLayerFactory* AllBinaryThreedTiledLayerFactory_new(void);
AllBinaryThreedTiledLayerFactory* AllBinaryThreedTiledLayerFactory_getInstance(void);
AllBinaryTiledLayer* AllBinaryThreedTiledLayerFactory_getInstance(AllBinaryThreedTiledLayerFactory* this, RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData);

// Static fields with runtime initializers: call this once at startup
void AllBinaryThreedTiledLayerFactory_staticInit(void) {
    AllBinaryThreedTiledLayerFactory_instance = AllBinaryThreedTiledLayerFactory_new();
}

void AllBinaryThreedTiledLayerFactory_init(AllBinaryThreedTiledLayerFactory* this) {
}

AllBinaryThreedTiledLayerFactory* AllBinaryThreedTiledLayerFactory_new(void) {
    AllBinaryThreedTiledLayerFactory* this = calloc(1, sizeof(AllBinaryThreedTiledLayerFactory));
    AllBinaryThreedTiledLayerFactory_init(this);
    return this;
}


AllBinaryThreedTiledLayerFactory* AllBinaryThreedTiledLayerFactory_getInstance(void) {
        return AllBinaryThreedTiledLayerFactory_instance;
}


// throws Exception
// Java overloaded method: C needs a different name
AllBinaryTiledLayer* AllBinaryThreedTiledLayerFactory_getInstance(AllBinaryThreedTiledLayerFactory* this, RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData) {
        java_throw(java_exception_new("Exception", "No Threed"));
}

