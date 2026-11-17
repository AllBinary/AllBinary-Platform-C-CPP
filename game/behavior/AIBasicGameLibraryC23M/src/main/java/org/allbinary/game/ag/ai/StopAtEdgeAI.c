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
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#include "org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"

typedef struct StopAtEdgeAI StopAtEdgeAI;
struct StopAtEdgeAI {
    BasicAI base;
};


StopAtEdgeAI* StopAtEdgeAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void StopAtEdgeAI_init(StopAtEdgeAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);
void StopAtEdgeAI_processAI(StopAtEdgeAI* this, AllBinaryLayerManager* allBinaryLayerManager);


void StopAtEdgeAI_init(StopAtEdgeAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
}

StopAtEdgeAI* StopAtEdgeAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    StopAtEdgeAI* this = calloc(1, sizeof(StopAtEdgeAI));
    StopAtEdgeAI_init(this, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void StopAtEdgeAI_processAI(StopAtEdgeAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        AllBinaryLayer* ownerLayerInterface = StopAtEdgeAI_getOwnerLayerInterface(this);
        VelocityInterfaceCompositeInterface* velocityInterfaceCompositeInterface = (((VelocityInterfaceCompositeInterface*) ownerLayerInterface));
        BasicVelocityProperties* velocityProperties = VelocityInterfaceCompositeInterface_getVelocityProperties(velocityInterfaceCompositeInterface);
        int32_t x = AllBinaryLayer_getXP(ownerLayerInterface);
        int32_t y = AllBinaryLayer_getYP(ownerLayerInterface);
        int32_t x2 = AllBinaryLayer_getX2(ownerLayerInterface);
        int32_t y2 = AllBinaryLayer_getY2(ownerLayerInterface);
        int32_t width = AllBinaryLayer_getWidth(ownerLayerInterface);
        int32_t height = AllBinaryLayer_getHeight(ownerLayerInterface);
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        if (x2 + JAVA_CALL(BasicVelocityProperties_getVelocityXBasicDecimalP(velocityProperties), getScaled) > DisplayInfoSingleton_getLastWidth(displayInfo)) {
            AllBinaryLayer_setPosition(ownerLayerInterface, DisplayInfoSingleton_getLastWidth(displayInfo) - width, y, AllBinaryLayer_getZP(ownerLayerInterface));
            JAVA_CALL(BasicVelocityProperties_getVelocityYBasicDecimalP(velocityProperties), setint, 0);
        }
        if (y2 + JAVA_CALL(BasicVelocityProperties_getVelocityYBasicDecimalP(velocityProperties), getScaled) > DisplayInfoSingleton_getLastHeight(displayInfo)) {
            AllBinaryLayer_setPosition(ownerLayerInterface, x, DisplayInfoSingleton_getLastHeight(displayInfo) - height, AllBinaryLayer_getZP(ownerLayerInterface));
            JAVA_CALL(BasicVelocityProperties_getVelocityXBasicDecimalP(velocityProperties), setint, 0);
        }
        if (x + JAVA_CALL(BasicVelocityProperties_getVelocityXBasicDecimalP(velocityProperties), getScaled) < 0) {
            AllBinaryLayer_setPosition(ownerLayerInterface, 0, y, AllBinaryLayer_getZP(ownerLayerInterface));
            JAVA_CALL(BasicVelocityProperties_getVelocityYBasicDecimalP(velocityProperties), setint, 0);
        }
        if (y + JAVA_CALL(BasicVelocityProperties_getVelocityYBasicDecimalP(velocityProperties), getScaled) < 0) {
            AllBinaryLayer_setPosition(ownerLayerInterface, x, 0, AllBinaryLayer_getZP(ownerLayerInterface));
            JAVA_CALL(BasicVelocityProperties_getVelocityXBasicDecimalP(velocityProperties), setint, 0);
        }
}

