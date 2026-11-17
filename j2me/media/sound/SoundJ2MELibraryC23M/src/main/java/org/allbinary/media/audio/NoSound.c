/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/media/audio/Sound.h"

typedef struct NoSound NoSound;
struct NoSound {
    Sound base;
};

static NoSound* NoSound_instance;

NoSound* NoSound_new(void);
NoSound* NoSound_getInstance(void);

void NoSound_init(NoSound* this);

// Static fields with runtime initializers: call this once at startup
void NoSound_staticInit(void) {
    NoSound_instance = NoSound_new();
}


NoSound* NoSound_getInstance(void) {
        return NoSound_instance;
}


void NoSound_init(NoSound* this) {
        Sound_init(&this->base, StringUtil_getInstance()->EMPTY_STRING);
        NoSound_setPlayerP(this, NoPlayer_NO_PLAYER);
}

NoSound* NoSound_new(void) {
    NoSound* this = calloc(1, sizeof(NoSound));
    NoSound_init(this);
    return this;
}

