/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2009 AllBinary
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
// package org.allbinary.android.input.motion.api1

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/android/input/motion/GameInputMotionInfo.h"

typedef struct GameInputMotionInfoAPI1 GameInputMotionInfoAPI1;
struct GameInputMotionInfoAPI1 {
    GameInputMotionInfo base;
};

static GameInputMotionInfoAPI1* GameInputMotionInfoAPI1_instance;

GameInputMotionInfoAPI1* GameInputMotionInfoAPI1_new(void);
GameInputMotionInfoAPI1* GameInputMotionInfoAPI1_getInstance(void);

void GameInputMotionInfoAPI1_init(GameInputMotionInfoAPI1* this);

// Static fields with runtime initializers: call this once at startup
void GameInputMotionInfoAPI1_staticInit(void) {
    GameInputMotionInfoAPI1_instance = GameInputMotionInfoAPI1_new();
}


GameInputMotionInfoAPI1* GameInputMotionInfoAPI1_getInstance(void) {
        return GameInputMotionInfoAPI1_instance;
}


void GameInputMotionInfoAPI1_init(GameInputMotionInfoAPI1* this) {
        GameInputMotionInfo_init(&this->base, 4, 1);
}

GameInputMotionInfoAPI1* GameInputMotionInfoAPI1_new(void) {
    GameInputMotionInfoAPI1* this = calloc(1, sizeof(GameInputMotionInfoAPI1));
    GameInputMotionInfoAPI1_init(this);
    return this;
}

