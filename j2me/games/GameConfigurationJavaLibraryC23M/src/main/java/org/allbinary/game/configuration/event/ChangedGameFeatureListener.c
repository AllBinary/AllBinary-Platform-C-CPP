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
// package org.allbinary.game.configuration.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/configuration/GameConfiguration.h"
#include "org/allbinary/game/configuration/event/BaseChangedGameFeatureListener.h"

typedef struct ChangedGameFeatureListener ChangedGameFeatureListener;
struct ChangedGameFeatureListener {
    BaseChangedGameFeatureListener base;
};

static ChangedGameFeatureListener* ChangedGameFeatureListener_gameFeatureListener;

ChangedGameFeatureListener* ChangedGameFeatureListener_new(void);
ChangedGameFeatureListener* ChangedGameFeatureListener_getInstance(void);
bool ChangedGameFeatureListener_isChangedGameConfiguration(ChangedGameFeatureListener* this, GameConfiguration* gameConfiguration);

// Static fields with runtime initializers: call this once at startup
void ChangedGameFeatureListener_staticInit(void) {
    ChangedGameFeatureListener_gameFeatureListener = ChangedGameFeatureListener_new();
}

void ChangedGameFeatureListener_init(ChangedGameFeatureListener* this) {
    BaseChangedGameFeatureListener_init(&this->base);
}

ChangedGameFeatureListener* ChangedGameFeatureListener_new(void) {
    ChangedGameFeatureListener* this = calloc(1, sizeof(ChangedGameFeatureListener));
    ChangedGameFeatureListener_init(this);
    return this;
}


ChangedGameFeatureListener* ChangedGameFeatureListener_getInstance(void) {
        return ChangedGameFeatureListener_gameFeatureListener;
}


bool ChangedGameFeatureListener_isChangedGameConfiguration(ChangedGameFeatureListener* this, GameConfiguration* gameConfiguration) {
        return JAVA_CALL(this->list, contains, gameConfiguration);
}

