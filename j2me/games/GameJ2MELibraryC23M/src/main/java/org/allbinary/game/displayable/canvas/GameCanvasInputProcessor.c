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
// #include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/game/input/GameKeyEventSourceInterface.h"
#include "org/allbinary/game/input/GameKeyFactory.h"
#include "org/allbinary/game/input/InputProcessor.h"
#include "org/allbinary/game/input/PlatformInputMappingFactory.h"
#include "org/allbinary/game/input/event/DownGameKeyEventHandler.h"
#include "org/allbinary/game/input/event/DownKeyEventHandler.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#include "org/allbinary/game/input/event/UpGameKeyEventHandler.h"
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"

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
static void GameCanvasInputProcessor_removeGameKeyEvent(GameCanvasInputProcessor* this, Canvas* canvas, int32_t keyCode, int32_t deviceId, bool repeated);

static void GameCanvasInputProcessor_initFields(GameCanvasInputProcessor* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->downGameKeyEventHandler = DownGameKeyEventHandler_getInstance();
    this->upGameKeyEventHandler = UpGameKeyEventHandler_getInstance();
    this->downKeyEventHandler = DownKeyEventHandler_getInstance();
    this->smallIntegerSingletonFactory = SmallIntegerSingletonFactory_getInstance();
    this->inputToGameKeyMapping = JAVA_CALL(PlatformInputMappingFactory_getPersistentInputMappingInstance(PlatformInputMappingFactory_getInstance()), getInputMapping);
    this->NONE = GameKeyFactory_getInstance()->NONE;
    this->gameKeyEventFactory = GameKeyEventFactory_getInstance();
}


void GameCanvasInputProcessor_init(GameCanvasInputProcessor* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
    InputProcessor_init(&this->base);
    GameCanvasInputProcessor_initFields(this);
        this->allBinaryGameCanvas = allBinaryGameCanvas;
        InputToGameKeyMapping_init(this->inputToGameKeyMapping, this->allBinaryGameCanvas);
}

GameCanvasInputProcessor* GameCanvasInputProcessor_new(AllBinaryGameCanvas* allBinaryGameCanvas) {
    GameCanvasInputProcessor* this = calloc(1, sizeof(GameCanvasInputProcessor));
    GameCanvasInputProcessor_init(this, allBinaryGameCanvas);
    return this;
}


void GameCanvasInputProcessor_keyPressedByDevice(GameCanvasInputProcessor* this, int32_t keyCode, int32_t deviceId) {
        JAVA_TRY {
            GameKey* gameKey = InputToGameKeyMapping_getInstanceForCanvas(this->inputToGameKeyMapping, this->allBinaryGameCanvas, keyCode);
            if (gameKey != this->NONE) {
                GameKeyEvent* gameKeyEvent = GameKeyEventFactory_getInstanceForInput(this->gameKeyEventFactory, this->allBinaryGameCanvas, gameKey);
                DownGameKeyEventHandler_fireEvent(this->downGameKeyEventHandler, gameKeyEvent);
                JAVA_CALL(DownGameKeyEventHandler_getInstanceForDevice(this->downGameKeyEventHandler, deviceId), fireEvent, gameKeyEvent);
            } else {
                LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->gameInputStrings->NO_KEY), appendint, keyCode), toString), this, this->gameInputStrings->ADD_KEY_EVENT);
            }
            int32_t keyCodeAsInteger = SmallIntegerSingletonFactory_getAtNoThrow(this->smallIntegerSingletonFactory, keyCode);
            DownKeyEventHandler_fireEventI(this->downKeyEventHandler, keyCodeAsInteger);
            JAVA_CALL(DownKeyEventHandler_getInstanceForDevice(this->downKeyEventHandler, deviceId), fireEventI, keyCodeAsInteger);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, "Key Event Error", this, this->gameInputStrings->ADD_KEY_EVENT, e);
        } JAVA_END_TRY;
}


void GameCanvasInputProcessor_keyReleasedByDevice(GameCanvasInputProcessor* this, Canvas* canvas, int32_t keyCode, int32_t deviceId) {
        GameCanvasInputProcessor_removeGameKeyEvent(this, canvas, keyCode, deviceId, false);
}


static void GameCanvasInputProcessor_removeGameKeyEvent(GameCanvasInputProcessor* this, Canvas* canvas, int32_t keyCode, int32_t deviceId, bool repeated) {
        JAVA_TRY {
            GameKey* gameKey = InputToGameKeyMapping_getInstanceForCanvas(this->inputToGameKeyMapping, canvas, keyCode);
            if (gameKey != this->NONE) {
                GameKeyEventSourceInterface* gameKeyEventSourceInterface = ((GameKeyEventSourceInterface*) canvas);
                GameKeyEvent* gameKeyEvent = GameKeyEventFactory_getInstanceForInput(this->gameKeyEventFactory, gameKeyEventSourceInterface, gameKey);
                UpGameKeyEventHandler_fireEvent(this->upGameKeyEventHandler, gameKeyEvent);
                JAVA_CALL(UpGameKeyEventHandler_getInstanceForDevice(this->upGameKeyEventHandler, deviceId), fireEvent, gameKeyEvent);
            } else {
                LogUtil_putF(this->logUtil, JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->gameInputStrings->NO_KEY), appendint, keyCode), toString), this, this->gameInputStrings->REMOVE_KEY_EVENT);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, "Key Event Error", this, this->gameInputStrings->REMOVE_KEY_EVENT, e);
        } JAVA_END_TRY;
}

