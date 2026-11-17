/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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

typedef struct SoundStrings SoundStrings;
struct SoundStrings {
    const char* STOP_ALL;
    const char* CLOSE_ALL;
    const char* SOUND;
    const char* INIT_SOUND;
    const char* STOPPING_SOUND;
    const char* CLOSING_SOUND;
};

static SoundStrings* SoundStrings_instance;

SoundStrings* SoundStrings_new(void);
SoundStrings* SoundStrings_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void SoundStrings_staticInit(void) {
    SoundStrings_instance = SoundStrings_new();
}

static void SoundStrings_initFields(SoundStrings* this) {
    this->STOP_ALL = "stopAll";
    this->CLOSE_ALL = "closeAll";
    this->SOUND = " Sound: ";
    this->INIT_SOUND = "Initializing Sound: ";
    this->STOPPING_SOUND = "Stopping Sound: ";
    this->CLOSING_SOUND = "Closing Sound: ";
}

void SoundStrings_init(SoundStrings* this) {
    SoundStrings_initFields(this);
}

SoundStrings* SoundStrings_new(void) {
    SoundStrings* this = calloc(1, sizeof(SoundStrings));
    SoundStrings_init(this);
    return this;
}


SoundStrings* SoundStrings_getInstance(void) {
        return SoundStrings_instance;
}

