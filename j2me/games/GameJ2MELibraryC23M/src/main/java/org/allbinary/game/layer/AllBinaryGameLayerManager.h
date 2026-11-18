#ifndef ORG_ALLBINARY_GAME_LAYER_ALLBINARYGAMELAYERMANAGER_H
#define ORG_ALLBINARY_GAME_LAYER_ALLBINARYGAMELAYERMANAGER_H
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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameInfo GameInfo;
typedef struct NullPlayerGameInputComposite NullPlayerGameInputComposite;
typedef struct PlayerGameInputCompositeInterface PlayerGameInputCompositeInterface;
typedef struct ItemColorFactory ItemColorFactory;
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct AllBinaryLayerManager AllBinaryLayerManager;
typedef struct LayerProcessor LayerProcessor;
typedef struct NullUtil NullUtil;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct BasicArrayList BasicArrayList;
#if __has_include("org/allbinary/game/GameInfo.h")
#include "org/allbinary/game/GameInfo.h"
#endif
#if __has_include("org/allbinary/game/input/PlayerGameInputCompositeInterface.h")
#include "org/allbinary/game/input/PlayerGameInputCompositeInterface.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "java/lang/Integer.h"

typedef struct AllBinaryGameLayerManager AllBinaryGameLayerManager;
struct AllBinaryGameLayerManager {
    AllBinaryLayerManager base;
    BasicColor* backgroundBasicColor;
    BasicColor* foregroundBasicColor;
    GameInfo* gameInfo;
    PlayerGameInputCompositeInterface* playerGameInputCompositeInterface;
};

extern int32_t AllBinaryGameLayerManager_ID;

AllBinaryGameLayerManager* AllBinaryGameLayerManager_new(BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor, GameInfo* gameInfo);

AllBinaryGameLayerManager* AllBinaryGameLayerManager_getNullInstance(void);

void AllBinaryGameLayerManager_init(AllBinaryGameLayerManager* this, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor, GameInfo* gameInfo);

AllBinaryLayerManager* AllBinaryGameLayerManager_getLayerManager(AllBinaryGameLayerManager* this);

void AllBinaryGameLayerManager_initMethod(AllBinaryGameLayerManager* this);

BasicColor* AllBinaryGameLayerManager_getBackgroundBasicColor(AllBinaryGameLayerManager* this);

void AllBinaryGameLayerManager_setBackgroundBasicColor(AllBinaryGameLayerManager* this, BasicColor* backgroundBasicColor);

BasicColor* AllBinaryGameLayerManager_getForegroundBasicColor(AllBinaryGameLayerManager* this);

void AllBinaryGameLayerManager_setForegroundBasicColor(AllBinaryGameLayerManager* this, BasicColor* foregroundBasicColor);

GameInfo* AllBinaryGameLayerManager_getGameInfo(AllBinaryGameLayerManager* this);

void AllBinaryGameLayerManager_setGameInfo(AllBinaryGameLayerManager* this, GameInfo* gameInfo);

void AllBinaryGameLayerManager_setLayerProcessorList(AllBinaryGameLayerManager* this, BasicArrayList* list);

void AllBinaryGameLayerManager_setPlayerGameInputCompositeInterface(AllBinaryGameLayerManager* this, PlayerGameInputCompositeInterface* playerGameInputCompositeInterface);

PlayerGameInputCompositeInterface* AllBinaryGameLayerManager_getPlayerGameInputCompositeInterface(AllBinaryGameLayerManager* this);
#define AllBinaryGameLayerManager_new3 AllBinaryGameLayerManager_new
#define AllBinaryGameLayerManager_init3 AllBinaryGameLayerManager_init
#ifndef AllBinaryGameLayerManager_getLayerProcessorArray
#define AllBinaryGameLayerManager_getLayerProcessorArray AllBinaryLayerManager_getLayerProcessorArray
#endif
#ifndef AllBinaryGameLayerManager_setLayerProcessorArray
#define AllBinaryGameLayerManager_setLayerProcessorArray AllBinaryLayerManager_setLayerProcessorArray
#endif
#ifndef AllBinaryGameLayerManager_log
#define AllBinaryGameLayerManager_log AllBinaryLayerManager_log
#endif
#ifndef AllBinaryGameLayerManager_append
#define AllBinaryGameLayerManager_append AllBinaryLayerManager_append
#endif
#ifndef AllBinaryGameLayerManager_appendAt
#define AllBinaryGameLayerManager_appendAt AllBinaryLayerManager_appendAt
#endif
#ifndef AllBinaryGameLayerManager_appendProcessors
#define AllBinaryGameLayerManager_appendProcessors AllBinaryLayerManager_appendProcessors
#endif
#ifndef AllBinaryGameLayerManager_remove
#define AllBinaryGameLayerManager_remove AllBinaryLayerManager_remove
#endif
#ifndef AllBinaryGameLayerManager_process
#define AllBinaryGameLayerManager_process AllBinaryLayerManager_process
#endif
#ifndef AllBinaryGameLayerManager_cleanup
#define AllBinaryGameLayerManager_cleanup AllBinaryLayerManager_cleanup
#endif
#ifndef AllBinaryGameLayerManager_contains
#define AllBinaryGameLayerManager_contains LayerManager_contains
#endif
#ifndef AllBinaryGameLayerManager_update
#define AllBinaryGameLayerManager_update LayerManager_update
#endif
#ifndef AllBinaryGameLayerManager_insert
#define AllBinaryGameLayerManager_insert LayerManager_insert
#endif
#ifndef AllBinaryGameLayerManager_append
#define AllBinaryGameLayerManager_append LayerManager_append
#endif
#ifndef AllBinaryGameLayerManager_appendAt
#define AllBinaryGameLayerManager_appendAt LayerManager_appendAt
#endif
#ifndef AllBinaryGameLayerManager_remove
#define AllBinaryGameLayerManager_remove LayerManager_remove
#endif
#ifndef AllBinaryGameLayerManager_getLayerAt
#define AllBinaryGameLayerManager_getLayerAt LayerManager_getLayerAt
#endif
#ifndef AllBinaryGameLayerManager_getSize
#define AllBinaryGameLayerManager_getSize LayerManager_getSize
#endif
#ifndef AllBinaryGameLayerManager_cleanup
#define AllBinaryGameLayerManager_cleanup LayerManager_cleanup
#endif
#ifndef AllBinaryGameLayerManager_paint
#define AllBinaryGameLayerManager_paint LayerManager_paint
#endif
#ifndef AllBinaryGameLayerManager_append
#define AllBinaryGameLayerManager_append LayerManager_append
#endif
#ifndef AllBinaryGameLayerManager_insert
#define AllBinaryGameLayerManager_insert LayerManager_insert
#endif
#ifndef AllBinaryGameLayerManager_remove
#define AllBinaryGameLayerManager_remove LayerManager_remove
#endif
#ifndef AllBinaryGameLayerManager_setViewWindow
#define AllBinaryGameLayerManager_setViewWindow LayerManager_setViewWindow
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllBinaryGameLayerManager_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AllBinaryGameLayerManager_register(void);

#if __has_include("org/allbinary/game/GameInfo.h")
#include "org/allbinary/game/GameInfo.h"
#endif
#if __has_include("org/allbinary/game/input/PlayerGameInputCompositeInterface.h")
#include "org/allbinary/game/input/PlayerGameInputCompositeInterface.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayerManager.h")
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#endif

#endif // ORG_ALLBINARY_GAME_LAYER_ALLBINARYGAMELAYERMANAGER_H
