#ifndef ORG_ALLBINARY_MEDIA_AUDIO_BASICPLAYER_H
#define ORG_ALLBINARY_MEDIA_AUDIO_BASICPLAYER_H
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
typedef struct TimeBaseInterface TimeBaseInterface;
typedef struct Controllable2 Controllable2;
typedef struct NullControl NullControl;
typedef struct Control Control;
typedef struct MediaException MediaException;
typedef struct Player Player;
typedef struct PlayerListener PlayerListener;
typedef struct TimeBase TimeBase;
typedef struct StringUtil StringUtil;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#include "javax/microedition/media/Player.h"
#if __has_include("javax/microedition/media/TimeBase.h")
#include "javax/microedition/media/TimeBase.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#include "org/allbinary/media/audio/TimeBaseInterface.h"
#include "org/allbinary/media/audio/Controllable2.h"

//BasicPlayerMIDP2JavaLibrary
typedef struct BasicPlayer BasicPlayer;
struct BasicPlayer {
    Player Player_interface;
    TimeBaseInterface TimeBaseInterface_interface;
    Controllable2 Controllable2_interface;
    BasicArrayList* listenersList;
    TimeBase* timeBase;
    int32_t stateP;
    int32_t loopCountP;
};

extern const char* BasicPlayer_CONTROL_TYPE;

BasicPlayer* BasicPlayer_new(void);

void BasicPlayer_init(BasicPlayer* this);

const char* BasicPlayer_getContentType(BasicPlayer* this);

Control* BasicPlayer_getControl(BasicPlayer* this, const char* controlType);

Control** BasicPlayer_getControls(BasicPlayer* this);

void BasicPlayer_close(BasicPlayer* this);

void BasicPlayer_addPlayerListener(BasicPlayer* this, PlayerListener* playerListener);

void BasicPlayer_removePlayerListener(BasicPlayer* this, PlayerListener* playerListener);

int32_t BasicPlayer_getState(BasicPlayer* this);

void BasicPlayer_setState(BasicPlayer* this, int32_t state);

int64_t BasicPlayer_getDuration(BasicPlayer* this);

int64_t BasicPlayer_getMediaTime(BasicPlayer* this);

TimeBase* BasicPlayer_getTimeBase(BasicPlayer* this);

void BasicPlayer_setTimeBase(BasicPlayer* this, TimeBase* timeBase);

void BasicPlayer_deallocate(BasicPlayer* this);

void BasicPlayer_prefetch(BasicPlayer* this);

void BasicPlayer_realize(BasicPlayer* this);

void BasicPlayer_setLoopCount(BasicPlayer* this, int32_t count);

int32_t BasicPlayer_getLoopCount(BasicPlayer* this);

int64_t BasicPlayer_setMediaTime(BasicPlayer* this, int64_t now);

void BasicPlayer_start(BasicPlayer* this);

void BasicPlayer_stop(BasicPlayer* this);

void BasicPlayer_setVolume(BasicPlayer* this, int32_t leftVolume, int32_t rightVolume);
#define BasicPlayer_new0 BasicPlayer_new
#define BasicPlayer_init0 BasicPlayer_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicPlayer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicPlayer_register(void);

#if __has_include("javax/microedition/media/Control.h")
#include "javax/microedition/media/Control.h"
#endif
#if __has_include("javax/microedition/media/TimeBase.h")
#include "javax/microedition/media/TimeBase.h"
#endif

#endif // ORG_ALLBINARY_MEDIA_AUDIO_BASICPLAYER_H
