#ifndef ORG_ALLBINARY_MEDIA_AUDIO_SOUNDINTERFACE_H
#define ORG_ALLBINARY_MEDIA_AUDIO_SOUNDINTERFACE_H
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
typedef struct Player Player;

typedef struct SoundInterface SoundInterface;
struct SoundInterface {
    const char* (*getResource)(void* this);
    Player* (*getPlayerP)(void* this);
    void (*init)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SoundInterface_staticInit(void);

static inline const char* SoundInterface_getResource(void* this) {
    return ((__typeof__(((SoundInterface*) nullptr)->getResource)) java_method_of(this, "getResource"))(this);
}

static inline Player* SoundInterface_getPlayerP(void* this) {
    return ((__typeof__(((SoundInterface*) nullptr)->getPlayerP)) java_method_of(this, "getPlayerP"))(this);
}

static inline void SoundInterface_initMethod(void* this) {
    ((__typeof__(((SoundInterface*) nullptr)->init)) java_method_of(this, "init"))(this);
}

#if __has_include("javax/microedition/media/Player.h")
#include "javax/microedition/media/Player.h"
#endif

#endif // ORG_ALLBINARY_MEDIA_AUDIO_SOUNDINTERFACE_H
