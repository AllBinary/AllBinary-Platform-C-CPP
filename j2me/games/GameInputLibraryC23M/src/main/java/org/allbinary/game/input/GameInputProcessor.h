#ifndef ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSOR_H
#define ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSOR_H
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
typedef struct GameKeyEvent GameKeyEvent;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
#include "java/lang/Integer.h"

typedef struct GameInputProcessor GameInputProcessor;
struct GameInputProcessor {
    char unused;
};


GameInputProcessor* GameInputProcessor_new(void);

GameInputProcessor* GameInputProcessor_getInstance(void);

void GameInputProcessor_init(GameInputProcessor* this);

void GameInputProcessor_processEvent(GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);

void GameInputProcessor_processReleasedEvent(GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent);

void GameInputProcessor_processAnalog(GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, GameKeyEvent* gameKeyEvent, int32_t analogValue);

void GameInputProcessor_process(GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, int32_t keyAsInteger);

void GameInputProcessor_processReleased(GameInputProcessor* this, AllBinaryLayerManager* allbinaryLayerManager, int32_t keyAsInteger);
#define GameInputProcessor_new0 GameInputProcessor_new
#define GameInputProcessor_init0 GameInputProcessor_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameInputProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSOR_H
