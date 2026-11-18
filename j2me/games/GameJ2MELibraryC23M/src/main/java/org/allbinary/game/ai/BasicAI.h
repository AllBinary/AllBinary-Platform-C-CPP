#ifndef ORG_ALLBINARY_GAME_AI_BASICAI_H
#define ORG_ALLBINARY_GAME_AI_BASICAI_H
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
// package org.allbinary.game.ai

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ArtificialIntelligence ArtificialIntelligence;
typedef struct CanvasUtil CanvasUtil;
typedef struct GameInput GameInput;
typedef struct GameKeyEventSourceInterface GameKeyEventSourceInterface;
typedef struct GameKeyEventFactory GameKeyEventFactory;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct LogUtil LogUtil;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct StringMaker StringMaker;
typedef struct CommonSeps CommonSeps;
typedef struct CommonStrings CommonStrings;
#include "org/allbinary/ai/ArtificialIntelligence.h"
#if __has_include("org/allbinary/game/input/GameInput.h")
#include "org/allbinary/game/input/GameInput.h"
#endif
#include "org/allbinary/game/input/GameKeyEventSourceInterface.h"
#if __has_include("org/allbinary/game/input/event/GameKeyEventFactory.h")
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#include "java/lang/Integer.h"

typedef struct BasicAI BasicAI;
struct BasicAI {
    ArtificialIntelligence base;
    GameKeyEventSourceInterface GameKeyEventSourceInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    GameKeyEventFactory* gameKeyEventFactory;
    AllBinaryLayer* ownerLayerInterface;
    GameInput* gameInput;
    int32_t lastKey;
};

extern int32_t BasicAI_AI_VISITOR;
extern int32_t BasicAI_ID;

BasicAI* BasicAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void BasicAI_init(BasicAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

void BasicAI_processAI(BasicAI* this, AllBinaryLayerManager* allBinaryLayerManager);

void BasicAI_processKeyAI(BasicAI* this, int32_t key);

void BasicAI_setLastKey(BasicAI* this, int32_t lastKey);

int32_t BasicAI_getLastKey(BasicAI* this);

AllBinaryLayer* BasicAI_getOwnerLayerInterface(BasicAI* this);

GameInput* BasicAI_getGameInput(BasicAI* this);

const char* BasicAI_getName(BasicAI* this);

const char* BasicAI_toString(BasicAI* this);

int32_t BasicAI_getSourceId(BasicAI* this);
#define BasicAI_new2 BasicAI_new
#define BasicAI_init2 BasicAI_init
#ifndef BasicAI_getInstance
#define BasicAI_getInstance ArtificialIntelligence_getInstance
#endif
#ifndef BasicAI_getId
#define BasicAI_getId ArtificialIntelligence_getId
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicAI_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicAI_register(void);

#if __has_include("org/allbinary/game/input/GameInput.h")
#include "org/allbinary/game/input/GameInput.h"
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif

#endif // ORG_ALLBINARY_GAME_AI_BASICAI_H
