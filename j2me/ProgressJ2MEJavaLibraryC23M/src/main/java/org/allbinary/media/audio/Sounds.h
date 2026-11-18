#ifndef ORG_ALLBINARY_MEDIA_AUDIO_SOUNDS_H
#define ORG_ALLBINARY_MEDIA_AUDIO_SOUNDS_H
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
typedef struct SoundStrings SoundStrings;
typedef struct SoundsFactoryInterface SoundsFactoryInterface;
typedef struct Sound Sound;
typedef struct Player Player;
typedef struct ProgressCanvas ProgressCanvas;
typedef struct ProgressCanvasFactory ProgressCanvasFactory;
typedef struct LogUtil LogUtil;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct StringMaker StringMaker;
typedef struct CommonLabels CommonLabels;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#include "java/lang/Integer.h"
#if __has_include("org/allbinary/media/audio/SoundStrings.h")
#include "org/allbinary/media/audio/SoundStrings.h"
#endif
#if __has_include("org/allbinary/media/audio/SoundsFactoryInterface.h")
#include "org/allbinary/media/audio/SoundsFactoryInterface.h"
#endif

typedef struct Sounds Sounds;
struct Sounds {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    SoundStrings* soundStrings;
    SoundsFactoryInterface* soundsFactoryInterface;
};


Sounds* Sounds_new(SoundsFactoryInterface* soundsFactoryInterface);

void Sounds_init(Sounds* this, SoundsFactoryInterface* soundsFactoryInterface);

void Sounds_initMethod(Sounds* this);

void Sounds_stopAll(Sounds* this);

void Sounds_closeAll(Sounds* this);
#define Sounds_new1 Sounds_new
#define Sounds_init1 Sounds_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Sounds_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Sounds_register(void);


#endif // ORG_ALLBINARY_MEDIA_AUDIO_SOUNDS_H
