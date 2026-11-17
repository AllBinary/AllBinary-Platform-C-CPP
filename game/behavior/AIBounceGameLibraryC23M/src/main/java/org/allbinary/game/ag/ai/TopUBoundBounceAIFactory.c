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
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/bounds/TopULayerBounds.h"
#include "org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/physics/velocity/VelocityInterface.h"
#include "org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct TopUBoundBounceAIFactory TopUBoundBounceAIFactory;
struct TopUBoundBounceAIFactory {
    ArtificialIntelligenceInterfaceFactoryInterface ArtificialIntelligenceInterfaceFactoryInterface_interface;
};


TopUBoundBounceAIFactory* TopUBoundBounceAIFactory_new(void);
ArtificialIntelligenceInterface* TopUBoundBounceAIFactory_getInstance(TopUBoundBounceAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void TopUBoundBounceAIFactory_init(TopUBoundBounceAIFactory* this) {
}

TopUBoundBounceAIFactory* TopUBoundBounceAIFactory_new(void) {
    TopUBoundBounceAIFactory* this = calloc(1, sizeof(TopUBoundBounceAIFactory));
    TopUBoundBounceAIFactory_init(this);
    return this;
}


// throws Exception
ArtificialIntelligenceInterface* TopUBoundBounceAIFactory_getInstance(TopUBoundBounceAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        VelocityInterfaceCompositeInterface* velocityInterfaceCompositeInterface = ((VelocityInterfaceCompositeInterface*) ownerLayerInterface);
        VelocityInterface* velocityInterface = ((VelocityInterface*) VelocityInterfaceCompositeInterface_getVelocityProperties(velocityInterfaceCompositeInterface));
        int32_t maxDistancePerTick = (VelocityInterface_getMaxForwardVelocity(velocityInterface) >> JAVA_CALL(VelocityInterface_getVelocityXBasicDecimalP(velocityInterface), getScaledFactor));
        int32_t halfWidth = AllBinaryLayer_getWidth(ownerLayerInterface) * 2 + maxDistancePerTick + 1;
        int32_t halfHeight = AllBinaryLayer_getHeight(ownerLayerInterface) * 2 + maxDistancePerTick + 1;
        GPoint* point = PointFactory_createXY(PointFactory_getInstance(), halfWidth, halfHeight + 60);
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        Rectangle* rectangle = Rectangle_new(point, (DisplayInfoSingleton_getLastWidth(displayInfo) - halfWidth - GPoint_getX(point)), (DisplayInfoSingleton_getLastHeight(displayInfo) - halfHeight - GPoint_getY(point)));
        return BoundBounceAI_new(ownerLayerInterface, gameInput, TopULayerBounds_new(rectangle), ReverseVelocityBoundsVisitor_new(ownerLayerInterface));
}

