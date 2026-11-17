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

typedef struct ScrollOverAtHalfAI ScrollOverAtHalfAI;
struct ScrollOverAtHalfAI {
    BasicAI base;
};


ScrollOverAtHalfAI* ScrollOverAtHalfAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void ScrollOverAtHalfAI_init(ScrollOverAtHalfAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);
void ScrollOverAtHalfAI_processAI(ScrollOverAtHalfAI* this, AllBinaryLayerManager* allBinaryLayerManager);


void ScrollOverAtHalfAI_init(ScrollOverAtHalfAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
}

ScrollOverAtHalfAI* ScrollOverAtHalfAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    ScrollOverAtHalfAI* this = calloc(1, sizeof(ScrollOverAtHalfAI));
    ScrollOverAtHalfAI_init(this, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void ScrollOverAtHalfAI_processAI(ScrollOverAtHalfAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        AllBinaryLayer* ownerLayerInterface = ScrollOverAtHalfAI_getOwnerLayerInterface(this);
        int32_t x = AllBinaryLayer_getXP(ownerLayerInterface);
        int32_t y = AllBinaryLayer_getYP(ownerLayerInterface);
        int32_t halfWidth = AllBinaryLayer_getHalfWidth(ownerLayerInterface);
        int32_t halfHeight = AllBinaryLayer_getHalfHeight(ownerLayerInterface);
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        if (x > DisplayInfoSingleton_getLastWidth(displayInfo) - halfWidth) {
            AllBinaryLayer_setPosition(ownerLayerInterface, halfWidth + 1, y, AllBinaryLayer_getZP(ownerLayerInterface));
        }
        if (y > DisplayInfoSingleton_getLastHeight(displayInfo) - halfHeight) {
            AllBinaryLayer_setPosition(ownerLayerInterface, x, halfHeight + 1, AllBinaryLayer_getZP(ownerLayerInterface));
        }
        if (x < -halfWidth) {
            AllBinaryLayer_setPosition(ownerLayerInterface, DisplayInfoSingleton_getLastWidth(displayInfo) - halfWidth, y, AllBinaryLayer_getZP(ownerLayerInterface));
        }
        if (y < -halfHeight) {
            AllBinaryLayer_setPosition(ownerLayerInterface, x, DisplayInfoSingleton_getLastHeight(displayInfo) - halfHeight, AllBinaryLayer_getZP(ownerLayerInterface));
        }
}

