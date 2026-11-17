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
typedef struct GameYouWinSound GameYouWinSound;
struct GameYouWinSound {
    CompositeSound base;
};

static Sound* GameYouWinSound_soundInterface;

GameYouWinSound* GameYouWinSound_new(void);

void GameYouWinSound_init(GameYouWinSound* this);
Sound* GameYouWinSound_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void GameYouWinSound_staticInit(void) {
    GameYouWinSound_soundInterface = GameYouWinSound_new();
}


void GameYouWinSound_init(GameYouWinSound* this) {
        CompositeSound_init(&this->base, "resource:/wav/youwin.wav");
}

GameYouWinSound* GameYouWinSound_new(void) {
    GameYouWinSound* this = calloc(1, sizeof(GameYouWinSound));
    GameYouWinSound_init(this);
    return this;
}


Sound* GameYouWinSound_getInstance(void) {
        return GameYouWinSound_soundInterface;
}

