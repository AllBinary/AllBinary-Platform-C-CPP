#ifndef ORG_ALLBINARY_MEDIA_AUDIO_NOPLAYER_H
#define ORG_ALLBINARY_MEDIA_AUDIO_NOPLAYER_H
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
typedef struct BasicPlayer BasicPlayer;
typedef struct NullControl NullControl;
typedef struct Control Control;
typedef struct StringUtil StringUtil;
#include "org/allbinary/media/audio/BasicPlayer.h"

typedef struct NoPlayer NoPlayer;
struct NoPlayer {
    BasicPlayer base;
};

extern NoPlayer* NoPlayer_NO_PLAYER;

NoPlayer* NoPlayer_new(void);

void NoPlayer_init(NoPlayer* this);

void NoPlayer_close(NoPlayer* this);

const char* NoPlayer_getContentType(NoPlayer* this);

Control* NoPlayer_getControl(NoPlayer* this, const char* controlType);

Control** NoPlayer_getControls(NoPlayer* this);
#define NoPlayer_new0 NoPlayer_new
#define NoPlayer_init0 NoPlayer_init
#ifndef NoPlayer_addPlayerListener
#define NoPlayer_addPlayerListener BasicPlayer_addPlayerListener
#endif
#ifndef NoPlayer_removePlayerListener
#define NoPlayer_removePlayerListener BasicPlayer_removePlayerListener
#endif
#ifndef NoPlayer_getState
#define NoPlayer_getState BasicPlayer_getState
#endif
#ifndef NoPlayer_setState
#define NoPlayer_setState BasicPlayer_setState
#endif
#ifndef NoPlayer_getDuration
#define NoPlayer_getDuration BasicPlayer_getDuration
#endif
#ifndef NoPlayer_getMediaTime
#define NoPlayer_getMediaTime BasicPlayer_getMediaTime
#endif
#ifndef NoPlayer_deallocate
#define NoPlayer_deallocate BasicPlayer_deallocate
#endif
#ifndef NoPlayer_prefetch
#define NoPlayer_prefetch BasicPlayer_prefetch
#endif
#ifndef NoPlayer_realize
#define NoPlayer_realize BasicPlayer_realize
#endif
#ifndef NoPlayer_setLoopCount
#define NoPlayer_setLoopCount BasicPlayer_setLoopCount
#endif
#ifndef NoPlayer_getLoopCount
#define NoPlayer_getLoopCount BasicPlayer_getLoopCount
#endif
#ifndef NoPlayer_setMediaTime
#define NoPlayer_setMediaTime BasicPlayer_setMediaTime
#endif
#ifndef NoPlayer_start
#define NoPlayer_start BasicPlayer_start
#endif
#ifndef NoPlayer_stop
#define NoPlayer_stop BasicPlayer_stop
#endif
#ifndef NoPlayer_setVolume
#define NoPlayer_setVolume BasicPlayer_setVolume
#endif
#ifndef NoPlayer_getTimeBase
#define NoPlayer_getTimeBase BasicPlayer_getTimeBase
#endif
#ifndef NoPlayer_setTimeBase
#define NoPlayer_setTimeBase BasicPlayer_setTimeBase
#endif
#ifndef NoPlayer_getListenersVector
#define NoPlayer_getListenersVector BasicPlayer_getListenersVector
#endif
#ifndef NoPlayer_setListenersVector
#define NoPlayer_setListenersVector BasicPlayer_setListenersVector
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NoPlayer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NoPlayer_register(void);

#if __has_include("javax/microedition/media/Control.h")
#include "javax/microedition/media/Control.h"
#endif

#endif // ORG_ALLBINARY_MEDIA_AUDIO_NOPLAYER_H
