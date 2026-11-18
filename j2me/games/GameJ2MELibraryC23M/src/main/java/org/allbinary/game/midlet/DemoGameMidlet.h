#ifndef ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLET_H
#define ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLET_H
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
// package org.allbinary.game.midlet

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameMidlet GameMidlet;
typedef struct DemoRunnable DemoRunnable;
typedef struct CreateGameRunnable CreateGameRunnable;
typedef struct GameCanvasRunnableInterface GameCanvasRunnableInterface;
typedef struct AllBinaryGameLayerManager AllBinaryGameLayerManager;
typedef struct ProgressCanvas ProgressCanvas;
typedef struct ProgressCanvasFactory ProgressCanvasFactory;
typedef struct StdUtil StdUtil;
typedef struct ClientInformationFactory ClientInformationFactory;
typedef struct PrimaryThreadPool PrimaryThreadPool;
typedef struct NullGameCanvasRunnable NullGameCanvasRunnable;
typedef struct ABHashtable ABHashtable;
#include "org/allbinary/game/midlet/GameMidlet.h"

typedef struct DemoGameMidlet DemoGameMidlet;
struct DemoGameMidlet {
    GameMidlet base;
};


DemoGameMidlet* DemoGameMidlet_new(ClientInformationFactory* clientInformationFactory);

void DemoGameMidlet_init(DemoGameMidlet* this, ClientInformationFactory* clientInformationFactory);

bool DemoGameMidlet_isContinue(DemoGameMidlet* this);

int32_t DemoGameMidlet_getHighestLevel(DemoGameMidlet* this);

GameCanvasRunnableInterface* DemoGameMidlet_createDemoGameCanvasRunnableInterface(DemoGameMidlet* this);

GameCanvasRunnableInterface* DemoGameMidlet_createGameCanvasRunnable(DemoGameMidlet* this, AllBinaryGameLayerManager* allBinaryGameLayerManager);

GameCanvasRunnableInterface* DemoGameMidlet_createGameCanvasRunnableInterface(DemoGameMidlet* this);

void DemoGameMidlet_demoSetup(DemoGameMidlet* this);

void DemoGameMidlet_postDemoSetup(DemoGameMidlet* this);

void DemoGameMidlet_setDemo(DemoGameMidlet* this);

void DemoGameMidlet_createGame(DemoGameMidlet* this);

bool DemoGameMidlet_isReady(DemoGameMidlet* this);
#define DemoGameMidlet_new1 DemoGameMidlet_new
#define DemoGameMidlet_init1 DemoGameMidlet_init
#ifndef DemoGameMidlet_mediaShutdown
#define DemoGameMidlet_mediaShutdown GameMidlet_mediaShutdown
#endif
#ifndef DemoGameMidlet_stopAll
#define DemoGameMidlet_stopAll GameMidlet_stopAll
#endif
#ifndef DemoGameMidlet_pauseApp
#define DemoGameMidlet_pauseApp GameMidlet_pauseApp
#endif
#ifndef DemoGameMidlet_pauseAppBackground
#define DemoGameMidlet_pauseAppBackground GameMidlet_pauseAppBackground
#endif
#ifndef DemoGameMidlet_unPauseApp
#define DemoGameMidlet_unPauseApp GameMidlet_unPauseApp
#endif
#ifndef DemoGameMidlet_unPauseAppBackground
#define DemoGameMidlet_unPauseAppBackground GameMidlet_unPauseAppBackground
#endif
#ifndef DemoGameMidlet_destroyAppInRunnable
#define DemoGameMidlet_destroyAppInRunnable GameMidlet_destroyAppInRunnable
#endif
#ifndef DemoGameMidlet_destroyApp
#define DemoGameMidlet_destroyApp GameMidlet_destroyApp
#endif
#ifndef DemoGameMidlet_startApp
#define DemoGameMidlet_startApp GameMidlet_startApp
#endif
#ifndef DemoGameMidlet_commandAction
#define DemoGameMidlet_commandAction GameMidlet_commandAction
#endif
#ifndef DemoGameMidlet_updateFullScreen
#define DemoGameMidlet_updateFullScreen GameMidlet_updateFullScreen
#endif
#ifndef DemoGameMidlet_onEvent
#define DemoGameMidlet_onEvent GameMidlet_onEvent
#endif
#ifndef DemoGameMidlet_getInputMappingInstructionsCanvas
#define DemoGameMidlet_getInputMappingInstructionsCanvas GameMidlet_getInputMappingInstructionsCanvas
#endif
#ifndef DemoGameMidlet_getInputMappingCanvas
#define DemoGameMidlet_getInputMappingCanvas GameMidlet_getInputMappingCanvas
#endif
#ifndef DemoGameMidlet_getAboutCanvas
#define DemoGameMidlet_getAboutCanvas GameMidlet_getAboutCanvas
#endif
#ifndef DemoGameMidlet_getHelpPaintable
#define DemoGameMidlet_getHelpPaintable GameMidlet_getHelpPaintable
#endif
#ifndef DemoGameMidlet_createHighScoresCanvas
#define DemoGameMidlet_createHighScoresCanvas GameMidlet_createHighScoresCanvas
#endif
#ifndef DemoGameMidlet_startGameCanvasRunnableInterface
#define DemoGameMidlet_startGameCanvasRunnableInterface GameMidlet_startGameCanvasRunnableInterface
#endif
#ifndef DemoGameMidlet_stopGameCanvasRunnableInterface
#define DemoGameMidlet_stopGameCanvasRunnableInterface GameMidlet_stopGameCanvasRunnableInterface
#endif
#ifndef DemoGameMidlet_getGameCanvasRunnableInterface
#define DemoGameMidlet_getGameCanvasRunnableInterface GameMidlet_getGameCanvasRunnableInterface
#endif
#ifndef DemoGameMidlet_setGameCanvasRunnableInterface
#define DemoGameMidlet_setGameCanvasRunnableInterface GameMidlet_setGameCanvasRunnableInterface
#endif
#ifndef DemoGameMidlet_createGameLayerManager
#define DemoGameMidlet_createGameLayerManager GameMidlet_createGameLayerManager
#endif
#ifndef DemoGameMidlet_getGameOptionsForm
#define DemoGameMidlet_getGameOptionsForm GameMidlet_getGameOptionsForm
#endif
#ifndef DemoGameMidlet_save
#define DemoGameMidlet_save GameMidlet_save
#endif
#ifndef DemoGameMidlet_getCurrentStateHashtable
#define DemoGameMidlet_getCurrentStateHashtable GameMidlet_getCurrentStateHashtable
#endif
#ifndef DemoGameMidlet_setLoadGameForm
#define DemoGameMidlet_setLoadGameForm GameMidlet_setLoadGameForm
#endif
#ifndef DemoGameMidlet_getLoadGameForm
#define DemoGameMidlet_getLoadGameForm GameMidlet_getLoadGameForm
#endif
#ifndef DemoGameMidlet_setResized
#define DemoGameMidlet_setResized GameMidlet_setResized
#endif
#ifndef DemoGameMidlet_isResized
#define DemoGameMidlet_isResized GameMidlet_isResized
#endif
#ifndef DemoGameMidlet_isDemoLoading
#define DemoGameMidlet_isDemoLoading GameMidlet_isDemoLoading
#endif
#ifndef DemoGameMidlet_preInit
#define DemoGameMidlet_preInit ProgressMidlet_preInit
#endif
#ifndef DemoGameMidlet_exitProgress
#define DemoGameMidlet_exitProgress ProgressMidlet_exitProgress
#endif
#ifndef DemoGameMidlet_getNullInstance
#define DemoGameMidlet_getNullInstance AllBinaryMidlet_getNullInstance
#endif
#ifndef DemoGameMidlet_setDisplay
#define DemoGameMidlet_setDisplay AllBinaryMidlet_setDisplay
#endif
#ifndef DemoGameMidlet_getDisplay
#define DemoGameMidlet_getDisplay AllBinaryMidlet_getDisplay
#endif
#ifndef DemoGameMidlet_getCurrentDisplayable
#define DemoGameMidlet_getCurrentDisplayable AllBinaryMidlet_getCurrentDisplayable
#endif
#ifndef DemoGameMidlet_setDestroyed
#define DemoGameMidlet_setDestroyed AllBinaryMidlet_setDestroyed
#endif
#ifndef DemoGameMidlet_isDestroyed
#define DemoGameMidlet_isDestroyed AllBinaryMidlet_isDestroyed
#endif
#ifndef DemoGameMidlet_startApp
#define DemoGameMidlet_startApp AllBinaryMidlet_startApp
#endif
#ifndef DemoGameMidlet_pauseApp
#define DemoGameMidlet_pauseApp AllBinaryMidlet_pauseApp
#endif
#ifndef DemoGameMidlet_destroyAppInRunnable
#define DemoGameMidlet_destroyAppInRunnable AllBinaryMidlet_destroyAppInRunnable
#endif
#ifndef DemoGameMidlet_destroyApp
#define DemoGameMidlet_destroyApp AllBinaryMidlet_destroyApp
#endif
#ifndef DemoGameMidlet_setStartStateHashtable
#define DemoGameMidlet_setStartStateHashtable AllBinaryMidlet_setStartStateHashtable
#endif
#ifndef DemoGameMidlet_getStartStateHashtable
#define DemoGameMidlet_getStartStateHashtable AllBinaryMidlet_getStartStateHashtable
#endif
#ifndef DemoGameMidlet_getCurrentStateHashtable
#define DemoGameMidlet_getCurrentStateHashtable AllBinaryMidlet_getCurrentStateHashtable
#endif
#ifndef DemoGameMidlet_commandAction
#define DemoGameMidlet_commandAction AllBinaryMidlet_commandAction
#endif
#ifndef DemoGameMidlet_startApp
#define DemoGameMidlet_startApp MIDlet_startApp
#endif
#ifndef DemoGameMidlet_pauseApp
#define DemoGameMidlet_pauseApp MIDlet_pauseApp
#endif
#ifndef DemoGameMidlet_destroyApp
#define DemoGameMidlet_destroyApp MIDlet_destroyApp
#endif
#ifndef DemoGameMidlet_checkPermission
#define DemoGameMidlet_checkPermission MIDlet_checkPermission
#endif
#ifndef DemoGameMidlet_getAppProperty
#define DemoGameMidlet_getAppProperty MIDlet_getAppProperty
#endif
#ifndef DemoGameMidlet_notifyDestroyed
#define DemoGameMidlet_notifyDestroyed MIDlet_notifyDestroyed
#endif
#ifndef DemoGameMidlet_notifyPaused
#define DemoGameMidlet_notifyPaused MIDlet_notifyPaused
#endif
#ifndef DemoGameMidlet_platformRequest
#define DemoGameMidlet_platformRequest MIDlet_platformRequest
#endif
#ifndef DemoGameMidlet_resumeRequest
#define DemoGameMidlet_resumeRequest MIDlet_resumeRequest
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DemoGameMidlet_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DemoGameMidlet_register(void);

#if __has_include("org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h")
#include "org/allbinary/game/displayable/canvas/GameCanvasRunnableInterface.h"
#endif

#endif // ORG_ALLBINARY_GAME_MIDLET_DEMOGAMEMIDLET_H
