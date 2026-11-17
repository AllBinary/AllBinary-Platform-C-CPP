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
// package org.allbinary.android.input.motion

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GameInputMotionInfo GameInputMotionInfo;
struct GameInputMotionInfo {
    int32_t MAX_API;
    int32_t MAX_POINTERS;
};


GameInputMotionInfo* GameInputMotionInfo_new(int32_t maxApi, int32_t maxPointers);

void GameInputMotionInfo_init(GameInputMotionInfo* this, int32_t maxApi, int32_t maxPointers);

static void GameInputMotionInfo_initFields(GameInputMotionInfo* this) {
    
    
}


void GameInputMotionInfo_init(GameInputMotionInfo* this, int32_t maxApi, int32_t maxPointers) {
    GameInputMotionInfo_initFields(this);
        this->MAX_API = maxApi;
        this->MAX_POINTERS = maxPointers;
}

GameInputMotionInfo* GameInputMotionInfo_new(int32_t maxApi, int32_t maxPointers) {
    GameInputMotionInfo* this = calloc(1, sizeof(GameInputMotionInfo));
    GameInputMotionInfo_init(this, maxApi, maxPointers);
    return this;
}

