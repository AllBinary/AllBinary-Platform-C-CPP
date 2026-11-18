#ifndef ORG_ALLBINARY_MEDIA_AUDIO_PLAYERCOMPOSITE_H
#define ORG_ALLBINARY_MEDIA_AUDIO_PLAYERCOMPOSITE_H
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
typedef struct Controllable2 Controllable2;
typedef struct Control Control;
typedef struct Controllable Controllable;
typedef struct Player Player;
typedef struct PlayerListener PlayerListener;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
typedef struct GameTickTimeDelayHelper GameTickTimeDelayHelper;
typedef struct GameTickTimeDelayHelperFactory GameTickTimeDelayHelperFactory;
typedef struct TimeDelayHelper TimeDelayHelper;
#include "javax/microedition/media/Controllable.h"
#include "javax/microedition/media/Player.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/time/GameTickTimeDelayHelper.h")
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif

//BasicPlayer
typedef struct PlayerComposite PlayerComposite;
struct PlayerComposite {
    Controllable Controllable_interface;
    Player Player_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    Player* player;
    TimeDelayHelper* timeElapsedHelper;
    GameTickTimeDelayHelper* gameTickTimeDelayHelper;
};


PlayerComposite* PlayerComposite_new(Player* player, int32_t repeatTime);

void PlayerComposite_init(PlayerComposite* this, Player* player, int32_t repeatTime);

void PlayerComposite_addPlayerListener(PlayerComposite* this, PlayerListener* playerListener);

void PlayerComposite_removePlayerListener(PlayerComposite* this, PlayerListener* playerListener);

void PlayerComposite_close(PlayerComposite* this);

void PlayerComposite_deallocate(PlayerComposite* this);

const char* PlayerComposite_getContentType(PlayerComposite* this);

int64_t PlayerComposite_getDuration(PlayerComposite* this);

int64_t PlayerComposite_getMediaTime(PlayerComposite* this);

void PlayerComposite_prefetch(PlayerComposite* this);

void PlayerComposite_realize(PlayerComposite* this);

int32_t PlayerComposite_getState(PlayerComposite* this);

void PlayerComposite_setLoopCount(PlayerComposite* this, int32_t count);

int64_t PlayerComposite_setMediaTime(PlayerComposite* this, int64_t now);

void PlayerComposite_start(PlayerComposite* this);

void PlayerComposite_stop(PlayerComposite* this);

Control* PlayerComposite_getControl(PlayerComposite* this, const char* controlType);

Control** PlayerComposite_getControls(PlayerComposite* this);

void PlayerComposite_setVolume(PlayerComposite* this, int32_t leftVolume, int32_t rightVolume);

Player* PlayerComposite_getPlayerP(PlayerComposite* this);
#define PlayerComposite_new2 PlayerComposite_new
#define PlayerComposite_init2 PlayerComposite_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PlayerComposite_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PlayerComposite_register(void);

#if __has_include("javax/microedition/media/Control.h")
#include "javax/microedition/media/Control.h"
#endif
#if __has_include("javax/microedition/media/Player.h")
#include "javax/microedition/media/Player.h"
#endif

#endif // ORG_ALLBINARY_MEDIA_AUDIO_PLAYERCOMPOSITE_H
