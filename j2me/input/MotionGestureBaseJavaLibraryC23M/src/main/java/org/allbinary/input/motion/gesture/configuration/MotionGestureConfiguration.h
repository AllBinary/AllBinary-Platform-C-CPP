#ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_CONFIGURATION_MOTIONGESTURECONFIGURATION_H
#define ORG_ALLBINARY_INPUT_MOTION_GESTURE_CONFIGURATION_MOTIONGESTURECONFIGURATION_H
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
typedef struct CompleteMotionGestureInputEvent CompleteMotionGestureInputEvent;
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct MotionGestureToMotionGestureActionAssociation MotionGestureToMotionGestureActionAssociation;
typedef struct StringUtil StringUtil;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

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
#define MotionGestureConfiguration_new0 MotionGestureConfiguration_new
#define MotionGestureConfiguration_init0 MotionGestureConfiguration_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MotionGestureConfiguration_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MotionGestureConfiguration_register(void);

#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_INPUT_MOTION_GESTURE_CONFIGURATION_MOTIONGESTURECONFIGURATION_H
