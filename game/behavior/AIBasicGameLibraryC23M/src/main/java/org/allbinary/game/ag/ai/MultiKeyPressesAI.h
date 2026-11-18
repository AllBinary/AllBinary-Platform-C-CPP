#ifndef ORG_ALLBINARY_GAME_AG_AI_MULTIKEYPRESSESAI_H
#define ORG_ALLBINARY_GAME_AG_AI_MULTIKEYPRESSESAI_H
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
typedef struct KeyPressesAI KeyPressesAI;
typedef struct GameInput GameInput;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct GameTickTimeDelayHelper GameTickTimeDelayHelper;
typedef struct GameTickTimeDelayHelperFactory GameTickTimeDelayHelperFactory;
typedef struct TimeDelayHelper TimeDelayHelper;
typedef struct ABHashtable ABHashtable;
#if __has_include("org/allbinary/time/GameTickTimeDelayHelper.h")
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif
#include "java/lang/Integer.h"
#include "org/allbinary/game/ag/ai/KeyPressesAI.h"

typedef struct MultiKeyPressesAI MultiKeyPressesAI;
struct MultiKeyPressesAI {
    KeyPressesAI base;
    TimeDelayHelper* toggleTimeHelper;
    GameTickTimeDelayHelper* gameTickTimeDelayHelper;
};


MultiKeyPressesAI* MultiKeyPressesAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void MultiKeyPressesAI_init(MultiKeyPressesAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void MultiKeyPressesAI_processAI(MultiKeyPressesAI* this, AllBinaryLayerManager* allBinaryLayerManager);


void MultiKeyPressesAI_toggle(MultiKeyPressesAI* this);

void MultiKeyPressesAI_disable(MultiKeyPressesAI* this);

void MultiKeyPressesAI_enable(MultiKeyPressesAI* this);
#define MultiKeyPressesAI_new3 MultiKeyPressesAI_new
#define MultiKeyPressesAI_init3 MultiKeyPressesAI_init
#ifndef MultiKeyPressesAI_setOn
#define MultiKeyPressesAI_setOn KeyPressesAI_setOn
#endif
#ifndef MultiKeyPressesAI_isOn
#define MultiKeyPressesAI_isOn KeyPressesAI_isOn
#endif
#ifndef MultiKeyPressesAI_processKeyAI
#define MultiKeyPressesAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef MultiKeyPressesAI_setLastKey
#define MultiKeyPressesAI_setLastKey BasicAI_setLastKey
#endif
#ifndef MultiKeyPressesAI_getLastKey
#define MultiKeyPressesAI_getLastKey BasicAI_getLastKey
#endif
#ifndef MultiKeyPressesAI_getOwnerLayerInterface
#define MultiKeyPressesAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef MultiKeyPressesAI_getGameInput
#define MultiKeyPressesAI_getGameInput BasicAI_getGameInput
#endif
#ifndef MultiKeyPressesAI_getName
#define MultiKeyPressesAI_getName BasicAI_getName
#endif
#ifndef MultiKeyPressesAI_toString
#define MultiKeyPressesAI_toString BasicAI_toString
#endif
#ifndef MultiKeyPressesAI_getSourceId
#define MultiKeyPressesAI_getSourceId BasicAI_getSourceId
#endif
#ifndef MultiKeyPressesAI_getInstance
#define MultiKeyPressesAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef MultiKeyPressesAI_getId
#define MultiKeyPressesAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MultiKeyPressesAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MultiKeyPressesAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_MULTIKEYPRESSESAI_H
