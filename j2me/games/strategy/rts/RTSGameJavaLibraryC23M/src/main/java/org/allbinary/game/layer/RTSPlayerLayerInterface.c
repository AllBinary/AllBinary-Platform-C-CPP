/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2003 AllBinary 
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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/ag/layer/hud/basic/notification/GameNotificationHudCompositeInterface.h"
#include "org/allbinary/game/input/BuildMenuCompositeInterface.h"
#include "org/allbinary/game/input/form/RTSFormInput.h"
#include "org/allbinary/game/layer/capital/Capital.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEventListenerInterface.h"
#include "org/allbinary/game/input/PlayerGameInputCompositeInterface.h"
#include "org/allbinary/game/tick/TickableInterface.h"
#include "org/allbinary/media/audio/Sound.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"

typedef struct RTSPlayerLayerInterface RTSPlayerLayerInterface;
struct RTSPlayerLayerInterface {
    Capital* (*getCapital)(void* this);
    RTSFormInput* (*getRTSFormInput)(void* this);
    void (*add)(void* this, Sound* sound);
    PlayerOwnedRTSLayers* (*getPlayerOwnedRTSLayers)(void* this);
    bool (*implmentsArtificialIntelligenceCompositeInterface)(void* this);
};


