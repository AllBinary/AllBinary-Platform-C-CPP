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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/InputFeatureFactory.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct GameInput GameInput;
struct GameInput {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    BasicArrayList* gameKeyEventList;
    BasicArrayList* removalGameKeyEventList;
    bool isRemoveDuplicateKeyPresses;
};


GameInput* GameInput_new(BasicArrayList* gameKeyEventList, BasicArrayList* removalGameKeyEventList);

void GameInput_init(GameInput* this, BasicArrayList* gameKeyEventList, BasicArrayList* removalGameKeyEventList);
void GameInput_add(GameInput* this, GameKeyEvent* gameKeyEvent);
void GameInput_addForRemoval(GameInput* this, GameKeyEvent* gameKeyEvent);
bool GameInput_isForRemoval(GameInput* this, GameKeyEvent* gameKeyEvent);
void GameInput_clear(GameInput* this);
void GameInput_removeNonAIInputGameKeyEvents(GameInput* this);
void GameInput_update(GameInput* this);
BasicArrayList* GameInput_getRemovalGameKeyEventList(GameInput* this);
BasicArrayList* GameInput_getGameKeyEventList(GameInput* this);

static void GameInput_initFields(GameInput* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    
    
}


void GameInput_init(GameInput* this, BasicArrayList* gameKeyEventList, BasicArrayList* removalGameKeyEventList) {
    GameInput_initFields(this);
        this->gameKeyEventList = gameKeyEventList;
        this->removalGameKeyEventList = removalGameKeyEventList;
        this->isRemoveDuplicateKeyPresses = Features_isFeature(Features_getInstance(), InputFeatureFactory_getInstance()->REMOVE_DUPLICATE_KEY_PRESSES);
}

GameInput* GameInput_new(BasicArrayList* gameKeyEventList, BasicArrayList* removalGameKeyEventList) {
    GameInput* this = calloc(1, sizeof(GameInput));
    GameInput_init(this, gameKeyEventList, removalGameKeyEventList);
    return this;
}


// synchronized
void GameInput_add(GameInput* this, GameKeyEvent* gameKeyEvent) {
        if (this->isRemoveDuplicateKeyPresses && BasicArrayList_contains(this->gameKeyEventList, gameKeyEvent)) {
            return;
        }
        if (gameKeyEvent != nullptr) {
            BasicArrayList_add(this->gameKeyEventList, gameKeyEvent);
        } else {
            LogUtil_putF(this->logUtil, "Danger Passed Null GameKeyEvent", this, this->commonStrings->ADD);
        }
}


// synchronized
void GameInput_addForRemoval(GameInput* this, GameKeyEvent* gameKeyEvent) {
        BasicArrayList_add(this->removalGameKeyEventList, gameKeyEvent);
}


// synchronized
bool GameInput_isForRemoval(GameInput* this, GameKeyEvent* gameKeyEvent) {
        return BasicArrayList_contains(this->removalGameKeyEventList, gameKeyEvent);
}


// synchronized
void GameInput_clear(GameInput* this) {
        BasicArrayList_clear(this->gameKeyEventList);
}


// synchronized
void GameInput_removeNonAIInputGameKeyEvents(GameInput* this) {
        BasicArrayList* list = this->gameKeyEventList;
        GameKeyEvent* gameKeyEvent = nullptr;
        for (int32_t index = BasicArrayList_size(list); --index >= 0; ) {
            gameKeyEvent = ((GameKeyEvent*) list->objectArray[index]);
            if (GameKeyEvent_getSourceId(gameKeyEvent) != 1) {
                BasicArrayList_removeAt(list, index);
            }
        }
}


// synchronized
void GameInput_update(GameInput* this) {
        BasicArrayList* removeList = this->removalGameKeyEventList;
        BasicArrayList* list = this->gameKeyEventList;
        int32_t size = BasicArrayList_size(removeList);
        for (int32_t index = 0; index < size; index++) {
            Any* anyType = removeList->objectArray[index];
            for (int32_t index2 = BasicArrayList_size(list); --index2 >= 0; ) {
                if (list->objectArray[index2] == anyType) {
                    BasicArrayList_removeAt(list, index2);
                }
            }
        }
        BasicArrayList_clear(removeList);
}


BasicArrayList* GameInput_getRemovalGameKeyEventList(GameInput* this) {
        return this->removalGameKeyEventList;
}


BasicArrayList* GameInput_getGameKeyEventList(GameInput* this) {
        return this->gameKeyEventList;
}

