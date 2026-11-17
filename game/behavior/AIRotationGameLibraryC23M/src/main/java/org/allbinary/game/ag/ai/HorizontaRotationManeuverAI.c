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
// #include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/ai/ArtificialIntelligence.h"
#include "org/allbinary/ai/ArtificialIntelligenceTransitionInterface.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/RotationAnimationInterface.h"
#include "org/allbinary/animation/RotationAnimationInterfaceCompositeInterface.h"
#include "org/allbinary/game/ai/BasicAI.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#include "org/allbinary/game/physics/velocity/VelocityInterface.h"
#include "org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/math/AngleIncrementInfo.h"
#include "org/allbinary/util/CircularIndexUtil.h"

typedef struct HorizontaRotationManeuverAI HorizontaRotationManeuverAI;
struct HorizontaRotationManeuverAI {
    BasicAI base;
    ArtificialIntelligenceTransitionInterface ArtificialIntelligenceTransitionInterface_interface;
    CircularIndexUtil* circularIndexUtil;
    int32_t currentSpeedDivisor;
    IndexedAnimation* rotationAnimationInterface;
    BasicVelocityProperties* baseVelocityInterface;
    VelocityInterface* velocityInterface;
};


HorizontaRotationManeuverAI* HorizontaRotationManeuverAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void HorizontaRotationManeuverAI_init(HorizontaRotationManeuverAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);
void HorizontaRotationManeuverAI_transition(HorizontaRotationManeuverAI* this);
void HorizontaRotationManeuverAI_processAI(HorizontaRotationManeuverAI* this, AllBinaryLayerManager* allBinaryLayerManager);
void HorizontaRotationManeuverAI_reverse(HorizontaRotationManeuverAI* this);
static void HorizontaRotationManeuverAI_accelerate(HorizontaRotationManeuverAI* this);
static void HorizontaRotationManeuverAI_drop(HorizontaRotationManeuverAI* this);
int32_t HorizontaRotationManeuverAI_getId(HorizontaRotationManeuverAI* this);

static void HorizontaRotationManeuverAI_initFields(HorizontaRotationManeuverAI* this) {
    this->circularIndexUtil = CircularIndexUtil_createInstanceAt(10, Integer_MAX_VALUE);
    this->currentSpeedDivisor = 5;
    
    
    
}


void HorizontaRotationManeuverAI_init(HorizontaRotationManeuverAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        HorizontaRotationManeuverAI_initFields(this);
        RotationAnimationInterfaceCompositeInterface* rotationAnimationInterfaceCompositeInterface = ((RotationAnimationInterfaceCompositeInterface*) HorizontaRotationManeuverAI_getOwnerLayerInterface(this));
        this->rotationAnimationInterface = RotationAnimationInterfaceCompositeInterface_getRotationAnimationInterface(rotationAnimationInterfaceCompositeInterface);
        VelocityInterfaceCompositeInterface* velocityInterfaceCompositeInterface = ((VelocityInterfaceCompositeInterface*) HorizontaRotationManeuverAI_getOwnerLayerInterface(this));
        this->baseVelocityInterface = VelocityInterfaceCompositeInterface_getVelocityProperties(velocityInterfaceCompositeInterface);
        this->velocityInterface = ((VelocityInterface*) this->baseVelocityInterface);
        RotationAnimationInterface* rotationAnimationInterface = ((RotationAnimationInterface*) this->rotationAnimationInterface);
        AngleIncrementInfo* angleIncrementInfo = JAVA_CALL(IndexedAnimation_getAngleInfoP(rotationAnimationInterface), getAngleIncrementInfo);
        RotationAnimationInterfaceCompositeInterface_setFrame(rotationAnimationInterfaceCompositeInterface, JAVA_CALL(angleIncrementInfo->RIGHT_FRAME, intValue));
}

HorizontaRotationManeuverAI* HorizontaRotationManeuverAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    HorizontaRotationManeuverAI* this = calloc(1, sizeof(HorizontaRotationManeuverAI));
    HorizontaRotationManeuverAI_init(this, ownerLayerInterface, gameInput);
    return this;
}


void HorizontaRotationManeuverAI_transition(HorizontaRotationManeuverAI* this) {
        RotationAnimationInterface* rotationAnimationInterface = ((RotationAnimationInterface*) this->rotationAnimationInterface);
        AngleIncrementInfo* angleIncrementInfo = JAVA_CALL(IndexedAnimation_getAngleInfoP(rotationAnimationInterface), getAngleIncrementInfo);
        RotationAnimationInterfaceCompositeInterface* rotationAnimationInterfaceCompositeInterface = ((RotationAnimationInterfaceCompositeInterface*) HorizontaRotationManeuverAI_getOwnerLayerInterface(this));
        RotationAnimationInterfaceCompositeInterface_setFrame(rotationAnimationInterfaceCompositeInterface, JAVA_CALL(angleIncrementInfo->RIGHT_FRAME, intValue));
        AllBinaryLayer* allbinaryLayer = HorizontaRotationManeuverAI_getOwnerLayerInterface(this);
        AllBinaryLayer_setPosition(allbinaryLayer, AllBinaryLayer_getXP(allbinaryLayer), 1, AllBinaryLayer_getZP(allbinaryLayer));
}


// throws Exception
void HorizontaRotationManeuverAI_processAI(HorizontaRotationManeuverAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        RotationAnimationInterface* rotationAnimationInterface = (((RotationAnimationInterface*) this->rotationAnimationInterface));
        AngleIncrementInfo* angleIncrementInfo = JAVA_CALL(IndexedAnimation_getAngleInfoP(rotationAnimationInterface), getAngleIncrementInfo);
        int32_t frame = IndexedAnimation_getFrame(this->rotationAnimationInterface);
        AllBinaryLayer* ownerLayerInterface = HorizontaRotationManeuverAI_getOwnerLayerInterface(this);
        if (AllBinaryLayer_getXP(ownerLayerInterface) - AllBinaryLayer_getWidth(ownerLayerInterface) <= 0 && frame == JAVA_CALL(angleIncrementInfo->LEFT_FRAME, intValue)) {
            HorizontaRotationManeuverAI_reverse(this);
            HorizontaRotationManeuverAI_drop(this);
        }
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        if (AllBinaryLayer_getX2(ownerLayerInterface) + AllBinaryLayer_getWidth(ownerLayerInterface) > DisplayInfoSingleton_getLastWidth(displayInfo) && frame == JAVA_CALL(angleIncrementInfo->RIGHT_FRAME, intValue)) {
            HorizontaRotationManeuverAI_reverse(this);
            HorizontaRotationManeuverAI_accelerate(this);
            HorizontaRotationManeuverAI_drop(this);
        }
        int32_t index = CircularIndexUtil_getIndex(this->circularIndexUtil);
        if (index % this->currentSpeedDivisor == 0 && index % 2 == 0) {
            BasicAI_processKeyAI((&this->base), Canvas_UP);
            VelocityInterface_limitMaxXYVelocity(this->velocityInterface, VelocityInterface_getMaxForwardVelocity(this->velocityInterface) / this->currentSpeedDivisor);
        }
        CircularIndexUtil_next(this->circularIndexUtil);
        if (frame == JAVA_CALL(angleIncrementInfo->LEFT_FRAME, intValue)) {
            BasicAI_processKeyAI((&this->base), Canvas_KEY_NUM0);
        } else if (frame == JAVA_CALL(angleIncrementInfo->RIGHT_FRAME, intValue)) {
            BasicAI_processKeyAI((&this->base), Canvas_KEY_POUND);
        }
}


void HorizontaRotationManeuverAI_reverse(HorizontaRotationManeuverAI* this) {
        RotationAnimationInterface* rotationAnimationInterface = ((RotationAnimationInterface*) this->rotationAnimationInterface);
        AngleIncrementInfo* angleIncrementInfo = JAVA_CALL(IndexedAnimation_getAngleInfoP(rotationAnimationInterface), getAngleIncrementInfo);
        int32_t frame = IndexedAnimation_getFrame(this->rotationAnimationInterface);
        if (frame == JAVA_CALL(angleIncrementInfo->LEFT_FRAME, intValue)) {
            RotationAnimationInterfaceCompositeInterface* rotationAnimationInterfaceCompositeInterface = ((RotationAnimationInterfaceCompositeInterface*) HorizontaRotationManeuverAI_getOwnerLayerInterface(this));
            RotationAnimationInterfaceCompositeInterface_setFrame(rotationAnimationInterfaceCompositeInterface, JAVA_CALL(angleIncrementInfo->RIGHT_FRAME, intValue));
            BasicVelocityProperties_zero(this->baseVelocityInterface);
        } else if (frame == JAVA_CALL(angleIncrementInfo->RIGHT_FRAME, intValue)) {
            RotationAnimationInterfaceCompositeInterface* rotationAnimationInterfaceCompositeInterface = ((RotationAnimationInterfaceCompositeInterface*) HorizontaRotationManeuverAI_getOwnerLayerInterface(this));
            RotationAnimationInterfaceCompositeInterface_setFrame(rotationAnimationInterfaceCompositeInterface, JAVA_CALL(angleIncrementInfo->LEFT_FRAME, intValue));
            BasicVelocityProperties_zero(this->baseVelocityInterface);
        }
}


static void HorizontaRotationManeuverAI_accelerate(HorizontaRotationManeuverAI* this) {
        if (this->currentSpeedDivisor > 1) {
            this->currentSpeedDivisor--;
        }
}


static void HorizontaRotationManeuverAI_drop(HorizontaRotationManeuverAI* this) {
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        AllBinaryLayer* ownerLayerInterface = HorizontaRotationManeuverAI_getOwnerLayerInterface(this);
        int32_t y = AllBinaryLayer_getYP(ownerLayerInterface);
        if (AllBinaryLayer_getY2(ownerLayerInterface) + AllBinaryLayer_getHeight(ownerLayerInterface) > DisplayInfoSingleton_getLastHeight(displayInfo)) {
            y = 0;
        } else {
            y += AllBinaryLayer_getHeight(ownerLayerInterface) + 1;
        }
        AllBinaryLayer_setPosition(ownerLayerInterface, AllBinaryLayer_getXP(ownerLayerInterface), y, AllBinaryLayer_getZP(ownerLayerInterface));
}


int32_t HorizontaRotationManeuverAI_getId(HorizontaRotationManeuverAI* this) {
        return ArtificialIntelligence_AI_ID;
}

