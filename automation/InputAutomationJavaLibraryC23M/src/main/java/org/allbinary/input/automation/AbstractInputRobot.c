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
// package org.allbinary.input.automation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/help/HelpSet.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"

typedef struct AbstractInputRobot AbstractInputRobot;
struct AbstractInputRobot {
    LogUtil* logUtil;
    HelpSet* helpSet;
};


AbstractInputRobot* AbstractInputRobot_new(HelpSet* helpSet);

void AbstractInputRobot_init(AbstractInputRobot* this, HelpSet* helpSet);
HelpSet* AbstractInputRobot_getHelpSet(AbstractInputRobot* this);
void AbstractInputRobot_mouseMove(AbstractInputRobot* this, Point* point);
void AbstractInputRobot_mouseMoveToTarget(AbstractInputRobot* this, Rectangle* rectangle, int32_t x, int32_t y);
void AbstractInputRobot_mouseMoveToTarget(AbstractInputRobot* this, Rectangle* rectangle);
void AbstractInputRobot_mouseMove(AbstractInputRobot* this, int32_t x, int32_t y);
static void AbstractInputRobot_setHelpSet(AbstractInputRobot* this, HelpSet* helpSet);

static void AbstractInputRobot_initFields(AbstractInputRobot* this) {
    this->logUtil = LogUtil_getInstance();
    this->helpSet = nullptr;
}


void AbstractInputRobot_init(AbstractInputRobot* this, HelpSet* helpSet) {
    AbstractInputRobot_initFields(this);
        AbstractInputRobot_setHelpSet(this, helpSet);
}

AbstractInputRobot* AbstractInputRobot_new(HelpSet* helpSet) {
    AbstractInputRobot* this = calloc(1, sizeof(AbstractInputRobot));
    AbstractInputRobot_init(this, helpSet);
    return this;
}


HelpSet* AbstractInputRobot_getHelpSet(AbstractInputRobot* this) {
        return this->helpSet;
}


void AbstractInputRobot_mouseMove(AbstractInputRobot* this, Point* point) {
        AbstractInputRobot_mouseMove(this, point->x, point->y);
        LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat("Moved Mouse To: x: ", java_string_of(point->x)), " y: "), java_string_of(point->y)), this, "moveMouse");
}


// throws Exception
void AbstractInputRobot_mouseMoveToTarget(AbstractInputRobot* this, Rectangle* rectangle, int32_t x, int32_t y) {
        Point* point = PointHelper_getCenterPoint(rectangle);
        AbstractInputRobot_mouseMove(this, point->x + x, point->y + y);
        LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat(java_concat(java_concat("Moved Mouse To: x: ", java_string_of(point->x)), " y: "), java_string_of(point->y)), " in the middle of: "), java_string_of(rectangle)), this, "moveMouseToTarget");
}


// throws Exception
// Java overloaded method: C needs a different name
void AbstractInputRobot_mouseMoveToTarget(AbstractInputRobot* this, Rectangle* rectangle) {
        AbstractInputRobot_mouseMoveToTarget(this, rectangle, 0, 0);
}


// Java overloaded method: C needs a different name
void AbstractInputRobot_mouseMove(AbstractInputRobot* this, int32_t x, int32_t y) {
        java_throw(java_exception_new("RuntimeException", ""));
}


static void AbstractInputRobot_setHelpSet(AbstractInputRobot* this, HelpSet* helpSet) {
        this->helpSet = helpSet;
}

