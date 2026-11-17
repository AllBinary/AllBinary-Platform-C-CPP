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
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct GameFeatureEvent GameFeatureEvent;
struct GameFeatureEvent {
    AllBinaryEventObject base;
    const char* whatChanged;
};


GameFeatureEvent* GameFeatureEvent_new(Any* anyType, const char* whatChanged);

void GameFeatureEvent_init(GameFeatureEvent* this, Any* anyType, const char* whatChanged);
const char* GameFeatureEvent_getWhatChanged(GameFeatureEvent* this);
Any* GameFeatureEvent_getGameOption(GameFeatureEvent* this);

static void GameFeatureEvent_initFields(GameFeatureEvent* this) {
    
}


void GameFeatureEvent_init(GameFeatureEvent* this, Any* anyType, const char* whatChanged) {
        AllBinaryEventObject_init(&this->base, anyType);
        GameFeatureEvent_initFields(this);
        this->whatChanged = whatChanged;
}

GameFeatureEvent* GameFeatureEvent_new(Any* anyType, const char* whatChanged) {
    GameFeatureEvent* this = calloc(1, sizeof(GameFeatureEvent));
    GameFeatureEvent_init(this, anyType, whatChanged);
    return this;
}


const char* GameFeatureEvent_getWhatChanged(GameFeatureEvent* this) {
        return this->whatChanged;
}


Any* GameFeatureEvent_getGameOption(GameFeatureEvent* this) {
        return GameFeatureEvent_getSource(this);
}

