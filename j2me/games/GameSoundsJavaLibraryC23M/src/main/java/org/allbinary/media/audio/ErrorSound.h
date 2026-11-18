#ifndef ORG_ALLBINARY_MEDIA_AUDIO_ERRORSOUND_H
#define ORG_ALLBINARY_MEDIA_AUDIO_ERRORSOUND_H
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

typedef struct ErrorSound ErrorSound;
struct ErrorSound {
    CompositeSound base;
};


ErrorSound* ErrorSound_new(void);

void ErrorSound_init(ErrorSound* this);

Sound* ErrorSound_getInstance(void);
#define ErrorSound_new0 ErrorSound_new
#define ErrorSound_init0 ErrorSound_init
#ifndef ErrorSound_getResource
#define ErrorSound_getResource Sound_getResource
#endif
#ifndef ErrorSound_getPlayerP
#define ErrorSound_getPlayerP Sound_getPlayerP
#endif
#ifndef ErrorSound_setPlayerP
#define ErrorSound_setPlayerP Sound_setPlayerP
#endif
#ifndef ErrorSound_getDuration
#define ErrorSound_getDuration Sound_getDuration
#endif
#ifndef ErrorSound_run
#define ErrorSound_run Sound_run
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ErrorSound_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ErrorSound_register(void);


#endif // ORG_ALLBINARY_MEDIA_AUDIO_ERRORSOUND_H
