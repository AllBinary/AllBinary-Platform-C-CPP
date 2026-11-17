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
// package org.allbinary.input.motion.gesture.observer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/input/motion/gesture/observer/BaseMotionGestureEventListener.h"

typedef struct MotionGestureEventListener MotionGestureEventListener;
struct MotionGestureEventListener {
    void (*onPressedMotionGestureEvent)(void* this, MotionGestureEvent* ev);
    void (*onUpMotionGestureEvent)(void* this, MotionGestureEvent* ev);
    void (*onDownMotionGestureEvent)(void* this, MotionGestureEvent* ev);
    void (*onLeftMotionGestureEvent)(void* this, MotionGestureEvent* ev);
    void (*onRightMotionGestureEvent)(void* this, MotionGestureEvent* ev);
    void (*onDiagonalDownRightMotionGestureEvent)(void* this, MotionGestureEvent* ev);
    void (*onDiagonalDownLeftMotionGestureEvent)(void* this, MotionGestureEvent* ev);
    void (*onDiagonalUpRightMotionGestureEvent)(void* this, MotionGestureEvent* ev);
    void (*onDiagonalUpLeftMotionGestureEvent)(void* this, MotionGestureEvent* ev);
    void (*released)(void* this, MotionGestureEvent* ev);
};


