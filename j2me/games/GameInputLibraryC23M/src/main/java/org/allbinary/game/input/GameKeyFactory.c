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
// #include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/string/CommonPhoneStrings.h"

typedef struct GameKeyFactory GameKeyFactory;
struct GameKeyFactory {
    GameKey* NONE;
    GameKey* UP;
    GameKey* DOWN;
    GameKey* LEFT;
    GameKey* RIGHT;
    GameKey* KEY_POUND;
    GameKey* KEY_STAR;
    GameKey* KEY_NUM0;
    GameKey* KEY_NUM1;
    GameKey* KEY_NUM2;
    GameKey* KEY_NUM3;
    GameKey* KEY_NUM4;
    GameKey* KEY_NUM5;
    GameKey* KEY_NUM6;
    GameKey* KEY_NUM7;
    GameKey* KEY_NUM8;
    GameKey* KEY_NUM9;
    GameKey* GAME_A;
    GameKey* GAME_B;
    GameKey* GAME_C;
    GameKey* GAME_D;
    GameKey* FIRE;
    GameKey* LEVEL_DOWN;
    GameKey* LEVEL_UP;
};

static Any* GameKeyFactory_instance;

GameKeyFactory* GameKeyFactory_new(void);
GameKeyFactory* GameKeyFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void GameKeyFactory_staticInit(void) {
    GameKeyFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void GameKeyFactory_initFields(GameKeyFactory* this) {
    this->NONE = GameKey_new(InputFactory_getInstance()->MAX - 1, "None");
    this->UP = GameKey_new(Canvas_UP, CommonPhoneStrings_getInstance()->UP);
    this->DOWN = GameKey_new(Canvas_DOWN, CommonPhoneStrings_getInstance()->DOWN);
    this->LEFT = GameKey_new(Canvas_LEFT, CommonPhoneStrings_getInstance()->LEFT);
    this->RIGHT = GameKey_new(Canvas_RIGHT, CommonPhoneStrings_getInstance()->RIGHT);
    this->KEY_POUND = GameKey_new(Canvas_KEY_POUND, "POUND");
    this->KEY_STAR = GameKey_new(Canvas_KEY_STAR, "STAR");
    this->KEY_NUM0 = GameKey_new(Canvas_KEY_NUM0, CommonPhoneStrings_getInstance()->ZERO);
    this->KEY_NUM1 = GameKey_new(Canvas_KEY_NUM1, CommonPhoneStrings_getInstance()->ONE);
    this->KEY_NUM2 = GameKey_new(Canvas_KEY_NUM2, CommonPhoneStrings_getInstance()->TWO);
    this->KEY_NUM3 = GameKey_new(Canvas_KEY_NUM3, CommonPhoneStrings_getInstance()->THREE);
    this->KEY_NUM4 = GameKey_new(Canvas_KEY_NUM4, CommonPhoneStrings_getInstance()->FOUR);
    this->KEY_NUM5 = GameKey_new(Canvas_KEY_NUM5, CommonPhoneStrings_getInstance()->FIVE);
    this->KEY_NUM6 = GameKey_new(Canvas_KEY_NUM6, CommonPhoneStrings_getInstance()->SIX);
    this->KEY_NUM7 = GameKey_new(Canvas_KEY_NUM7, CommonPhoneStrings_getInstance()->SEVEN);
    this->KEY_NUM8 = GameKey_new(Canvas_KEY_NUM8, CommonPhoneStrings_getInstance()->EIGHT);
    this->KEY_NUM9 = GameKey_new(Canvas_KEY_NUM9, CommonPhoneStrings_getInstance()->NINE);
    this->GAME_A = GameKey_new(Canvas_GAME_A, "Game A");
    this->GAME_B = GameKey_new(Canvas_GAME_B, "Game B");
    this->GAME_C = GameKey_new(Canvas_GAME_C, "Game C");
    this->GAME_D = GameKey_new(Canvas_GAME_D, "Game D");
    this->FIRE = GameKey_new(Canvas_FIRE, CommonPhoneStrings_getInstance()->FIRE);
    this->LEVEL_DOWN = GameKey_new(Canvas_KEY_NUM9 + 1, "Cheat Level Up");
    this->LEVEL_UP = GameKey_new(Canvas_KEY_NUM9 + 2, "Cheat Level Down");
}

void GameKeyFactory_init(GameKeyFactory* this) {
    GameKeyFactory_initFields(this);
}

GameKeyFactory* GameKeyFactory_new(void) {
    GameKeyFactory* this = calloc(1, sizeof(GameKeyFactory));
    GameKeyFactory_init(this);
    return this;
}


GameKeyFactory* GameKeyFactory_getInstance(void) {
        if (GameKeyFactory_instance == NullUtil_getInstance()->NULL_OBJECT) {
            GameKeyFactory_instance = GameKeyFactory_new();
        }
        return ((GameKeyFactory*) GameKeyFactory_instance);
}

