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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/game/TiledLayer.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/AllBinaryTiledLayerFactoryInterface.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackData.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackInfo.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/TiledLayerFactory.h"

typedef struct AllBinaryTiledLayerFactory AllBinaryTiledLayerFactory;
struct AllBinaryTiledLayerFactory {
    AllBinaryTiledLayerFactoryInterface AllBinaryTiledLayerFactoryInterface_interface;
};


AllBinaryTiledLayerFactory* AllBinaryTiledLayerFactory_new(void);
AllBinaryTiledLayer* AllBinaryTiledLayerFactory_getInstance(AllBinaryTiledLayerFactory* this, RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData);
AllBinaryTiledLayer* AllBinaryTiledLayerFactory_getMiniInstance(AllBinaryTiledLayerFactory* this, RaceTrackData* raceTrackData);

void AllBinaryTiledLayerFactory_init(AllBinaryTiledLayerFactory* this) {
}

AllBinaryTiledLayerFactory* AllBinaryTiledLayerFactory_new(void) {
    AllBinaryTiledLayerFactory* this = calloc(1, sizeof(AllBinaryTiledLayerFactory));
    AllBinaryTiledLayerFactory_init(this);
    return this;
}


// throws Exception
AllBinaryTiledLayer* AllBinaryTiledLayerFactory_getInstance(AllBinaryTiledLayerFactory* this, RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData) {
        AllBinaryTiledLayer* allbinaryTiledLayer = nullptr;
        TiledLayer* tiledLayer = TiledLayerFactory_getInstance(TiledLayerFactory_new(), raceTrackData);
        allbinaryTiledLayer = AllBinaryJ2METiledLayer_new(RaceTrackData_getId(raceTrackData), tiledLayer, RaceTrackData_getMapArray(raceTrackData), JAVA_CALL(BasicColorFactory_getInstance()->RED, intValue));
        AllBinaryTiledLayer_setCells(allbinaryTiledLayer, RaceTrackData_getMapArray(raceTrackData));
        return allbinaryTiledLayer;
}


// throws Exception
AllBinaryTiledLayer* AllBinaryTiledLayerFactory_getMiniInstance(AllBinaryTiledLayerFactory* this, RaceTrackData* raceTrackData) {
        SmallIntegerSingletonFactory* smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
        TiledLayer* tiledLayer = TiledLayerFactory_getMiniInstance(TiledLayerFactory_new(), raceTrackData);
        AllBinaryTiledLayer* allbinaryTiledLayer = AllBinaryJ2METiledLayer_new(SmallIntegerSingletonFactory_getAt(smallIntegerSingletonFactory, JAVA_CALL(RaceTrackData_getId(raceTrackData), intValue) + 100 + 1), tiledLayer, RaceTrackData_getMapArray(raceTrackData), JAVA_CALL(BasicColorFactory_getInstance()->RED, intValue));
        AllBinaryTiledLayer_setCells(allbinaryTiledLayer, RaceTrackData_getMapArray(raceTrackData));
        return allbinaryTiledLayer;
}

