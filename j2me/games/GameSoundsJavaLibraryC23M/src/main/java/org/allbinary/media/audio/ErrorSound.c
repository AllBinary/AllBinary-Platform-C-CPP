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

typedef struct ErrorSound ErrorSound;
struct ErrorSound {
    CompositeSound base;
};

static Sound* ErrorSound_soundInterface;

ErrorSound* ErrorSound_new(void);

void ErrorSound_init(ErrorSound* this);
Sound* ErrorSound_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void ErrorSound_staticInit(void) {
    ErrorSound_soundInterface = ErrorSound_new();
}


void ErrorSound_init(ErrorSound* this) {
        CompositeSound_init(&this->base, "resource:/wav/error.wav");
}

ErrorSound* ErrorSound_new(void) {
    ErrorSound* this = calloc(1, sizeof(ErrorSound));
    ErrorSound_init(this);
    return this;
}


Sound* ErrorSound_getInstance(void) {
        return ErrorSound_soundInterface;
}

