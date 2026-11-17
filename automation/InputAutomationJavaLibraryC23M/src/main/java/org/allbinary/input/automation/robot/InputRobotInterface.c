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

typedef struct InputRobotInterface InputRobotInterface;
struct InputRobotInterface {
    const char* (*getName)(void* this);
    HelpSet* (*getHelpSet)(void* this);
    BufferedImage* (*createScreenCapture)(void* this, Rectangle* screenRect);
    void (*delay)(void* this, int32_t ms);
    int32_t (*getAutoDelay)(void* this);
    Color* (*getPixelColor)(void* this, int32_t x, int32_t y);
    bool (*isAutoWaitForIdle)(void* this);
    void (*keyPress)(void* this, int32_t keycode);
    void (*keyRelease)(void* this, int32_t keycode);
    Point* (*getMousePoint)(void* this);
    void (*mouseMove)(void* this, int32_t x, int32_t y);
    void (*mousePress)(void* this, int32_t buttons);
    void (*mouseRelease)(void* this, int32_t buttons);
    void (*mouseWheel)(void* this, int32_t wheelAmt);
    void (*setAutoDelay)(void* this, int32_t ms);
    void (*setAutoWaitForIdle)(void* this, bool isOn);
    const char* (*toString)(void* this);
    void (*waitForIdle)(void* this);
    void (*mouseMove)(void* this, Point* point);
    void (*mouseMoveToTarget)(void* this, Rectangle* rectangle);
    void (*mouseMoveToTarget)(void* this, Rectangle* rectangle, int32_t x, int32_t y);
};


