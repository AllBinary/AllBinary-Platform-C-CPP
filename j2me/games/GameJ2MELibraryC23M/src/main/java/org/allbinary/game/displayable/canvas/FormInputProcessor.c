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
#include "org/allbinary/game/input/Input.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/game/input/InputProcessor.h"
#include "org/allbinary/game/input/PlatformKeyFactory.h"
#include "org/allbinary/game/input/event/DownKeyEventHandler.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/GameKeyEventFactory.h"
#include "org/allbinary/game/input/event/UpGameKeyEventHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"

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

static void FormInputProcessor_initFields(FormInputProcessor* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->gameKeyEventFactory = GameKeyEventFactory_getInstance();
    this->downKeyEventHandler = DownKeyEventHandler_getInstance();
    this->upGameKeyEventHandler = UpGameKeyEventHandler_getInstance();
    this->inputFactory = InputFactory_getInstance();
    this->platformKeyFactory = PlatformKeyFactory_getInstance();
    
}


void FormInputProcessor_init(FormInputProcessor* this, AllBinaryGameCanvas* allBinaryGameCanvas) {
    InputProcessor_init(&this->base);
    FormInputProcessor_initFields(this);
        this->allBinaryGameCanvas = allBinaryGameCanvas;
}

FormInputProcessor* FormInputProcessor_new(AllBinaryGameCanvas* allBinaryGameCanvas) {
    FormInputProcessor* this = calloc(1, sizeof(FormInputProcessor));
    FormInputProcessor_init(this, allBinaryGameCanvas);
    return this;
}


void FormInputProcessor_keyPressedByDevice(FormInputProcessor* this, int32_t keyCode, int32_t deviceId) {
        JAVA_TRY {
            PreLogUtil_put(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->inputFactory->KEY_CODE_LABEL), appendint, keyCode), append, CommonSeps_getInstance()->SPACE), append, this->inputFactory->DEVICE_ID_LABEL), appendint, deviceId), toString), this, this->gameInputStrings->KEY_PRESSED);
            Input* input = InputFactory_getInstanceById(this->inputFactory, keyCode);
            GameKeyEvent* gameKeyEvent = GameKeyEventFactory_getInstanceForInput(this->gameKeyEventFactory, this->allBinaryGameCanvas, input);
            DownKeyEventHandler_fireEventForGameKeyEvent(this->downKeyEventHandler, gameKeyEvent);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->gameInputStrings->ADD_KEY_EVENT, e);
        } JAVA_END_TRY;
}


void FormInputProcessor_keyReleasedByDevice(FormInputProcessor* this, Canvas* canvas, int32_t keyCode, int32_t deviceId) {
        JAVA_TRY {
            Input* input = InputFactory_getInstanceById(this->inputFactory, keyCode);
            if (PlatformKeyFactory_isEnter(this->platformKeyFactory, input)) {
                PreLogUtil_put(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), this->inputFactory->KEY_CODE_LABEL), appendint, keyCode), append, CommonSeps_getInstance()->SPACE), append, this->inputFactory->DEVICE_ID_LABEL), appendint, deviceId), toString), this, this->gameInputStrings->KEY_RELEASED);
                GameKey* gameKey = GameKeyFactory_getInstance()->KEY_NUM0;
                GameKeyEventSourceInterface* gameKeyEventSourceInterface = ((GameKeyEventSourceInterface*) canvas);
                GameKeyEvent* gameKeyEvent = GameKeyEventFactory_getInstanceForInput(this->gameKeyEventFactory, gameKeyEventSourceInterface, gameKey);
                UpGameKeyEventHandler_fireEvent(this->upGameKeyEventHandler, gameKeyEvent);
                JAVA_CALL(UpGameKeyEventHandler_getInstanceForDevice(this->upGameKeyEventHandler, deviceId), fireEvent, gameKeyEvent);
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->gameInputStrings->ADD_KEY_EVENT, e);
        } JAVA_END_TRY;
}

