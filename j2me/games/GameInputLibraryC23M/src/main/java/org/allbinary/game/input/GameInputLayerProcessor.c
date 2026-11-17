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
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/layer/LayerProcessor.h"

typedef struct GameInputLayerProcessor GameInputLayerProcessor;
struct GameInputLayerProcessor {
    LayerProcessor base;
};


GameInputLayerProcessor* GameInputLayerProcessor_new(void);

void GameInputLayerProcessor_init(GameInputLayerProcessor* this);
void GameInputLayerProcessor_processAt(GameInputLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index);
bool GameInputLayerProcessor_isProcessorLayer(GameInputLayerProcessor* this, AllBinaryLayer* layerInterface);


void GameInputLayerProcessor_init(GameInputLayerProcessor* this) {
        LayerProcessor_init(&this->base, GameInputLayerManager_new());
}

GameInputLayerProcessor* GameInputLayerProcessor_new(void) {
    GameInputLayerProcessor* this = calloc(1, sizeof(GameInputLayerProcessor));
    GameInputLayerProcessor_init(this);
    return this;
}


// throws Exception
void GameInputLayerProcessor_processAt(GameInputLayerProcessor* this, AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index) {
        GameInputInterface* gameInputInterface = ((GameInputInterface*) layerInterface);
        GameInputInterface_processInput(gameInputInterface, allBinaryLayerManager);
}


bool GameInputLayerProcessor_isProcessorLayer(GameInputLayerProcessor* this, AllBinaryLayer* layerInterface) {
        if (AllBinaryLayer_implmentsGameInputInterface(layerInterface)) {
            return true;
        } else {
            return false;
        }
}

