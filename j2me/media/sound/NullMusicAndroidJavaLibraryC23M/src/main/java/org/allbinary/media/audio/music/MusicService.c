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
// package org.allbinary.media.audio.music

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/media/audio/music/BaseMusicService.h"

typedef struct MusicService MusicService;
struct MusicService {
    BaseMusicService base;
};


MusicService* MusicService_new(void);

void MusicService_init(MusicService* this) {
    BaseMusicService_init(&this->base);
}

MusicService* MusicService_new(void) {
    MusicService* this = calloc(1, sizeof(MusicService));
    MusicService_init(this);
    return this;
}

