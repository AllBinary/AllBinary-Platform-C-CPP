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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/GameKeyEventListenerInterface.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/input/GameInput.h"

typedef struct PlayerGameInput PlayerGameInput;
struct PlayerGameInput {
    GameInput base;
    GameKeyEventListenerInterface GameKeyEventListenerInterface_interface;
    GameInputStrings* gameInputStrings;
    int32_t playerInputId;
};


PlayerGameInput* PlayerGameInput_new(BasicArrayList* gameKeyEventList, BasicArrayList* removalGameKeyEventList, int32_t playerInputId);

void PlayerGameInput_init(PlayerGameInput* this, BasicArrayList* gameKeyEventList, BasicArrayList* removalGameKeyEventList, int32_t playerInputId);
void PlayerGameInput_onPressGameKeyEvent(PlayerGameInput* this, GameKeyEvent* gameKeyEvent);
void PlayerGameInput_onDownGameKeyEvent(PlayerGameInput* this, GameKeyEvent* gameKeyEvent);
void PlayerGameInput_onDownKeyEvent(PlayerGameInput* this, GameKeyEvent* gameKeyEvent);
void PlayerGameInput_onDownKey(PlayerGameInput* this, int32_t gameKeyEvent);
void PlayerGameInput_onUpGameKeyEvent(PlayerGameInput* this, GameKeyEvent* gameKeyEvent);
void PlayerGameInput_onUpKeyEvent(PlayerGameInput* this, int32_t gameKeyEvent);
void PlayerGameInput_onEvent(PlayerGameInput* this, AllBinaryEventObject* eventObject);
int32_t PlayerGameInput_getPlayerInputId(PlayerGameInput* this);

static void PlayerGameInput_initFields(PlayerGameInput* this) {
    this->gameInputStrings = GameInputStrings_getInstance();
    
}


void PlayerGameInput_init(PlayerGameInput* this, BasicArrayList* gameKeyEventList, BasicArrayList* removalGameKeyEventList, int32_t playerInputId) {
        GameInput_init(&this->base, gameKeyEventList, removalGameKeyEventList);
        PlayerGameInput_initFields(this);
        this->playerInputId = playerInputId;
}

PlayerGameInput* PlayerGameInput_new(BasicArrayList* gameKeyEventList, BasicArrayList* removalGameKeyEventList, int32_t playerInputId) {
    PlayerGameInput* this = calloc(1, sizeof(PlayerGameInput));
    PlayerGameInput_init(this, gameKeyEventList, removalGameKeyEventList, playerInputId);
    return this;
}


// synchronized
void PlayerGameInput_onPressGameKeyEvent(PlayerGameInput* this, GameKeyEvent* gameKeyEvent) {
        PlayerGameInput_add(this, gameKeyEvent);
        PlayerGameInput_addForRemoval(this, gameKeyEvent);
}


// synchronized
void PlayerGameInput_onDownGameKeyEvent(PlayerGameInput* this, GameKeyEvent* gameKeyEvent) {
        PlayerGameInput_add(this, gameKeyEvent);
}


// synchronized
void PlayerGameInput_onDownKeyEvent(PlayerGameInput* this, GameKeyEvent* gameKeyEvent) {
        PlayerGameInput_add(this, gameKeyEvent);
        PlayerGameInput_addForRemoval(this, gameKeyEvent);
}


// synchronized
void PlayerGameInput_onDownKey(PlayerGameInput* this, int32_t gameKeyEvent) {
        PreLogUtil_put(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), CommonLabels_getInstance()->START_LABEL), append, GameKeyEvent_toString(gameKeyEvent)), toString), this, this->gameInputStrings->ON_DOWN_GAME_KEY);
}


// synchronized
void PlayerGameInput_onUpGameKeyEvent(PlayerGameInput* this, GameKeyEvent* gameKeyEvent) {
        PlayerGameInput_addForRemoval(this, gameKeyEvent);
}


// synchronized
void PlayerGameInput_onUpKeyEvent(PlayerGameInput* this, int32_t gameKeyEvent) {
}


void PlayerGameInput_onEvent(PlayerGameInput* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


int32_t PlayerGameInput_getPlayerInputId(PlayerGameInput* this) {
        return this->playerInputId;
}

