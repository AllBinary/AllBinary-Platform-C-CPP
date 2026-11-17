/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2002 AllBinary 
 *  
 * By agreeing to this license you and any business entity you represent are 
 * legally bound to the AllBinary Open License Version 1 legal agreement. 
 *  
 * You may obtain the AllBinary Open License Version 1 legal agreement from 
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
 *  
 * Created By: Travis Berthelot  
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
#include "org/allbinary/game/layer/waypoint/WorkWaypoint.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/BaseRaceTrackGeographicMap.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct AdvancedRTSLayerUtil AdvancedRTSLayerUtil;
struct AdvancedRTSLayerUtil {
    char unused;
};

static AdvancedRTSLayerUtil* AdvancedRTSLayerUtil_instance;

AdvancedRTSLayerUtil* AdvancedRTSLayerUtil_new(void);
AdvancedRTSLayerUtil* AdvancedRTSLayerUtil_getInstance(void);
ABHashtable* AdvancedRTSLayerUtil_createFakeRTSLayerHashtable(AdvancedRTSLayerUtil* this, BaseRaceTrackGeographicMap* baseRaceTrackGeographicMap);

// Static fields with runtime initializers: call this once at startup
void AdvancedRTSLayerUtil_staticInit(void) {
    AdvancedRTSLayerUtil_instance = AdvancedRTSLayerUtil_new();
}

void AdvancedRTSLayerUtil_init(AdvancedRTSLayerUtil* this) {
}

AdvancedRTSLayerUtil* AdvancedRTSLayerUtil_new(void) {
    AdvancedRTSLayerUtil* this = calloc(1, sizeof(AdvancedRTSLayerUtil));
    AdvancedRTSLayerUtil_init(this);
    return this;
}


AdvancedRTSLayerUtil* AdvancedRTSLayerUtil_getInstance(void) {
        return AdvancedRTSLayerUtil_instance;
}


ABHashtable* AdvancedRTSLayerUtil_createFakeRTSLayerHashtable(AdvancedRTSLayerUtil* this, BaseRaceTrackGeographicMap* baseRaceTrackGeographicMap) {
        ABHashtable* hashtable = RTSLayerUtil_createFakeRTSLayerHashtable(RTSLayerUtil_getInstance(), baseRaceTrackGeographicMap);
        ABHashtable_put(hashtable, WorkWaypoint_ID, SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 50));
        return hashtable;
}

