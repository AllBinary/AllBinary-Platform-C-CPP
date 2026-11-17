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
#include "org/allbinary/input/automation/PointHelper.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/input/automation/robot/InputRobotInterface.h"

typedef struct InputRobot InputRobot;
struct InputRobot {
    InputRobotInterface InputRobotInterface_interface;
    LogUtil* logUtil;
    Robot* robot;
};

const char* InputRobot_NAME = "Java Robot";

InputRobot* InputRobot_new(GraphicsDevice* graphicsDevice);

void InputRobot_init(InputRobot* this, GraphicsDevice* graphicsDevice);
const char* InputRobot_getName(InputRobot* this);
HelpSet* InputRobot_getHelpSet(InputRobot* this);
Point* InputRobot_getMousePoint(InputRobot* this);
void InputRobot_mouseMoveToTarget(InputRobot* this, Rectangle* rectangle, int32_t x, int32_t y);
void InputRobot_mouseMove(InputRobot* this, Point* point);
void InputRobot_mouseMove(InputRobot* this, int32_t x, int32_t y);
void InputRobot_mouseMoveToTarget(InputRobot* this, Rectangle* rectangle);
BufferedImage* InputRobot_createScreenCapture(InputRobot* this, Rectangle* screenRect);
void InputRobot_delay(InputRobot* this, int32_t ms);
int32_t InputRobot_getAutoDelay(InputRobot* this);
Color* InputRobot_getPixelColor(InputRobot* this, int32_t x, int32_t y);
bool InputRobot_isAutoWaitForIdle(InputRobot* this);
void InputRobot_keyPress(InputRobot* this, int32_t keycode);
void InputRobot_keyRelease(InputRobot* this, int32_t keycode);
void InputRobot_mouseMove(InputRobot* this, int32_t x, int32_t y);
void InputRobot_mousePress(InputRobot* this, int32_t buttons);
void InputRobot_mouseRelease(InputRobot* this, int32_t buttons);
void InputRobot_mouseWheel(InputRobot* this, int32_t wheelAmt);
void InputRobot_setAutoDelay(InputRobot* this, int32_t ms);
void InputRobot_setAutoWaitForIdle(InputRobot* this, bool isOn);
const char* InputRobot_toString(InputRobot* this);
void InputRobot_waitForIdle(InputRobot* this);
void InputRobot_on(InputRobot* this);
void InputRobot_off(InputRobot* this);

static void InputRobot_initFields(InputRobot* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void InputRobot_init(InputRobot* this, GraphicsDevice* graphicsDevice) {
    InputRobot_initFields(this);
        this->robot = Robot_new(graphicsDevice);
}

InputRobot* InputRobot_new(GraphicsDevice* graphicsDevice) {
    InputRobot* this = calloc(1, sizeof(InputRobot));
    InputRobot_init(this, graphicsDevice);
    return this;
}


const char* InputRobot_getName(InputRobot* this) {
        return InputRobot_NAME;
}


HelpSet* InputRobot_getHelpSet(InputRobot* this) {
        return nullptr;
}


Point* InputRobot_getMousePoint(InputRobot* this) {
        Point* point = JAVA_CALL(MouseInfo_getPointerInfo(), getLocation);
        return point;
}


// throws Exception
void InputRobot_mouseMoveToTarget(InputRobot* this, Rectangle* rectangle, int32_t x, int32_t y) {
        Point* point = PointHelper_getCenterPoint(rectangle);
        Robot_mouseMove(this->robot, point->x + x, point->y + y);
        const char* message = JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Moved Mouse To: x: "), appendint, ((int32_t) point->x)), append, " y: "), appendint, ((int32_t) point->y)), append, " in the middle of: "), append, StringUtil_toString(StringUtil_getInstance(), rectangle)), toString);
        LogUtil_putF(this->logUtil, message, this, "moveMouseToTarget");
}


void InputRobot_mouseMove(InputRobot* this, Point* point) {
        InputRobot_mouseMove(this, point->x, point->y);
}


// Java overloaded method: C needs a different name
void InputRobot_mouseMove(InputRobot* this, int32_t x, int32_t y) {
        Robot_mouseMove(this->robot, x, y);
        const char* message = JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Moved Mouse To: x: "), appendint, x), append, " y: "), appendint, y), toString);
        LogUtil_putF(this->logUtil, message, this, "moveMouse");
}


// throws Exception
// Java overloaded method: C needs a different name
void InputRobot_mouseMoveToTarget(InputRobot* this, Rectangle* rectangle) {
        InputRobot_mouseMoveToTarget(this, rectangle, 0, 0);
}


BufferedImage* InputRobot_createScreenCapture(InputRobot* this, Rectangle* screenRect) {
        return Robot_createScreenCapture(this->robot, screenRect);
}


void InputRobot_delay(InputRobot* this, int32_t ms) {
        Robot_delay(this->robot, ms);
}


int32_t InputRobot_getAutoDelay(InputRobot* this) {
        return Robot_getAutoDelay(this->robot);
}


Color* InputRobot_getPixelColor(InputRobot* this, int32_t x, int32_t y) {
        return Robot_getPixelColor(this->robot, x, y);
}


bool InputRobot_isAutoWaitForIdle(InputRobot* this) {
        return Robot_isAutoWaitForIdle(this->robot);
}


void InputRobot_keyPress(InputRobot* this, int32_t keycode) {
        Robot_keyPress(this->robot, keycode);
}


void InputRobot_keyRelease(InputRobot* this, int32_t keycode) {
        Robot_keyRelease(this->robot, keycode);
}


// Java overloaded method: C needs a different name
void InputRobot_mouseMove(InputRobot* this, int32_t x, int32_t y) {
        Robot_mouseMove(this->robot, x, y);
}


void InputRobot_mousePress(InputRobot* this, int32_t buttons) {
        Robot_mousePress(this->robot, buttons);
}


void InputRobot_mouseRelease(InputRobot* this, int32_t buttons) {
        Robot_mouseRelease(this->robot, buttons);
}


void InputRobot_mouseWheel(InputRobot* this, int32_t wheelAmt) {
        Robot_mouseWheel(this->robot, wheelAmt);
}


void InputRobot_setAutoDelay(InputRobot* this, int32_t ms) {
        Robot_setAutoDelay(this->robot, ms);
}


void InputRobot_setAutoWaitForIdle(InputRobot* this, bool isOn) {
        Robot_setAutoWaitForIdle(this->robot, isOn);
}


const char* InputRobot_toString(InputRobot* this) {
        return Robot_toString(this->robot);
}


void InputRobot_waitForIdle(InputRobot* this) {
        Robot_waitForIdle(this->robot);
}


void InputRobot_on(InputRobot* this) {
}


void InputRobot_off(InputRobot* this) {
}

