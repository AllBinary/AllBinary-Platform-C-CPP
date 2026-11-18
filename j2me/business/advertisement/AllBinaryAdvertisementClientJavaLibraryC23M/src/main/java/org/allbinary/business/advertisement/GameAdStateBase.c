// Generated Code Do Not Modify
#include "org/allbinary/business/advertisement/GameAdStateBase.h"
#include "org/allbinary/game/GameType.h"
#include "org/allbinary/game/state/GameState.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/business/advertisement/AdConfiguration.h"
#include "org/allbinary/business/advertisement/Advertisements.h"
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif

























void GameAdStateBase_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GameAdStateBase_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GameAdStateBase", nullptr);
    java_register_method("GameAdStateBase", "initViewArray", (void*) GameAdStateBase_initViewArray);
    java_register_method("GameAdStateBase", "onStart", (void*) GameAdStateBase_onStart);
    java_register_method("GameAdStateBase", "init", (void*) GameAdStateBase_initMethod);
    java_register_method("GameAdStateBase", "isShowingAtLocation", (void*) GameAdStateBase_isShowingAtLocation);
    java_register_method("GameAdStateBase", "isShowingAt", (void*) GameAdStateBase_isShowingAt);
    java_register_method("GameAdStateBase", "show", (void*) GameAdStateBase_show);
    java_register_method("GameAdStateBase", "hide", (void*) GameAdStateBase_hide);
    java_register_method("GameAdStateBase", "onEvent", (void*) GameAdStateBase_onEvent);
    java_register_method("GameAdStateBase", "processAdState", (void*) GameAdStateBase_processAdState);
    java_register_method("GameAdStateBase", "processPageAdState", (void*) GameAdStateBase_processPageAdState);
    java_register_method("GameAdStateBase", "playingAdState", (void*) GameAdStateBase_playingAdState);
    java_register_method("GameAdStateBase", "playingAdStateWH", (void*) GameAdStateBase_playingAdStateWH);
    java_register_method("GameAdStateBase", "notPlayingAdState", (void*) GameAdStateBase_notPlayingAdState);
    java_register_method("GameAdStateBase", "setGameIsReady", (void*) GameAdStateBase_setGameIsReady);
    java_register_method("GameAdStateBase", "isGameIsReady", (void*) GameAdStateBase_isGameIsReady);
    java_register_method("GameAdStateBase", "getAdvertisements", (void*) GameAdStateBase_getAdvertisements);
    java_register_method("GameAdStateBase", "getAdConfiguration", (void*) GameAdStateBase_getAdConfiguration);
    java_register_method("GameAdStateBase", "isOkayToShowPageAd", (void*) GameAdStateBase_isOkayToShowPageAd);
    java_register_method("GameAdStateBase", "setOkayToShowAds", (void*) GameAdStateBase_setOkayToShowAds);
    java_register_method("GameAdStateBase", "isOkayToShowAds", (void*) GameAdStateBase_isOkayToShowAds);
    java_register_method("GameAdStateBase", "isEnabled", (void*) GameAdStateBase_isEnabled);
}

static void GameAdStateBase_initFields(GameAdStateBase* this) {
    
    this->advertisementsP = Advertisements_new();
    this->okayToShowAdsP = false;
}


void GameAdStateBase_init(GameAdStateBase* this, AdConfiguration* adConfiguration) {
    GameAdStateBase_register();
    GameAdStateBase_initFields(this);
        this->adConfigurationP = adConfiguration;
}

GameAdStateBase* GameAdStateBase_new(AdConfiguration* adConfiguration) {
    GameAdStateBase* this = java_object_alloc(sizeof(GameAdStateBase), "GameAdStateBase");
    GameAdStateBase_init(this, adConfiguration);
    return this;
}


void GameAdStateBase_initViewArray(GameAdStateBase* this, void** viewArray) {
}


void GameAdStateBase_onStart(GameAdStateBase* this, void* anyType) {
        GameAdStateBase_initMethod(this);
}


void GameAdStateBase_initMethod(GameAdStateBase* this) {
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

