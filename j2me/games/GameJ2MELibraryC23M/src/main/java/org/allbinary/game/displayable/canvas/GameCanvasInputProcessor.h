#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASINPUTPROCESSOR_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASINPUTPROCESSOR_H
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
typedef struct AllBinaryGameCanvas AllBinaryGameCanvas;
typedef struct Canvas Canvas;
typedef struct GameKey GameKey;
typedef struct GameKeyEventSourceInterface GameKeyEventSourceInterface;
typedef struct GameKeyFactory GameKeyFactory;
typedef struct InputProcessor InputProcessor;
typedef struct PlatformInputMappingFactory PlatformInputMappingFactory;
typedef struct DownGameKeyEventHandler DownGameKeyEventHandler;
typedef struct DownKeyEventHandler DownKeyEventHandler;
typedef struct GameKeyEvent GameKeyEvent;
typedef struct GameKeyEventFactory GameKeyEventFactory;
typedef struct UpGameKeyEventHandler UpGameKeyEventHandler;
typedef struct InputToGameKeyMapping InputToGameKeyMapping;
typedef struct LogUtil LogUtil;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct StringMaker StringMaker;
#if __has_include("org/allbinary/game/input/GameKey.h")
#include "org/allbinary/game/input/GameKey.h"
#endif
#include "org/allbinary/game/input/InputProcessor.h"
#if __has_include("org/allbinary/game/input/event/DownGameKeyEventHandler.h")
#include "org/allbinary/game/input/event/DownGameKeyEventHandler.h"
#endif
#if __has_include("org/allbinary/game/input/event/DownKeyEventHandler.h")
#include "org/allbinary/game/input/event/DownKeyEventHandler.h"
#endif
#if __has_include("org/allbinary/game/input/event/GameKeyEventFactory.h")
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#endif
#if __has_include("org/allbinary/game/input/event/UpGameKeyEventHandler.h")
#include "org/allbinary/game/input/event/UpGameKeyEventHandler.h"
#endif
#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif
#include "java/lang/Integer.h"
#if __has_include("org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h")
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#endif

typedef struct GameCanvasInputProcessor GameCanvasInputProcessor;
struct GameCanvasInputProcessor {
    InputProcessor base;
    LogUtil* logUtil;
    AllBinaryGameCanvas* allBinaryGameCanvas;
    DownGameKeyEventHandler* downGameKeyEventHandler;
    UpGameKeyEventHandler* upGameKeyEventHandler;
    DownKeyEventHandler* downKeyEventHandler;
    SmallIntegerSingletonFactory* smallIntegerSingletonFactory;
    InputToGameKeyMapping* inputToGameKeyMapping;
    GameKey* NONE;
    GameKeyEventFactory* gameKeyEventFactory;
};


GameCanvasInputProcessor* GameCanvasInputProcessor_new(AllBinaryGameCanvas* allBinaryGameCanvas);

void GameCanvasInputProcessor_init(GameCanvasInputProcessor* this, AllBinaryGameCanvas* allBinaryGameCanvas);

void GameCanvasInputProcessor_keyPressedByDevice(GameCanvasInputProcessor* this, int32_t keyCode, int32_t deviceId);

void GameCanvasInputProcessor_keyReleasedByDevice(GameCanvasInputProcessor* this, Canvas* canvas, int32_t keyCode, int32_t deviceId);

#define GameCanvasInputProcessor_new1 GameCanvasInputProcessor_new
#define GameCanvasInputProcessor_init1 GameCanvasInputProcessor_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameCanvasInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameCanvasInputProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASINPUTPROCESSOR_H
