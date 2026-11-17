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
// package org.allbinary.media.audio.music

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct BaseMusicService BaseMusicService;
struct BaseMusicService {
    char unused;
};


BaseMusicService* BaseMusicService_new(void);

void BaseMusicService_init(BaseMusicService* this) {
}

BaseMusicService* BaseMusicService_new(void) {
    BaseMusicService* this = calloc(1, sizeof(BaseMusicService));
    BaseMusicService_init(this);
    return this;
}

