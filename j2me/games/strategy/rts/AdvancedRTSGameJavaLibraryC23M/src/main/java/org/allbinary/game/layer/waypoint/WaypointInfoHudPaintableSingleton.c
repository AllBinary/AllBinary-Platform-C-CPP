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
// package org.allbinary.game.layer.waypoint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct WaypointInfoHudPaintableSingleton WaypointInfoHudPaintableSingleton;
struct WaypointInfoHudPaintableSingleton {
    char unused;
};

static WaypointInfoHudPaintable* WaypointInfoHudPaintableSingleton_instance;

WaypointInfoHudPaintableSingleton* WaypointInfoHudPaintableSingleton_new(void);
WaypointInfoHudPaintable* WaypointInfoHudPaintableSingleton_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void WaypointInfoHudPaintableSingleton_staticInit(void) {
    WaypointInfoHudPaintableSingleton_instance = WaypointInfoHudPaintable_new();
}

void WaypointInfoHudPaintableSingleton_init(WaypointInfoHudPaintableSingleton* this) {
}

WaypointInfoHudPaintableSingleton* WaypointInfoHudPaintableSingleton_new(void) {
    WaypointInfoHudPaintableSingleton* this = calloc(1, sizeof(WaypointInfoHudPaintableSingleton));
    WaypointInfoHudPaintableSingleton_init(this);
    return this;
}


WaypointInfoHudPaintable* WaypointInfoHudPaintableSingleton_getInstance(void) {
        return WaypointInfoHudPaintableSingleton_instance;
}

