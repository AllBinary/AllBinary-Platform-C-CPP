#ifndef ORG_ALLBINARY_GAME_AG_AI_BOUNDBOUNCEAI_H
#define ORG_ALLBINARY_GAME_AG_AI_BOUNDBOUNCEAI_H
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
typedef struct Graphics Graphics;
typedef struct BoundsVisitorInterface BoundsVisitorInterface;
typedef struct LayerBounds LayerBounds;
typedef struct BasicAI BasicAI;
typedef struct GameInput GameInput;
typedef struct Rectangle Rectangle;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
#if __has_include("org/allbinary/bounds/BoundsVisitorInterface.h")
#include "org/allbinary/bounds/BoundsVisitorInterface.h"
#endif
#if __has_include("org/allbinary/bounds/LayerBounds.h")
#include "org/allbinary/bounds/LayerBounds.h"
#endif
#include "org/allbinary/game/ai/BasicAI.h"

typedef struct BoundBounceAI BoundBounceAI;
struct BoundBounceAI {
    BasicAI base;
    int32_t currentRelativeAngle;
    LayerBounds* layerBounds;
    BoundsVisitorInterface* boundsVisitorInterface;
};


BoundBounceAI* BoundBounceAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput, LayerBounds* layerBounds, BoundsVisitorInterface* boundsVisitorInterface);

void BoundBounceAI_init(BoundBounceAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput, LayerBounds* layerBounds, BoundsVisitorInterface* boundsVisitorInterface);

void BoundBounceAI_paint(BoundBounceAI* this, Graphics* graphics);

void BoundBounceAI_processAI(BoundBounceAI* this, AllBinaryLayerManager* allBinaryLayerManager);
#define BoundBounceAI_new4 BoundBounceAI_new
#define BoundBounceAI_init4 BoundBounceAI_init
#ifndef BoundBounceAI_processKeyAI
#define BoundBounceAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef BoundBounceAI_setLastKey
#define BoundBounceAI_setLastKey BasicAI_setLastKey
#endif
#ifndef BoundBounceAI_getLastKey
#define BoundBounceAI_getLastKey BasicAI_getLastKey
#endif
#ifndef BoundBounceAI_getOwnerLayerInterface
#define BoundBounceAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef BoundBounceAI_getGameInput
#define BoundBounceAI_getGameInput BasicAI_getGameInput
#endif
#ifndef BoundBounceAI_getName
#define BoundBounceAI_getName BasicAI_getName
#endif
#ifndef BoundBounceAI_toString
#define BoundBounceAI_toString BasicAI_toString
#endif
#ifndef BoundBounceAI_getSourceId
#define BoundBounceAI_getSourceId BasicAI_getSourceId
#endif
#ifndef BoundBounceAI_getInstance
#define BoundBounceAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef BoundBounceAI_getId
#define BoundBounceAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BoundBounceAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BoundBounceAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_BOUNDBOUNCEAI_H
