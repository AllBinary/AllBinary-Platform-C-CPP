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
// package org.allbinary.audio

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct AudioContentTypeDataFactory AudioContentTypeDataFactory;
struct AudioContentTypeDataFactory {
    AudioContentTypeData* MIME_AUDIO_TONE;
    AudioContentTypeData* MIME_AUDIO_AMR;
    AudioContentTypeData* MIME_AUDIO_AMR_WB;
    AudioContentTypeData* MIME_AUDIO_WAV;
    AudioContentTypeData* MIME_AUDIO_MIDI;
    AudioContentTypeData* MIME_AUDIO_SP_MIDI;
};

static AudioContentTypeDataFactory* AudioContentTypeDataFactory_instance;

AudioContentTypeDataFactory* AudioContentTypeDataFactory_new(void);
AudioContentTypeDataFactory* AudioContentTypeDataFactory_getInstance(void);

void AudioContentTypeDataFactory_init(AudioContentTypeDataFactory* this);

// Static fields with runtime initializers: call this once at startup
void AudioContentTypeDataFactory_staticInit(void) {
    AudioContentTypeDataFactory_instance = AudioContentTypeDataFactory_new();
}

static void AudioContentTypeDataFactory_initFields(AudioContentTypeDataFactory* this) {
    this->MIME_AUDIO_TONE = AudioContentTypeData_new("audio/x-tone-seq");
    this->MIME_AUDIO_AMR = AudioContentTypeData_new("audio/amr");
    this->MIME_AUDIO_AMR_WB = AudioContentTypeData_new("audio/amr-wb");
    this->MIME_AUDIO_WAV = AudioContentTypeData_new("audio/x-wav");
    this->MIME_AUDIO_MIDI = AudioContentTypeData_new("audio/midi");
    this->MIME_AUDIO_SP_MIDI = AudioContentTypeData_new("audio/sp-midi");
}


AudioContentTypeDataFactory* AudioContentTypeDataFactory_getInstance(void) {
        return AudioContentTypeDataFactory_instance;
}


void AudioContentTypeDataFactory_init(AudioContentTypeDataFactory* this) {
    AudioContentTypeDataFactory_initFields(this);
}

AudioContentTypeDataFactory* AudioContentTypeDataFactory_new(void) {
    AudioContentTypeDataFactory* this = calloc(1, sizeof(AudioContentTypeDataFactory));
    AudioContentTypeDataFactory_init(this);
    return this;
}

