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
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/input/PlayerGameInput.h"
#include "org/allbinary/game/input/PlayerGameInputCompositeInterface.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/view/StaticViewPosition.h"
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"

typedef struct PlayerGameInputGameLayer PlayerGameInputGameLayer;
struct PlayerGameInputGameLayer {
    AllBinaryGameLayer base;
    PlayerGameInputCompositeInterface PlayerGameInputCompositeInterface_interface;
    PlayerGameInput* playerGameInput;
};


PlayerGameInputGameLayer* PlayerGameInputGameLayer_new(int32_t playerInputId);

void PlayerGameInputGameLayer_init(PlayerGameInputGameLayer* this, int32_t playerInputId);
PlayerGameInput* PlayerGameInputGameLayer_getPlayerGameInput(PlayerGameInputGameLayer* this);
void PlayerGameInputGameLayer_initInputProcessors(PlayerGameInputGameLayer* this);
void PlayerGameInputGameLayer_processInput(PlayerGameInputGameLayer* this, AllBinaryLayerManager* myManager);
void PlayerGameInputGameLayer_paint(PlayerGameInputGameLayer* this, Graphics* graphics);

static void PlayerGameInputGameLayer_initFields(PlayerGameInputGameLayer* this) {
    
}


void PlayerGameInputGameLayer_init(PlayerGameInputGameLayer* this, int32_t playerInputId) {
        AllBinaryGameLayer_init(&this->base, StringUtil_getInstance()->EMPTY_STRING, Rectangle_new(PointFactory_getInstance()->ZERO_ZERO, 0, 0), StaticViewPosition_new(0, 0, 0));
        PlayerGameInputGameLayer_initFields(this);
        this->playerGameInput = PlayerGameInput_new(PlayerGameInputGameLayer_getGameKeyEventList(this), BasicArrayListD_new(), playerInputId);
        CanvasStrings* canvasStrings = CanvasStrings_getInstance();
        JAVA_CALL(this->logUtil, putF, "Danger Danger Danger: Should Not Be Called Except For Testing Input", this, canvasStrings->PAINT);
}

PlayerGameInputGameLayer* PlayerGameInputGameLayer_new(int32_t playerInputId) {
    PlayerGameInputGameLayer* this = calloc(1, sizeof(PlayerGameInputGameLayer));
    PlayerGameInputGameLayer_init(this, playerInputId);
    return this;
}


PlayerGameInput* PlayerGameInputGameLayer_getPlayerGameInput(PlayerGameInputGameLayer* this) {
        return this->playerGameInput;
}


void PlayerGameInputGameLayer_initInputProcessors(PlayerGameInputGameLayer* this) {
}


// throws Exception
void PlayerGameInputGameLayer_processInput(PlayerGameInputGameLayer* this, AllBinaryLayerManager* myManager) {
}


void PlayerGameInputGameLayer_paint(PlayerGameInputGameLayer* this, Graphics* graphics) {
}

