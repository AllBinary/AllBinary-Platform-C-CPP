#ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTURETOMOTIONGESTUREACTIONASSOCIATION_H
#define ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTURETOMOTIONGESTUREACTIONASSOCIATION_H
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
// package org.allbinary.input.motion.gesture

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct CompleteMotionGestureInputEvent CompleteMotionGestureInputEvent;
typedef struct BasicArrayList BasicArrayList;
#if __has_include("org/allbinary/game/input/CompleteMotionGestureInputEvent.h")
#include "org/allbinary/game/input/CompleteMotionGestureInputEvent.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct MotionGestureToMotionGestureActionAssociation MotionGestureToMotionGestureActionAssociation;
struct MotionGestureToMotionGestureActionAssociation {
    BasicArrayList* list;
    CompleteMotionGestureInputEvent* motionGestureAction;
};


MotionGestureToMotionGestureActionAssociation* MotionGestureToMotionGestureActionAssociation_new(BasicArrayList* list, CompleteMotionGestureInputEvent* commandAction);

void MotionGestureToMotionGestureActionAssociation_init(MotionGestureToMotionGestureActionAssociation* this, BasicArrayList* list, CompleteMotionGestureInputEvent* commandAction);

BasicArrayList* MotionGestureToMotionGestureActionAssociation_getMotionGesture(MotionGestureToMotionGestureActionAssociation* this);

void MotionGestureToMotionGestureActionAssociation_setMotionGestures(MotionGestureToMotionGestureActionAssociation* this, BasicArrayList* list);

CompleteMotionGestureInputEvent* MotionGestureToMotionGestureActionAssociation_getCommandAction(MotionGestureToMotionGestureActionAssociation* this);

void MotionGestureToMotionGestureActionAssociation_setMotionGestureAction(MotionGestureToMotionGestureActionAssociation* this, CompleteMotionGestureInputEvent* commandAction);

bool MotionGestureToMotionGestureActionAssociation_isMotionGestureArrayEquals(MotionGestureToMotionGestureActionAssociation* this, BasicArrayList* aList);
#define MotionGestureToMotionGestureActionAssociation_new2 MotionGestureToMotionGestureActionAssociation_new
#define MotionGestureToMotionGestureActionAssociation_init2 MotionGestureToMotionGestureActionAssociation_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MotionGestureToMotionGestureActionAssociation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MotionGestureToMotionGestureActionAssociation_register(void);

#if __has_include("org/allbinary/game/input/CompleteMotionGestureInputEvent.h")
#include "org/allbinary/game/input/CompleteMotionGestureInputEvent.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTURETOMOTIONGESTUREACTIONASSOCIATION_H
