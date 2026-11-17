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

//Use 8hz16bitmono for most J2ME
typedef struct SelectSound SelectSound;
struct SelectSound {
    CompositeSound base;
};

static Sound* SelectSound_soundInterface;

SelectSound* SelectSound_new(void);

void SelectSound_init(SelectSound* this);
Sound* SelectSound_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void SelectSound_staticInit(void) {
    SelectSound_soundInterface = SelectSound_new();
}


void SelectSound_init(SelectSound* this) {
        CompositeSound_init(&this->base, "resource:/wav/select.wav");
}

SelectSound* SelectSound_new(void) {
    SelectSound* this = calloc(1, sizeof(SelectSound));
    SelectSound_init(this);
    return this;
}


Sound* SelectSound_getInstance(void) {
        return SelectSound_soundInterface;
}

