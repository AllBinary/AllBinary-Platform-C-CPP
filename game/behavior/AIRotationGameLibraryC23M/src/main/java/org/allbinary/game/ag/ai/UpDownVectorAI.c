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
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/math/BasicDecimal.h"

typedef struct UpDownVectorAI UpDownVectorAI;
struct UpDownVectorAI {
    BasicAI base;
    BasicVelocityProperties* velocityInterface;
    int32_t index;
};


UpDownVectorAI* UpDownVectorAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void UpDownVectorAI_init(UpDownVectorAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);
void UpDownVectorAI_processAI(UpDownVectorAI* this, AllBinaryLayerManager* allBinaryLayerManager);

static void UpDownVectorAI_initFields(UpDownVectorAI* this) {
    
    this->index = 0;
}


void UpDownVectorAI_init(UpDownVectorAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        UpDownVectorAI_initFields(this);
        VelocityInterfaceCompositeInterface* velocityInterfaceCompositeInterface = ((VelocityInterfaceCompositeInterface*) UpDownVectorAI_getOwnerLayerInterface(this));
        this->velocityInterface = VelocityInterfaceCompositeInterface_getVelocityProperties(velocityInterfaceCompositeInterface);
        JAVA_CALL(BasicVelocityProperties_getVelocityYBasicDecimalP(this->velocityInterface), setint, 0);
}

UpDownVectorAI* UpDownVectorAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    UpDownVectorAI* this = calloc(1, sizeof(UpDownVectorAI));
    UpDownVectorAI_init(this, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void UpDownVectorAI_processAI(UpDownVectorAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        int32_t y = JAVA_CALL(UpDownVectorAI_getOwnerLayerInterface(this), getHeight) * 270;
        if (this->index < 5) {
            BasicDecimal* basicDecimal = BasicVelocityProperties_getVelocityYBasicDecimalP(this->velocityInterface);
            BasicDecimal_setint(basicDecimal, 0);
            BasicDecimal_addint(basicDecimal, y);
            this->index++;
        } else if (this->index < 10) {
            BasicDecimal* basicDecimal = BasicVelocityProperties_getVelocityYBasicDecimalP(this->velocityInterface);
            BasicDecimal_setint(basicDecimal, 0);
            BasicDecimal_subtractint(basicDecimal, y);
            this->index++;
        } else {
            this->index = 0;
            UpDownVectorAI_processAI(this, allBinaryLayerManager);
        }
}

