#ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONEVENTFACTORY_H
#define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONEVENTFACTORY_H
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
typedef struct MotionGestureEvent MotionGestureEvent;
typedef struct Input Input;
typedef struct InputFactory InputFactory;
typedef struct MotionGestureInput MotionGestureInput;
typedef struct TouchMotionGestureFactory TouchMotionGestureFactory;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct AllBinaryEventObjectFactoryInterface AllBinaryEventObjectFactoryInterface;
#include "org/allbinary/logic/util/event/AllBinaryEventObjectFactoryInterface.h"

typedef struct MotionEventFactory MotionEventFactory;
struct MotionEventFactory {
    AllBinaryEventObjectFactoryInterface AllBinaryEventObjectFactoryInterface_interface;
    void* source;
    int32_t id;
};


MotionEventFactory* MotionEventFactory_new(void* source, int32_t id);

void MotionEventFactory_init(MotionEventFactory* this, void* source, int32_t id);

AllBinaryEventObject* MotionEventFactory_getInstance(MotionEventFactory* this);
#define MotionEventFactory_new2 MotionEventFactory_new
#define MotionEventFactory_init2 MotionEventFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MotionEventFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MotionEventFactory_register(void);

#if __has_include("org/allbinary/logic/util/event/AllBinaryEventObject.h")
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#endif

#endif // ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONEVENTFACTORY_H
