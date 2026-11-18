#ifndef ORG_ALLBINARY_MEDIA_AUDIO_BASESOUNDSFACTORY_H
#define ORG_ALLBINARY_MEDIA_AUDIO_BASESOUNDSFACTORY_H
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
typedef struct SoundsFactoryInterface SoundsFactoryInterface;
typedef struct Sound Sound;
#include "org/allbinary/media/audio/SoundsFactoryInterface.h"

typedef struct BaseSoundsFactory BaseSoundsFactory;
struct BaseSoundsFactory {
    SoundsFactoryInterface SoundsFactoryInterface_interface;
    bool initialized;
};


BaseSoundsFactory* BaseSoundsFactory_new(void);
void BaseSoundsFactory_init(BaseSoundsFactory* this);

void BaseSoundsFactory_initMethod(BaseSoundsFactory* this);

Sound** BaseSoundsFactory_getSoundInterfaceArray(BaseSoundsFactory* this);

void BaseSoundsFactory_setInitialized(BaseSoundsFactory* this, bool initialized);

bool BaseSoundsFactory_isInitialized(BaseSoundsFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BaseSoundsFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BaseSoundsFactory_register(void);


#endif // ORG_ALLBINARY_MEDIA_AUDIO_BASESOUNDSFACTORY_H
