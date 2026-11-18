#ifndef ORG_ALLBINARY_MEDIA_AUDIO_CONTROLLABLE2_H
#define ORG_ALLBINARY_MEDIA_AUDIO_CONTROLLABLE2_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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

typedef struct Controllable2 Controllable2;
struct Controllable2 {
    void (*setVolume)(void* this, int32_t leftVolume, int32_t rightVolume);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Controllable2_staticInit(void);

static inline void Controllable2_setVolume(void* this, int32_t leftVolume, int32_t rightVolume) {
    ((__typeof__(((Controllable2*) nullptr)->setVolume)) java_method_of(this, "setVolume"))(this, leftVolume, rightVolume);
}


#endif // ORG_ALLBINARY_MEDIA_AUDIO_CONTROLLABLE2_H
