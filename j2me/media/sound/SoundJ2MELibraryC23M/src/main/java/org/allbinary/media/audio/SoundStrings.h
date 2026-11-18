#ifndef ORG_ALLBINARY_MEDIA_AUDIO_SOUNDSTRINGS_H
#define ORG_ALLBINARY_MEDIA_AUDIO_SOUNDSTRINGS_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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

typedef struct SoundStrings SoundStrings;
struct SoundStrings {
    const char* STOP_ALL;
    const char* CLOSE_ALL;
    const char* SOUND;
    const char* INIT_SOUND;
    const char* STOPPING_SOUND;
    const char* CLOSING_SOUND;
};


SoundStrings* SoundStrings_new(void);
void SoundStrings_init(SoundStrings* this);

SoundStrings* SoundStrings_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SoundStrings_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SoundStrings_register(void);


#endif // ORG_ALLBINARY_MEDIA_AUDIO_SOUNDSTRINGS_H
