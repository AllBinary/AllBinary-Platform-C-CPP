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
// package org.allbinary.input.automation.robot

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/image/BufferedImage.h"
// #include "javax/help/HelpSet.h"
#include "org/allbinary/input/automation/AbstractInputRobot.h"
#include "org/allbinary/input/automation/PointFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/input/automation/robot/InputRobotInterface.h"

typedef struct NullInputRobot NullInputRobot;
struct NullInputRobot {
    AbstractInputRobot base;
    InputRobotInterface InputRobotInterface_interface;
    LogUtil* logUtil;
};

const char* NullInputRobot_LIBRARY_NAME = "null";
const char* NullInputRobot_NAME = "NULL";

NullInputRobot* NullInputRobot_new(void);

void NullInputRobot_init(NullInputRobot* this);
const char* NullInputRobot_getName(NullInputRobot* this);
HelpSet* NullInputRobot_getHelpSet(NullInputRobot* this);
Point* NullInputRobot_getMousePoint(NullInputRobot* this);
void NullInputRobot_keyPress(NullInputRobot* this, int32_t keycode);
void NullInputRobot_keyRelease(NullInputRobot* this, int32_t keycode);
void NullInputRobot_mouseMove(NullInputRobot* this, int32_t x, int32_t y);
void NullInputRobot_mousePress(NullInputRobot* this, int32_t buttons);
void NullInputRobot_mouseRelease(NullInputRobot* this, int32_t buttons);
BufferedImage* NullInputRobot_createScreenCapture(NullInputRobot* this, Rectangle* screenRect);
void NullInputRobot_delay(NullInputRobot* this, int32_t ms);
int32_t NullInputRobot_getAutoDelay(NullInputRobot* this);
Color* NullInputRobot_getPixelColor(NullInputRobot* this, int32_t x, int32_t y);
bool NullInputRobot_isAutoWaitForIdle(NullInputRobot* this);
void NullInputRobot_mouseWheel(NullInputRobot* this, int32_t wheelAmt);
void NullInputRobot_setAutoDelay(NullInputRobot* this, int32_t ms);
void NullInputRobot_setAutoWaitForIdle(NullInputRobot* this, bool isOn);
const char* NullInputRobot_toString(NullInputRobot* this);
void NullInputRobot_waitForIdle(NullInputRobot* this);
void NullInputRobot_mouseMove(NullInputRobot* this, Point* point);
void NullInputRobot_mouseMoveToTarget(NullInputRobot* this, Rectangle* rectangle);
void NullInputRobot_mouseMoveToTarget(NullInputRobot* this, Rectangle* rectangle, int32_t x, int32_t y);

static void NullInputRobot_initFields(NullInputRobot* this) {
    this->logUtil = LogUtil_getInstance();
}


void NullInputRobot_init(NullInputRobot* this) {
        AbstractInputRobot_init(&this->base, nullptr);
        NullInputRobot_initFields(this);
}

NullInputRobot* NullInputRobot_new(void) {
    NullInputRobot* this = calloc(1, sizeof(NullInputRobot));
    NullInputRobot_init(this);
    return this;
}


const char* NullInputRobot_getName(NullInputRobot* this) {
        return NullInputRobot_NAME;
}


HelpSet* NullInputRobot_getHelpSet(NullInputRobot* this) {
        return nullptr;
}


Point* NullInputRobot_getMousePoint(NullInputRobot* this) {
        return PointFactory_getInstance(0, 0);
}


void NullInputRobot_keyPress(NullInputRobot* this, int32_t keycode) {
        LogUtil_putF(this->logUtil, java_concat("KeyCode: ", java_string_of(keycode)), this, "keyPress");
}


void NullInputRobot_keyRelease(NullInputRobot* this, int32_t keycode) {
        LogUtil_putF(this->logUtil, java_concat("KeyCode: ", java_string_of(keycode)), this, "keyRelease");
}


void NullInputRobot_mouseMove(NullInputRobot* this, int32_t x, int32_t y) {
        LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat("X: ", java_string_of(x)), " Y: "), java_string_of(y)), this, "mouseMove");
}


void NullInputRobot_mousePress(NullInputRobot* this, int32_t buttons) {
        LogUtil_putF(this->logUtil, java_concat("Buttons: ", java_string_of(buttons)), this, "mousePress");
}


void NullInputRobot_mouseRelease(NullInputRobot* this, int32_t buttons) {
        LogUtil_putF(this->logUtil, java_concat("Buttons: ", java_string_of(buttons)), this, "mouseRelease");
}


BufferedImage* NullInputRobot_createScreenCapture(NullInputRobot* this, Rectangle* screenRect) {
        return nullptr;
}


void NullInputRobot_delay(NullInputRobot* this, int32_t ms) {
}


int32_t NullInputRobot_getAutoDelay(NullInputRobot* this) {
        return -1;
}


Color* NullInputRobot_getPixelColor(NullInputRobot* this, int32_t x, int32_t y) {
        return nullptr;
}


bool NullInputRobot_isAutoWaitForIdle(NullInputRobot* this) {
        return false;
}


void NullInputRobot_mouseWheel(NullInputRobot* this, int32_t wheelAmt) {
}


void NullInputRobot_setAutoDelay(NullInputRobot* this, int32_t ms) {
}


void NullInputRobot_setAutoWaitForIdle(NullInputRobot* this, bool isOn) {
}


const char* NullInputRobot_toString(NullInputRobot* this) {
        return "DirectXWindowsInputRobot";
}


void NullInputRobot_waitForIdle(NullInputRobot* this) {
}


// Java overloaded method: C needs a different name
void NullInputRobot_mouseMove(NullInputRobot* this, Point* point) {
        AbstractInputRobot_mouseMove((&this->base), point);
}


// throws Exception
void NullInputRobot_mouseMoveToTarget(NullInputRobot* this, Rectangle* rectangle) {
        AbstractInputRobot_mouseMoveToTarget((&this->base), rectangle);
}


// throws Exception
// Java overloaded method: C needs a different name
void NullInputRobot_mouseMoveToTarget(NullInputRobot* this, Rectangle* rectangle, int32_t x, int32_t y) {
        AbstractInputRobot_mouseMoveToTarget((&this->base), rectangle, x, y);
}

