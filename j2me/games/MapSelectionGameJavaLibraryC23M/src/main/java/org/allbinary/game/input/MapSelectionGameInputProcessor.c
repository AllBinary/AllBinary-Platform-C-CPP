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
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/media/audio/SecondaryPlayerQueueFactory.h"
#include "org/allbinary/media/audio/SelectSound.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/MultiLevelRaceTrackGeographicMapInterfaceFactoryInterface.h"
#include "org/allbinary/thread/ABRunnable.h"
#include "org/allbinary/thread/ThreadObjectUtil.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/game/input/GameInputProcessorInterface.h"
#include "org/allbinary/game/input/PlayerGameInputCompositeInterface.h"

typedef struct MapSelectionGameInputProcessor MapSelectionGameInputProcessor;
struct MapSelectionGameInputProcessor {
    Processor base;
    GameInputProcessorInterface GameInputProcessorInterface_interface;
    PlayerGameInputCompositeInterface PlayerGameInputCompositeInterface_interface;
    LogUtil* logUtil;
    AllBinaryGameCanvas* gameCanvas;
    MultiLevelRaceTrackGeographicMapInterfaceFactoryInterface* raceTrackGeographicMapInterfaceFactoryInterface;
    PreGameSelectorPaintable* preGameSelectorPaintable;
    TimeDelayHelper* inputTimeHelper;
    PlayerGameInput* playerGameInput;
    int32_t lockedIndex;
    ABRunnable* abRunnable;
};


MapSelectionGameInputProcessor* MapSelectionGameInputProcessor_new(AllBinaryGameCanvas* gameCanvas, MultiLevelRaceTrackGeographicMapInterfaceFactoryInterface* raceTrackGeographicMapInterfaceFactoryInterface, PreGameSelectorPaintable* mapSelectorPaintable, int32_t lockedIndex);

void MapSelectionGameInputProcessor_init(MapSelectionGameInputProcessor* this, AllBinaryGameCanvas* gameCanvas, MultiLevelRaceTrackGeographicMapInterfaceFactoryInterface* raceTrackGeographicMapInterfaceFactoryInterface, PreGameSelectorPaintable* mapSelectorPaintable, int32_t lockedIndex);
void MapSelectionGameInputProcessor_process(MapSelectionGameInputProcessor* this);
void MapSelectionGameInputProcessor_onInput(MapSelectionGameInputProcessor* this, BasicArrayList* list);
void MapSelectionGameInputProcessor_processInput(MapSelectionGameInputProcessor* this, AllBinaryLayerManager* layerManager);
void MapSelectionGameInputProcessor_initInputProcessors(MapSelectionGameInputProcessor* this);
const char* MapSelectionGameInputProcessor_getName(MapSelectionGameInputProcessor* this);
PlayerGameInput* MapSelectionGameInputProcessor_getPlayerGameInput(MapSelectionGameInputProcessor* this);

static void MapSelectionGameInputProcessor_initFields(MapSelectionGameInputProcessor* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    
    this->inputTimeHelper = TimeDelayHelper_new(650);
    
    
    this->abRunnable = MapSelectionRunnable_new(this);
}


void MapSelectionGameInputProcessor_init(MapSelectionGameInputProcessor* this, AllBinaryGameCanvas* gameCanvas, MultiLevelRaceTrackGeographicMapInterfaceFactoryInterface* raceTrackGeographicMapInterfaceFactoryInterface, PreGameSelectorPaintable* mapSelectorPaintable, int32_t lockedIndex) {
    Processor_init(&this->base);
    MapSelectionGameInputProcessor_initFields(this);
        this->gameCanvas = gameCanvas;
        this->raceTrackGeographicMapInterfaceFactoryInterface = raceTrackGeographicMapInterfaceFactoryInterface;
        this->preGameSelectorPaintable = mapSelectorPaintable;
        this->playerGameInput = GameInputProcessorComposite_new("Map Selection", this);
        this->lockedIndex = lockedIndex;
}

MapSelectionGameInputProcessor* MapSelectionGameInputProcessor_new(AllBinaryGameCanvas* gameCanvas, MultiLevelRaceTrackGeographicMapInterfaceFactoryInterface* raceTrackGeographicMapInterfaceFactoryInterface, PreGameSelectorPaintable* mapSelectorPaintable, int32_t lockedIndex) {
    MapSelectionGameInputProcessor* this = calloc(1, sizeof(MapSelectionGameInputProcessor));
    MapSelectionGameInputProcessor_init(this, gameCanvas, raceTrackGeographicMapInterfaceFactoryInterface, mapSelectorPaintable, lockedIndex);
    return this;
}


// throws Exception
void MapSelectionGameInputProcessor_process(MapSelectionGameInputProcessor* this) {
        JAVA_CALL(MapSelectionGameInputProcessor_getPlayerGameInput(this), update);
}


// throws Exception
void MapSelectionGameInputProcessor_onInput(MapSelectionGameInputProcessor* this, BasicArrayList* list) {
        int32_t size = BasicArrayList_size(list);
        for (int32_t index = 0; index < size; index++) {
            Any* anyType = BasicArrayList_get(list, index);
            int32_t key = GameKeyEventUtil_getKey(anyType);
            if (key == Canvas_LEFT || key == Canvas_RIGHT || key == Canvas_UP || key == Canvas_DOWN) {
                if (TimeDelayHelper_isTimeTNT(this->inputTimeHelper)) {
                    SecondaryPlayerQueueFactory_add(SecondaryPlayerQueueFactory_getInstance(), SelectSound_getInstance());
                    JAVA_CALL(PreGameSelectorPaintable_getPreGameSelectionForm(this->preGameSelectorPaintable), processInputKey, key);
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
            BasicArrayList_clear(list);
        }
}


// throws Exception
void MapSelectionGameInputProcessor_processInput(MapSelectionGameInputProcessor* this, AllBinaryLayerManager* layerManager) {
}


void MapSelectionGameInputProcessor_initInputProcessors(MapSelectionGameInputProcessor* this) {
}


const char* MapSelectionGameInputProcessor_getName(MapSelectionGameInputProcessor* this) {
        return MapSelectionGameInputProcessor_toString(this);
}


PlayerGameInput* MapSelectionGameInputProcessor_getPlayerGameInput(MapSelectionGameInputProcessor* this) {
        return this->playerGameInput;
}

typedef struct MapSelectionRunnable MapSelectionRunnable;
struct MapSelectionRunnable {
    ABRunnable base;
    MapSelectionGameInputProcessor* inputProcessor;
};


MapSelectionRunnable* MapSelectionRunnable_new(MapSelectionGameInputProcessor* inputProcessor);
    
    void MapSelectionGameInputProcessor_init(MapSelectionGameInputProcessor* this, MapSelectionGameInputProcessor* inputProcessor);
    void MapSelectionGameInputProcessor_run(MapSelectionGameInputProcessor* this);

static void MapSelectionRunnable_initFields(MapSelectionRunnable* this) {
        
}
    

    void MapSelectionGameInputProcessor_init(MapSelectionGameInputProcessor* this, MapSelectionGameInputProcessor* inputProcessor) {
    ABRunnable_init(&this->base);
        MapSelectionGameInputProcessor_initFields(this);
            this->inputProcessor = inputProcessor;
    }

    MapSelectionGameInputProcessor* MapSelectionGameInputProcessor_new(MapSelectionGameInputProcessor* inputProcessor) {
        MapSelectionGameInputProcessor* this = calloc(1, sizeof(MapSelectionGameInputProcessor));
        MapSelectionGameInputProcessor_init(this, inputProcessor);
        return this;
    }
    

    void MapSelectionGameInputProcessor_run(MapSelectionGameInputProcessor* this) {
            JAVA_TRY {
                MapSelectionGameInputProcessor_setRunning(this, true);
                SecondaryPlayerQueueFactory_add(SecondaryPlayerQueueFactory_getInstance(), SelectSound_getInstance());
                int32_t track = JAVA_CALL(JAVA_CALL(this->inputProcessor->preGameSelectorPaintable, getPreGameSelectionForm), getSelectedIndex) + 1;
                int32_t wave = JAVA_CALL(this->inputProcessor->raceTrackGeographicMapInterfaceFactoryInterface, getFirstWaveWithTrack, track);
                JAVA_CALL(JAVA_CALL(JAVA_CALL(this->inputProcessor->gameCanvas, getLayerManager), getGameInfo), setCurrentLevel, wave);
                JAVA_CALL(this->inputProcessor->gameCanvas, buildGameInit, false);
                GameKeyEventHandler_removeListener(GameKeyEventHandler_getInstance(), MapSelectionGameInputProcessor_getPlayerGameInput(this->inputProcessor));
                MapSelectionGameInputProcessor_setRunning(this, false);
            } JAVA_CATCH(Exception, e) {
                MapSelectionGameInputProcessor_setRunning(this, false);
                LogUtil* logUtil = LogUtil_getInstance();
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
            } JAVA_END_TRY;
    }

