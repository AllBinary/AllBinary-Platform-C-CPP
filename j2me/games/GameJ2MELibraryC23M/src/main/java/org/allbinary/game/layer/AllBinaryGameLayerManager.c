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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/game/input/NullPlayerGameInputComposite.h"
#include "org/allbinary/game/input/PlayerGameInputCompositeInterface.h"
#include "org/allbinary/graphics/ItemColorFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/layer/LayerProcessor.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct AllBinaryGameLayerManager AllBinaryGameLayerManager;
struct AllBinaryGameLayerManager {
    AllBinaryLayerManager base;
    BasicColor* backgroundBasicColor;
    BasicColor* foregroundBasicColor;
    GameInfo* gameInfo;
    PlayerGameInputCompositeInterface* playerGameInputCompositeInterface;
};

static Any* AllBinaryGameLayerManager_NULL_ALLBINARY_LAYER_MANAGER;
int32_t AllBinaryGameLayerManager_ID;

AllBinaryGameLayerManager* AllBinaryGameLayerManager_new(BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor, GameInfo* gameInfo);
AllBinaryGameLayerManager* AllBinaryGameLayerManager_getNullInstance(void);

void AllBinaryGameLayerManager_init(AllBinaryGameLayerManager* this, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor, GameInfo* gameInfo);
AllBinaryLayerManager* AllBinaryGameLayerManager_getLayerManager(AllBinaryGameLayerManager* this);
void AllBinaryGameLayerManager_init(AllBinaryGameLayerManager* this);
BasicColor* AllBinaryGameLayerManager_getBackgroundBasicColor(AllBinaryGameLayerManager* this);
void AllBinaryGameLayerManager_setBackgroundBasicColor(AllBinaryGameLayerManager* this, BasicColor* backgroundBasicColor);
BasicColor* AllBinaryGameLayerManager_getForegroundBasicColor(AllBinaryGameLayerManager* this);
void AllBinaryGameLayerManager_setForegroundBasicColor(AllBinaryGameLayerManager* this, BasicColor* foregroundBasicColor);
GameInfo* AllBinaryGameLayerManager_getGameInfo(AllBinaryGameLayerManager* this);
void AllBinaryGameLayerManager_setGameInfo(AllBinaryGameLayerManager* this, GameInfo* gameInfo);
void AllBinaryGameLayerManager_setLayerProcessorList(AllBinaryGameLayerManager* this, BasicArrayList* list);
void AllBinaryGameLayerManager_setPlayerGameInputCompositeInterface(AllBinaryGameLayerManager* this, PlayerGameInputCompositeInterface* playerGameInputCompositeInterface);
PlayerGameInputCompositeInterface* AllBinaryGameLayerManager_getPlayerGameInputCompositeInterface(AllBinaryGameLayerManager* this);

// Static fields with runtime initializers: call this once at startup
void AllBinaryGameLayerManager_staticInit(void) {
    AllBinaryGameLayerManager_NULL_ALLBINARY_LAYER_MANAGER = NullUtil_getInstance()->NULL_OBJECT;
    AllBinaryGameLayerManager_ID = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 22);
}

static void AllBinaryGameLayerManager_initFields(AllBinaryGameLayerManager* this) {
    
    
    
    this->playerGameInputCompositeInterface = NullPlayerGameInputComposite_NULL_PLAYER_GAME_INPUT_COMPOSITE;
}


AllBinaryGameLayerManager* AllBinaryGameLayerManager_getNullInstance(void) {
        if (AllBinaryGameLayerManager_NULL_ALLBINARY_LAYER_MANAGER == NullUtil_getInstance()->NULL_OBJECT) {
            AllBinaryGameLayerManager_NULL_ALLBINARY_LAYER_MANAGER = AllBinaryGameLayerManager_new(BasicColorFactory_getInstance()->BLACK, BasicColorFactory_getInstance()->WHITE, GameInfo_NONE);
        }
        return ((AllBinaryGameLayerManager*) AllBinaryGameLayerManager_NULL_ALLBINARY_LAYER_MANAGER);
}


void AllBinaryGameLayerManager_init(AllBinaryGameLayerManager* this, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor, GameInfo* gameInfo) {
    AllBinaryLayerManager_init(&this->base);
    AllBinaryGameLayerManager_initFields(this);
        this->backgroundBasicColor = backgroundBasicColor;
        this->foregroundBasicColor = foregroundBasicColor;
        ItemColorFactory* itemColorFactory = ItemColorFactory_getInstance();
        itemColorFactory->INVERT_PAINT = BasicColor_intValue(this->backgroundBasicColor);
        itemColorFactory->PAINT = BasicColor_intValue(this->foregroundBasicColor);
        this->gameInfo = gameInfo;
}

AllBinaryGameLayerManager* AllBinaryGameLayerManager_new(BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor, GameInfo* gameInfo) {
    AllBinaryGameLayerManager* this = calloc(1, sizeof(AllBinaryGameLayerManager));
    AllBinaryGameLayerManager_init(this, backgroundBasicColor, foregroundBasicColor, gameInfo);
    return this;
}


AllBinaryLayerManager* AllBinaryGameLayerManager_getLayerManager(AllBinaryGameLayerManager* this) {
        return this;
}


void AllBinaryGameLayerManager_init(AllBinaryGameLayerManager* this) {
}


BasicColor* AllBinaryGameLayerManager_getBackgroundBasicColor(AllBinaryGameLayerManager* this) {
        return this->backgroundBasicColor;
}


void AllBinaryGameLayerManager_setBackgroundBasicColor(AllBinaryGameLayerManager* this, BasicColor* backgroundBasicColor) {
        this->backgroundBasicColor = backgroundBasicColor;
        ItemColorFactory_getInstance()->INVERT_PAINT = BasicColor_intValue(this->backgroundBasicColor);
}


BasicColor* AllBinaryGameLayerManager_getForegroundBasicColor(AllBinaryGameLayerManager* this) {
        return this->foregroundBasicColor;
}


void AllBinaryGameLayerManager_setForegroundBasicColor(AllBinaryGameLayerManager* this, BasicColor* foregroundBasicColor) {
        this->foregroundBasicColor = foregroundBasicColor;
        ItemColorFactory_getInstance()->PAINT = BasicColor_intValue(this->foregroundBasicColor);
}


GameInfo* AllBinaryGameLayerManager_getGameInfo(AllBinaryGameLayerManager* this) {
        return this->gameInfo;
}


void AllBinaryGameLayerManager_setGameInfo(AllBinaryGameLayerManager* this, GameInfo* gameInfo) {
        this->gameInfo = gameInfo;
}


void AllBinaryGameLayerManager_setLayerProcessorList(AllBinaryGameLayerManager* this, BasicArrayList* list) {
        LayerProcessor** layerProcessorInterfaceArray = ((LayerProcessor**) java_array_new(sizeof(LayerProcessor*), BasicArrayList_size(list)));
        int32_t size = java_array_length(layerProcessorInterfaceArray);
        for (int32_t index = 0; index < size; index++) {
            layerProcessorInterfaceArray[index] = ((LayerProcessor*) list->objectArray[index]);
        }
        AllBinaryGameLayerManager_setLayerProcessorArray(this, layerProcessorInterfaceArray);
}


void AllBinaryGameLayerManager_setPlayerGameInputCompositeInterface(AllBinaryGameLayerManager* this, PlayerGameInputCompositeInterface* playerGameInputCompositeInterface) {
        this->playerGameInputCompositeInterface = playerGameInputCompositeInterface;
}


PlayerGameInputCompositeInterface* AllBinaryGameLayerManager_getPlayerGameInputCompositeInterface(AllBinaryGameLayerManager* this) {
        return this->playerGameInputCompositeInterface;
}

