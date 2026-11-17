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
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/RotationAnimationInterface.h"
#include "org/allbinary/animation/RotationAnimationInterfaceCompositeInterface.h"
#include "org/allbinary/game/ag/ai/tactical/LurchAI.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/math/AngleIncrementInfo.h"

typedef struct LurchRotationAI LurchRotationAI;
struct LurchRotationAI {
    LurchAI base;
    IndexedAnimation* rotationAnimationInterface;
};


LurchRotationAI* LurchRotationAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void LurchRotationAI_init(LurchRotationAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);
void LurchRotationAI_reverse(LurchRotationAI* this);
static void LurchRotationAI_update(LurchRotationAI* this);

static void LurchRotationAI_initFields(LurchRotationAI* this) {
    
}


void LurchRotationAI_init(LurchRotationAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        LurchAI_init(&this->base, ownerLayerInterface, gameInput);
        LurchRotationAI_initFields(this);
        RotationAnimationInterfaceCompositeInterface* rotationAnimationInterfaceCompositeInterface = ((RotationAnimationInterfaceCompositeInterface*) LurchRotationAI_getOwnerLayerInterface(this));
        this->rotationAnimationInterface = RotationAnimationInterfaceCompositeInterface_getRotationAnimationInterface(rotationAnimationInterfaceCompositeInterface);
        LurchRotationAI_update(this);
}

LurchRotationAI* LurchRotationAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    LurchRotationAI* this = calloc(1, sizeof(LurchRotationAI));
    LurchRotationAI_init(this, ownerLayerInterface, gameInput);
    return this;
}


void LurchRotationAI_reverse(LurchRotationAI* this) {
        LurchAI_reverse((&this->base));
        LurchRotationAI_update(this);
}


static void LurchRotationAI_update(LurchRotationAI* this) {
        if (this->currentRelativeAngle == 0) {
            RotationAnimationInterface* rotationAnimationInterface = ((RotationAnimationInterface*) this->rotationAnimationInterface);
            AngleIncrementInfo* angleIncrementInfo = JAVA_CALL(IndexedAnimation_getAngleInfoP(rotationAnimationInterface), getAngleIncrementInfo);
            RotationAnimationInterfaceCompositeInterface* rotationAnimationInterfaceCompositeInterface = ((RotationAnimationInterfaceCompositeInterface*) LurchRotationAI_getOwnerLayerInterface(this));
            RotationAnimationInterfaceCompositeInterface_setFrame(rotationAnimationInterfaceCompositeInterface, JAVA_CALL(angleIncrementInfo->RIGHT_FRAME, intValue));
        } else if (this->currentRelativeAngle == 180) {
            RotationAnimationInterface* rotationAnimationInterface = ((RotationAnimationInterface*) this->rotationAnimationInterface);
            AngleIncrementInfo* angleIncrementInfo = JAVA_CALL(IndexedAnimation_getAngleInfoP(rotationAnimationInterface), getAngleIncrementInfo);
            RotationAnimationInterfaceCompositeInterface* rotationAnimationInterfaceCompositeInterface = ((RotationAnimationInterfaceCompositeInterface*) LurchRotationAI_getOwnerLayerInterface(this));
            RotationAnimationInterfaceCompositeInterface_setFrame(rotationAnimationInterfaceCompositeInterface, JAVA_CALL(angleIncrementInfo->LEFT_FRAME, intValue));
        }
}

