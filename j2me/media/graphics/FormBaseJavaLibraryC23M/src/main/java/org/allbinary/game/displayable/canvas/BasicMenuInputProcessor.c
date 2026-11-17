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
// #include "javax/microedition/lcdui/NullCanvas.h"
#include "org/allbinary/game/input/PlayerGameInput.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/input/motion/gesture/observer/BaseMotionGestureEventListener.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct BasicMenuInputProcessor BasicMenuInputProcessor;
struct BasicMenuInputProcessor {
    PlayerGameInput base;
    BaseMotionGestureEventListener BaseMotionGestureEventListener_interface;
    BasicArrayList* motionGestureEventList;
    Canvas* canvas;
};


BasicMenuInputProcessor* BasicMenuInputProcessor_new(BasicArrayList* gameKeyEventList, int32_t playerInputId, Canvas* gameCanvas);

void BasicMenuInputProcessor_init(BasicMenuInputProcessor* this, BasicArrayList* gameKeyEventList, int32_t playerInputId, Canvas* gameCanvas);
void BasicMenuInputProcessor_onMotionGestureEvent(BasicMenuInputProcessor* this, MotionGestureEvent* motionGestureEvent);
void BasicMenuInputProcessor_onScrolledMotionGestureEvent(BasicMenuInputProcessor* this, MotionGestureEvent* motionGestureEvent);
static void BasicMenuInputProcessor_setCanvas(BasicMenuInputProcessor* this, MyCanvas* canvas);
MyCanvas* BasicMenuInputProcessor_getCanvas(BasicMenuInputProcessor* this);
int32_t BasicMenuInputProcessor_processInputList(BasicMenuInputProcessor* this);

static void BasicMenuInputProcessor_initFields(BasicMenuInputProcessor* this) {
    this->motionGestureEventList = BasicArrayListD_new();
    this->canvas = NullCanvas_NULL_CANVAS;
}


void BasicMenuInputProcessor_init(BasicMenuInputProcessor* this, BasicArrayList* gameKeyEventList, int32_t playerInputId, Canvas* gameCanvas) {
        PlayerGameInput_init(&this->base, gameKeyEventList, BasicArrayListD_new(), playerInputId);
        BasicMenuInputProcessor_initFields(this);
        this->canvas = gameCanvas;
}

BasicMenuInputProcessor* BasicMenuInputProcessor_new(BasicArrayList* gameKeyEventList, int32_t playerInputId, Canvas* gameCanvas) {
    BasicMenuInputProcessor* this = calloc(1, sizeof(BasicMenuInputProcessor));
    BasicMenuInputProcessor_init(this, gameKeyEventList, playerInputId, gameCanvas);
    return this;
}


void BasicMenuInputProcessor_onMotionGestureEvent(BasicMenuInputProcessor* this, MotionGestureEvent* motionGestureEvent) {
        BasicArrayList_add(this->motionGestureEventList, motionGestureEvent);
}


void BasicMenuInputProcessor_onScrolledMotionGestureEvent(BasicMenuInputProcessor* this, MotionGestureEvent* motionGestureEvent) {
}


static void BasicMenuInputProcessor_setCanvas(BasicMenuInputProcessor* this, MyCanvas* canvas) {
        this->canvas = canvas;
}


MyCanvas* BasicMenuInputProcessor_getCanvas(BasicMenuInputProcessor* this) {
        return ((MyCanvas*) this->canvas);
}


// throws Exception
int32_t BasicMenuInputProcessor_processInputList(BasicMenuInputProcessor* this) {
        return -1;
}

