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

typedef struct DropWeaponSound DropWeaponSound;
struct DropWeaponSound {
    CompositeSound base;
};

static Sound* DropWeaponSound_soundInterface;

DropWeaponSound* DropWeaponSound_new(void);

void DropWeaponSound_init(DropWeaponSound* this);
Sound* DropWeaponSound_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void DropWeaponSound_staticInit(void) {
    DropWeaponSound_soundInterface = DropWeaponSound_new();
}


void DropWeaponSound_init(DropWeaponSound* this) {
        CompositeSound_init(&this->base, "resource:/wav/mine.wav");
}

DropWeaponSound* DropWeaponSound_new(void) {
    DropWeaponSound* this = calloc(1, sizeof(DropWeaponSound));
    DropWeaponSound_init(this);
    return this;
}


Sound* DropWeaponSound_getInstance(void) {
        return DropWeaponSound_soundInterface;
}

