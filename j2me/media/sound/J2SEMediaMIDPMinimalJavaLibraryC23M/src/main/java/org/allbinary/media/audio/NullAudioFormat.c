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
// #include "javax/sound/sampled/AudioFormat.h"

typedef struct NullAudioFormat NullAudioFormat;
struct NullAudioFormat {
    char unused;
};

AudioFormat* NullAudioFormat_NULL_AUDIO_FORMAT;

NullAudioFormat* NullAudioFormat_new(void);

// Static fields with runtime initializers: call this once at startup
void NullAudioFormat_staticInit(void) {
    NullAudioFormat_NULL_AUDIO_FORMAT = AudioFormat_new(AudioFormat_Encoding->PCM_UNSIGNED, 0.0f, 0, 0, 0, 0.0f, false);
}

void NullAudioFormat_init(NullAudioFormat* this) {
}

NullAudioFormat* NullAudioFormat_new(void) {
    NullAudioFormat* this = calloc(1, sizeof(NullAudioFormat));
    NullAudioFormat_init(this);
    return this;
}

