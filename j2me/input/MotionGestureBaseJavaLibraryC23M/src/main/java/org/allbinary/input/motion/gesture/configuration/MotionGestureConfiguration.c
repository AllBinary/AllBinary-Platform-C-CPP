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
// package org.allbinary.input.motion.gesture.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputEvent.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/input/motion/gesture/MotionGestureToMotionGestureActionAssociation.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct MotionGestureConfiguration MotionGestureConfiguration;
struct MotionGestureConfiguration {
    bool diagonalMotionGestureAllowed;
    int32_t diagonalTolerance;
    int32_t minimumMotionGesture;
    const char* button;
    BasicColor* color;
    bool executingActions;
    int32_t mouseButtonMask;
    BasicArrayList* activeCommands;
};


MotionGestureConfiguration* MotionGestureConfiguration_new(void);

void MotionGestureConfiguration_init(MotionGestureConfiguration* this);
void MotionGestureConfiguration_addMotionGestureAction(MotionGestureConfiguration* this, BasicArrayList* list, CompleteMotionGestureInputEvent* commandAction);
void MotionGestureConfiguration_clearMotionGestureAction(MotionGestureConfiguration* this);
BasicArrayList* MotionGestureConfiguration_getAssociateCommandActionsList(MotionGestureConfiguration* this);
bool MotionGestureConfiguration_isDiagonalMotionGestureAllowed(MotionGestureConfiguration* this);
bool MotionGestureConfiguration_isExecutingActionsAllowed(MotionGestureConfiguration* this);
void MotionGestureConfiguration_setExecutingActionsAllowed(MotionGestureConfiguration* this, bool executingActionAllowed);
void MotionGestureConfiguration_setDiagonalMotionGestureAllowed(MotionGestureConfiguration* this, bool diagonalMotionGestureAllowed);
int32_t MotionGestureConfiguration_getDiagonalTolerance(MotionGestureConfiguration* this);
void MotionGestureConfiguration_setDiagonalTolerance(MotionGestureConfiguration* this, int32_t diagonalTolerance);
int32_t MotionGestureConfiguration_getMinimumMotionGesture(MotionGestureConfiguration* this);
void MotionGestureConfiguration_setMinimumMotionGesture(MotionGestureConfiguration* this, int32_t minimumMotionGesture);
const char* MotionGestureConfiguration_getButton(MotionGestureConfiguration* this);
void MotionGestureConfiguration_setButton(MotionGestureConfiguration* this, const char* button);
BasicColor* MotionGestureConfiguration_getColor(MotionGestureConfiguration* this);
void MotionGestureConfiguration_setColor(MotionGestureConfiguration* this, BasicColor* color);
int32_t MotionGestureConfiguration_getMouseButtonMask(MotionGestureConfiguration* this);
void MotionGestureConfiguration_setMouseButtonMask(MotionGestureConfiguration* this, int32_t mouseButtonMask);

static void MotionGestureConfiguration_initFields(MotionGestureConfiguration* this) {
    this->diagonalMotionGestureAllowed = true;
    this->diagonalTolerance = 7;
    this->minimumMotionGesture = 9;
    this->button = StringUtil_getInstance()->EMPTY_STRING;
    this->color = BasicColorFactory_getInstance()->BLUE;
    this->executingActions = true;
    this->mouseButtonMask = 0;
    this->activeCommands = BasicArrayListD_new();
}


void MotionGestureConfiguration_init(MotionGestureConfiguration* this) {
    MotionGestureConfiguration_initFields(this);
}

MotionGestureConfiguration* MotionGestureConfiguration_new(void) {
    MotionGestureConfiguration* this = calloc(1, sizeof(MotionGestureConfiguration));
    MotionGestureConfiguration_init(this);
    return this;
}


void MotionGestureConfiguration_addMotionGestureAction(MotionGestureConfiguration* this, BasicArrayList* list, CompleteMotionGestureInputEvent* commandAction) {
        BasicArrayList_add(this->activeCommands, MotionGestureToMotionGestureActionAssociation_new(list, commandAction));
}


void MotionGestureConfiguration_clearMotionGestureAction(MotionGestureConfiguration* this) {
        BasicArrayList_clear(this->activeCommands);
}


BasicArrayList* MotionGestureConfiguration_getAssociateCommandActionsList(MotionGestureConfiguration* this) {
        return this->activeCommands;
}


bool MotionGestureConfiguration_isDiagonalMotionGestureAllowed(MotionGestureConfiguration* this) {
        return this->diagonalMotionGestureAllowed;
}


bool MotionGestureConfiguration_isExecutingActionsAllowed(MotionGestureConfiguration* this) {
        return this->executingActions;
}


void MotionGestureConfiguration_setExecutingActionsAllowed(MotionGestureConfiguration* this, bool executingActionAllowed) {
        this->executingActions = executingActionAllowed;
}


void MotionGestureConfiguration_setDiagonalMotionGestureAllowed(MotionGestureConfiguration* this, bool diagonalMotionGestureAllowed) {
        this->diagonalMotionGestureAllowed = diagonalMotionGestureAllowed;
}


int32_t MotionGestureConfiguration_getDiagonalTolerance(MotionGestureConfiguration* this) {
        return this->diagonalTolerance;
}


void MotionGestureConfiguration_setDiagonalTolerance(MotionGestureConfiguration* this, int32_t diagonalTolerance) {
        this->diagonalTolerance = diagonalTolerance;
}


int32_t MotionGestureConfiguration_getMinimumMotionGesture(MotionGestureConfiguration* this) {
        return this->minimumMotionGesture;
}


void MotionGestureConfiguration_setMinimumMotionGesture(MotionGestureConfiguration* this, int32_t minimumMotionGesture) {
        this->minimumMotionGesture = minimumMotionGesture;
}


const char* MotionGestureConfiguration_getButton(MotionGestureConfiguration* this) {
        return this->button;
}


void MotionGestureConfiguration_setButton(MotionGestureConfiguration* this, const char* button) {
        this->button = button;
}


BasicColor* MotionGestureConfiguration_getColor(MotionGestureConfiguration* this) {
        return this->color;
}


void MotionGestureConfiguration_setColor(MotionGestureConfiguration* this, BasicColor* color) {
        this->color = color;
}


int32_t MotionGestureConfiguration_getMouseButtonMask(MotionGestureConfiguration* this) {
        return this->mouseButtonMask;
}


void MotionGestureConfiguration_setMouseButtonMask(MotionGestureConfiguration* this, int32_t mouseButtonMask) {
        this->mouseButtonMask = mouseButtonMask;
}

