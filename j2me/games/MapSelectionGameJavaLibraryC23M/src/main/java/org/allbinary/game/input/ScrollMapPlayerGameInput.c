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
// #include "javax/microedition/lcdui/Canvas.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/layer/event/ScrollMapEvent.h"
#include "org/allbinary/layer/event/ScrollMapEventHandler.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/input/PlayerGameInput.h"

typedef struct ScrollMapPlayerGameInput ScrollMapPlayerGameInput;
struct ScrollMapPlayerGameInput {
    PlayerGameInput base;
    GameInputProcessor** inputProcessorArray;
    int32_t border;
    BasicArrayList* inputList;
    bool isSingleKeyProcessing;
    BasicGeographicMap* geographicMapInterface;
    int32_t maxBottom;
    int32_t maxRight;
    ScrollMapEvent* scrollMapEvent;
};


ScrollMapPlayerGameInput* ScrollMapPlayerGameInput_new(BasicGeographicMap* geographicMapInterface, BasicArrayList* list, int32_t playerInputId);

void ScrollMapPlayerGameInput_init(ScrollMapPlayerGameInput* this, BasicGeographicMap* geographicMapInterface, BasicArrayList* list, int32_t playerInputId);
static void ScrollMapPlayerGameInput_move(ScrollMapPlayerGameInput* this, int32_t dx, int32_t dy);
void ScrollMapPlayerGameInput_init(ScrollMapPlayerGameInput* this);
void ScrollMapPlayerGameInput_scrollMiddleX(ScrollMapPlayerGameInput* this);
void ScrollMapPlayerGameInput_scrollY(ScrollMapPlayerGameInput* this, int32_t anchor);
void ScrollMapPlayerGameInput_up(ScrollMapPlayerGameInput* this);
void ScrollMapPlayerGameInput_down(ScrollMapPlayerGameInput* this);
void ScrollMapPlayerGameInput_right(ScrollMapPlayerGameInput* this);
void ScrollMapPlayerGameInput_left(ScrollMapPlayerGameInput* this);
void ScrollMapPlayerGameInput_initInputProcessors(ScrollMapPlayerGameInput* this);
void ScrollMapPlayerGameInput_processInputKey(ScrollMapPlayerGameInput* this, int32_t key);
void ScrollMapPlayerGameInput_processInput(ScrollMapPlayerGameInput* this, AllBinaryLayerManager* layerManager);
static int32_t ScrollMapPlayerGameInput_getSpecialHeight(ScrollMapPlayerGameInput* this);
static int32_t ScrollMapPlayerGameInput_getSpecialWidth(ScrollMapPlayerGameInput* this);
bool ScrollMapPlayerGameInput_keepOnMapMaxY(ScrollMapPlayerGameInput* this, int32_t newY);
bool ScrollMapPlayerGameInput_keepOnMapMinY(ScrollMapPlayerGameInput* this, int32_t newY);
bool ScrollMapPlayerGameInput_keepOnMapMaxX(ScrollMapPlayerGameInput* this, int32_t newX);
bool ScrollMapPlayerGameInput_keepOnMapMinX(ScrollMapPlayerGameInput* this, int32_t newX);

static void ScrollMapPlayerGameInput_initFields(ScrollMapPlayerGameInput* this) {
    this->inputProcessorArray = ((GameInputProcessor**) java_array_new(sizeof(GameInputProcessor*), InputFactory_getInstance()->MAX));
    this->border = 150;
    
    this->isSingleKeyProcessing = Features_isFeature(Features_getInstance(), InputFeatureFactory_getInstance()->SINGLE_KEY_REPEAT_PRESS) || Features_isFeature(Features_getInstance(), InputFeatureFactory_getInstance()->SINGLE_KEY_PRESS);
    
    this->maxBottom = 0;
    this->maxRight = 0;
    this->scrollMapEvent = ScrollMapEvent_new(this);
}


void ScrollMapPlayerGameInput_init(ScrollMapPlayerGameInput* this, BasicGeographicMap* geographicMapInterface, BasicArrayList* list, int32_t playerInputId) {
        PlayerGameInput_init(&this->base, list, BasicArrayListD_new(), playerInputId);
        ScrollMapPlayerGameInput_initFields(this);
        ScrollMapPlayerGameInput_initInputProcessors(this);
        this->geographicMapInterface = geographicMapInterface;
        this->inputList = list;
        ScrollMapPlayerGameInput_init(this);
}

ScrollMapPlayerGameInput* ScrollMapPlayerGameInput_new(BasicGeographicMap* geographicMapInterface, BasicArrayList* list, int32_t playerInputId) {
    ScrollMapPlayerGameInput* this = calloc(1, sizeof(ScrollMapPlayerGameInput));
    ScrollMapPlayerGameInput_init(this, geographicMapInterface, list, playerInputId);
    return this;
}


// throws Exception
static void ScrollMapPlayerGameInput_move(ScrollMapPlayerGameInput* this, int32_t dx, int32_t dy) {
        AllBinaryTiledLayer* terrainTiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(this->geographicMapInterface);
        AllBinaryTiledLayer_moveDXY(terrainTiledLayer, -dx, -dy);
        ScrollMapEvent_setDxDy(this->scrollMapEvent, -dx, -dy);
        ScrollMapEventHandler_fireEvent(ScrollMapEventHandler_getInstance(), this->scrollMapEvent);
}


void ScrollMapPlayerGameInput_init(ScrollMapPlayerGameInput* this) {
        this->maxBottom = ScrollMapPlayerGameInput_getSpecialHeight(this);
        this->maxRight = ScrollMapPlayerGameInput_getSpecialWidth(this);
}


// throws Exception
void ScrollMapPlayerGameInput_scrollMiddleX(ScrollMapPlayerGameInput* this) {
        AllBinaryTiledLayer* terrainTiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(this->geographicMapInterface);
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        ScrollMapPlayerGameInput_move(this, -AllBinaryTiledLayer_getXP(terrainTiledLayer), 0);
        if (AllBinaryTiledLayer_getWidth(terrainTiledLayer) < DisplayInfoSingleton_getLastWidth(displayInfo)) {
            int32_t diffX = ((DisplayInfoSingleton_getLastWidth(displayInfo) - AllBinaryTiledLayer_getWidth(terrainTiledLayer)) >> 1);
            ScrollMapPlayerGameInput_move(this, -diffX, 0);
        } else {
            int32_t diffX = ((AllBinaryTiledLayer_getWidth(terrainTiledLayer) - DisplayInfoSingleton_getLastWidth(displayInfo)) >> 1);
            ScrollMapPlayerGameInput_move(this, diffX, 0);
        }
}


// throws Exception
void ScrollMapPlayerGameInput_scrollY(ScrollMapPlayerGameInput* this, int32_t anchor) {
        AllBinaryTiledLayer* terrainTiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(this->geographicMapInterface);
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        if (anchor == Graphics_TOP) {
            JAVA_CALL(this->logUtil, putF, "Top", this, "scrollY");
        } else if (anchor == Graphics_BOTTOM) {
            JAVA_CALL(this->logUtil, putF, "Bottom", this, "scrollY");
            int32_t diffY = (AllBinaryTiledLayer_getHeight(terrainTiledLayer) - DisplayInfoSingleton_getLastHeight(displayInfo));
            ScrollMapPlayerGameInput_move(this, 0, diffY);
        } else if (anchor == Graphics_VCENTER) {
            JAVA_CALL(this->logUtil, putF, "Center", this, "scrollY");
            int32_t diffY = (AllBinaryTiledLayer_getHeight(terrainTiledLayer) - DisplayInfoSingleton_getLastHeight(displayInfo)) / 2;
            ScrollMapPlayerGameInput_move(this, 0, diffY);
        } else {
            java_throw(java_exception_new("Exception", "No Such Anchor Supported"));
        }
}


// throws Exception
void ScrollMapPlayerGameInput_up(ScrollMapPlayerGameInput* this) {
        int32_t y = JAVA_CALL(BasicGeographicMap_getAllBinaryTiledLayer(this->geographicMapInterface), getYP) - 10;
        if (ScrollMapPlayerGameInput_keepOnMapMinY(this, y)) {
            ScrollMapPlayerGameInput_move(this, 0, -10);
        }
}


// throws Exception
void ScrollMapPlayerGameInput_down(ScrollMapPlayerGameInput* this) {
        int32_t y = -JAVA_CALL(BasicGeographicMap_getAllBinaryTiledLayer(this->geographicMapInterface), getYP) + 10;
        if (ScrollMapPlayerGameInput_keepOnMapMaxY(this, y)) {
            ScrollMapPlayerGameInput_move(this, 0, 10);
        }
}


// throws Exception
void ScrollMapPlayerGameInput_right(ScrollMapPlayerGameInput* this) {
        int32_t x = JAVA_CALL(BasicGeographicMap_getAllBinaryTiledLayer(this->geographicMapInterface), getYP) + 10;
        if (ScrollMapPlayerGameInput_keepOnMapMinX(this, x)) {
            ScrollMapPlayerGameInput_move(this, 10, 0);
        }
}


// throws Exception
void ScrollMapPlayerGameInput_left(ScrollMapPlayerGameInput* this) {
        int32_t x = -JAVA_CALL(BasicGeographicMap_getAllBinaryTiledLayer(this->geographicMapInterface), getYP) - 10;
        if (ScrollMapPlayerGameInput_keepOnMapMaxX(this, x)) {
            ScrollMapPlayerGameInput_move(this, -10, 0);
        }
}


void ScrollMapPlayerGameInput_initInputProcessors(ScrollMapPlayerGameInput* this) {
        this->inputProcessorArray[Canvas_UP] = ScrollMapUpGameInputProcessor_new(this);
        this->inputProcessorArray[Canvas_DOWN] = ScrollMapDownGameInputProcessor_new(this);
        this->inputProcessorArray[Canvas_KEY_NUM9] = ScrollMapRightGameInputProcessor_new(this);
        this->inputProcessorArray[Canvas_KEY_NUM7] = ScrollMapLeftGameInputProcessor_new(this);
        GameInputProcessorUtil_init(this->inputProcessorArray);
}


// throws Exception
void ScrollMapPlayerGameInput_processInputKey(ScrollMapPlayerGameInput* this, int32_t key) {
        JAVA_CALL(this->inputProcessorArray[key], processEvent, AllBinaryGameLayerManager_getNullInstance(), GameKeyEvent_NONE);
}


// throws Exception
void ScrollMapPlayerGameInput_processInput(ScrollMapPlayerGameInput* this, AllBinaryLayerManager* layerManager) {
        JAVA_TRY {
            int32_t size = BasicArrayList_size(this->inputList);
            int32_t key = 0;
            for (int32_t index = 0; index < size; index++) {
                GameKeyEvent* gameKeyEvent = ((GameKeyEvent*) BasicArrayList_get(this->inputList, index));
                key = GameKeyEvent_getKey(gameKeyEvent);
                ScrollMapPlayerGameInput_processInputKey(this, key);
            }
            if (this->isSingleKeyProcessing) {
                ScrollMapPlayerGameInput_clear(this);
            } else {
                ScrollMapPlayerGameInput_update(this);
            }
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->gameInputStrings->PROCESS_INPUT, e);
        } JAVA_END_TRY;
}


static int32_t ScrollMapPlayerGameInput_getSpecialHeight(ScrollMapPlayerGameInput* this) {
        AllBinaryTiledLayer* terrainTiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(this->geographicMapInterface);
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        if (AllBinaryTiledLayer_getHeight(terrainTiledLayer) > DisplayInfoSingleton_getLastHeight(displayInfo)) {
            return AllBinaryTiledLayer_getHeight(terrainTiledLayer) - DisplayInfoSingleton_getLastHeight(displayInfo);
        } else {
            return DisplayInfoSingleton_getLastHeight(displayInfo) - AllBinaryTiledLayer_getHeight(terrainTiledLayer) + AllBinaryTiledLayer_getCellHeight(terrainTiledLayer);
        }
}


static int32_t ScrollMapPlayerGameInput_getSpecialWidth(ScrollMapPlayerGameInput* this) {
        AllBinaryTiledLayer* terrainTiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(this->geographicMapInterface);
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        if (AllBinaryTiledLayer_getWidth(terrainTiledLayer) > DisplayInfoSingleton_getLastWidth(displayInfo)) {
            return AllBinaryTiledLayer_getWidth(terrainTiledLayer) - DisplayInfoSingleton_getLastWidth(displayInfo);
        } else {
            return DisplayInfoSingleton_getLastWidth(displayInfo) - AllBinaryTiledLayer_getWidth(terrainTiledLayer) + AllBinaryTiledLayer_getCellWidth(terrainTiledLayer);
        }
}


bool ScrollMapPlayerGameInput_keepOnMapMaxY(ScrollMapPlayerGameInput* this, int32_t newY) {
        int32_t y = JAVA_CALL(BasicGeographicMap_getAllBinaryTiledLayer(this->geographicMapInterface), getYP);
        if (y > this->maxBottom + this->border) {
            return false;
        } else {
            return true;
        }
}


bool ScrollMapPlayerGameInput_keepOnMapMinY(ScrollMapPlayerGameInput* this, int32_t newY) {
        int32_t y = JAVA_CALL(BasicGeographicMap_getAllBinaryTiledLayer(this->geographicMapInterface), getYP);
        if (y < -this->border) {
            return false;
        } else {
            return true;
        }
}


bool ScrollMapPlayerGameInput_keepOnMapMaxX(ScrollMapPlayerGameInput* this, int32_t newX) {
        int32_t x = JAVA_CALL(BasicGeographicMap_getAllBinaryTiledLayer(this->geographicMapInterface), getXP);
        if (x < -this->maxRight - this->border) {
            return false;
        } else {
            return true;
        }
}


bool ScrollMapPlayerGameInput_keepOnMapMinX(ScrollMapPlayerGameInput* this, int32_t newX) {
        int32_t x = JAVA_CALL(BasicGeographicMap_getAllBinaryTiledLayer(this->geographicMapInterface), getXP);
        if (x > this->border) {
            return false;
        } else {
            return true;
        }
}

