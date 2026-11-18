#ifndef ORG_ALLBINARY_AG_WEAPON_MEDIA_AUDIO_DROPWEAPONSOUND_H
#define ORG_ALLBINARY_AG_WEAPON_MEDIA_AUDIO_DROPWEAPONSOUND_H
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

typedef struct DropWeaponSound DropWeaponSound;
struct DropWeaponSound {
    CompositeSound base;
};


DropWeaponSound* DropWeaponSound_new(void);

void DropWeaponSound_init(DropWeaponSound* this);

Sound* DropWeaponSound_getInstance(void);
#define DropWeaponSound_new0 DropWeaponSound_new
#define DropWeaponSound_init0 DropWeaponSound_init
#ifndef DropWeaponSound_getResource
#define DropWeaponSound_getResource Sound_getResource
#endif
#ifndef DropWeaponSound_getPlayerP
#define DropWeaponSound_getPlayerP Sound_getPlayerP
#endif
#ifndef DropWeaponSound_setPlayerP
#define DropWeaponSound_setPlayerP Sound_setPlayerP
#endif
#ifndef DropWeaponSound_getDuration
#define DropWeaponSound_getDuration Sound_getDuration
#endif
#ifndef DropWeaponSound_run
#define DropWeaponSound_run Sound_run
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DropWeaponSound_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DropWeaponSound_register(void);

#if __has_include("org/allbinary/media/audio/Sound.h")
#include "org/allbinary/media/audio/Sound.h"
#endif

#endif // ORG_ALLBINARY_AG_WEAPON_MEDIA_AUDIO_DROPWEAPONSOUND_H
