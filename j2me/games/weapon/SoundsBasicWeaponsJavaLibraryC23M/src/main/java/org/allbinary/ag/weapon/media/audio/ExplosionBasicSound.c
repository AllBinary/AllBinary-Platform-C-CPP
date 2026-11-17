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
// package org.allbinary.ag.weapon.media.audio

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

typedef struct ExplosionBasicSound ExplosionBasicSound;
struct ExplosionBasicSound {
    CompositeSound base;
};

static Sound* ExplosionBasicSound_soundInterface;

ExplosionBasicSound* ExplosionBasicSound_new(void);

void ExplosionBasicSound_init(ExplosionBasicSound* this);
Sound* ExplosionBasicSound_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void ExplosionBasicSound_staticInit(void) {
    ExplosionBasicSound_soundInterface = ExplosionBasicSound_new();
}


void ExplosionBasicSound_init(ExplosionBasicSound* this) {
        CompositeSound_init(&this->base, "resource:/wav/explosion.wav");
}

ExplosionBasicSound* ExplosionBasicSound_new(void) {
    ExplosionBasicSound* this = calloc(1, sizeof(ExplosionBasicSound));
    ExplosionBasicSound_init(this);
    return this;
}


Sound* ExplosionBasicSound_getInstance(void) {
        return ExplosionBasicSound_soundInterface;
}

