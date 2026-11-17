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

//Use 8hz16bitmono for most J2ME
typedef struct FireworksSound FireworksSound;
struct FireworksSound {
    CompositeSound base;
};

static Sound* FireworksSound_soundInterface;

FireworksSound* FireworksSound_new(void);

void FireworksSound_init(FireworksSound* this);
Sound* FireworksSound_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void FireworksSound_staticInit(void) {
    FireworksSound_soundInterface = FireworksSound_new();
}


void FireworksSound_init(FireworksSound* this) {
        CompositeSound_init(&this->base, "resource:/wav/fireworks.wav");
}

FireworksSound* FireworksSound_new(void) {
    FireworksSound* this = calloc(1, sizeof(FireworksSound));
    FireworksSound_init(this);
    return this;
}


Sound* FireworksSound_getInstance(void) {
        return FireworksSound_soundInterface;
}

