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

typedef struct DowngradeSound DowngradeSound;
struct DowngradeSound {
    CompositeSound base;
};

static Sound* DowngradeSound_soundInterface;

DowngradeSound* DowngradeSound_new(void);

void DowngradeSound_init(DowngradeSound* this);
Sound* DowngradeSound_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void DowngradeSound_staticInit(void) {
    DowngradeSound_soundInterface = DowngradeSound_new();
}


void DowngradeSound_init(DowngradeSound* this) {
        CompositeSound_init(&this->base, "resource:/wav/downgrade.wav");
}

DowngradeSound* DowngradeSound_new(void) {
    DowngradeSound* this = calloc(1, sizeof(DowngradeSound));
    DowngradeSound_init(this);
    return this;
}


Sound* DowngradeSound_getInstance(void) {
        return DowngradeSound_soundInterface;
}

