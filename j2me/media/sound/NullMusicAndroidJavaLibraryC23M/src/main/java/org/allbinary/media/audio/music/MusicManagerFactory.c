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
#include "org/allbinary/util/BasicArrayList.h"

typedef struct MusicManagerFactory MusicManagerFactory;
struct MusicManagerFactory {
    char unused;
};


MusicManagerFactory* MusicManagerFactory_new(void);
MusicManager* MusicManagerFactory_createMusicManager(BasicArrayList* soundList);

void MusicManagerFactory_init(MusicManagerFactory* this) {
}

MusicManagerFactory* MusicManagerFactory_new(void) {
    MusicManagerFactory* this = calloc(1, sizeof(MusicManagerFactory));
    MusicManagerFactory_init(this);
    return this;
}


MusicManager* MusicManagerFactory_createMusicManager(BasicArrayList* soundList) {
        return MusicManager_new("MusicService", soundList);
}

