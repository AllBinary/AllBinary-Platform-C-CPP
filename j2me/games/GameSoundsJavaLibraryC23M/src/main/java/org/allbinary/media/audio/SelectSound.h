#ifndef ORG_ALLBINARY_MEDIA_AUDIO_SELECTSOUND_H
#define ORG_ALLBINARY_MEDIA_AUDIO_SELECTSOUND_H
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
typedef struct SelectSound SelectSound;
struct SelectSound {
    CompositeSound base;
};


SelectSound* SelectSound_new(void);

void SelectSound_init(SelectSound* this);

Sound* SelectSound_getInstance(void);
#define SelectSound_new0 SelectSound_new
#define SelectSound_init0 SelectSound_init
#ifndef SelectSound_getResource
#define SelectSound_getResource Sound_getResource
#endif
#ifndef SelectSound_getPlayerP
#define SelectSound_getPlayerP Sound_getPlayerP
#endif
#ifndef SelectSound_setPlayerP
#define SelectSound_setPlayerP Sound_setPlayerP
#endif
#ifndef SelectSound_getDuration
#define SelectSound_getDuration Sound_getDuration
#endif
#ifndef SelectSound_run
#define SelectSound_run Sound_run
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SelectSound_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SelectSound_register(void);


#endif // ORG_ALLBINARY_MEDIA_AUDIO_SELECTSOUND_H
