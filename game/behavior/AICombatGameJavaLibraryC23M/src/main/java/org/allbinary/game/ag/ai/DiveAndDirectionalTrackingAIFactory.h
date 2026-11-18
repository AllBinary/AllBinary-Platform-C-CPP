#ifndef ORG_ALLBINARY_GAME_AG_AI_DIVEANDDIRECTIONALTRACKINGAIFACTORY_H
#define ORG_ALLBINARY_GAME_AG_AI_DIVEANDDIRECTIONALTRACKINGAIFACTORY_H
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
typedef struct ThrustAIVisitorFactory ThrustAIVisitorFactory;
typedef struct BasicProbabilityAIDataFactory BasicProbabilityAIDataFactory;
typedef struct LastKeyAIVisitorFactory LastKeyAIVisitorFactory;
typedef struct DiveAndDirectionalTrackingAI DiveAndDirectionalTrackingAI;
typedef struct ArtificialIntelligenceInterface ArtificialIntelligenceInterface;
typedef struct BasicRandomAIFactory BasicRandomAIFactory;
typedef struct ArtificialIntelligenceInterfaceFactoryInterface ArtificialIntelligenceInterfaceFactoryInterface;
typedef struct BasicAI BasicAI;
typedef struct GameInput GameInput;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct Visitor Visitor;
typedef struct ABHashtable ABHashtable;
#include "org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h"

typedef struct DiveAndDirectionalTrackingAIFactory DiveAndDirectionalTrackingAIFactory;
struct DiveAndDirectionalTrackingAIFactory {
    ArtificialIntelligenceInterfaceFactoryInterface ArtificialIntelligenceInterfaceFactoryInterface_interface;
};


DiveAndDirectionalTrackingAIFactory* DiveAndDirectionalTrackingAIFactory_new(void);
void DiveAndDirectionalTrackingAIFactory_init(DiveAndDirectionalTrackingAIFactory* this);

ArtificialIntelligenceInterface* DiveAndDirectionalTrackingAIFactory_getInstance(DiveAndDirectionalTrackingAIFactory* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DiveAndDirectionalTrackingAIFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DiveAndDirectionalTrackingAIFactory_register(void);

#if __has_include("org/allbinary/ai/ArtificialIntelligenceInterface.h")
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#endif

#endif // ORG_ALLBINARY_GAME_AG_AI_DIVEANDDIRECTIONALTRACKINGAIFACTORY_H
