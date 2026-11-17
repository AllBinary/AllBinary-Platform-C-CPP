// Generated Code Do Not Modify
// package org.allbinary.media.graphics.geography.map.racetrack

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"

typedef struct AllBinaryTiledLayerFactoryInterface AllBinaryTiledLayerFactoryInterface;
struct AllBinaryTiledLayerFactoryInterface {
    AllBinaryTiledLayer* (*getInstance)(void* this, RaceTrackInfo* raceTrackInfo, RaceTrackData* raceTrackData);
    AllBinaryTiledLayer* (*getMiniInstance)(void* this, RaceTrackData* raceTrackData);
};


