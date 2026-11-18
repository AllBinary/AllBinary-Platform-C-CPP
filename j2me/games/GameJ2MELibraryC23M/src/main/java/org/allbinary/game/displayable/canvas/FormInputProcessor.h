#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_FORMINPUTPROCESSOR_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_FORMINPUTPROCESSOR_H
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
typedef struct Input Input;
typedef struct InputFactory InputFactory;
typedef struct InputProcessor InputProcessor;
typedef struct PlatformKeyFactory PlatformKeyFactory;
typedef struct DownKeyEventHandler DownKeyEventHandler;
typedef struct GameKeyEvent GameKeyEvent;
typedef struct GameKeyEventFactory GameKeyEventFactory;
typedef struct UpGameKeyEventHandler UpGameKeyEventHandler;
typedef struct LogUtil LogUtil;
typedef struct PreLogUtil PreLogUtil;
typedef struct StringMaker StringMaker;
typedef struct CommonSeps CommonSeps;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/game/input/InputFactory.h")
#include "org/allbinary/game/input/InputFactory.h"
#endif
#include "org/allbinary/game/input/InputProcessor.h"
#if __has_include("org/allbinary/game/input/PlatformKeyFactory.h")
#include "org/allbinary/game/input/PlatformKeyFactory.h"
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
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h")
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#endif

typedef struct FormInputProcessor FormInputProcessor;
struct FormInputProcessor {
    InputProcessor base;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    GameKeyEventFactory* gameKeyEventFactory;
    DownKeyEventHandler* downKeyEventHandler;
    UpGameKeyEventHandler* upGameKeyEventHandler;
    InputFactory* inputFactory;
    PlatformKeyFactory* platformKeyFactory;
    AllBinaryGameCanvas* allBinaryGameCanvas;
};


FormInputProcessor* FormInputProcessor_new(AllBinaryGameCanvas* allBinaryGameCanvas);

void FormInputProcessor_init(FormInputProcessor* this, AllBinaryGameCanvas* allBinaryGameCanvas);

void FormInputProcessor_keyPressedByDevice(FormInputProcessor* this, int32_t keyCode, int32_t deviceId);

void FormInputProcessor_keyReleasedByDevice(FormInputProcessor* this, Canvas* canvas, int32_t keyCode, int32_t deviceId);
#define FormInputProcessor_new1 FormInputProcessor_new
#define FormInputProcessor_init1 FormInputProcessor_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void FormInputProcessor_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void FormInputProcessor_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_FORMINPUTPROCESSOR_H
