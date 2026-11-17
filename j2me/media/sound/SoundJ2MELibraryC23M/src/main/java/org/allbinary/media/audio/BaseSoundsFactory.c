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
#include "org/allbinary/media/audio/SoundsFactoryInterface.h"

typedef struct BaseSoundsFactory BaseSoundsFactory;
struct BaseSoundsFactory {
    SoundsFactoryInterface SoundsFactoryInterface_interface;
    bool initialized;
};


BaseSoundsFactory* BaseSoundsFactory_new(void);
void BaseSoundsFactory_init(BaseSoundsFactory* this);
Sound** BaseSoundsFactory_getSoundInterfaceArray(BaseSoundsFactory* this);
void BaseSoundsFactory_setInitialized(BaseSoundsFactory* this, bool initialized);
bool BaseSoundsFactory_isInitialized(BaseSoundsFactory* this);

static void BaseSoundsFactory_initFields(BaseSoundsFactory* this) {
    this->initialized = false;
}

void BaseSoundsFactory_init(BaseSoundsFactory* this) {
    BaseSoundsFactory_initFields(this);
}

BaseSoundsFactory* BaseSoundsFactory_new(void) {
    BaseSoundsFactory* this = calloc(1, sizeof(BaseSoundsFactory));
    BaseSoundsFactory_init(this);
    return this;
}


void BaseSoundsFactory_init(BaseSoundsFactory* this) {
}


// throws Exception
Sound** BaseSoundsFactory_getSoundInterfaceArray(BaseSoundsFactory* this) {
        return ((Sound**) java_array_new(sizeof(Sound*), 0));
}


void BaseSoundsFactory_setInitialized(BaseSoundsFactory* this, bool initialized) {
        this->initialized = initialized;
}


bool BaseSoundsFactory_isInitialized(BaseSoundsFactory* this) {
        return this->initialized;
}

