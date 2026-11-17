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
// #include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/logic/system/security/licensing/LockedFeatureNotificationUtil.h"
#include "org/allbinary/logic/system/security/licensing/LockedUtil.h"
#include "org/allbinary/canvas/Processor.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#include "org/allbinary/game/displayable/canvas/PreGameSelectorPaintable.h"
#include "org/allbinary/game/input/event/GameKeyEventHandler.h"
#include "org/allbinary/game/input/event/GameKeyEventUtil.h"
#include "org/allbinary/game/state/GameState.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/media/audio/SecondaryPlayerQueueFactory.h"
#include "org/allbinary/media/audio/SelectSound.h"
#include "org/allbinary/thread/ABRunnable.h"
#include "org/allbinary/thread/ThreadObjectUtil.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/game/input/GameInputProcessorInterface.h"
#include "org/allbinary/game/input/PlayerGameInputCompositeInterface.h"

typedef struct PreGameSelectionGameInputProcessor PreGameSelectionGameInputProcessor;
struct PreGameSelectionGameInputProcessor {
    Processor base;
    GameInputProcessorInterface GameInputProcessorInterface_interface;
    PlayerGameInputCompositeInterface PlayerGameInputCompositeInterface_interface;
    LogUtil* logUtil;
    AllBinaryGameCanvas* gameCanvas;
    PreGameSelectorPaintable* preGameSelectorPaintable;
    TimeDelayHelper* inputTimeHelper;
    GameState* nextGameState;
    PlayerGameInput* playerGameInput;
    int32_t lockedIndex;
    ABRunnable* abRunnable;
};


PreGameSelectionGameInputProcessor* PreGameSelectionGameInputProcessor_new(AllBinaryGameCanvas* gameCanvas, PreGameSelectorPaintable* preGameSelectorPaintable, GameState* nextGameState, int32_t lockedIndex);

void PreGameSelectionGameInputProcessor_init(PreGameSelectionGameInputProcessor* this, AllBinaryGameCanvas* gameCanvas, PreGameSelectorPaintable* preGameSelectorPaintable, GameState* nextGameState, int32_t lockedIndex);
void PreGameSelectionGameInputProcessor_process(PreGameSelectionGameInputProcessor* this);
void PreGameSelectionGameInputProcessor_onInput(PreGameSelectionGameInputProcessor* this, BasicArrayList* list);
PreGameSelectorPaintable* PreGameSelectionGameInputProcessor_getPreGameSelectorPaintable(PreGameSelectionGameInputProcessor* this);
void PreGameSelectionGameInputProcessor_processInput(PreGameSelectionGameInputProcessor* this, AllBinaryLayerManager* layerManager);
void PreGameSelectionGameInputProcessor_initInputProcessors(PreGameSelectionGameInputProcessor* this);
const char* PreGameSelectionGameInputProcessor_getName(PreGameSelectionGameInputProcessor* this);
PlayerGameInput* PreGameSelectionGameInputProcessor_getPlayerGameInput(PreGameSelectionGameInputProcessor* this);

static void PreGameSelectionGameInputProcessor_initFields(PreGameSelectionGameInputProcessor* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    this->inputTimeHelper = TimeDelayHelper_new(650);
    
    
    
    this->abRunnable = PreGameSelectionRunnable_new(this);
}


void PreGameSelectionGameInputProcessor_init(PreGameSelectionGameInputProcessor* this, AllBinaryGameCanvas* gameCanvas, PreGameSelectorPaintable* preGameSelectorPaintable, GameState* nextGameState, int32_t lockedIndex) {
    Processor_init(&this->base);
    PreGameSelectionGameInputProcessor_initFields(this);
        this->gameCanvas = gameCanvas;
        this->preGameSelectorPaintable = preGameSelectorPaintable;
        this->nextGameState = nextGameState;
        this->playerGameInput = GameInputProcessorComposite_new("Pre Game Selection", this);
        this->lockedIndex = lockedIndex;
}

PreGameSelectionGameInputProcessor* PreGameSelectionGameInputProcessor_new(AllBinaryGameCanvas* gameCanvas, PreGameSelectorPaintable* preGameSelectorPaintable, GameState* nextGameState, int32_t lockedIndex) {
    PreGameSelectionGameInputProcessor* this = calloc(1, sizeof(PreGameSelectionGameInputProcessor));
    PreGameSelectionGameInputProcessor_init(this, gameCanvas, preGameSelectorPaintable, nextGameState, lockedIndex);
    return this;
}


// throws Exception
void PreGameSelectionGameInputProcessor_process(PreGameSelectionGameInputProcessor* this) {
        JAVA_CALL(PreGameSelectionGameInputProcessor_getPlayerGameInput(this), update);
}


// throws Exception
void PreGameSelectionGameInputProcessor_onInput(PreGameSelectionGameInputProcessor* this, BasicArrayList* list) {
        int32_t size = BasicArrayList_size(list);
        for (int32_t index = 0; index < size; index++) {
            Any* anyType = BasicArrayList_get(list, index);
            int32_t key = GameKeyEventUtil_getKey(anyType);
            if (key == Canvas_LEFT || key == Canvas_RIGHT || key == Canvas_UP || key == Canvas_DOWN) {
                if (TimeDelayHelper_isTimeTNT(this->inputTimeHelper)) {
                    SecondaryPlayerQueueFactory_add(SecondaryPlayerQueueFactory_getInstance(), SelectSound_getInstance());
                    JAVA_CALL(JAVA_CALL(PreGameSelectionGameInputProcessor_getPreGameSelectorPaintable(this), getPreGameSelectionForm), processInputKey, key);
                    break;
                }
            } else if (key == Canvas_KEY_NUM0) {
                int32_t selectedIndex = JAVA_CALL(PreGameSelectorPaintable_getPreGameSelectionForm(this->preGameSelectorPaintable), getSelectedIndex);
                if (selectedIndex < this->lockedIndex || !LockedUtil_isLocked(LockedUtil_getInstance())) {
                    if (!ABRunnable_isRunning(this->abRunnable)) {
                        ABRunnable_setRunning(this->abRunnable, true);
                        ThreadObjectUtil_processThread(ThreadObjectUtil_getInstance(), this->abRunnable);
                    }
                    break;
                } else {
                    LockedFeatureNotificationUtil_fire(LockedFeatureNotificationUtil_getInstance());
                }
            }
        }
        BasicArrayList_clear(list);
}


PreGameSelectorPaintable* PreGameSelectionGameInputProcessor_getPreGameSelectorPaintable(PreGameSelectionGameInputProcessor* this) {
        return this->preGameSelectorPaintable;
}


// throws Exception
void PreGameSelectionGameInputProcessor_processInput(PreGameSelectionGameInputProcessor* this, AllBinaryLayerManager* layerManager) {
}


void PreGameSelectionGameInputProcessor_initInputProcessors(PreGameSelectionGameInputProcessor* this) {
}


const char* PreGameSelectionGameInputProcessor_getName(PreGameSelectionGameInputProcessor* this) {
        return PreGameSelectionGameInputProcessor_toString(this);
}


PlayerGameInput* PreGameSelectionGameInputProcessor_getPlayerGameInput(PreGameSelectionGameInputProcessor* this) {
        return this->playerGameInput;
}

typedef struct PreGameSelectionRunnable PreGameSelectionRunnable;
struct PreGameSelectionRunnable {
    ABRunnable base;
    PreGameSelectionGameInputProcessor* inputProcessor;
};


PreGameSelectionRunnable* PreGameSelectionRunnable_new(PreGameSelectionGameInputProcessor* inputProcessor);
    
    void PreGameSelectionGameInputProcessor_init(PreGameSelectionGameInputProcessor* this, PreGameSelectionGameInputProcessor* inputProcessor);
    void PreGameSelectionGameInputProcessor_run(PreGameSelectionGameInputProcessor* this);

static void PreGameSelectionRunnable_initFields(PreGameSelectionRunnable* this) {
        
}
    

    void PreGameSelectionGameInputProcessor_init(PreGameSelectionGameInputProcessor* this, PreGameSelectionGameInputProcessor* inputProcessor) {
    ABRunnable_init(&this->base);
        PreGameSelectionGameInputProcessor_initFields(this);
            this->inputProcessor = inputProcessor;
    }

    PreGameSelectionGameInputProcessor* PreGameSelectionGameInputProcessor_new(PreGameSelectionGameInputProcessor* inputProcessor) {
        PreGameSelectionGameInputProcessor* this = calloc(1, sizeof(PreGameSelectionGameInputProcessor));
        PreGameSelectionGameInputProcessor_init(this, inputProcessor);
        return this;
    }
    

    void PreGameSelectionGameInputProcessor_run(PreGameSelectionGameInputProcessor* this) {
            JAVA_TRY {
                PreGameSelectionGameInputProcessor_setRunning(this, true);
                SecondaryPlayerQueueFactory_add(SecondaryPlayerQueueFactory_getInstance(), SelectSound_getInstance());
                JAVA_CALL(this->inputProcessor->gameCanvas, setGameState, this->inputProcessor->nextGameState);
                GameKeyEventHandler_removeListener(GameKeyEventHandler_getInstance(), PreGameSelectionGameInputProcessor_getPlayerGameInput(this->inputProcessor));
                PreGameSelectionGameInputProcessor_setRunning(this, false);
            } JAVA_CATCH(Exception, e) {
                PreGameSelectionGameInputProcessor_setRunning(this, false);
                LogUtil* logUtil = LogUtil_getInstance();
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
            } JAVA_END_TRY;
    }

