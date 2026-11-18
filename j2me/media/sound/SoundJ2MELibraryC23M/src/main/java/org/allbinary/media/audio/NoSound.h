#ifndef ORG_ALLBINARY_MEDIA_AUDIO_NOSOUND_H
#define ORG_ALLBINARY_MEDIA_AUDIO_NOSOUND_H
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
typedef struct Sound Sound;
typedef struct NoPlayer NoPlayer;
typedef struct StringUtil StringUtil;
#include "org/allbinary/media/audio/Sound.h"

typedef struct NoSound NoSound;
struct NoSound {
    Sound base;
};


NoSound* NoSound_new(void);

NoSound* NoSound_getInstance(void);

void NoSound_init(NoSound* this);
#define NoSound_new0 NoSound_new
#define NoSound_init0 NoSound_init
#ifndef NoSound_getResource
#define NoSound_getResource Sound_getResource
#endif
#ifndef NoSound_getPlayerP
#define NoSound_getPlayerP Sound_getPlayerP
#endif
#ifndef NoSound_setPlayerP
#define NoSound_setPlayerP Sound_setPlayerP
#endif
#ifndef NoSound_getDuration
#define NoSound_getDuration Sound_getDuration
#endif
#ifndef NoSound_run
#define NoSound_run Sound_run
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NoSound_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NoSound_register(void);


#endif // ORG_ALLBINARY_MEDIA_AUDIO_NOSOUND_H
