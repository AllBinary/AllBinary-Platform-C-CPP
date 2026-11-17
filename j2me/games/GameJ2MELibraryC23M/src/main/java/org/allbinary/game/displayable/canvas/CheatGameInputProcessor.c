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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#include "org/allbinary/game/input/PlayerGameInput.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/GameKeyEventUtil.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/special/SpecialGameInputFactory.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct CheatGameInputProcessor CheatGameInputProcessor;
struct CheatGameInputProcessor {
    PlayerGameInput base;
    const char* PROCESS_GAME;
    AllBinaryGameCanvas* gameCanvas;
    GameKeyFactory* gameKeyFactory;
};

SpecialGameInputInterface* CheatGameInputProcessor_inputProcessor;

CheatGameInputProcessor* CheatGameInputProcessor_new(AllBinaryGameCanvas* gameCanvas);

void CheatGameInputProcessor_init(CheatGameInputProcessor* this, AllBinaryGameCanvas* gameCanvas);
void CheatGameInputProcessor_update(CheatGameInputProcessor* this);

// Static fields with runtime initializers: call this once at startup
void CheatGameInputProcessor_staticInit(void) {
    CheatGameInputProcessor_inputProcessor = SpecialGameInputFactory_NO_SPECIAL_GAME_INPUT;
}

static void CheatGameInputProcessor_initFields(CheatGameInputProcessor* this) {
    this->PROCESS_GAME = "processGame";
    
    this->gameKeyFactory = GameKeyFactory_getInstance();
}


void CheatGameInputProcessor_init(CheatGameInputProcessor* this, AllBinaryGameCanvas* gameCanvas) {
        PlayerGameInput_init(&this->base, BasicArrayListD_new(), BasicArrayListD_new(), -1);
        CheatGameInputProcessor_initFields(this);
        this->gameCanvas = gameCanvas;
}

CheatGameInputProcessor* CheatGameInputProcessor_new(AllBinaryGameCanvas* gameCanvas) {
    CheatGameInputProcessor* this = calloc(1, sizeof(CheatGameInputProcessor));
    CheatGameInputProcessor_init(this, gameCanvas);
    return this;
}


// synchronized
void CheatGameInputProcessor_update(CheatGameInputProcessor* this) {
        JAVA_TRY {
            AllBinaryGameLayerManager* gameLayerManager = AllBinaryGameCanvas_getLayerManager(this->gameCanvas);
            BasicArrayList* list = CheatGameInputProcessor_getGameKeyEventList(this);
            int32_t size = BasicArrayList_size(list);
            for (int32_t index = 0; index < size; index++) {
                Any* anyType = list->objectArray[index];
                int32_t key = GameKeyEventUtil_getKey(anyType);
                if (key == JAVA_CALL(this->gameKeyFactory->LEVEL_DOWN, getId)) {
                    JAVA_CALL(CheatGameInputProcessor_inputProcessor, strafeLeft);
                    break;
                } else if (key == JAVA_CALL(this->gameKeyFactory->LEVEL_UP, getId)) {
                    JAVA_CALL(CheatGameInputProcessor_inputProcessor, strafeRight);
                    break;
                }
                if (key == JAVA_CALL(this->gameKeyFactory->LEFT, getId)) {
                    JAVA_CALL(CheatGameInputProcessor_inputProcessor, left);
                    break;
                } else if (key == JAVA_CALL(this->gameKeyFactory->RIGHT, getId)) {
                    JAVA_CALL(CheatGameInputProcessor_inputProcessor, right);
                    break;
                } else if (key == JAVA_CALL(this->gameKeyFactory->UP, getId)) {
                    JAVA_CALL(CheatGameInputProcessor_inputProcessor, up);
                    break;
                } else if (key == JAVA_CALL(this->gameKeyFactory->DOWN, getId)) {
                    JAVA_CALL(CheatGameInputProcessor_inputProcessor, down);
                    break;
                } else if (key == JAVA_CALL(this->gameKeyFactory->KEY_NUM1, getId)) {
                    JAVA_CALL(CheatGameInputProcessor_inputProcessor, special1, gameLayerManager, GameKeyEvent_NONE);
                    break;
                } else if (key == JAVA_CALL(this->gameKeyFactory->KEY_NUM3, getId)) {
                    JAVA_CALL(CheatGameInputProcessor_inputProcessor, special2, gameLayerManager, GameKeyEvent_NONE);
                    break;
                }
            }
            BasicArrayList_clear(list);
        } JAVA_CATCH(Exception, e) {
            JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->commonStrings->UPDATE, e);
        } JAVA_END_TRY;
}

