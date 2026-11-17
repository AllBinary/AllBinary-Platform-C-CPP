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
// #include "javax/microedition/media/Control.h"
// #include "javax/microedition/media/Controllable.h"
// #include "javax/microedition/media/Player.h"
// #include "javax/microedition/media/PlayerListener.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"

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

static void PlayerComposite_initFields(PlayerComposite* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    this->timeElapsedHelper = TimeDelayHelper_new(0);
    this->gameTickTimeDelayHelper = GameTickTimeDelayHelperFactory_getInstance();
}


void PlayerComposite_init(PlayerComposite* this, Player* player, int32_t repeatTime) {
    PlayerComposite_initFields(this);
        this->player = player;
        this->timeElapsedHelper->delay = repeatTime;
}

PlayerComposite* PlayerComposite_new(Player* player, int32_t repeatTime) {
    PlayerComposite* this = calloc(1, sizeof(PlayerComposite));
    PlayerComposite_init(this, player, repeatTime);
    return this;
}


// synchronized
void PlayerComposite_addPlayerListener(PlayerComposite* this, PlayerListener* playerListener) {
        Player_addPlayerListener(this->player, playerListener);
}


void PlayerComposite_removePlayerListener(PlayerComposite* this, PlayerListener* playerListener) {
        Player_removePlayerListener(this->player, playerListener);
}


void PlayerComposite_close(PlayerComposite* this) {
        Player_close(this->player);
}


void PlayerComposite_deallocate(PlayerComposite* this) {
        Player_deallocate(this->player);
}


const char* PlayerComposite_getContentType(PlayerComposite* this) {
        return Player_getContentType(this->player);
}


int64_t PlayerComposite_getDuration(PlayerComposite* this) {
        return Player_getDuration(this->player);
}


int64_t PlayerComposite_getMediaTime(PlayerComposite* this) {
        return Player_getMediaTime(this->player);
}


void PlayerComposite_prefetch(PlayerComposite* this) {
        JAVA_TRY {
            Player_prefetch(this->player);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "prefetch", e);
        } JAVA_END_TRY;
}


void PlayerComposite_realize(PlayerComposite* this) {
        JAVA_TRY {
            Player_realize(this->player);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "realize", e);
        } JAVA_END_TRY;
}


int32_t PlayerComposite_getState(PlayerComposite* this) {
        return Player_getState(this->player);
}


void PlayerComposite_setLoopCount(PlayerComposite* this, int32_t count) {
        Player_setLoopCount(this->player, count);
}


int64_t PlayerComposite_setMediaTime(PlayerComposite* this, int64_t now) {
        JAVA_TRY {
            return Player_setMediaTime(this->player, now);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "setMediaTime", e);
            return ((int64_t) (-1));
        } JAVA_END_TRY;
}


void PlayerComposite_start(PlayerComposite* this) {
        JAVA_TRY {
            if (TimeDelayHelper_isTime(this->timeElapsedHelper, this->gameTickTimeDelayHelper->startTime)) {
                Player_start(this->player);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->START_METHOD_NAME, e);
        } JAVA_END_TRY;
}


void PlayerComposite_stop(PlayerComposite* this) {
        JAVA_TRY {
            Player_stop(this->player);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "stop", e);
        } JAVA_END_TRY;
}


Control* PlayerComposite_getControl(PlayerComposite* this, const char* controlType) {
        return Player_getControl(this->player, controlType);
}


Control** PlayerComposite_getControls(PlayerComposite* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void PlayerComposite_setVolume(PlayerComposite* this, int32_t leftVolume, int32_t rightVolume) {
        Controllable2* controllable2 = (((Controllable2*) this->player));
        Controllable2_setVolume(controllable2, leftVolume, rightVolume);
}


Player* PlayerComposite_getPlayerP(PlayerComposite* this) {
        return this->player;
}

