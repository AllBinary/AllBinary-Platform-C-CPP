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

typedef struct AttackSound AttackSound;
struct AttackSound {
    CompositeSound base;
};

static Sound* AttackSound_soundInterface;

AttackSound* AttackSound_new(void);

void AttackSound_init(AttackSound* this);
Sound* AttackSound_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void AttackSound_staticInit(void) {
    AttackSound_soundInterface = AttackSound_new();
}


void AttackSound_init(AttackSound* this) {
        CompositeSound_init(&this->base, "resource:/wav/attack.wav");
}

AttackSound* AttackSound_new(void) {
    AttackSound* this = calloc(1, sizeof(AttackSound));
    AttackSound_init(this);
    return this;
}


Sound* AttackSound_getInstance(void) {
        return AttackSound_soundInterface;
}

