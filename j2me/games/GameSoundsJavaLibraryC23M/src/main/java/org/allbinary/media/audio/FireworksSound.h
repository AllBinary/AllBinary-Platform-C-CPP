#ifndef ORG_ALLBINARY_MEDIA_AUDIO_FIREWORKSSOUND_H
#define ORG_ALLBINARY_MEDIA_AUDIO_FIREWORKSSOUND_H
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
typedef struct FireworksSound FireworksSound;
struct FireworksSound {
    CompositeSound base;
};


FireworksSound* FireworksSound_new(void);

void FireworksSound_init(FireworksSound* this);

Sound* FireworksSound_getInstance(void);
#define FireworksSound_new0 FireworksSound_new
#define FireworksSound_init0 FireworksSound_init
#ifndef FireworksSound_getResource
#define FireworksSound_getResource Sound_getResource
#endif
#ifndef FireworksSound_getPlayerP
#define FireworksSound_getPlayerP Sound_getPlayerP
#endif
#ifndef FireworksSound_setPlayerP
#define FireworksSound_setPlayerP Sound_setPlayerP
#endif
#ifndef FireworksSound_getDuration
#define FireworksSound_getDuration Sound_getDuration
#endif
#ifndef FireworksSound_run
#define FireworksSound_run Sound_run
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void FireworksSound_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void FireworksSound_register(void);


#endif // ORG_ALLBINARY_MEDIA_AUDIO_FIREWORKSSOUND_H
