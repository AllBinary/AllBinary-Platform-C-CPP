#ifndef ORG_ALLBINARY_MEDIA_AUDIO_EARLYSOUNDSFACTORY_H
#define ORG_ALLBINARY_MEDIA_AUDIO_EARLYSOUNDSFACTORY_H
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
typedef struct BaseSoundsFactory BaseSoundsFactory;
typedef struct Sound Sound;
typedef struct SelectSound SelectSound;
typedef struct ErrorSound ErrorSound;
#include "org/allbinary/media/audio/BaseSoundsFactory.h"

typedef struct EarlySoundsFactory EarlySoundsFactory;
struct EarlySoundsFactory {
    BaseSoundsFactory base;
};


EarlySoundsFactory* EarlySoundsFactory_new(void);
void EarlySoundsFactory_init(EarlySoundsFactory* this);

Sound** EarlySoundsFactory_getSoundInterfaceArray(EarlySoundsFactory* this);

EarlySoundsFactory* EarlySoundsFactory_getInstance(void);
#ifndef EarlySoundsFactory_setInitialized
#define EarlySoundsFactory_setInitialized BaseSoundsFactory_setInitialized
#endif
#ifndef EarlySoundsFactory_isInitialized
#define EarlySoundsFactory_isInitialized BaseSoundsFactory_isInitialized
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void EarlySoundsFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void EarlySoundsFactory_register(void);


#endif // ORG_ALLBINARY_MEDIA_AUDIO_EARLYSOUNDSFACTORY_H
