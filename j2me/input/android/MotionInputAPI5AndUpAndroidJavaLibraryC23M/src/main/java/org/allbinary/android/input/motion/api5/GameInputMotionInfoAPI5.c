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
// package org.allbinary.android.input.motion.api5

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/android/input/motion/GameInputMotionInfo.h"

typedef struct GameInputMotionInfoAPI5 GameInputMotionInfoAPI5;
struct GameInputMotionInfoAPI5 {
    GameInputMotionInfo base;
};

static GameInputMotionInfoAPI5* GameInputMotionInfoAPI5_instance;

GameInputMotionInfoAPI5* GameInputMotionInfoAPI5_new(void);
GameInputMotionInfoAPI5* GameInputMotionInfoAPI5_getInstance(void);

void GameInputMotionInfoAPI5_init(GameInputMotionInfoAPI5* this);

// Static fields with runtime initializers: call this once at startup
void GameInputMotionInfoAPI5_staticInit(void) {
    GameInputMotionInfoAPI5_instance = GameInputMotionInfoAPI5_new();
}


GameInputMotionInfoAPI5* GameInputMotionInfoAPI5_getInstance(void) {
        return GameInputMotionInfoAPI5_instance;
}


void GameInputMotionInfoAPI5_init(GameInputMotionInfoAPI5* this) {
        GameInputMotionInfo_init(&this->base, Integer_MAX_VALUE, 10);
}

GameInputMotionInfoAPI5* GameInputMotionInfoAPI5_new(void) {
    GameInputMotionInfoAPI5* this = calloc(1, sizeof(GameInputMotionInfoAPI5));
    GameInputMotionInfoAPI5_init(this);
    return this;
}

