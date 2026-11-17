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
#include "org/allbinary/game/GameType.h"
#include "org/allbinary/game/state/GameState.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"

typedef struct GameAdStateBase GameAdStateBase;
struct GameAdStateBase {
    AdConfiguration* adConfigurationP;
    Advertisements* advertisementsP;
    bool okayToShowAdsP;
};


GameAdStateBase* GameAdStateBase_new(AdConfiguration* adConfiguration);

void GameAdStateBase_init(GameAdStateBase* this, AdConfiguration* adConfiguration);
void GameAdStateBase_initViewArray(GameAdStateBase* this, Any** viewArray);
void GameAdStateBase_onStart(GameAdStateBase* this, Any* anyType);
void GameAdStateBase_init(GameAdStateBase* this);
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

static void GameAdStateBase_initFields(GameAdStateBase* this) {
    
    this->advertisementsP = Advertisements_new();
    this->okayToShowAdsP = false;
}


void GameAdStateBase_init(GameAdStateBase* this, AdConfiguration* adConfiguration) {
    GameAdStateBase_initFields(this);
        this->adConfigurationP = adConfiguration;
}

GameAdStateBase* GameAdStateBase_new(AdConfiguration* adConfiguration) {
    GameAdStateBase* this = calloc(1, sizeof(GameAdStateBase));
    GameAdStateBase_init(this, adConfiguration);
    return this;
}


void GameAdStateBase_initViewArray(GameAdStateBase* this, Any** viewArray) {
}


void GameAdStateBase_onStart(GameAdStateBase* this, Any* anyType) {
        GameAdStateBase_init(this);
}


void GameAdStateBase_init(GameAdStateBase* this) {
}


bool GameAdStateBase_isShowingAtLocation(GameAdStateBase* this, int32_t location) {
        return false;
}


bool GameAdStateBase_isShowingAt(GameAdStateBase* this) {
        return false;
}


void GameAdStateBase_show(GameAdStateBase* this) {
}


void GameAdStateBase_hide(GameAdStateBase* this) {
}


void GameAdStateBase_onEvent(GameAdStateBase* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void GameAdStateBase_processAdState(GameAdStateBase* this, GameState* gameState, GameType* gameType) {
}


void GameAdStateBase_processPageAdState(GameAdStateBase* this) {
}


// throws Exception
void GameAdStateBase_playingAdState(GameAdStateBase* this) {
}


// throws Exception
void GameAdStateBase_playingAdStateWH(GameAdStateBase* this, int32_t width, int32_t height) {
}


// throws Exception
void GameAdStateBase_notPlayingAdState(GameAdStateBase* this) {
}


void GameAdStateBase_setGameIsReady(GameAdStateBase* this, bool gameIsReady) {
}


bool GameAdStateBase_isGameIsReady(GameAdStateBase* this) {
        return false;
}


Advertisements* GameAdStateBase_getAdvertisements(GameAdStateBase* this) {
        return this->advertisementsP;
}


AdConfiguration* GameAdStateBase_getAdConfiguration(GameAdStateBase* this) {
        return this->adConfigurationP;
}


bool GameAdStateBase_isOkayToShowPageAd(GameAdStateBase* this) {
        return false;
}


void GameAdStateBase_setOkayToShowAds(GameAdStateBase* this, bool okayToShowAds) {
        this->okayToShowAdsP = okayToShowAds;
}


bool GameAdStateBase_isOkayToShowAds(GameAdStateBase* this) {
        return this->okayToShowAdsP;
}


bool GameAdStateBase_isEnabled(GameAdStateBase* this) {
        return false;
}

