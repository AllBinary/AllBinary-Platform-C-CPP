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
#include "org/allbinary/media/audio/BaseSoundsFactory.h"

typedef struct EarlySoundsFactory EarlySoundsFactory;
struct EarlySoundsFactory {
    BaseSoundsFactory base;
};

static EarlySoundsFactory* EarlySoundsFactory_instance;

EarlySoundsFactory* EarlySoundsFactory_new(void);
Sound** EarlySoundsFactory_getSoundInterfaceArray(EarlySoundsFactory* this);
EarlySoundsFactory* EarlySoundsFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void EarlySoundsFactory_staticInit(void) {
    EarlySoundsFactory_instance = EarlySoundsFactory_new();
}

void EarlySoundsFactory_init(EarlySoundsFactory* this) {
    BaseSoundsFactory_init(&this->base);
}

EarlySoundsFactory* EarlySoundsFactory_new(void) {
    EarlySoundsFactory* this = calloc(1, sizeof(EarlySoundsFactory));
    EarlySoundsFactory_init(this);
    return this;
}


// throws Exception
Sound** EarlySoundsFactory_getSoundInterfaceArray(EarlySoundsFactory* this) {
        Sound** soundInterfaceArray = ((Sound**) java_array_new(sizeof(Sound*), 2));
        int32_t index = 0;
        soundInterfaceArray[index++] = SelectSound_getInstance();
        soundInterfaceArray[index++] = ErrorSound_getInstance();
        return soundInterfaceArray;
}


EarlySoundsFactory* EarlySoundsFactory_getInstance(void) {
        return EarlySoundsFactory_instance;
}

