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
// package org.allbinary.media.graphics.geography.map.racetrack

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/configuration/feature/GameFeature.h"

typedef struct RaceTrackGameFeature RaceTrackGameFeature;
struct RaceTrackGameFeature {
    GameFeature base;
};

GameFeature* RaceTrackGameFeature_MINI_MAP;
GameFeature* RaceTrackGameFeature_AUTO_FINISH_AI;

RaceTrackGameFeature* RaceTrackGameFeature_new(const char* name);

void RaceTrackGameFeature_init(RaceTrackGameFeature* this, const char* name);

// Static fields with runtime initializers: call this once at startup
void RaceTrackGameFeature_staticInit(void) {
    RaceTrackGameFeature_MINI_MAP = RaceTrackGameFeature_new("Mini Map");
    RaceTrackGameFeature_AUTO_FINISH_AI = RaceTrackGameFeature_new("Auto Finish AI");
}


void RaceTrackGameFeature_init(RaceTrackGameFeature* this, const char* name) {
        GameFeature_init(&this->base, name);
}

RaceTrackGameFeature* RaceTrackGameFeature_new(const char* name) {
    RaceTrackGameFeature* this = calloc(1, sizeof(RaceTrackGameFeature));
    RaceTrackGameFeature_init(this, name);
    return this;
}

