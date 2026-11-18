#ifndef ORG_ALLBINARY_MEDIA_AUDIO_GAMEBEGINSOUND_H
#define ORG_ALLBINARY_MEDIA_AUDIO_GAMEBEGINSOUND_H
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
typedef struct GameBeginSound GameBeginSound;
struct GameBeginSound {
    CompositeSound base;
};


GameBeginSound* GameBeginSound_new(void);

void GameBeginSound_init(GameBeginSound* this);

Sound* GameBeginSound_getInstance(void);
#define GameBeginSound_new0 GameBeginSound_new
#define GameBeginSound_init0 GameBeginSound_init
#ifndef GameBeginSound_getResource
#define GameBeginSound_getResource Sound_getResource
#endif
#ifndef GameBeginSound_getPlayerP
#define GameBeginSound_getPlayerP Sound_getPlayerP
#endif
#ifndef GameBeginSound_setPlayerP
#define GameBeginSound_setPlayerP Sound_setPlayerP
#endif
#ifndef GameBeginSound_getDuration
#define GameBeginSound_getDuration Sound_getDuration
#endif
#ifndef GameBeginSound_run
#define GameBeginSound_run Sound_run
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameBeginSound_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameBeginSound_register(void);


#endif // ORG_ALLBINARY_MEDIA_AUDIO_GAMEBEGINSOUND_H
