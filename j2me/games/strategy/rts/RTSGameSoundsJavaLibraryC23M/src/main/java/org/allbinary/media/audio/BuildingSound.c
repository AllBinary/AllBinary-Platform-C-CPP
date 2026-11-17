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
// package org.allbinary.media.audio

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/media/audio/CompositeSound.h"
#include "org/allbinary/media/audio/Sound.h"

typedef struct BuildingSound BuildingSound;
struct BuildingSound {
    CompositeSound base;
};

static Sound* BuildingSound_soundInterface;

BuildingSound* BuildingSound_new(void);

void BuildingSound_init(BuildingSound* this);
Sound* BuildingSound_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void BuildingSound_staticInit(void) {
    BuildingSound_soundInterface = BuildingSound_new();
}


void BuildingSound_init(BuildingSound* this) {
        CompositeSound_init(&this->base, "resource:/wav/building.wav");
}

BuildingSound* BuildingSound_new(void) {
    BuildingSound* this = calloc(1, sizeof(BuildingSound));
    BuildingSound_init(this);
    return this;
}


Sound* BuildingSound_getInstance(void) {
        return BuildingSound_soundInterface;
}

