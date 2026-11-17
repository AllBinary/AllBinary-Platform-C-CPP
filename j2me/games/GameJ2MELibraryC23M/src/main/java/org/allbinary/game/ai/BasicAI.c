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
#include "org/allbinary/ai/ArtificialIntelligence.h"
#include "org/allbinary/game/displayable/canvas/CanvasUtil.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/game/input/GameKeyEventSourceInterface.h"
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"

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

int32_t BasicAI_AI_VISITOR;
int32_t BasicAI_ID;

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

// Static fields with runtime initializers: call this once at startup
void BasicAI_staticInit(void) {
    BasicAI_AI_VISITOR = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 2);
    BasicAI_ID = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 1);
}

static void BasicAI_initFields(BasicAI* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->gameKeyEventFactory = GameKeyEventFactory_getInstance();
    
    
    this->lastKey = -1;
}


void BasicAI_init(BasicAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    ArtificialIntelligence_init(&this->base);
    BasicAI_initFields(this);
        this->ownerLayerInterface = ownerLayerInterface;
        this->gameInput = gameInput;
}

BasicAI* BasicAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) {
    BasicAI* this = calloc(1, sizeof(BasicAI));
    BasicAI_init(this, ownerLayerInterface, gameInput);
    return this;
}


// throws Exception
void BasicAI_processAI(BasicAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
void BasicAI_processKeyAI(BasicAI* this, int32_t key) {
        if (key != -1) {
            GameInput_add(this->gameInput, GameKeyEventFactory_getInstanceForKey(this->gameKeyEventFactory, this, key));
        }
}


void BasicAI_setLastKey(BasicAI* this, int32_t lastKey) {
        this->lastKey = lastKey;
}


int32_t BasicAI_getLastKey(BasicAI* this) {
        return this->lastKey;
}


AllBinaryLayer* BasicAI_getOwnerLayerInterface(BasicAI* this) {
        return this->ownerLayerInterface;
}


GameInput* BasicAI_getGameInput(BasicAI* this) {
        return this->gameInput;
}


const char* BasicAI_getName(BasicAI* this) {
        return java_class_of(this);
}


const char* BasicAI_toString(BasicAI* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->NEW_LINE);
        StringMaker_append(stringBuffer, BasicAI_getName(this));
        StringMaker_append(stringBuffer, " LastKey: ");
        StringMaker_append(stringBuffer, CanvasUtil_getKeyName(BasicAI_getLastKey(this)));
        return StringMaker_toString(stringBuffer);
}


int32_t BasicAI_getSourceId(BasicAI* this) {
        return 1;
}

