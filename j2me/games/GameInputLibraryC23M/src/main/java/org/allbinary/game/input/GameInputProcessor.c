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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"

typedef struct GameInputProcessor GameInputProcessor;
struct GameInputProcessor {
    char unused;
};

static GameInputProcessor* GameInputProcessor_instance;

GameInputProcessor* GameInputProcessor_new(void);
GameInputProcessor* GameInputProcessor_getInstance(void);

void GameInputProcessor_init(GameInputProcessor* this);
void GameInputProcessor_processEvent(GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);
void GameInputProcessor_processReleasedEvent(GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);
void GameInputProcessor_processAnalog(GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent, int32_t analogValue);
void GameInputProcessor_process(GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, int32_t keyAsInteger);
void GameInputProcessor_processReleased(GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, int32_t keyAsInteger);

// Static fields with runtime initializers: call this once at startup
void GameInputProcessor_staticInit(void) {
    GameInputProcessor_instance = GameInputProcessor_new();
}


GameInputProcessor* GameInputProcessor_getInstance(void) {
        return GameInputProcessor_instance;
}


void GameInputProcessor_init(GameInputProcessor* this) {
}

GameInputProcessor* GameInputProcessor_new(void) {
    GameInputProcessor* this = calloc(1, sizeof(GameInputProcessor));
    GameInputProcessor_init(this);
    return this;
}


// throws Exception
void GameInputProcessor_processEvent(GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
}


// throws Exception
void GameInputProcessor_processReleasedEvent(GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent) {
}


// throws Exception
void GameInputProcessor_processAnalog(GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent, int32_t analogValue) {
}


// throws Exception
void GameInputProcessor_process(GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, int32_t keyAsInteger) {
}


// throws Exception
void GameInputProcessor_processReleased(GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, int32_t keyAsInteger) {
}

