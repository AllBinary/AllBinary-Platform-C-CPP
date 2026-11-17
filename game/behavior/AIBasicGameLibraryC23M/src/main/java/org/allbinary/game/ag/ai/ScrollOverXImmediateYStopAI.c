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
// package org.allbinary.game.ag.ai

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/ai/BasicAI.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"

typedef struct ScrollOverXImmediateYStopAI ScrollOverXImmediateYStopAI;
struct ScrollOverXImmediateYStopAI {
    BasicAI base;
};


ScrollOverXImmediateYStopAI* ScrollOverXImmediateYStopAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void ScrollOverXImmediateYStopAI_init(ScrollOverXImmediateYStopAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);
void ScrollOverXImmediateYStopAI_processAI(ScrollOverXImmediateYStopAI* this, AllBinaryLayerManager* allBinaryLayerManager);


void ScrollOverXImmediateYStopAI_init(ScrollOverXImmediateYStopAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
}

ScrollOverXImmediateYStopAI* ScrollOverXImmediateYStopAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    ScrollOverXImmediateYStopAI* this = calloc(1, sizeof(ScrollOverXImmediateYStopAI));
    ScrollOverXImmediateYStopAI_init(this, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void ScrollOverXImmediateYStopAI_processAI(ScrollOverXImmediateYStopAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        AllBinaryLayer* ownerLayerInterface = ScrollOverXImmediateYStopAI_getOwnerLayerInterface(this);
        int32_t x = AllBinaryLayer_getXP(ownerLayerInterface);
        int32_t y = AllBinaryLayer_getYP(ownerLayerInterface);
        int32_t x2 = AllBinaryLayer_getX2(ownerLayerInterface);
        int32_t y2 = AllBinaryLayer_getY2(ownerLayerInterface);
        int32_t width = AllBinaryLayer_getWidth(ownerLayerInterface);
        int32_t height = AllBinaryLayer_getHeight(ownerLayerInterface);
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        if (x2 > DisplayInfoSingleton_getLastWidth(displayInfo)) {
            AllBinaryLayer_setPosition(ownerLayerInterface, 0, y, AllBinaryLayer_getZP(ownerLayerInterface));
        }
        if (y2 > DisplayInfoSingleton_getLastHeight(displayInfo)) {
            AllBinaryLayer_setPosition(ownerLayerInterface, x, DisplayInfoSingleton_getLastHeight(displayInfo) - height, AllBinaryLayer_getZP(ownerLayerInterface));
        }
        if (x < 0) {
            AllBinaryLayer_setPosition(ownerLayerInterface, DisplayInfoSingleton_getLastWidth(displayInfo) - width, y, AllBinaryLayer_getZP(ownerLayerInterface));
        }
        if (y < 0) {
            AllBinaryLayer_setPosition(ownerLayerInterface, x, 0, AllBinaryLayer_getZP(ownerLayerInterface));
        }
}

