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
// #include "javax/microedition/media/MediaException.h"
// #include "javax/microedition/media/Player.h"
// #include "javax/microedition/media/PlayerListener.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/media/audio/Controllable2.h"

//BasicPlayerJavaLibrary
typedef struct BasicPlayer BasicPlayer;
struct BasicPlayer {
    Player Player_interface;
    Controllable2 Controllable2_interface;
    CommonStrings* commonStrings;
    BasicArrayList* listenersList;
    int32_t stateP;
    int32_t loopCountP;
};

const char* BasicPlayer_CONTROL_TYPE = "ToneControl";

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
void BasicPlayer_deallocate(BasicPlayer* this);
void BasicPlayer_prefetch(BasicPlayer* this);
void BasicPlayer_realize(BasicPlayer* this);
void BasicPlayer_setLoopCount(BasicPlayer* this, int32_t count);
int32_t BasicPlayer_getLoopCount(BasicPlayer* this);
int64_t BasicPlayer_setMediaTime(BasicPlayer* this, int64_t now);
void BasicPlayer_start(BasicPlayer* this);
void BasicPlayer_stop(BasicPlayer* this);
void BasicPlayer_setVolume(BasicPlayer* this, int32_t leftVolume, int32_t rightVolume);

static void BasicPlayer_initFields(BasicPlayer* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->listenersList = BasicArrayListD_new();
    this->stateP = 0;
    this->loopCountP = 0;
}


void BasicPlayer_init(BasicPlayer* this) {
    BasicPlayer_initFields(this);
        BasicPlayer_setLoopCount(this, 0);
        BasicPlayer_setState(this, Player_UNREALIZED);
}

BasicPlayer* BasicPlayer_new(void) {
    BasicPlayer* this = calloc(1, sizeof(BasicPlayer));
    BasicPlayer_init(this);
    return this;
}


const char* BasicPlayer_getContentType(BasicPlayer* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


Control* BasicPlayer_getControl(BasicPlayer* this, const char* controlType) {
        return NullControl_new();
}


Control** BasicPlayer_getControls(BasicPlayer* this) {
        return ((Control**) java_array_new(sizeof(Control*), 0));
}


void BasicPlayer_close(BasicPlayer* this) {
}


// synchronized
void BasicPlayer_addPlayerListener(BasicPlayer* this, PlayerListener* playerListener) {
        if (!BasicArrayList_contains(this->listenersList, playerListener)) {
            BasicArrayList_add(this->listenersList, playerListener);
        }
}


void BasicPlayer_removePlayerListener(BasicPlayer* this, PlayerListener* playerListener) {
        BasicArrayList_remove(this->listenersList, playerListener);
}


int32_t BasicPlayer_getState(BasicPlayer* this) {
        return this->stateP;
}


// synchronized
void BasicPlayer_setState(BasicPlayer* this, int32_t state) {
        this->stateP = state;
}


int64_t BasicPlayer_getDuration(BasicPlayer* this) {
        return 0LL;
}


int64_t BasicPlayer_getMediaTime(BasicPlayer* this) {
        return 0LL;
}


void BasicPlayer_deallocate(BasicPlayer* this) {
}


// throws MediaException
void BasicPlayer_prefetch(BasicPlayer* this) {
}


// throws MediaException
void BasicPlayer_realize(BasicPlayer* this) {
}


// synchronized
void BasicPlayer_setLoopCount(BasicPlayer* this, int32_t count) {
        this->loopCountP = count;
}


int32_t BasicPlayer_getLoopCount(BasicPlayer* this) {
        return this->loopCountP;
}


// throws MediaException
// synchronized
int64_t BasicPlayer_setMediaTime(BasicPlayer* this, int64_t now) {
        return 0LL;
}


// throws MediaException
// synchronized
void BasicPlayer_start(BasicPlayer* this) {
        BasicPlayer_setState(this, Player_STARTED);
}


// throws MediaException
// synchronized
void BasicPlayer_stop(BasicPlayer* this) {
        BasicPlayer_setState(this, Player_PREFETCHED);
}


void BasicPlayer_setVolume(BasicPlayer* this, int32_t leftVolume, int32_t rightVolume) {
}

