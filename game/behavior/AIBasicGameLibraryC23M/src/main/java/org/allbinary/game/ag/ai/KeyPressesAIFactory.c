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
#include "org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h"
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct KeyPressesAIFactory KeyPressesAIFactory;
struct KeyPressesAIFactory {
    ArtificialIntelligenceInterfaceFactoryInterface ArtificialIntelligenceInterfaceFactoryInterface_interface;
};


KeyPressesAIFactory* KeyPressesAIFactory_new(void);
ArtificialIntelligenceInterface* KeyPressesAIFactory_getInstance(KeyPressesAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void KeyPressesAIFactory_init(KeyPressesAIFactory* this) {
}

KeyPressesAIFactory* KeyPressesAIFactory_new(void) {
    KeyPressesAIFactory* this = calloc(1, sizeof(KeyPressesAIFactory));
    KeyPressesAIFactory_init(this);
    return this;
}


// throws Exception
ArtificialIntelligenceInterface* KeyPressesAIFactory_getInstance(KeyPressesAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        bool isSingleKeyProcessing = InputFeatureFactory_isSingleKeyProcessing(InputFeatureFactory_getInstance());
        if (isSingleKeyProcessing) {
            return KeyPressesAI_new(hashtable, ownerLayerInterface, gameInput);
        } else {
            return MultiKeyPressesAI_new(hashtable, ownerLayerInterface, gameInput);
        }
}

