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
// package org.allbinary.game.combat.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/CommandListener.h"
#include "org/allbinary/game/combat/destroy/DestroyedLayerProcessor.h"
#include "org/allbinary/game/combat/destroy/event/DestroyEventCircularStaticPool.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#include "org/allbinary/game/init/BasicBuildGameInitializerFactory.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/drop/DropLayerProcessor.h"
#include "org/allbinary/game/layer/identification/GroupLayerManagerListener.h"
#include "org/allbinary/game/score/HighScoresFactoryInterface.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/layer/BasicLayerProcessor.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"

typedef struct CombatGameCanvas CombatGameCanvas;
struct CombatGameCanvas {
    AllBinaryGameCanvas base;
};

BasicLayerProcessor** CombatGameCanvas_basicLayerProcessor;

CombatGameCanvas* CombatGameCanvas_new(CommandListener* cmdListener, AllBinaryGameLayerManager* gameLayerManager, HighScoresFactoryInterface* highScoresFactoryInterface, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool buffered);

void CombatGameCanvas_init(CombatGameCanvas* this, CommandListener* cmdListener, AllBinaryGameLayerManager* gameLayerManager, HighScoresFactoryInterface* highScoresFactoryInterface, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool buffered);
static void CombatGameCanvas_CombatGameCanvas_init(CombatGameCanvas* this);
void CombatGameCanvas_initApp(CombatGameCanvas* this, AbeClientInformationInterface* abeClientInformation);
void CombatGameCanvas_initConfigurablePortion(CombatGameCanvas* this, int32_t portion);
void CombatGameCanvas_processPlayingGame(CombatGameCanvas* this);
void CombatGameCanvas_cleanupGame(CombatGameCanvas* this);
void CombatGameCanvas_cleanupManager(CombatGameCanvas* this);

// Static fields with runtime initializers: call this once at startup
void CombatGameCanvas_staticInit(void) {
    CombatGameCanvas_basicLayerProcessor = ((BasicLayerProcessor**) java_array_new(sizeof(BasicLayerProcessor*), 0));
}


void CombatGameCanvas_init(CombatGameCanvas* this, CommandListener* cmdListener, AllBinaryGameLayerManager* gameLayerManager, HighScoresFactoryInterface* highScoresFactoryInterface, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool buffered) {
        AllBinaryGameCanvas_init(&this->base, cmdListener, gameLayerManager, highScoresFactoryInterface, gameInitializationInterfaceFactoryInterface, buffered);
}

CombatGameCanvas* CombatGameCanvas_new(CommandListener* cmdListener, AllBinaryGameLayerManager* gameLayerManager, HighScoresFactoryInterface* highScoresFactoryInterface, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool buffered) {
    CombatGameCanvas* this = calloc(1, sizeof(CombatGameCanvas));
    CombatGameCanvas_init(this, cmdListener, gameLayerManager, highScoresFactoryInterface, gameInitializationInterfaceFactoryInterface, buffered);
    return this;
}


static void CombatGameCanvas_CombatGameCanvas_init(CombatGameCanvas* this) {
        DestroyEventCircularStaticPool_init(DestroyEventCircularStaticPool_getInstance(), this);
        ProgressCanvasFactory_addNormalPortion(ProgressCanvasFactory_getInstance(), 50, "Destroy Events");
}


// throws Exception
void CombatGameCanvas_initApp(CombatGameCanvas* this, AbeClientInformationInterface* abeClientInformation) {
        CombatGameCanvas_CombatGameCanvas_init(this);
        AllBinaryGameCanvas_initApp((&this->base), abeClientInformation);
}


void CombatGameCanvas_initConfigurablePortion(CombatGameCanvas* this, int32_t portion) {
        DestroyedLayerProcessor_init();
        ProgressCanvasFactory_addNormalPortion(ProgressCanvasFactory_getInstance(), portion, "Basic Processors");
        Features* features = Features_getInstance();
        GameFeatureFactory* gameFeatureFactory = GameFeatureFactory_getInstance();
        if (Features_isFeature(features, gameFeatureFactory->DROPPED_ITEMS) && Features_isFeature(features, gameFeatureFactory->DROPPED_ITEMS_FROM_DEATH)) {
            CombatGameCanvas_basicLayerProcessor = ((BasicLayerProcessor**) java_array_new(sizeof(BasicLayerProcessor*), 2));
            CombatGameCanvas_basicLayerProcessor[0] = DestroyedLayerProcessor_getInstance();
            CombatGameCanvas_basicLayerProcessor[1] = DropLayerProcessor_getInstance();
        } else {
            CombatGameCanvas_basicLayerProcessor = ((BasicLayerProcessor**) java_array_new(sizeof(BasicLayerProcessor*), 1));
            CombatGameCanvas_basicLayerProcessor[0] = DestroyedLayerProcessor_getInstance();
        }
}


// throws Exception
void CombatGameCanvas_processPlayingGame(CombatGameCanvas* this) {
        AllBinaryGameCanvas_processPlayingGame((&this->base));
        for (int32_t index = java_array_length(CombatGameCanvas_basicLayerProcessor); --index >= 0; ) {
            JAVA_CALL(CombatGameCanvas_basicLayerProcessor[index], process, this->gameLayerManager);
        }
}


// throws Exception
void CombatGameCanvas_cleanupGame(CombatGameCanvas* this) {
        AllBinaryGameCanvas_cleanupGame((&this->base));
        for (int32_t index = java_array_length(CombatGameCanvas_basicLayerProcessor); --index >= 0; ) {
            JAVA_CALL(JAVA_CALL(CombatGameCanvas_basicLayerProcessor[index], getList), clear);
        }
        GroupLayerManagerListener_clear(GroupLayerManagerListener_getInstance());
        GroupLayerManagerListener_log(GroupLayerManagerListener_getInstance());
        DestroyedEventHandler_removeAllListeners(DestroyedEventHandler_getInstance());
        CombatGameCanvas_cleanupManager(this);
}


// throws Exception
void CombatGameCanvas_cleanupManager(CombatGameCanvas* this) {
        AllBinaryGameLayerManager_cleanup(this->gameLayerManager);
}

