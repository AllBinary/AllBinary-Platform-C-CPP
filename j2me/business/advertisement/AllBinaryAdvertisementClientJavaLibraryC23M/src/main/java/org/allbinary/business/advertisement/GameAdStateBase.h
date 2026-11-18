#ifndef ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEBASE_H
#define ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEBASE_H
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
// package org.allbinary.business.advertisement

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AdConfiguration AdConfiguration;
typedef struct Advertisements Advertisements;
typedef struct GameType GameType;
typedef struct GameState GameState;
typedef struct ForcedLogUtil ForcedLogUtil;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventStrings EventStrings;
#if __has_include("org/allbinary/business/advertisement/AdConfiguration.h")
#include "org/allbinary/business/advertisement/AdConfiguration.h"
#endif
#if __has_include("org/allbinary/business/advertisement/Advertisements.h")
#include "org/allbinary/business/advertisement/Advertisements.h"
#endif

typedef struct GameAdStateBase GameAdStateBase;
struct GameAdStateBase {
    AdConfiguration* adConfigurationP;
    Advertisements* advertisementsP;
    bool okayToShowAdsP;
};


GameAdStateBase* GameAdStateBase_new(AdConfiguration* adConfiguration);

void GameAdStateBase_init(GameAdStateBase* this, AdConfiguration* adConfiguration);

void GameAdStateBase_initViewArray(GameAdStateBase* this, void** viewArray);

void GameAdStateBase_onStart(GameAdStateBase* this, void* anyType);

void GameAdStateBase_initMethod(GameAdStateBase* this);

bool GameAdStateBase_isShowingAtLocation(GameAdStateBase* this, int32_t location);

bool GameAdStateBase_isShowingAt(GameAdStateBase* this);

void GameAdStateBase_show(GameAdStateBase* this);

void GameAdStateBase_hide(GameAdStateBase* this);

void GameAdStateBase_onEvent(GameAdStateBase* this, AllBinaryEventObject* eventObject);

void GameAdStateBase_processAdState(GameAdStateBase* this, GameState* gameState, GameType* gameType);

void GameAdStateBase_processPageAdState(GameAdStateBase* this);

void GameAdStateBase_playingAdState(GameAdStateBase* this);

void GameAdStateBase_playingAdStateWH(GameAdStateBase* this, int32_t width, int32_t height);

void GameAdStateBase_notPlayingAdState(GameAdStateBase* this);

void GameAdStateBase_setGameIsReady(GameAdStateBase* this, bool gameIsReady);

bool GameAdStateBase_isGameIsReady(GameAdStateBase* this);

Advertisements* GameAdStateBase_getAdvertisements(GameAdStateBase* this);

AdConfiguration* GameAdStateBase_getAdConfiguration(GameAdStateBase* this);

bool GameAdStateBase_isOkayToShowPageAd(GameAdStateBase* this);

void GameAdStateBase_setOkayToShowAds(GameAdStateBase* this, bool okayToShowAds);

bool GameAdStateBase_isOkayToShowAds(GameAdStateBase* this);

bool GameAdStateBase_isEnabled(GameAdStateBase* this);
#define GameAdStateBase_new1 GameAdStateBase_new
#define GameAdStateBase_init1 GameAdStateBase_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameAdStateBase_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameAdStateBase_register(void);


#endif // ORG_ALLBINARY_BUSINESS_ADVERTISEMENT_GAMEADSTATEBASE_H
