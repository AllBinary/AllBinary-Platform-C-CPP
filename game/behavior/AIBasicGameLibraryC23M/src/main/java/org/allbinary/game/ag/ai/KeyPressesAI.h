#ifndef ORG_ALLBINARY_GAME_AG_AI_KEYPRESSESAI_H
#define ORG_ALLBINARY_GAME_AG_AI_KEYPRESSESAI_H
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
typedef struct GameInput GameInput;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct HashtableUtil HashtableUtil;
typedef struct BasicAI BasicAI;
typedef struct ABHashtable ABHashtable;
#include "org/allbinary/game/ai/BasicAI.h"
#include "java/lang/Integer.h"

typedef struct KeyPressesAI KeyPressesAI;
struct KeyPressesAI {
    BasicAI base;
    bool on;
    int32_t* keys;
};


KeyPressesAI* KeyPressesAI_new(ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void KeyPressesAI_init(KeyPressesAI* this, ABHashtable* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void KeyPressesAI_processAI(KeyPressesAI* this, AllBinaryLayerManager* allBinaryLayerManager);

void KeyPressesAI_toggle(KeyPressesAI* this);

void KeyPressesAI_disable(KeyPressesAI* this);

void KeyPressesAI_enable(KeyPressesAI* this);


bool KeyPressesAI_isOn(KeyPressesAI* this);
#define KeyPressesAI_new3 KeyPressesAI_new
#define KeyPressesAI_init3 KeyPressesAI_init
#ifndef KeyPressesAI_processKeyAI
#define KeyPressesAI_processKeyAI BasicAI_processKeyAI
#endif
#ifndef KeyPressesAI_setLastKey
#define KeyPressesAI_setLastKey BasicAI_setLastKey
#endif
#ifndef KeyPressesAI_getLastKey
#define KeyPressesAI_getLastKey BasicAI_getLastKey
#endif
#ifndef KeyPressesAI_getOwnerLayerInterface
#define KeyPressesAI_getOwnerLayerInterface BasicAI_getOwnerLayerInterface
#endif
#ifndef KeyPressesAI_getGameInput
#define KeyPressesAI_getGameInput BasicAI_getGameInput
#endif
#ifndef KeyPressesAI_getName
#define KeyPressesAI_getName BasicAI_getName
#endif
#ifndef KeyPressesAI_toString
#define KeyPressesAI_toString BasicAI_toString
#endif
#ifndef KeyPressesAI_getSourceId
#define KeyPressesAI_getSourceId BasicAI_getSourceId
#endif
#ifndef KeyPressesAI_getInstance
#define KeyPressesAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef KeyPressesAI_getId
#define KeyPressesAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void KeyPressesAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void KeyPressesAI_register(void);


#endif // ORG_ALLBINARY_GAME_AG_AI_KEYPRESSESAI_H
