// Generated Code Do Not Modify
#include "org/allbinary/input/motion/gesture/MotionGestureRecognizer.h"
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
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#if __has_include("org/allbinary/graphics/PointFactory.h")
#include "org/allbinary/graphics/PointFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/configuration/MotionGestureConfiguration.h")
#include "org/allbinary/input/motion/gesture/configuration/MotionGestureConfiguration.h"
#endif










void MotionGestureRecognizer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MotionGestureRecognizer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MotionGestureRecognizer", nullptr);
    java_register_method("MotionGestureRecognizer", "processPressedMotionEvent", (void*) MotionGestureRecognizer_processPressedMotionEvent);
    java_register_method("MotionGestureRecognizer", "processReleasedMotionEvent", (void*) MotionGestureRecognizer_processReleasedMotionEvent);
    java_register_method("MotionGestureRecognizer", "processDraggedMotionEvent", (void*) MotionGestureRecognizer_processDraggedMotionEvent);
    java_register_method("MotionGestureRecognizer", "processMovedMotionEvent", (void*) MotionGestureRecognizer_processMovedMotionEvent);
    java_register_method("MotionGestureRecognizer", "processScrolledMotionEvent", (void*) MotionGestureRecognizer_processScrolledMotionEvent);
    java_register_method("MotionGestureRecognizer", "getMotionGesturesHandler", (void*) MotionGestureRecognizer_getMotionGesturesHandler);
}

static void MotionGestureRecognizer_initFields(MotionGestureRecognizer* this) {
    this->logUtil = LogUtil_getInstance();
    this->j2seMath = J2SEMath_getInstance();
    this->origin = PointFactory_getInstance()->ZERO_ZERO;
    this->previous = this->origin;
    this->intermediate = this->origin;
    this->line = Line_new(this->origin, this->origin);
    
    
    
    
}


void MotionGestureRecognizer_init(MotionGestureRecognizer* this, int32_t id) {
    MotionGestureRecognizer_register();
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
    MotionGestureRecognizer* this = java_object_alloc(sizeof(MotionGestureRecognizer), "MotionGestureRecognizer");
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
        BasicEventHandler_fireEvent(this->motionGesturesHandler, event);
        return true;
}


// throws Exception
bool MotionGestureRecognizer_processReleasedMotionEvent(MotionGestureRecognizer* this, GPoint* current, int32_t deviceId, int32_t button) {
        MotionGestureEvent* event = MotionEventCircularPool_getInstance(this->motionEventCircularPool, TouchMotionGestureFactory_getInstance()->RELEASED);
        MotionGestureEvent_setPreviousPoint(event, this->previous);
        MotionGestureEvent_setCurrentPoint(event, current);
        BasicEventHandler_fireEvent(this->motionGesturesHandler, event);
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
        int32_t minimumMotionGesture = MotionGestureConfiguration_getMinimumMotionGesture(MotionGestureConfigurationFactory_getInstance());
        if (J2SEMath_abs(this->j2seMath, ((float) Line_getDeltaX(this->line))) < ((float) minimumMotionGesture) && J2SEMath_abs(this->j2seMath, ((float) Line_getDeltaY(this->line))) < ((float) minimumMotionGesture)) {
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
            if (Line_getDeltaY(this->line) > 0.0) {
                newMotionGesture = touchMotionGestureFactory->UP;
            } else {
                newMotionGesture = touchMotionGestureFactory->DOWN;
            }
        } else {
            if (absGradient < tan(((diagonalToleranceLower) * 3.14159265358979323846 / 180.0))) {
                if (Line_getDeltaX(this->line) > 0.0) {
                    newMotionGesture = touchMotionGestureFactory->LEFT;
                } else {
                    newMotionGesture = touchMotionGestureFactory->RIGHT;
                }
            } else {
                if (gradient > 0.0) {
                    if (Line_getDeltaX(this->line) > 0.0) {
                        newMotionGesture = touchMotionGestureFactory->DIAGONAL_UP_LEFT;
                    } else {
                        newMotionGesture = touchMotionGestureFactory->DIAGONAL_DOWN_RIGHT;
                    }
                } else {
                    if (Line_getDeltaX(this->line) > 0.0) {
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
        BasicEventHandler_fireEvent(this->motionGesturesHandler, event);
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

