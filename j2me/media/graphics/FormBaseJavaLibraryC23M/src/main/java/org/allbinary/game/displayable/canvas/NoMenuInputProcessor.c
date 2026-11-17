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
// #include "javax/microedition/lcdui/NullCanvas.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"

typedef struct NoMenuInputProcessor NoMenuInputProcessor;
struct NoMenuInputProcessor {
    BasicMenuInputProcessor base;
};

static NoMenuInputProcessor* NoMenuInputProcessor_SINGLETON;

NoMenuInputProcessor* NoMenuInputProcessor_new(void);
NoMenuInputProcessor* NoMenuInputProcessor_getInstance(void);

void NoMenuInputProcessor_init(NoMenuInputProcessor* this);
void NoMenuInputProcessor_onDownGameKeyEvent(NoMenuInputProcessor* this, GameKeyEvent* gameKeyEvent);
void NoMenuInputProcessor_onUpGameKeyEvent(NoMenuInputProcessor* this, GameKeyEvent* gameKeyEvent);
void NoMenuInputProcessor_onMotionGestureEvent(NoMenuInputProcessor* this, MotionGestureEvent* motionGestureEvent);

// Static fields with runtime initializers: call this once at startup
void NoMenuInputProcessor_staticInit(void) {
    NoMenuInputProcessor_SINGLETON = NoMenuInputProcessor_new();
}


NoMenuInputProcessor* NoMenuInputProcessor_getInstance(void) {
        return NoMenuInputProcessor_SINGLETON;
}


void NoMenuInputProcessor_init(NoMenuInputProcessor* this) {
        BasicMenuInputProcessor_init(&this->base, BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance()), -1, NullCanvas_NULL_CANVAS);
}

NoMenuInputProcessor* NoMenuInputProcessor_new(void) {
    NoMenuInputProcessor* this = calloc(1, sizeof(NoMenuInputProcessor));
    NoMenuInputProcessor_init(this);
    return this;
}


// synchronized
void NoMenuInputProcessor_onDownGameKeyEvent(NoMenuInputProcessor* this, GameKeyEvent* gameKeyEvent) {
}


// synchronized
void NoMenuInputProcessor_onUpGameKeyEvent(NoMenuInputProcessor* this, GameKeyEvent* gameKeyEvent) {
}


void NoMenuInputProcessor_onMotionGestureEvent(NoMenuInputProcessor* this, MotionGestureEvent* motionGestureEvent) {
}

