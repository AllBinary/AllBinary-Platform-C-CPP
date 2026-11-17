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
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/view/ViewPositionBase.h"

typedef struct GameLayerUtil GameLayerUtil;
struct GameLayerUtil {
    char unused;
};


GameLayerUtil* GameLayerUtil_new(void);

void GameLayerUtil_init(GameLayerUtil* this);
bool GameLayerUtil_isOnScreen(AllBinaryLayer* layer);
bool GameLayerUtil_isInside(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, int32_t rect2X1, int32_t rect2Y1, int32_t rect2X2, int32_t rect2Y2);


void GameLayerUtil_init(GameLayerUtil* this) {
}

GameLayerUtil* GameLayerUtil_new(void) {
    GameLayerUtil* this = calloc(1, sizeof(GameLayerUtil));
    GameLayerUtil_init(this);
    return this;
}


bool GameLayerUtil_isOnScreen(AllBinaryLayer* layer) {
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        ViewPositionBase* viewPosition = AllBinaryLayer_getViewPosition(layer);
        return GameLayerUtil_isInside(ViewPositionBase_getX(viewPosition), ViewPositionBase_getY(viewPosition), ViewPositionBase_getX2(viewPosition), ViewPositionBase_getY2(viewPosition), 0, 0, DisplayInfoSingleton_getLastWidth(displayInfo), DisplayInfoSingleton_getLastHeight(displayInfo));
}


bool GameLayerUtil_isInside(int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, int32_t rect2X1, int32_t rect2Y1, int32_t rect2X2, int32_t rect2Y2) {
        if (rectX1 > rect2X1 && rectX2 < rect2X2 && rectY1 > rect2Y1 && rectY2 < rect2Y2) {
            return true;
        } else {
            return false;
        }
}

