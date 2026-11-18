#ifndef ORG_ALLBINARY_MEDIA_AUDIO_PLAYERQUEUE_H
#define ORG_ALLBINARY_MEDIA_AUDIO_PLAYERQUEUE_H
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
typedef struct NoSound NoSound;
typedef struct PreLogUtil PreLogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct PlayerQueue PlayerQueue;
struct PlayerQueue {
    CommonStrings* commonStrings;
    BasicArrayList* list;
    int32_t max;
};


PlayerQueue* PlayerQueue_new(int32_t max);

void PlayerQueue_init(PlayerQueue* this, int32_t max);

void PlayerQueue_add(PlayerQueue* this, Sound* sound);

bool PlayerQueue_process(PlayerQueue* this);

void PlayerQueue_clear(PlayerQueue* this);

const char* PlayerQueue_toString(PlayerQueue* this);
#define PlayerQueue_new1 PlayerQueue_new
#define PlayerQueue_init1 PlayerQueue_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PlayerQueue_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PlayerQueue_register(void);


#endif // ORG_ALLBINARY_MEDIA_AUDIO_PLAYERQUEUE_H
