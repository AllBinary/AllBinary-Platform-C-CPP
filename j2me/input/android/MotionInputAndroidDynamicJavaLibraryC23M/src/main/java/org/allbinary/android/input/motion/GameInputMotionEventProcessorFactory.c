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
#include "org/allbinary/android/input/motion/api1/GameInputMotionEventProcessorAPI1.h"
#include "org/allbinary/android/input/motion/api5/GameInputMotionEventProcessorAPI5.h"

typedef struct GameInputMotionEventProcessorFactory GameInputMotionEventProcessorFactory;
struct GameInputMotionEventProcessorFactory {
    char unused;
};


GameInputMotionEventProcessorFactory* GameInputMotionEventProcessorFactory_new(void);
BaseGameInputMotionEventProcessor* GameInputMotionEventProcessorFactory_getInstance(void);

void GameInputMotionEventProcessorFactory_init(GameInputMotionEventProcessorFactory* this) {
}

GameInputMotionEventProcessorFactory* GameInputMotionEventProcessorFactory_new(void) {
    GameInputMotionEventProcessorFactory* this = calloc(1, sizeof(GameInputMotionEventProcessorFactory));
    GameInputMotionEventProcessorFactory_init(this);
    return this;
}


BaseGameInputMotionEventProcessor* GameInputMotionEventProcessorFactory_getInstance(void) {
        int32_t SDK_VERSION = AndroidInfoFactory_getVersion(AndroidInfoFactory_getInstance());
        if (SDK_VERSION <= 4) {
            return GameInputMotionEventProcessorAPI1_getInstance();
        } else {
            return GameInputMotionEventProcessorAPI5_getInstance();
        }
}

