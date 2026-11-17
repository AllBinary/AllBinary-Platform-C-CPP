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
// package org.allbinary.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"

typedef struct GameGlobalsFactory GameGlobalsFactory;
struct GameGlobalsFactory {
    bool newCanvas;
    int64_t newDisplaybleTime;
    GPoint* point;
};

static GameGlobalsFactory* GameGlobalsFactory_instance;

GameGlobalsFactory* GameGlobalsFactory_new(void);
GameGlobalsFactory* GameGlobalsFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void GameGlobalsFactory_staticInit(void) {
    GameGlobalsFactory_instance = GameGlobalsFactory_new();
}

static void GameGlobalsFactory_initFields(GameGlobalsFactory* this) {
    this->newCanvas = true;
    this->newDisplaybleTime = ((int64_t) Integer_MIN_VALUE);
    this->point = PointFactory_getInstance()->ZERO_ZERO;
}

void GameGlobalsFactory_init(GameGlobalsFactory* this) {
    GameGlobalsFactory_initFields(this);
}

GameGlobalsFactory* GameGlobalsFactory_new(void) {
    GameGlobalsFactory* this = calloc(1, sizeof(GameGlobalsFactory));
    GameGlobalsFactory_init(this);
    return this;
}


GameGlobalsFactory* GameGlobalsFactory_getInstance(void) {
        return GameGlobalsFactory_instance;
}

