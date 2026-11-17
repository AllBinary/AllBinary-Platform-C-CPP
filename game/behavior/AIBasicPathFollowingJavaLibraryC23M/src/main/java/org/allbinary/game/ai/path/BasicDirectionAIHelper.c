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
// package org.allbinary.game.ai.path

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Canvas.h"
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/direction/DirectionFactory.h"
#include "org/allbinary/math/AngleIncrementInfo.h"
#include "org/allbinary/math/AngleInfo.h"

typedef struct BasicDirectionAIHelper BasicDirectionAIHelper;
struct BasicDirectionAIHelper {
    const char* name;
    AngleInfo* angleInfo;
};


BasicDirectionAIHelper* BasicDirectionAIHelper_new(const char* name, AngleInfo* angleInfo);

void BasicDirectionAIHelper_init(BasicDirectionAIHelper* this, const char* name, AngleInfo* angleInfo);
static int32_t BasicDirectionAIHelper_turnAI(BasicDirectionAIHelper* this, int32_t frame);
static int32_t BasicDirectionAIHelper_getAIKeyPressed(BasicDirectionAIHelper* this, int32_t frame);
int32_t BasicDirectionAIHelper_getAIKeyPressedFromDirection(BasicDirectionAIHelper* this, Direction* geographicMapDirectionData);
AngleInfo* BasicDirectionAIHelper_getAngleInfoP(BasicDirectionAIHelper* this);
const char* BasicDirectionAIHelper_getName(BasicDirectionAIHelper* this);

static void BasicDirectionAIHelper_initFields(BasicDirectionAIHelper* this) {
    
    
}


void BasicDirectionAIHelper_init(BasicDirectionAIHelper* this, const char* name, AngleInfo* angleInfo) {
    BasicDirectionAIHelper_initFields(this);
        this->name = name;
        this->angleInfo = angleInfo;
}

BasicDirectionAIHelper* BasicDirectionAIHelper_new(const char* name, AngleInfo* angleInfo) {
    BasicDirectionAIHelper* this = calloc(1, sizeof(BasicDirectionAIHelper));
    BasicDirectionAIHelper_init(this, name, angleInfo);
    return this;
}


static int32_t BasicDirectionAIHelper_turnAI(BasicDirectionAIHelper* this, int32_t frame) {
        int32_t keyDirection = -1;
        int32_t directionAngle = JAVA_CALL(AngleInfo_getAngleIncrementInfo(this->angleInfo), getFrameAngle, frame);
        int16_t angle = AngleInfo_getAngle(this->angleInfo);
        int32_t degrees = ((directionAngle - ((int32_t) angle)) < 0 ? -(directionAngle - ((int32_t) angle)) : (directionAngle - ((int32_t) angle)));
        if (degrees < 180) {
            if (((int32_t) angle) > directionAngle) {
                keyDirection = Canvas_LEFT;
            } else if (((int32_t) angle) < directionAngle) {
                keyDirection = Canvas_RIGHT;
            }
        } else {
            if (((int32_t) angle) > directionAngle) {
                keyDirection = Canvas_RIGHT;
            } else if (((int32_t) angle) < directionAngle) {
                keyDirection = Canvas_LEFT;
            }
        }
        return keyDirection;
}


static int32_t BasicDirectionAIHelper_getAIKeyPressed(BasicDirectionAIHelper* this, int32_t frame) {
        int16_t angle = ((int16_t) JAVA_CALL(AngleInfo_getAngleIncrementInfo(this->angleInfo), getFrameAngle, INT_intValue(frame)));
        if (AngleInfo_getAngle(this->angleInfo) != angle) {
            return BasicDirectionAIHelper_turnAI(this, INT_intValue(frame));
        } else {
            return Canvas_UP;
        }
}


int32_t BasicDirectionAIHelper_getAIKeyPressedFromDirection(BasicDirectionAIHelper* this, Direction* geographicMapDirectionData) {
        int32_t keyDirection = -1;
        AngleIncrementInfo* angleIncrementInfo = AngleInfo_getAngleIncrementInfo(this->angleInfo);
        DirectionFactory* directionFactory = DirectionFactory_getInstance();
        if (geographicMapDirectionData == directionFactory->DOWN) {
            keyDirection = BasicDirectionAIHelper_getAIKeyPressed(this, angleIncrementInfo->DOWN_FRAME);
        } else if (geographicMapDirectionData == directionFactory->UP) {
            keyDirection = BasicDirectionAIHelper_getAIKeyPressed(this, angleIncrementInfo->UP_FRAME);
        } else if (geographicMapDirectionData == directionFactory->LEFT) {
            keyDirection = BasicDirectionAIHelper_getAIKeyPressed(this, angleIncrementInfo->LEFT_FRAME);
        } else if (geographicMapDirectionData == directionFactory->RIGHT) {
            keyDirection = BasicDirectionAIHelper_getAIKeyPressed(this, angleIncrementInfo->RIGHT_FRAME);
        }
        return keyDirection;
}


AngleInfo* BasicDirectionAIHelper_getAngleInfoP(BasicDirectionAIHelper* this) {
        return this->angleInfo;
}


const char* BasicDirectionAIHelper_getName(BasicDirectionAIHelper* this) {
        return this->name;
}

