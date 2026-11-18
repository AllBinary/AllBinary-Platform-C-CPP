#ifndef ORG_ALLBINARY_MEDIA_AUDIO_SOUNDSFACTORYINTERFACE_H
#define ORG_ALLBINARY_MEDIA_AUDIO_SOUNDSFACTORYINTERFACE_H
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

typedef struct SoundsFactoryInterface SoundsFactoryInterface;
struct SoundsFactoryInterface {
    void (*init)(void* this);
    Sound** (*getSoundInterfaceArray)(void* this);
    void (*setInitialized)(void* this, bool initialized);
    bool (*isInitialized)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SoundsFactoryInterface_staticInit(void);

static inline void SoundsFactoryInterface_initMethod(void* this) {
    ((__typeof__(((SoundsFactoryInterface*) nullptr)->init)) java_method_of(this, "init"))(this);
}

static inline Sound** SoundsFactoryInterface_getSoundInterfaceArray(void* this) {
    return ((__typeof__(((SoundsFactoryInterface*) nullptr)->getSoundInterfaceArray)) java_method_of(this, "getSoundInterfaceArray"))(this);
}

static inline void SoundsFactoryInterface_setInitialized(void* this, bool initialized) {
    ((__typeof__(((SoundsFactoryInterface*) nullptr)->setInitialized)) java_method_of(this, "setInitialized"))(this, initialized);
}

static inline bool SoundsFactoryInterface_isInitialized(void* this) {
    return ((__typeof__(((SoundsFactoryInterface*) nullptr)->isInitialized)) java_method_of(this, "isInitialized"))(this);
}


#endif // ORG_ALLBINARY_MEDIA_AUDIO_SOUNDSFACTORYINTERFACE_H
