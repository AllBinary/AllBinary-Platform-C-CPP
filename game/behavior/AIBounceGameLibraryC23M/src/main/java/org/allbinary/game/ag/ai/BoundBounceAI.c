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
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/bounds/BoundsVisitorInterface.h"
#include "org/allbinary/bounds/LayerBounds.h"
#include "org/allbinary/game/ai/BasicAI.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"

typedef struct BoundBounceAI BoundBounceAI;
struct BoundBounceAI {
    BasicAI base;
    int32_t currentRelativeAngle;
    LayerBounds* layerBounds;
    BoundsVisitorInterface* boundsVisitorInterface;
};


BoundBounceAI* BoundBounceAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput, LayerBounds* layerBounds, BoundsVisitorInterface* boundsVisitorInterface);

void BoundBounceAI_init(BoundBounceAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput, LayerBounds* layerBounds, BoundsVisitorInterface* boundsVisitorInterface);
void BoundBounceAI_paint(BoundBounceAI* this, Graphics* graphics);
void BoundBounceAI_processAI(BoundBounceAI* this, AllBinaryLayerManager* allBinaryLayerManager);

static void BoundBounceAI_initFields(BoundBounceAI* this) {
    this->currentRelativeAngle = 0;
    
    
}


void BoundBounceAI_init(BoundBounceAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput, LayerBounds* layerBounds, BoundsVisitorInterface* boundsVisitorInterface) {
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        BoundBounceAI_initFields(this);
        this->layerBounds = layerBounds;
        this->boundsVisitorInterface = boundsVisitorInterface;
}

BoundBounceAI* BoundBounceAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput, LayerBounds* layerBounds, BoundsVisitorInterface* boundsVisitorInterface) {
    BoundBounceAI* this = calloc(1, sizeof(BoundBounceAI));
    BoundBounceAI_init(this, ownerLayerInterface, gameInput, layerBounds, boundsVisitorInterface);
    return this;
}


void BoundBounceAI_paint(BoundBounceAI* this, Graphics* graphics) {
        Rectangle* rectange = LayerBounds_getRectangleP(this->layerBounds);
        Graphics_drawRect(graphics, JAVA_CALL(Rectangle_getPoint(rectange), getX), JAVA_CALL(Rectangle_getPoint(rectange), getY), Rectangle_getWidth(rectange), Rectangle_getHeight(rectange));
}


// throws Exception
void BoundBounceAI_processAI(BoundBounceAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        LayerBounds_visit(this->layerBounds, this->boundsVisitorInterface);
}

