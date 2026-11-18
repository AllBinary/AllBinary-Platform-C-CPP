#ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_COMPLETEMOTIONGESTURELISTENERINTERFACE_H
#define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_COMPLETEMOTIONGESTURELISTENERINTERFACE_H
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
typedef struct BasicArrayList BasicArrayList;

typedef struct CompleteMotionGestureListenerInterface CompleteMotionGestureListenerInterface;
struct CompleteMotionGestureListenerInterface {
    void (*onMotionGestureCompleted)(void* this, BasicArrayList* list);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CompleteMotionGestureListenerInterface_staticInit(void);

static inline void CompleteMotionGestureListenerInterface_onMotionGestureCompleted(void* this, BasicArrayList* list) {
    ((__typeof__(((CompleteMotionGestureListenerInterface*) nullptr)->onMotionGestureCompleted)) java_method_of(this, "onMotionGestureCompleted"))(this, list);
}


#endif // ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_COMPLETEMOTIONGESTURELISTENERINTERFACE_H
