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

typedef struct GameInputStrings GameInputStrings;
struct GameInputStrings {
    const char* PROCESS_INPUT;
    const char* KEY_PRESSED;
    const char* KEY_RELEASED;
    const char* KEY_REPEATED;
    const char* ON_PRESS_GAME_KEY;
    const char* ON_DOWN_GAME_KEY;
    const char* ON_UP_GAME_KEY;
    const char* NO_KEY;
    const char* ADD_KEY_EVENT;
    const char* REMOVE_KEY_EVENT;
    const char* STRAFE_LEFT;
    const char* STRAFE_RIGHT;
    const char* PROCESS_MOTION_INPUT;
    const char* UDPATE_CURRENT_TOUCH_INPUT_FACTORY;
    const char* ENABLE_PLAYER_GAME_INPUTS;
    const char* ENABLE_PLAYER_GAME_INPUT;
};

static GameInputStrings* GameInputStrings_instance;

GameInputStrings* GameInputStrings_new(void);
GameInputStrings* GameInputStrings_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void GameInputStrings_staticInit(void) {
    GameInputStrings_instance = GameInputStrings_new();
}

static void GameInputStrings_initFields(GameInputStrings* this) {
    this->PROCESS_INPUT = "processInput";
    this->KEY_PRESSED = "keyPressed";
    this->KEY_RELEASED = "keyReleased";
    this->KEY_REPEATED = "keyRepeated";
    this->ON_PRESS_GAME_KEY = "onPressGameKeyEvent";
    this->ON_DOWN_GAME_KEY = "onDownGameKeyEvent";
    this->ON_UP_GAME_KEY = "onUpGameKeyEvent";
    this->NO_KEY = "Key Code Not Mapped For Game: ";
    this->ADD_KEY_EVENT = "addGameKeyEvent";
    this->REMOVE_KEY_EVENT = "removeGameKeyEvent";
    this->STRAFE_LEFT = "strafeLeft";
    this->STRAFE_RIGHT = "strafeRight";
    this->PROCESS_MOTION_INPUT = "processMotionInput";
    this->UDPATE_CURRENT_TOUCH_INPUT_FACTORY = "updateCurrentTouchInputFactory";
    this->ENABLE_PLAYER_GAME_INPUTS = "Enabling PlayerGameInputs: ";
    this->ENABLE_PLAYER_GAME_INPUT = "Enabling PlayerGameInput: ";
}

void GameInputStrings_init(GameInputStrings* this) {
    GameInputStrings_initFields(this);
}

GameInputStrings* GameInputStrings_new(void) {
    GameInputStrings* this = calloc(1, sizeof(GameInputStrings));
    GameInputStrings_init(this);
    return this;
}


GameInputStrings* GameInputStrings_getInstance(void) {
        return GameInputStrings_instance;
}

