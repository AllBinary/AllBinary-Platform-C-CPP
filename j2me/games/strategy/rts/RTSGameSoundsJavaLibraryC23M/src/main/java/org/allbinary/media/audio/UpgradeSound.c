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

typedef struct UpgradeSound UpgradeSound;
struct UpgradeSound {
    CompositeSound base;
};

static Sound* UpgradeSound_soundInterface;

UpgradeSound* UpgradeSound_new(void);

void UpgradeSound_init(UpgradeSound* this);
Sound* UpgradeSound_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void UpgradeSound_staticInit(void) {
    UpgradeSound_soundInterface = UpgradeSound_new();
}


void UpgradeSound_init(UpgradeSound* this) {
        CompositeSound_init(&this->base, "resource:/wav/upgrade.wav");
}

UpgradeSound* UpgradeSound_new(void) {
    UpgradeSound* this = calloc(1, sizeof(UpgradeSound));
    UpgradeSound_init(this);
    return this;
}


Sound* UpgradeSound_getInstance(void) {
        return UpgradeSound_soundInterface;
}

