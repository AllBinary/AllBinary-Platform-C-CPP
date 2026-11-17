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
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct HorizontalRotationManeuverAIFactory HorizontalRotationManeuverAIFactory;
struct HorizontalRotationManeuverAIFactory {
    ArtificialIntelligenceInterfaceFactoryInterface ArtificialIntelligenceInterfaceFactoryInterface_interface;
};


HorizontalRotationManeuverAIFactory* HorizontalRotationManeuverAIFactory_new(void);
ArtificialIntelligenceInterface* HorizontalRotationManeuverAIFactory_getInstance(HorizontalRotationManeuverAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void HorizontalRotationManeuverAIFactory_init(HorizontalRotationManeuverAIFactory* this) {
}

HorizontalRotationManeuverAIFactory* HorizontalRotationManeuverAIFactory_new(void) {
    HorizontalRotationManeuverAIFactory* this = calloc(1, sizeof(HorizontalRotationManeuverAIFactory));
    HorizontalRotationManeuverAIFactory_init(this);
    return this;
}


ArtificialIntelligenceInterface* HorizontalRotationManeuverAIFactory_getInstance(HorizontalRotationManeuverAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
        return HorizontaRotationManeuverAI_new(ownerLayerInterface, gameInput);
}

