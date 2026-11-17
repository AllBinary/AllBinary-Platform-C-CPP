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
// package org.allbinary.game.input.motion.action

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputEvent.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/GameKeyEventSourceInterface.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"

typedef struct GameKeyCompleteMotionGestureInputEvent GameKeyCompleteMotionGestureInputEvent;
struct GameKeyCompleteMotionGestureInputEvent {
    CompleteMotionGestureInputEvent base;
    GameKeyEventSourceInterface GameKeyEventSourceInterface_interface;
    GameKey* gameKey;
    GameKeyEvent* gameKeyEvent;
};


GameKeyCompleteMotionGestureInputEvent* GameKeyCompleteMotionGestureInputEvent_new(const char* name, MotionGestureInput* motionGestureInput, InputToGameKeyMapping* inputToGameKeyMapping);

void GameKeyCompleteMotionGestureInputEvent_init(GameKeyCompleteMotionGestureInputEvent* this, const char* name, MotionGestureInput* motionGestureInput, InputToGameKeyMapping* inputToGameKeyMapping);
int32_t GameKeyCompleteMotionGestureInputEvent_getSourceId(GameKeyCompleteMotionGestureInputEvent* this);
void GameKeyCompleteMotionGestureInputEvent_update(GameKeyCompleteMotionGestureInputEvent* this);
void GameKeyCompleteMotionGestureInputEvent_setGameKeyEvent(GameKeyCompleteMotionGestureInputEvent* this, GameKeyEvent* gameKeyEvent);
GameKeyEvent* GameKeyCompleteMotionGestureInputEvent_getGameKeyEvent(GameKeyCompleteMotionGestureInputEvent* this);
void GameKeyCompleteMotionGestureInputEvent_setGameKey(GameKeyCompleteMotionGestureInputEvent* this, GameKey* gameKey);
GameKey* GameKeyCompleteMotionGestureInputEvent_getGameKey(GameKeyCompleteMotionGestureInputEvent* this);

static void GameKeyCompleteMotionGestureInputEvent_initFields(GameKeyCompleteMotionGestureInputEvent* this) {
    this->gameKey = GameKey_NULL_GAME_KEY;
    this->gameKeyEvent = GameKeyEvent_NONE;
}


void GameKeyCompleteMotionGestureInputEvent_init(GameKeyCompleteMotionGestureInputEvent* this, const char* name, MotionGestureInput* motionGestureInput, InputToGameKeyMapping* inputToGameKeyMapping) {
        CompleteMotionGestureInputEvent_init(&this->base, name, motionGestureInput);
        GameKeyCompleteMotionGestureInputEvent_initFields(this);
}

GameKeyCompleteMotionGestureInputEvent* GameKeyCompleteMotionGestureInputEvent_new(const char* name, MotionGestureInput* motionGestureInput, InputToGameKeyMapping* inputToGameKeyMapping) {
    GameKeyCompleteMotionGestureInputEvent* this = calloc(1, sizeof(GameKeyCompleteMotionGestureInputEvent));
    GameKeyCompleteMotionGestureInputEvent_init(this, name, motionGestureInput, inputToGameKeyMapping);
    return this;
}


int32_t GameKeyCompleteMotionGestureInputEvent_getSourceId(GameKeyCompleteMotionGestureInputEvent* this) {
        return 0;
}


void GameKeyCompleteMotionGestureInputEvent_update(GameKeyCompleteMotionGestureInputEvent* this) {
}


void GameKeyCompleteMotionGestureInputEvent_setGameKeyEvent(GameKeyCompleteMotionGestureInputEvent* this, GameKeyEvent* gameKeyEvent) {
        this->gameKeyEvent = gameKeyEvent;
}


GameKeyEvent* GameKeyCompleteMotionGestureInputEvent_getGameKeyEvent(GameKeyCompleteMotionGestureInputEvent* this) {
        return this->gameKeyEvent;
}


void GameKeyCompleteMotionGestureInputEvent_setGameKey(GameKeyCompleteMotionGestureInputEvent* this, GameKey* gameKey) {
        this->gameKey = gameKey;
}


GameKey* GameKeyCompleteMotionGestureInputEvent_getGameKey(GameKeyCompleteMotionGestureInputEvent* this) {
        return this->gameKey;
}

