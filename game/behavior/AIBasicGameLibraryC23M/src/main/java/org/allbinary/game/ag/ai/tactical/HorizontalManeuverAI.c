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
// package org.allbinary.game.ag.ai.tactical

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/ai/BasicAI.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"

typedef struct HorizontalManeuverAI HorizontalManeuverAI;
struct HorizontalManeuverAI {
    BasicAI base;
    int32_t currentRelativeAngle;
    int32_t currentSpeed;
};


HorizontalManeuverAI* HorizontalManeuverAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void HorizontalManeuverAI_init(HorizontalManeuverAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);
void HorizontalManeuverAI_processAI(HorizontalManeuverAI* this, AllBinaryLayerManager* allBinaryLayerManager);
void HorizontalManeuverAI_reverse(HorizontalManeuverAI* this);
static void HorizontalManeuverAI_accelerate(HorizontalManeuverAI* this);
static void HorizontalManeuverAI_drop(HorizontalManeuverAI* this);

static void HorizontalManeuverAI_initFields(HorizontalManeuverAI* this) {
    this->currentRelativeAngle = 0;
    
}


void HorizontalManeuverAI_init(HorizontalManeuverAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        HorizontalManeuverAI_initFields(this);
        this->currentSpeed = 5;
}

HorizontalManeuverAI* HorizontalManeuverAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    HorizontalManeuverAI* this = calloc(1, sizeof(HorizontalManeuverAI));
    HorizontalManeuverAI_init(this, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void HorizontalManeuverAI_processAI(HorizontalManeuverAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        AllBinaryLayer* ownerLayerInterface = HorizontalManeuverAI_getOwnerLayerInterface(this);
        int32_t x = AllBinaryLayer_getXP(ownerLayerInterface);
        if (AllBinaryLayer_getXP(ownerLayerInterface) - this->currentSpeed <= 0) {
            HorizontalManeuverAI_reverse(this);
            HorizontalManeuverAI_drop(this);
        }
        if (AllBinaryLayer_getX2(ownerLayerInterface) + this->currentSpeed > DisplayInfoSingleton_getLastWidth(DisplayInfoSingleton_getInstance())) {
            HorizontalManeuverAI_reverse(this);
            HorizontalManeuverAI_accelerate(this);
            HorizontalManeuverAI_drop(this);
        }
        if (this->currentRelativeAngle == 0) {
            x += this->currentSpeed;
        } else if (this->currentRelativeAngle == 180) {
            x -= this->currentSpeed;
        }
        AllBinaryLayer_setPosition(ownerLayerInterface, x, AllBinaryLayer_getYP(ownerLayerInterface), AllBinaryLayer_getZP(ownerLayerInterface));
        if (this->currentRelativeAngle == 0) {
            BasicAI_processKeyAI((&this->base), Canvas_KEY_NUM0);
        } else if (this->currentRelativeAngle == 180) {
            BasicAI_processKeyAI((&this->base), Canvas_KEY_POUND);
        }
}


void HorizontalManeuverAI_reverse(HorizontalManeuverAI* this) {
        if (this->currentRelativeAngle == 180) {
            this->currentRelativeAngle = 0;
        } else if (this->currentRelativeAngle == 0) {
            this->currentRelativeAngle = 180;
        }
}


static void HorizontalManeuverAI_accelerate(HorizontalManeuverAI* this) {
        if (this->currentSpeed < 20) {
            this->currentSpeed++;
        }
}


static void HorizontalManeuverAI_drop(HorizontalManeuverAI* this) {
        AllBinaryLayer* ownerLayerInterface = HorizontalManeuverAI_getOwnerLayerInterface(this);
        int32_t y = AllBinaryLayer_getYP(ownerLayerInterface);
        if (AllBinaryLayer_getY2(ownerLayerInterface) + AllBinaryLayer_getHeight(ownerLayerInterface) > DisplayInfoSingleton_getLastHeight(DisplayInfoSingleton_getInstance())) {
            y = 0;
        } else {
            y += AllBinaryLayer_getHeight(ownerLayerInterface) + 1;
        }
        AllBinaryLayer_setPosition(ownerLayerInterface, AllBinaryLayer_getXP(ownerLayerInterface), y, AllBinaryLayer_getZP(ownerLayerInterface));
}

