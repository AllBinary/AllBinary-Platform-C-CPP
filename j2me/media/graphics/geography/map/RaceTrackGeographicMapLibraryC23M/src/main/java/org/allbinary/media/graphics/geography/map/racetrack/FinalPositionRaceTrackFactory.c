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

typedef struct FinalPositionRaceTrackFactory FinalPositionRaceTrackFactory;
struct FinalPositionRaceTrackFactory {
    char unused;
};

constexpr int32_t FinalPositionRaceTrackFactory_FIRST_POSITION = 1;
static int32_t FinalPositionRaceTrackFactory_index;

FinalPositionRaceTrackFactory* FinalPositionRaceTrackFactory_new(void);

void FinalPositionRaceTrackFactory_init(FinalPositionRaceTrackFactory* this);
int32_t FinalPositionRaceTrackFactory_getInstance(void);
void FinalPositionRaceTrackFactory_reset(void);

// Static fields with runtime initializers: call this once at startup
void FinalPositionRaceTrackFactory_staticInit(void) {
    FinalPositionRaceTrackFactory_index = FinalPositionRaceTrackFactory_FIRST_POSITION;
}


void FinalPositionRaceTrackFactory_init(FinalPositionRaceTrackFactory* this) {
}

FinalPositionRaceTrackFactory* FinalPositionRaceTrackFactory_new(void) {
    FinalPositionRaceTrackFactory* this = calloc(1, sizeof(FinalPositionRaceTrackFactory));
    FinalPositionRaceTrackFactory_init(this);
    return this;
}


// synchronized
int32_t FinalPositionRaceTrackFactory_getInstance(void) {
        return FinalPositionRaceTrackFactory_index++;
}


// synchronized
void FinalPositionRaceTrackFactory_reset(void) {
        FinalPositionRaceTrackFactory_index = FinalPositionRaceTrackFactory_FIRST_POSITION;
}

