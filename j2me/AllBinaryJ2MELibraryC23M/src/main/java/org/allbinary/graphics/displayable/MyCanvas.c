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
// package org.allbinary.graphics.displayable

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Canvas.h"
// #include "javax/microedition/lcdui/Command.h"
// #include "javax/microedition/lcdui/CommandListener.h"
// #include "javax/microedition/lcdui/Graphics.h"
// #include "javax/microedition/lcdui/NullCommandListener.h"
#include "org/allbinary/graphics/displayable/command/MyCommandInterface.h"
#include "org/allbinary/graphics/displayable/command/MyCommandsFactory.h"
#include "org/allbinary/input/TouchJ2ME.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/media/audio/Sound.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABStack.h"
#include "org/allbinary/graphics/displayable/DisplayableInterface.h"

typedef struct MyCanvas MyCanvas;
struct MyCanvas {
    Canvas base;
    DisplayableInterface DisplayableInterface_interface;
    MyCommandInterface MyCommandInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    CanvasStrings* canvasStrings;
    StringUtil* stringUtil;
    DisplayInfoSingleton* displayInfo;
    const char* name;
    BasicArrayList* childNameList;
    ABStack* commandStack;
    CommandListener* commandListener;
    bool paused;
    TouchJ2ME* touchME;
};


MyCanvas* MyCanvas_new(const char* name, BasicArrayList* childNameList);

void MyCanvas_init(MyCanvas* this, const char* name, BasicArrayList* childNameList);
int32_t MyCanvas_getWidth(MyCanvas* this);
int32_t MyCanvas_getHeight(MyCanvas* this);
void MyCanvas_setFullScreenMode(MyCanvas* this, bool mode);
void MyCanvas_sizeChanged(MyCanvas* this, int32_t w, int32_t h);
ABStack* MyCanvas_getCommandStack(MyCanvas* this);
bool MyCanvas_isCommand(MyCanvas* this, Command* command);
void MyCanvas_addCommand(MyCanvas* this, Command* command);
void MyCanvas_removeCommand(MyCanvas* this, Command* command);
void MyCanvas_removeAllCommands(MyCanvas* this);
void MyCanvas_setCommandListener(MyCanvas* this, CommandListener* l);
CommandListener* MyCanvas_getCustomCommandListener(MyCanvas* this);
bool MyCanvas_isPaused(MyCanvas* this);
void MyCanvas_removePauseCommand(MyCanvas* this);
void MyCanvas_pause(MyCanvas* this);
void MyCanvas_unPause(MyCanvas* this);
void MyCanvas_process(MyCanvas* this);
void MyCanvas_paint(MyCanvas* this, Graphics* graphics);
void MyCanvas_draw(MyCanvas* this, Graphics* graphics);
bool MyCanvas_hasChild(MyCanvas* this, MyCanvas* displayable);
void MyCanvas_destroy(MyCanvas* this);
void MyCanvas_setPaused(MyCanvas* this, bool isPaused);
void MyCanvas_keyPressedByDevice(MyCanvas* this, int32_t keyCode, int32_t deviceId);
void MyCanvas_keyRepeatedByDevice(MyCanvas* this, int32_t keyCode, int32_t deviceId);
void MyCanvas_keyReleasedByDevice(MyCanvas* this, int32_t keyCode, int32_t deviceId);
void MyCanvas_pointerDragged(MyCanvas* this, int32_t x, int32_t y);
void MyCanvas_pointerPressed(MyCanvas* this, int32_t x, int32_t y);
void MyCanvas_pointerReleased(MyCanvas* this, int32_t x, int32_t y);
void MyCanvas_nextSong(MyCanvas* this, Sound* nextSongSound, int32_t leftVolume, int32_t rightVolume);

static void MyCanvas_initFields(MyCanvas* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->canvasStrings = CanvasStrings_getInstance();
    this->stringUtil = StringUtil_getInstance();
    this->displayInfo = DisplayInfoSingleton_getInstance();
    
    
    
    this->commandListener = NullCommandListener_NULL_COMMAND_LISTENER;
    this->paused = false;
    this->touchME = TouchJ2ME_new();
}


void MyCanvas_init(MyCanvas* this, const char* name, BasicArrayList* childNameList) {
    Canvas_init(&this->base);
    MyCanvas_initFields(this);
        LogUtil_putF(this->logUtil, this->commonStrings->CONSTRUCTOR, this, this->commonStrings->CONSTRUCTOR);
        DisplayInfoSingleton_update(this->displayInfo, this, this->canvasStrings->CONSTRUCTOR);
        this->name = name;
        this->childNameList = childNameList;
        this->commandStack = StdUtil_createStack(StdUtil_getInstance());
}

MyCanvas* MyCanvas_new(const char* name, BasicArrayList* childNameList) {
    MyCanvas* this = calloc(1, sizeof(MyCanvas));
    MyCanvas_init(this, name, childNameList);
    return this;
}


int32_t MyCanvas_getWidth(MyCanvas* this) {
        return Canvas_getWidth((&this->base));
}


int32_t MyCanvas_getHeight(MyCanvas* this) {
        return Canvas_getHeight((&this->base));
}


void MyCanvas_setFullScreenMode(MyCanvas* this, bool mode) {
        Canvas_setFullScreenMode((&this->base), mode);
        DisplayInfoSingleton_update(this->displayInfo, this, this->canvasStrings->SET_FULL_SCREEN_MODE);
}


void MyCanvas_sizeChanged(MyCanvas* this, int32_t w, int32_t h) {
        DisplayInfoSingleton_update(this->displayInfo, this, this->canvasStrings->SIZE_CHANGED);
}


ABStack* MyCanvas_getCommandStack(MyCanvas* this) {
        return this->commandStack;
}


// synchronized
bool MyCanvas_isCommand(MyCanvas* this, Command* command) {
        return ABStack_contains(this->commandStack, command);
}


// synchronized
void MyCanvas_addCommand(MyCanvas* this, Command* command) {
        if (!ABStack_contains(this->commandStack, command)) {
            ABStack_push(this->commandStack, command);
            Canvas_addCommand((&this->base), command);
        }
}


// synchronized
void MyCanvas_removeCommand(MyCanvas* this, Command* command) {
        ABStack_removeElement(this->commandStack, command);
        Canvas_removeCommand((&this->base), command);
}


// synchronized
void MyCanvas_removeAllCommands(MyCanvas* this) {
        int32_t size = ABStack_size(this->commandStack);
        for (int32_t index = 0; index < size; index++) {
            Canvas_removeCommand((&this->base), ((Command*) ABStack_pop(this->commandStack)));
        }
}


void MyCanvas_setCommandListener(MyCanvas* this, CommandListener* l) {
        Canvas_setCommandListener((&this->base), l);
        this->commandListener = l;
}


CommandListener* MyCanvas_getCustomCommandListener(MyCanvas* this) {
        return this->commandListener;
}


// synchronized
bool MyCanvas_isPaused(MyCanvas* this) {
        return this->paused;
}


void MyCanvas_removePauseCommand(MyCanvas* this) {
        MyCanvas_removeCommand(this, MyCommandsFactory_getInstance()->PAUSE_COMMAND);
}


// synchronized
void MyCanvas_pause(MyCanvas* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->canvasStrings->PAUSE);
        MyCanvas_removePauseCommand(this);
        MyCanvas_addCommand(this, MyCommandsFactory_getInstance()->RESUME_COMMAND);
        MyCanvas_setPaused(this, true);
}


// synchronized
void MyCanvas_unPause(MyCanvas* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->canvasStrings->UN_PAUSE);
        MyCanvas_removeCommand(this, MyCommandsFactory_getInstance()->RESUME_COMMAND);
        MyCanvas_addCommand(this, MyCommandsFactory_getInstance()->PAUSE_COMMAND);
        MyCanvas_setPaused(this, false);
}


// throws Exception
void MyCanvas_process(MyCanvas* this) {
        DisplayInfoSingleton_process(this->displayInfo);
}


void MyCanvas_paint(MyCanvas* this, Graphics* graphics) {
}


void MyCanvas_draw(MyCanvas* this, Graphics* graphics) {
}


bool MyCanvas_hasChild(MyCanvas* this, MyCanvas* displayable) {
        return BasicArrayList_contains(this->childNameList, displayable->name);
}


void MyCanvas_destroy(MyCanvas* this) {
        LogUtil_putF(this->logUtil, "Destroyed MyCanvas", this, "destroy");
}


void MyCanvas_setPaused(MyCanvas* this, bool isPaused) {
        this->paused = isPaused;
}


void MyCanvas_keyPressedByDevice(MyCanvas* this, int32_t keyCode, int32_t deviceId) {
}


void MyCanvas_keyRepeatedByDevice(MyCanvas* this, int32_t keyCode, int32_t deviceId) {
}


void MyCanvas_keyReleasedByDevice(MyCanvas* this, int32_t keyCode, int32_t deviceId) {
}


void MyCanvas_pointerDragged(MyCanvas* this, int32_t x, int32_t y) {
        TouchJ2ME_pointerDragged(this->touchME, x, y);
}


void MyCanvas_pointerPressed(MyCanvas* this, int32_t x, int32_t y) {
        TouchJ2ME_pointerPressed(this->touchME, x, y);
}


void MyCanvas_pointerReleased(MyCanvas* this, int32_t x, int32_t y) {
        TouchJ2ME_pointerReleased(this->touchME, x, y);
}


void MyCanvas_nextSong(MyCanvas* this, Sound* nextSongSound, int32_t leftVolume, int32_t rightVolume) {
}

