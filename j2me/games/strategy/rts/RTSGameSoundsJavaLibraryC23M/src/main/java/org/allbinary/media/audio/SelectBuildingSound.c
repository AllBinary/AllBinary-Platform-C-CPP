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

typedef struct SelectBuildingSound SelectBuildingSound;
struct SelectBuildingSound {
    CompositeSound base;
};

static Sound* SelectBuildingSound_soundInterface;

SelectBuildingSound* SelectBuildingSound_new(void);

void SelectBuildingSound_init(SelectBuildingSound* this);
Sound* SelectBuildingSound_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void SelectBuildingSound_staticInit(void) {
    SelectBuildingSound_soundInterface = SelectBuildingSound_new();
}


void SelectBuildingSound_init(SelectBuildingSound* this) {
        CompositeSound_init(&this->base, "resource:/wav/select_building.wav");
}

SelectBuildingSound* SelectBuildingSound_new(void) {
    SelectBuildingSound* this = calloc(1, sizeof(SelectBuildingSound));
    SelectBuildingSound_init(this);
    return this;
}


Sound* SelectBuildingSound_getInstance(void) {
        return SelectBuildingSound_soundInterface;
}

