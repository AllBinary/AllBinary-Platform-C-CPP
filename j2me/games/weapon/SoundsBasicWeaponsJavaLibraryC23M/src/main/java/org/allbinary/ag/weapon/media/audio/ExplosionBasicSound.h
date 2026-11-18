#ifndef ORG_ALLBINARY_AG_WEAPON_MEDIA_AUDIO_EXPLOSIONBASICSOUND_H
#define ORG_ALLBINARY_AG_WEAPON_MEDIA_AUDIO_EXPLOSIONBASICSOUND_H
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
// package org.allbinary.ag.weapon.media.audio

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

typedef struct ExplosionBasicSound ExplosionBasicSound;
struct ExplosionBasicSound {
    CompositeSound base;
};


ExplosionBasicSound* ExplosionBasicSound_new(void);

void ExplosionBasicSound_init(ExplosionBasicSound* this);

Sound* ExplosionBasicSound_getInstance(void);
#define ExplosionBasicSound_new0 ExplosionBasicSound_new
#define ExplosionBasicSound_init0 ExplosionBasicSound_init
#ifndef ExplosionBasicSound_getResource
#define ExplosionBasicSound_getResource Sound_getResource
#endif
#ifndef ExplosionBasicSound_getPlayerP
#define ExplosionBasicSound_getPlayerP Sound_getPlayerP
#endif
#ifndef ExplosionBasicSound_setPlayerP
#define ExplosionBasicSound_setPlayerP Sound_setPlayerP
#endif
#ifndef ExplosionBasicSound_getDuration
#define ExplosionBasicSound_getDuration Sound_getDuration
#endif
#ifndef ExplosionBasicSound_run
#define ExplosionBasicSound_run Sound_run
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ExplosionBasicSound_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ExplosionBasicSound_register(void);

#if __has_include("org/allbinary/media/audio/Sound.h")
#include "org/allbinary/media/audio/Sound.h"
#endif

#endif // ORG_ALLBINARY_AG_WEAPON_MEDIA_AUDIO_EXPLOSIONBASICSOUND_H
