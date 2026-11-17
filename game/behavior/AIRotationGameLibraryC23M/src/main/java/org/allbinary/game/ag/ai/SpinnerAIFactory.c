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
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct SpinnerAIFactory SpinnerAIFactory;
struct SpinnerAIFactory {
    ArtificialIntelligenceInterfaceFactoryInterface ArtificialIntelligenceInterfaceFactoryInterface_interface;
};


SpinnerAIFactory* SpinnerAIFactory_new(void);
ArtificialIntelligenceInterface* SpinnerAIFactory_getInstance(SpinnerAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void SpinnerAIFactory_init(SpinnerAIFactory* this) {
}

SpinnerAIFactory* SpinnerAIFactory_new(void) {
    SpinnerAIFactory* this = calloc(1, sizeof(SpinnerAIFactory));
    SpinnerAIFactory_init(this);
    return this;
}


ArtificialIntelligenceInterface* SpinnerAIFactory_getInstance(SpinnerAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        int32_t* direction = ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ Canvas_LEFT }) / sizeof(int32_t), (int32_t[]){ Canvas_LEFT }));
        return SpinnerAI_new(direction, ownerLayerInterface, gameInput);
}

