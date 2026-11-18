#ifndef ORG_ALLBINARY_MEDIA_AUDIO_GAMEYOULOSESOUND_H
#define ORG_ALLBINARY_MEDIA_AUDIO_GAMEYOULOSESOUND_H
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
typedef struct CompositeSound CompositeSound;
typedef struct Sound Sound;
#include "org/allbinary/media/audio/CompositeSound.h"
#if __has_include("org/allbinary/media/audio/Sound.h")
#include "org/allbinary/media/audio/Sound.h"
#endif

//Use 8hz16bitmono for most J2ME
typedef struct GameYouLoseSound GameYouLoseSound;
struct GameYouLoseSound {
    CompositeSound base;
};


GameYouLoseSound* GameYouLoseSound_new(void);

void GameYouLoseSound_init(GameYouLoseSound* this);

Sound* GameYouLoseSound_getInstance(void);
#define GameYouLoseSound_new0 GameYouLoseSound_new
#define GameYouLoseSound_init0 GameYouLoseSound_init
#ifndef GameYouLoseSound_getResource
#define GameYouLoseSound_getResource Sound_getResource
#endif
#ifndef GameYouLoseSound_getPlayerP
#define GameYouLoseSound_getPlayerP Sound_getPlayerP
#endif
#ifndef GameYouLoseSound_setPlayerP
#define GameYouLoseSound_setPlayerP Sound_setPlayerP
#endif
#ifndef GameYouLoseSound_getDuration
#define GameYouLoseSound_getDuration Sound_getDuration
#endif
#ifndef GameYouLoseSound_run
#define GameYouLoseSound_run Sound_run
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameYouLoseSound_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameYouLoseSound_register(void);


#endif // ORG_ALLBINARY_MEDIA_AUDIO_GAMEYOULOSESOUND_H
