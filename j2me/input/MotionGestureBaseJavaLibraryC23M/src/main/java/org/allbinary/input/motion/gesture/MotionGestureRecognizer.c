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
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/Line.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/input/motion/gesture/configuration/MotionGestureConfiguration.h"
#include "org/allbinary/input/motion/gesture/configuration/MotionGestureConfigurationFactory.h"
#include "org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h"
#include "org/allbinary/input/motion/gesture/observer/MotionEventCircularPool.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"
#include "org/allbinary/input/motion/gesture/observer/MovedMotionGesturesHandler.h"
#include "org/allbinary/input/motion/gesture/observer/ScrolledMotionGesturesHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/math/J2SEMath.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#include "org/allbinary/string/CommonStrings.h"

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

static void MotionGestureRecognizer_initFields(MotionGestureRecognizer* this) {
    this->logUtil = LogUtil_getInstance();
    this->j2seMath = J2SEMath_getInstance();
    this->origin = PointFactory_getInstance()->ZERO_ZERO;
    this->previous = this->origin;
    this->intermediate = this->origin;
    this->line = Line_new(this->origin, this->origin);
    
    
    
    
}


void MotionGestureRecognizer_init(MotionGestureRecognizer* this, int32_t id) {
    MotionGestureRecognizer_initFields(this);
        this->motionEventCircularPool = MotionEventCircularPool_createPool(id);
        BasicEventHandler* motionGesturesHandler = BasicEventHandler_new();
        BasicEventHandler* movedMotionGesturesHandler = motionGesturesHandler;
        BasicEventHandler* scrolledMotionGesturesHandler = motionGesturesHandler;
        JAVA_TRY {
            motionGesturesHandler = BasicMotionGesturesHandler_getInstance();
            movedMotionGesturesHandler = MovedMotionGesturesHandler_getInstance();
            scrolledMotionGesturesHandler = ScrolledMotionGesturesHandler_getInstance();
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, e);
        } JAVA_END_TRY;
        this->motionGesturesHandler = ((BasicMotionGesturesHandler*) motionGesturesHandler);
        this->movedMotionGesturesHandler = movedMotionGesturesHandler;
        this->scrolledMotionGesturesHandler = scrolledMotionGesturesHandler;
}

MotionGestureRecognizer* MotionGestureRecognizer_new(int32_t id) {
    MotionGestureRecognizer* this = calloc(1, sizeof(MotionGestureRecognizer));
    MotionGestureRecognizer_init(this, id);
    return this;
}


// throws Exception
bool MotionGestureRecognizer_processPressedMotionEvent(MotionGestureRecognizer* this, GPoint* current, int32_t deviceId, int32_t button) {
        this->intermediate = this->origin;
        this->previous = this->origin;
        MotionGestureEvent* event = MotionEventCircularPool_getInstance(this->motionEventCircularPool, TouchMotionGestureFactory_getInstance()->PRESSED);
        MotionGestureEvent_setPreviousPoint(event, this->previous);
        MotionGestureEvent_setCurrentPoint(event, current);
        BasicMotionGesturesHandler_fireEvent(this->motionGesturesHandler, event);
        return true;
}


// throws Exception
bool MotionGestureRecognizer_processReleasedMotionEvent(MotionGestureRecognizer* this, GPoint* current, int32_t deviceId, int32_t button) {
        MotionGestureEvent* event = MotionEventCircularPool_getInstance(this->motionEventCircularPool, TouchMotionGestureFactory_getInstance()->RELEASED);
        MotionGestureEvent_setPreviousPoint(event, this->previous);
        MotionGestureEvent_setCurrentPoint(event, current);
        BasicMotionGesturesHandler_fireEvent(this->motionGesturesHandler, event);
        return true;
}


// throws Exception
void MotionGestureRecognizer_processDraggedMotionEvent(MotionGestureRecognizer* this, GPoint* current, int32_t deviceId, int32_t buttonMask) {
        if (this->previous == this->origin || this->intermediate == this->origin) {
            this->previous = current;
            this->intermediate = current;
            return;
        }
        Line_setP1(this->line, this->previous);
        Line_setP2(this->line, current);
        int32_t minimumMotionGesture = MotionGestureConfigurationFactory_getMinimumMotionGesture(MotionGestureConfigurationFactory_getInstance());
        if (J2SEMath_abs(this->j2seMath, ((float) Line_getDeltaX(this->line))) < minimumMotionGesture && J2SEMath_abs(this->j2seMath, ((float) Line_getDeltaY(this->line))) < minimumMotionGesture) {
            this->intermediate = current;
            return;
        }
        double gradient = Line_getGradient(this->line);
        double absGradient = ((double) J2SEMath_abs(this->j2seMath, ((float) gradient)));
        MotionGestureConfiguration* conf = MotionGestureConfigurationFactory_getInstance();
        TouchMotionGestureFactory* touchMotionGestureFactory = TouchMotionGestureFactory_getInstance();
        MotionGestureInput* newMotionGesture = touchMotionGestureFactory->NO_MOTION;
        double diagonalToleranceHigher = 12.0;
        double diagonalToleranceLower = 12.0;
        if (MotionGestureConfiguration_isDiagonalMotionGestureAllowed(conf)) {
            diagonalToleranceHigher = ((double) (90 - MotionGestureConfiguration_getDiagonalTolerance(conf)));
            diagonalToleranceLower = ((double) MotionGestureConfiguration_getDiagonalTolerance(conf));
        }
        if (absGradient > tan(((diagonalToleranceHigher) * 3.14159265358979323846 / 180.0))) {
            if (Line_getDeltaY(this->line) > 0) {
                newMotionGesture = touchMotionGestureFactory->UP;
            } else {
                newMotionGesture = touchMotionGestureFactory->DOWN;
            }
        } else {
            if (absGradient < tan(((diagonalToleranceLower) * 3.14159265358979323846 / 180.0))) {
                if (Line_getDeltaX(this->line) > 0) {
                    newMotionGesture = touchMotionGestureFactory->LEFT;
                } else {
                    newMotionGesture = touchMotionGestureFactory->RIGHT;
                }
            } else {
                if (gradient > 0.0) {
                    if (Line_getDeltaX(this->line) > 0) {
                        newMotionGesture = touchMotionGestureFactory->DIAGONAL_UP_LEFT;
                    } else {
                        newMotionGesture = touchMotionGestureFactory->DIAGONAL_DOWN_RIGHT;
                    }
                } else {
                    if (Line_getDeltaX(this->line) > 0) {
                        newMotionGesture = touchMotionGestureFactory->DIAGONAL_DOWN_LEFT;
                    } else {
                        newMotionGesture = touchMotionGestureFactory->DIAGONAL_UP_RIGHT;
                    }
                }
            }
        }
        this->previous = current;
        this->intermediate = current;
        MotionGestureEvent* event = MotionEventCircularPool_getInstance(this->motionEventCircularPool, newMotionGesture);
        MotionGestureEvent_setPreviousPoint(event, this->previous);
        MotionGestureEvent_setCurrentPoint(event, current);
        BasicMotionGesturesHandler_fireEvent(this->motionGesturesHandler, event);
        return;
}


// throws Exception
bool MotionGestureRecognizer_processMovedMotionEvent(MotionGestureRecognizer* this, GPoint* current, int32_t deviceId, int32_t button) {
        MotionGestureEvent* event = MotionEventCircularPool_getInstance(this->motionEventCircularPool, TouchMotionGestureFactory_getInstance()->NO_MOTION);
        MotionGestureEvent_setPreviousPoint(event, this->previous);
        MotionGestureEvent_setCurrentPoint(event, current);
        BasicEventHandler_fireEvent(this->movedMotionGesturesHandler, event);
        return true;
}


// throws Exception
bool MotionGestureRecognizer_processScrolledMotionEvent(MotionGestureRecognizer* this, GPoint* current, int32_t deviceId, int32_t button) {
        TouchMotionGestureFactory* touchMotionGestureFactory = TouchMotionGestureFactory_getInstance();
        MotionGestureInput* newMotionGesture = touchMotionGestureFactory->NO_MOTION;
        if (button > 0) {
            newMotionGesture = touchMotionGestureFactory->SCROLL_UP;
        } else if (button < 0) {
            newMotionGesture = touchMotionGestureFactory->SCROLL_DOWN;
        }
        MotionGestureEvent* event = MotionEventCircularPool_getInstance(this->motionEventCircularPool, newMotionGesture);
        MotionGestureEvent_setPreviousPoint(event, this->previous);
        MotionGestureEvent_setCurrentPoint(event, current);
        BasicEventHandler_fireEvent(this->scrolledMotionGesturesHandler, event);
        return true;
}


BasicMotionGesturesHandler* MotionGestureRecognizer_getMotionGesturesHandler(MotionGestureRecognizer* this) {
        return this->motionGesturesHandler;
}

