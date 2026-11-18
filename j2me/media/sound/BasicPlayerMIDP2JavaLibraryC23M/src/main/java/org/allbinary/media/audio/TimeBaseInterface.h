#ifndef ORG_ALLBINARY_MEDIA_AUDIO_TIMEBASEINTERFACE_H
#define ORG_ALLBINARY_MEDIA_AUDIO_TIMEBASEINTERFACE_H
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
typedef struct MediaException MediaException;
typedef struct TimeBase TimeBase;

typedef struct TimeBaseInterface TimeBaseInterface;
struct TimeBaseInterface {
    TimeBase* (*getTimeBase)(void* this);
    void (*setTimeBase)(void* this, TimeBase* timeBase);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TimeBaseInterface_staticInit(void);

static inline TimeBase* TimeBaseInterface_getTimeBase(void* this) {
    return ((__typeof__(((TimeBaseInterface*) nullptr)->getTimeBase)) java_method_of(this, "getTimeBase"))(this);
}

static inline void TimeBaseInterface_setTimeBase(void* this, TimeBase* timeBase) {
    ((__typeof__(((TimeBaseInterface*) nullptr)->setTimeBase)) java_method_of(this, "setTimeBase"))(this, timeBase);
}

#if __has_include("javax/microedition/media/TimeBase.h")
#include "javax/microedition/media/TimeBase.h"
#endif

#endif // ORG_ALLBINARY_MEDIA_AUDIO_TIMEBASEINTERFACE_H
