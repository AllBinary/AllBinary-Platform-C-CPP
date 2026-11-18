#ifndef ORG_ALLBINARY_GAME_GAMEADSTATE_H
#define ORG_ALLBINARY_GAME_GAMEADSTATE_H
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
// package org.allbinary.game

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameAdStateBase GameAdStateBase;
typedef struct AdConfiguration AdConfiguration;
typedef struct VirtualKeyboardEvent VirtualKeyboardEvent;
typedef struct VirtualKeyboardEventHandler VirtualKeyboardEventHandler;
typedef struct VirtualKeyboardEventListenerInterface VirtualKeyboardEventListenerInterface;
typedef struct AllBinaryEventObject AllBinaryEventObject;
#include "org/allbinary/business/advertisement/GameAdStateBase.h"
#include "org/allbinary/input/event/VirtualKeyboardEventListenerInterface.h"

typedef struct GameAdState GameAdState;
struct GameAdState {
    GameAdStateBase base;
    VirtualKeyboardEventListenerInterface VirtualKeyboardEventListenerInterface_interface;
};


GameAdState* GameAdState_new(AdConfiguration* adConfiguration);

void GameAdState_init(GameAdState* this, AdConfiguration* adConfiguration);

void GameAdState_onVirtualKeyboardEvent(GameAdState* this, VirtualKeyboardEvent* virtualKeyboardEvent);

void GameAdState_onEvent(GameAdState* this, AllBinaryEventObject* eventObject);
#define GameAdState_new1 GameAdState_new
#define GameAdState_init1 GameAdState_init
#ifndef GameAdState_initViewArray
#define GameAdState_initViewArray GameAdStateBase_initViewArray
#endif
#ifndef GameAdState_onStart
#define GameAdState_onStart GameAdStateBase_onStart
#endif
#ifndef GameAdState_isShowingAtLocation
#define GameAdState_isShowingAtLocation GameAdStateBase_isShowingAtLocation
#endif
#ifndef GameAdState_isShowingAt
#define GameAdState_isShowingAt GameAdStateBase_isShowingAt
#endif
#ifndef GameAdState_show
#define GameAdState_show GameAdStateBase_show
#endif
#ifndef GameAdState_hide
#define GameAdState_hide GameAdStateBase_hide
#endif
#ifndef GameAdState_processAdState
#define GameAdState_processAdState GameAdStateBase_processAdState
#endif
#ifndef GameAdState_processPageAdState
#define GameAdState_processPageAdState GameAdStateBase_processPageAdState
#endif
#ifndef GameAdState_playingAdState
#define GameAdState_playingAdState GameAdStateBase_playingAdState
#endif
#ifndef GameAdState_playingAdStateWH
#define GameAdState_playingAdStateWH GameAdStateBase_playingAdStateWH
#endif
#ifndef GameAdState_notPlayingAdState
#define GameAdState_notPlayingAdState GameAdStateBase_notPlayingAdState
#endif
#ifndef GameAdState_setGameIsReady
#define GameAdState_setGameIsReady GameAdStateBase_setGameIsReady
#endif
#ifndef GameAdState_isGameIsReady
#define GameAdState_isGameIsReady GameAdStateBase_isGameIsReady
#endif
#ifndef GameAdState_getAdvertisements
#define GameAdState_getAdvertisements GameAdStateBase_getAdvertisements
#endif
#ifndef GameAdState_getAdConfiguration
#define GameAdState_getAdConfiguration GameAdStateBase_getAdConfiguration
#endif
#ifndef GameAdState_isOkayToShowPageAd
#define GameAdState_isOkayToShowPageAd GameAdStateBase_isOkayToShowPageAd
#endif
#ifndef GameAdState_setOkayToShowAds
#define GameAdState_setOkayToShowAds GameAdStateBase_setOkayToShowAds
#endif
#ifndef GameAdState_isOkayToShowAds
#define GameAdState_isOkayToShowAds GameAdStateBase_isOkayToShowAds
#endif
#ifndef GameAdState_isEnabled
#define GameAdState_isEnabled GameAdStateBase_isEnabled
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameAdState_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameAdState_register(void);


#endif // ORG_ALLBINARY_GAME_GAMEADSTATE_H
