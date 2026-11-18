#ifndef ORG_ALLBINARY_MEDIA_AUDIO_COMPOSITESOUND_H
#define ORG_ALLBINARY_MEDIA_AUDIO_COMPOSITESOUND_H
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
typedef struct Sound Sound;
typedef struct PlayerComposite PlayerComposite;
typedef struct AllBinaryMediaManager AllBinaryMediaManager;
#include "org/allbinary/media/audio/Sound.h"

typedef struct CompositeSound CompositeSound;
struct CompositeSound {
    Sound base;
};


CompositeSound* CompositeSound_new(const char* resource);

void CompositeSound_init(CompositeSound* this, const char* resource);

void CompositeSound_initMethod(CompositeSound* this);
#define CompositeSound_new1 CompositeSound_new
#define CompositeSound_init1 CompositeSound_init
#ifndef CompositeSound_getResource
#define CompositeSound_getResource Sound_getResource
#endif
#ifndef CompositeSound_getPlayerP
#define CompositeSound_getPlayerP Sound_getPlayerP
#endif
#ifndef CompositeSound_setPlayerP
#define CompositeSound_setPlayerP Sound_setPlayerP
#endif
#ifndef CompositeSound_getDuration
#define CompositeSound_getDuration Sound_getDuration
#endif
#ifndef CompositeSound_run
#define CompositeSound_run Sound_run
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CompositeSound_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CompositeSound_register(void);


#endif // ORG_ALLBINARY_MEDIA_AUDIO_COMPOSITESOUND_H
