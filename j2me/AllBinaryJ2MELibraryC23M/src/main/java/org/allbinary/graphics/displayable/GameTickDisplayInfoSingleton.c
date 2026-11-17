/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.graphics.displayable

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GameTickDisplayInfoSingleton GameTickDisplayInfoSingleton;
struct GameTickDisplayInfoSingleton {
    DisplayInfoSingleton* displayInfoSingleton;
    int32_t lastWidth;
    int32_t lastHeight;
    int32_t lastHalfWidth;
    int32_t lastHalfHeight;
};

static GameTickDisplayInfoSingleton* GameTickDisplayInfoSingleton_instance;

GameTickDisplayInfoSingleton* GameTickDisplayInfoSingleton_new(void);
GameTickDisplayInfoSingleton* GameTickDisplayInfoSingleton_getInstance(void);
void GameTickDisplayInfoSingleton_update(GameTickDisplayInfoSingleton* this);
int32_t GameTickDisplayInfoSingleton_getLastWidth(GameTickDisplayInfoSingleton* this);
int32_t GameTickDisplayInfoSingleton_getLastHeight(GameTickDisplayInfoSingleton* this);
int32_t GameTickDisplayInfoSingleton_getLastHalfWidth(GameTickDisplayInfoSingleton* this);
int32_t GameTickDisplayInfoSingleton_getLastHalfHeight(GameTickDisplayInfoSingleton* this);

// Static fields with runtime initializers: call this once at startup
void GameTickDisplayInfoSingleton_staticInit(void) {
    GameTickDisplayInfoSingleton_instance = GameTickDisplayInfoSingleton_new();
}

static void GameTickDisplayInfoSingleton_initFields(GameTickDisplayInfoSingleton* this) {
    this->displayInfoSingleton = DisplayInfoSingleton_getInstance();
    this->lastWidth = DisplayInfoSingleton_getLastWidth(this->displayInfoSingleton);
    this->lastHeight = DisplayInfoSingleton_getLastHeight(this->displayInfoSingleton);
    this->lastHalfWidth = DisplayInfoSingleton_getLastHalfWidth(this->displayInfoSingleton);
    this->lastHalfHeight = DisplayInfoSingleton_getLastHalfHeight(this->displayInfoSingleton);
}

void GameTickDisplayInfoSingleton_init(GameTickDisplayInfoSingleton* this) {
    GameTickDisplayInfoSingleton_initFields(this);
}

GameTickDisplayInfoSingleton* GameTickDisplayInfoSingleton_new(void) {
    GameTickDisplayInfoSingleton* this = calloc(1, sizeof(GameTickDisplayInfoSingleton));
    GameTickDisplayInfoSingleton_init(this);
    return this;
}


GameTickDisplayInfoSingleton* GameTickDisplayInfoSingleton_getInstance(void) {
        return GameTickDisplayInfoSingleton_instance;
}


void GameTickDisplayInfoSingleton_update(GameTickDisplayInfoSingleton* this) {
        this->lastWidth = DisplayInfoSingleton_getLastWidth(this->displayInfoSingleton);
        this->lastHeight = DisplayInfoSingleton_getLastHeight(this->displayInfoSingleton);
        this->lastHalfWidth = DisplayInfoSingleton_getLastHalfWidth(this->displayInfoSingleton);
        this->lastHalfHeight = DisplayInfoSingleton_getLastHalfHeight(this->displayInfoSingleton);
}


int32_t GameTickDisplayInfoSingleton_getLastWidth(GameTickDisplayInfoSingleton* this) {
        return this->lastWidth;
}


int32_t GameTickDisplayInfoSingleton_getLastHeight(GameTickDisplayInfoSingleton* this) {
        return this->lastHeight;
}


int32_t GameTickDisplayInfoSingleton_getLastHalfWidth(GameTickDisplayInfoSingleton* this) {
        return this->lastHalfWidth;
}


int32_t GameTickDisplayInfoSingleton_getLastHalfHeight(GameTickDisplayInfoSingleton* this) {
        return this->lastHalfHeight;
}

