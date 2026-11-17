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
#include "org/allbinary/android/AndroidInfoFactory.h"
#include "org/allbinary/android/input/motion/api1/GameInputMotionInfoAPI1.h"
#include "org/allbinary/android/input/motion/api5/GameInputMotionInfoAPI5.h"

typedef struct GameInputMotionInfoFactory GameInputMotionInfoFactory;
struct GameInputMotionInfoFactory {
    char unused;
};


GameInputMotionInfoFactory* GameInputMotionInfoFactory_new(void);
GameInputMotionInfo* GameInputMotionInfoFactory_getInstance(void);

void GameInputMotionInfoFactory_init(GameInputMotionInfoFactory* this) {
}

GameInputMotionInfoFactory* GameInputMotionInfoFactory_new(void) {
    GameInputMotionInfoFactory* this = calloc(1, sizeof(GameInputMotionInfoFactory));
    GameInputMotionInfoFactory_init(this);
    return this;
}


GameInputMotionInfo* GameInputMotionInfoFactory_getInstance(void) {
        int32_t SDK_VERSION = AndroidInfoFactory_getVersion(AndroidInfoFactory_getInstance());
        if (SDK_VERSION <= 4) {
            return GameInputMotionInfoAPI1_getInstance();
        } else {
            return GameInputMotionInfoAPI5_getInstance();
        }
}

