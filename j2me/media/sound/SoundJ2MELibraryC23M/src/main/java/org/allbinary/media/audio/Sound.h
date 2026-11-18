#ifndef ORG_ALLBINARY_MEDIA_AUDIO_SOUND_H
#define ORG_ALLBINARY_MEDIA_AUDIO_SOUND_H
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
typedef struct SoundInterface SoundInterface;
typedef struct NoPlayer NoPlayer;
typedef struct Player Player;
typedef struct PreLogUtil PreLogUtil;
typedef struct CommonStrings CommonStrings;
#if __has_include("javax/microedition/media/Player.h")
#include "javax/microedition/media/Player.h"
#endif
#include "java/lang/Runnable.h"
#include "org/allbinary/media/audio/SoundInterface.h"

typedef struct Sound Sound;
struct Sound {
    SoundInterface SoundInterface_interface;
    Runnable Runnable_interface;
    const char* resource;
    Player* player;
};


Sound* Sound_new(const char* resource);

void Sound_init(Sound* this, const char* resource);

const char* Sound_getResource(Sound* this);

Player* Sound_getPlayerP(Sound* this);

void Sound_setPlayerP(Sound* this, Player* player);

void Sound_initMethod(Sound* this);

int32_t Sound_getDuration(Sound* this);

void Sound_run(Sound* this);
#define Sound_new1 Sound_new
#define Sound_init1 Sound_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Sound_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Sound_register(void);

#if __has_include("javax/microedition/media/Player.h")
#include "javax/microedition/media/Player.h"
#endif

#endif // ORG_ALLBINARY_MEDIA_AUDIO_SOUND_H
