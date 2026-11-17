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
#include "org/allbinary/game/ai/BasicAI.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"

typedef struct SpinnerAI SpinnerAI;
struct SpinnerAI {
    BasicAI base;
    bool isEven;
    int32_t* direction;
};


SpinnerAI* SpinnerAI_new(int32_t* direction, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void SpinnerAI_init(SpinnerAI* this, int32_t* direction, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);
void SpinnerAI_processAI(SpinnerAI* this, AllBinaryLayerManager* allBinaryLayerManager);

static void SpinnerAI_initFields(SpinnerAI* this) {
    this->isEven = false;
    
}


void SpinnerAI_init(SpinnerAI* this, int32_t* direction, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        SpinnerAI_initFields(this);
        this->direction = direction;
}

SpinnerAI* SpinnerAI_new(int32_t* direction, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    SpinnerAI* this = calloc(1, sizeof(SpinnerAI));
    SpinnerAI_init(this, direction, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void SpinnerAI_processAI(SpinnerAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        if (this->isEven) {
            BasicAI_processKeyAI((&this->base), this->direction[0]);
            this->isEven = false;
        } else {
            BasicAI_processKeyAI((&this->base), Canvas_KEY_NUM1);
            this->isEven = true;
        }
}

