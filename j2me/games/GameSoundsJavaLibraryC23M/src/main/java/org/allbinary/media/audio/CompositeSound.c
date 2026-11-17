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
#include "org/allbinary/media/audio/Sound.h"

typedef struct CompositeSound CompositeSound;
struct CompositeSound {
    Sound base;
};


CompositeSound* CompositeSound_new(const char* resource);

void CompositeSound_init(CompositeSound* this, const char* resource);
void CompositeSound_init(CompositeSound* this);


void CompositeSound_init(CompositeSound* this, const char* resource) {
        Sound_init(&this->base, resource);
}

CompositeSound* CompositeSound_new(const char* resource) {
    CompositeSound* this = calloc(1, sizeof(CompositeSound));
    CompositeSound_init(this, resource);
    return this;
}


// throws Exception
void CompositeSound_init(CompositeSound* this) {
        CompositeSound_setPlayerP(this, PlayerComposite_new(AllBinaryMediaManager_createPlayer(CompositeSound_getResource(this)), 570));
}

