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
// package org.allbinary.media.audio.music

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct MusicStrings MusicStrings;
struct MusicStrings {
    const char* SONG_EXTRA;
    const char* LEFT_VOLUME;
    const char* RIGHT_VOLUME;
};

static MusicStrings* MusicStrings_instance;

MusicStrings* MusicStrings_new(void);
MusicStrings* MusicStrings_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void MusicStrings_staticInit(void) {
    MusicStrings_instance = MusicStrings_new();
}

static void MusicStrings_initFields(MusicStrings* this) {
    this->SONG_EXTRA = "SONG";
    this->LEFT_VOLUME = "LEFT_VOLUME";
    this->RIGHT_VOLUME = "RIGHT_VOLUME";
}

void MusicStrings_init(MusicStrings* this) {
    MusicStrings_initFields(this);
}

MusicStrings* MusicStrings_new(void) {
    MusicStrings* this = calloc(1, sizeof(MusicStrings));
    MusicStrings_init(this);
    return this;
}


MusicStrings* MusicStrings_getInstance(void) {
        return MusicStrings_instance;
}

