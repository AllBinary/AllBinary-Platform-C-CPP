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

typedef struct LurchAI LurchAI;
struct LurchAI {
    BasicAI base;
    int32_t currentRelativeAngle;
    int32_t currentSpeed;
};


LurchAI* LurchAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void LurchAI_init(LurchAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);
void LurchAI_processAI(LurchAI* this, AllBinaryLayerManager* allBinaryLayerManager);
void LurchAI_reverse(LurchAI* this);
static void LurchAI_accelerate(LurchAI* this);
static void LurchAI_drop(LurchAI* this);

static void LurchAI_initFields(LurchAI* this) {
    this->currentRelativeAngle = 0;
    this->currentSpeed = 0;
}


void LurchAI_init(LurchAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        LurchAI_initFields(this);
}

LurchAI* LurchAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    LurchAI* this = calloc(1, sizeof(LurchAI));
    LurchAI_init(this, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void LurchAI_processAI(LurchAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        if (this->currentSpeed == -1) {
            this->currentSpeed = 5;
        } else {
            this->currentSpeed = -1;
        }
        AllBinaryLayer* ownerLayerInterface = LurchAI_getOwnerLayerInterface(this);
        int32_t x = AllBinaryLayer_getXP(ownerLayerInterface);
        if (AllBinaryLayer_getXP(ownerLayerInterface) - this->currentSpeed <= 0) {
            LurchAI_reverse(this);
            LurchAI_drop(this);
        }
        if (AllBinaryLayer_getX2(ownerLayerInterface) + this->currentSpeed > DisplayInfoSingleton_getLastWidth(DisplayInfoSingleton_getInstance())) {
            LurchAI_reverse(this);
            LurchAI_accelerate(this);
            LurchAI_drop(this);
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


void LurchAI_reverse(LurchAI* this) {
        if (this->currentRelativeAngle == 180) {
            this->currentRelativeAngle = 0;
        } else if (this->currentRelativeAngle == 0) {
            this->currentRelativeAngle = 180;
        }
}


static void LurchAI_accelerate(LurchAI* this) {
        if (this->currentSpeed < 20) {
            this->currentSpeed++;
        }
}


static void LurchAI_drop(LurchAI* this) {
        AllBinaryLayer* ownerLayerInterface = LurchAI_getOwnerLayerInterface(this);
        int32_t y = AllBinaryLayer_getYP(ownerLayerInterface);
        if (AllBinaryLayer_getY2(ownerLayerInterface) + AllBinaryLayer_getHeight(ownerLayerInterface) > DisplayInfoSingleton_getLastHeight(DisplayInfoSingleton_getInstance())) {
            y = 0;
        } else {
            y += AllBinaryLayer_getHeight(ownerLayerInterface) + 1;
        }
        AllBinaryLayer_setPosition(ownerLayerInterface, AllBinaryLayer_getXP(ownerLayerInterface), y, AllBinaryLayer_getZP(ownerLayerInterface));
}

