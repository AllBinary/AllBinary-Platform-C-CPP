#ifndef ORG_ALLBINARY_MEDIA_AUDIO_GAMEYOUWINSOUND_H
#define ORG_ALLBINARY_MEDIA_AUDIO_GAMEYOUWINSOUND_H
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
typedef struct GameYouWinSound GameYouWinSound;
struct GameYouWinSound {
    CompositeSound base;
};


GameYouWinSound* GameYouWinSound_new(void);

void GameYouWinSound_init(GameYouWinSound* this);

Sound* GameYouWinSound_getInstance(void);
#define GameYouWinSound_new0 GameYouWinSound_new
#define GameYouWinSound_init0 GameYouWinSound_init
#ifndef GameYouWinSound_getResource
#define GameYouWinSound_getResource Sound_getResource
#endif
#ifndef GameYouWinSound_getPlayerP
#define GameYouWinSound_getPlayerP Sound_getPlayerP
#endif
#ifndef GameYouWinSound_setPlayerP
#define GameYouWinSound_setPlayerP Sound_setPlayerP
#endif
#ifndef GameYouWinSound_getDuration
#define GameYouWinSound_getDuration Sound_getDuration
#endif
#ifndef GameYouWinSound_run
#define GameYouWinSound_run Sound_run
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameYouWinSound_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameYouWinSound_register(void);


#endif // ORG_ALLBINARY_MEDIA_AUDIO_GAMEYOUWINSOUND_H
