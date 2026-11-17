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
#include "org/allbinary/game/resource/ResourceLoadingLevel.h"
#include "org/allbinary/game/resource/ResourceLoadingLevelFactory.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct GameInitializedEvent GameInitializedEvent;
struct GameInitializedEvent {
    AllBinaryEventObject base;
    ResourceLoadingLevel* resourceLoadingLevel;
    int32_t level;
};


GameInitializedEvent* GameInitializedEvent_new(Any* anyType);

void GameInitializedEvent_init(GameInitializedEvent* this, Any* anyType);
void GameInitializedEvent_setLevel(GameInitializedEvent* this, int32_t level);
int32_t GameInitializedEvent_getLevel(GameInitializedEvent* this);
void GameInitializedEvent_setResourceLoadingLevel(GameInitializedEvent* this, ResourceLoadingLevel* resourceLoadingLevel);
ResourceLoadingLevel* GameInitializedEvent_getResourceLoadingLevel(GameInitializedEvent* this);

static void GameInitializedEvent_initFields(GameInitializedEvent* this) {
    this->resourceLoadingLevel = ResourceLoadingLevelFactory_getInstance()->LEVEL;
    this->level = 0;
}


void GameInitializedEvent_init(GameInitializedEvent* this, Any* anyType) {
        AllBinaryEventObject_init(&this->base, anyType);
        GameInitializedEvent_initFields(this);
}

GameInitializedEvent* GameInitializedEvent_new(Any* anyType) {
    GameInitializedEvent* this = calloc(1, sizeof(GameInitializedEvent));
    GameInitializedEvent_init(this, anyType);
    return this;
}


void GameInitializedEvent_setLevel(GameInitializedEvent* this, int32_t level) {
        this->level = level;
        this->resourceLoadingLevel = ResourceLoadingLevelFactory_getInstance()->LEVEL;
}


int32_t GameInitializedEvent_getLevel(GameInitializedEvent* this) {
        return this->level;
}


void GameInitializedEvent_setResourceLoadingLevel(GameInitializedEvent* this, ResourceLoadingLevel* resourceLoadingLevel) {
        this->resourceLoadingLevel = resourceLoadingLevel;
        this->level = ResourceLoadingLevel_getLevel(this->resourceLoadingLevel);
}


ResourceLoadingLevel* GameInitializedEvent_getResourceLoadingLevel(GameInitializedEvent* this) {
        return this->resourceLoadingLevel;
}

