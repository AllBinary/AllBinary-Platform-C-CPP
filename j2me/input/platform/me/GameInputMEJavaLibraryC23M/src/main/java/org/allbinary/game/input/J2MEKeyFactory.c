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

typedef struct J2MEKeyFactory J2MEKeyFactory;
struct J2MEKeyFactory {
    GameKeyFactory* gameKeyFactory;
};

static J2MEKeyFactory* J2MEKeyFactory_instance;

J2MEKeyFactory* J2MEKeyFactory_new(void);
J2MEKeyFactory* J2MEKeyFactory_getInstance(void);

void J2MEKeyFactory_init(J2MEKeyFactory* this);
void J2MEKeyFactory_init(J2MEKeyFactory* this);
bool J2MEKeyFactory_isSubmission(J2MEKeyFactory* this, Input* input);
bool J2MEKeyFactory_isDelete(J2MEKeyFactory* this, Input* input);
bool J2MEKeyFactory_isBackSpace(J2MEKeyFactory* this, Input* input);
bool J2MEKeyFactory_isUp(J2MEKeyFactory* this, Input* input);
bool J2MEKeyFactory_isDown(J2MEKeyFactory* this, Input* input);
bool J2MEKeyFactory_isLeft(J2MEKeyFactory* this, Input* input);
bool J2MEKeyFactory_isRight(J2MEKeyFactory* this, Input* input);
bool J2MEKeyFactory_isEnter(J2MEKeyFactory* this, Input* input);

// Static fields with runtime initializers: call this once at startup
void J2MEKeyFactory_staticInit(void) {
    J2MEKeyFactory_instance = J2MEKeyFactory_new();
}

static void J2MEKeyFactory_initFields(J2MEKeyFactory* this) {
    this->gameKeyFactory = GameKeyFactory_getInstance();
}


J2MEKeyFactory* J2MEKeyFactory_getInstance(void) {
        return J2MEKeyFactory_instance;
}


void J2MEKeyFactory_init(J2MEKeyFactory* this) {
    J2MEKeyFactory_initFields(this);
}

J2MEKeyFactory* J2MEKeyFactory_new(void) {
    J2MEKeyFactory* this = calloc(1, sizeof(J2MEKeyFactory));
    J2MEKeyFactory_init(this);
    return this;
}


void J2MEKeyFactory_init(J2MEKeyFactory* this) {
        GameKey** gameKeyArray = ((GameKey**) java_array_from(sizeof(GameKey*), sizeof((GameKey*[]){ this->gameKeyFactory->DOWN, this->gameKeyFactory->FIRE, this->gameKeyFactory->GAME_A, this->gameKeyFactory->GAME_B, this->gameKeyFactory->GAME_C, this->gameKeyFactory->GAME_D, this->gameKeyFactory->KEY_NUM0, this->gameKeyFactory->KEY_NUM1, this->gameKeyFactory->KEY_NUM2, this->gameKeyFactory->KEY_NUM3, this->gameKeyFactory->KEY_NUM4, this->gameKeyFactory->KEY_NUM5, this->gameKeyFactory->KEY_NUM6, this->gameKeyFactory->KEY_NUM7, this->gameKeyFactory->KEY_NUM8, this->gameKeyFactory->KEY_NUM9, this->gameKeyFactory->KEY_POUND, this->gameKeyFactory->KEY_STAR, this->gameKeyFactory->LEFT, this->gameKeyFactory->LEVEL_DOWN, this->gameKeyFactory->LEVEL_UP, this->gameKeyFactory->NONE, this->gameKeyFactory->RIGHT, this->gameKeyFactory->UP }) / sizeof(GameKey*), (GameKey*[]){ this->gameKeyFactory->DOWN, this->gameKeyFactory->FIRE, this->gameKeyFactory->GAME_A, this->gameKeyFactory->GAME_B, this->gameKeyFactory->GAME_C, this->gameKeyFactory->GAME_D, this->gameKeyFactory->KEY_NUM0, this->gameKeyFactory->KEY_NUM1, this->gameKeyFactory->KEY_NUM2, this->gameKeyFactory->KEY_NUM3, this->gameKeyFactory->KEY_NUM4, this->gameKeyFactory->KEY_NUM5, this->gameKeyFactory->KEY_NUM6, this->gameKeyFactory->KEY_NUM7, this->gameKeyFactory->KEY_NUM8, this->gameKeyFactory->KEY_NUM9, this->gameKeyFactory->KEY_POUND, this->gameKeyFactory->KEY_STAR, this->gameKeyFactory->LEFT, this->gameKeyFactory->LEVEL_DOWN, this->gameKeyFactory->LEVEL_UP, this->gameKeyFactory->NONE, this->gameKeyFactory->RIGHT, this->gameKeyFactory->UP }));
        InputFactory* inputFactory = InputFactory_getInstance();
        for (int32_t index = java_array_length(gameKeyArray); --index >= 0; ) {
            InputFactory_add(inputFactory, JAVA_CALL(gameKeyArray[index], getId), gameKeyArray[index]);
        }
}


bool J2MEKeyFactory_isSubmission(J2MEKeyFactory* this, Input* input) {
        if (input == this->gameKeyFactory->FIRE) {
            return true;
        }
        return false;
}


bool J2MEKeyFactory_isDelete(J2MEKeyFactory* this, Input* input) {
        if (input == this->gameKeyFactory->GAME_D) {
            return true;
        }
        return false;
}


bool J2MEKeyFactory_isBackSpace(J2MEKeyFactory* this, Input* input) {
        return false;
}


bool J2MEKeyFactory_isUp(J2MEKeyFactory* this, Input* input) {
        if (input == this->gameKeyFactory->UP) {
            return true;
        }
        return false;
}


bool J2MEKeyFactory_isDown(J2MEKeyFactory* this, Input* input) {
        if (input == this->gameKeyFactory->DOWN) {
            return true;
        }
        return false;
}


bool J2MEKeyFactory_isLeft(J2MEKeyFactory* this, Input* input) {
        if (input == this->gameKeyFactory->LEFT) {
            return true;
        }
        return false;
}


bool J2MEKeyFactory_isRight(J2MEKeyFactory* this, Input* input) {
        if (input == this->gameKeyFactory->RIGHT) {
            return true;
        }
        return false;
}


bool J2MEKeyFactory_isEnter(J2MEKeyFactory* this, Input* input) {
        if (input == this->gameKeyFactory->FIRE) {
            return true;
        }
        return false;
}

