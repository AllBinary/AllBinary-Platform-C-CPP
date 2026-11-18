#ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTURERECOGNIZER_H
#define ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTURERECOGNIZER_H
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
typedef struct TouchMotionGestureFactory TouchMotionGestureFactory;
typedef struct MotionGestureInput MotionGestureInput;
typedef struct GPoint GPoint;
typedef struct Line Line;
typedef struct PointFactory PointFactory;
typedef struct MotionGestureConfiguration MotionGestureConfiguration;
typedef struct MotionGestureConfigurationFactory MotionGestureConfigurationFactory;
typedef struct BasicMotionGesturesHandler BasicMotionGesturesHandler;
typedef struct MotionEventCircularPool MotionEventCircularPool;
typedef struct MotionGestureEvent MotionGestureEvent;
typedef struct MovedMotionGesturesHandler MovedMotionGesturesHandler;
typedef struct ScrolledMotionGesturesHandler ScrolledMotionGesturesHandler;
typedef struct LogUtil LogUtil;
typedef struct J2SEMath J2SEMath;
typedef struct BasicEventHandler BasicEventHandler;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/graphics/GPoint.h")
#include "org/allbinary/graphics/GPoint.h"
#endif
#if __has_include("org/allbinary/graphics/Line.h")
#include "org/allbinary/graphics/Line.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h")
#include "org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/MotionEventCircularPool.h")
#include "org/allbinary/input/motion/gesture/observer/MotionEventCircularPool.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/logic/math/J2SEMath.h")
#include "org/allbinary/logic/math/J2SEMath.h"
#endif
#if __has_include("org/allbinary/logic/util/event/handler/BasicEventHandler.h")
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#endif

typedef struct MotionGestureRecognizer MotionGestureRecognizer;
struct MotionGestureRecognizer {
    LogUtil* logUtil;
    J2SEMath* j2seMath;
    GPoint* origin;
    GPoint* previous;
    GPoint* intermediate;
    Line* line;
    BasicMotionGesturesHandler* motionGesturesHandler;
    BasicEventHandler* movedMotionGesturesHandler;
    BasicEventHandler* scrolledMotionGesturesHandler;
    MotionEventCircularPool* motionEventCircularPool;
};


MotionGestureRecognizer* MotionGestureRecognizer_new(int32_t id);

void MotionGestureRecognizer_init(MotionGestureRecognizer* this, int32_t id);

bool MotionGestureRecognizer_processPressedMotionEvent(MotionGestureRecognizer* this, GPoint* current, int32_t deviceId, int32_t button);

bool MotionGestureRecognizer_processReleasedMotionEvent(MotionGestureRecognizer* this, GPoint* current, int32_t deviceId, int32_t button);

void MotionGestureRecognizer_processDraggedMotionEvent(MotionGestureRecognizer* this, GPoint* current, int32_t deviceId, int32_t buttonMask);

bool MotionGestureRecognizer_processMovedMotionEvent(MotionGestureRecognizer* this, GPoint* current, int32_t deviceId, int32_t button);

bool MotionGestureRecognizer_processScrolledMotionEvent(MotionGestureRecognizer* this, GPoint* current, int32_t deviceId, int32_t button);

BasicMotionGesturesHandler* MotionGestureRecognizer_getMotionGesturesHandler(MotionGestureRecognizer* this);
#define MotionGestureRecognizer_new1 MotionGestureRecognizer_new
#define MotionGestureRecognizer_init1 MotionGestureRecognizer_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MotionGestureRecognizer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MotionGestureRecognizer_register(void);

#if __has_include("org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h")
#include "org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h"
#endif

#endif // ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTURERECOGNIZER_H
