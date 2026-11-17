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

typedef struct WorkSound WorkSound;
struct WorkSound {
    CompositeSound base;
};

static Sound* WorkSound_soundInterface;

WorkSound* WorkSound_new(void);

void WorkSound_init(WorkSound* this);
Sound* WorkSound_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void WorkSound_staticInit(void) {
    WorkSound_soundInterface = WorkSound_new();
}


void WorkSound_init(WorkSound* this) {
        CompositeSound_init(&this->base, "resource:/wav/work.wav");
}

WorkSound* WorkSound_new(void) {
    WorkSound* this = calloc(1, sizeof(WorkSound));
    WorkSound_init(this);
    return this;
}


Sound* WorkSound_getInstance(void) {
        return WorkSound_soundInterface;
}

