#ifndef ORG_ALLBINARY_GAME_INPUT_GAMEINPUTLAYERPROCESSOR_H
#define ORG_ALLBINARY_GAME_INPUT_GAMEINPUTLAYERPROCESSOR_H
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
typedef struct GameInputLayerManager GameInputLayerManager;
typedef struct GameInputInterface GameInputInterface;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct LayerProcessor LayerProcessor;
#include "org/allbinary/layer/LayerProcessor.h"

typedef struct GameInputLayerProcessor GameInputLayerProcessor;
struct GameInputLayerProcessor {
    LayerProcessor base;
};


GameInputLayerProcessor* GameInputLayerProcessor_new(void);

void GameInputLayerProcessor_init(GameInputLayerProcessor* this);

void GameInputLayerProcessor_processAt(GameInputLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index);

bool GameInputLayerProcessor_isProcessorLayer(GameInputLayerProcessor* this, AllBinaryLayer* layerInterface);
#define GameInputLayerProcessor_new0 GameInputLayerProcessor_new
#define GameInputLayerProcessor_init0 GameInputLayerProcessor_init
#ifndef GameInputLayerProcessor_getLayerManager
#define GameInputLayerProcessor_getLayerManager LayerProcessor_getLayerManager
#endif
#ifndef GameInputLayerProcessor_process
#define GameInputLayerProcessor_process LayerProcessor_process
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameInputLayerProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameInputLayerProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_GAMEINPUTLAYERPROCESSOR_H
