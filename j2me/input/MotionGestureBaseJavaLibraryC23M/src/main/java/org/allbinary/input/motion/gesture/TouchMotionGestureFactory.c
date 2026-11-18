// Generated Code Do Not Modify
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/game/input/InputFactory.h")
#include "org/allbinary/game/input/InputFactory.h"
#endif


static void* TouchMotionGestureFactory_instance;



void TouchMotionGestureFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TouchMotionGestureFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void TouchMotionGestureFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchMotionGestureFactory", nullptr);
}

static void TouchMotionGestureFactory_initFields(TouchMotionGestureFactory* this) {
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}


TouchMotionGestureFactory* TouchMotionGestureFactory_getInstance(void) {
        if ((TouchMotionGestureFactory_staticInit(), TouchMotionGestureFactory_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            TouchMotionGestureFactory_instance = TouchMotionGestureFactory_new();
        }
        return ((TouchMotionGestureFactory*) (TouchMotionGestureFactory_staticInit(), TouchMotionGestureFactory_instance));
}


void TouchMotionGestureFactory_init(TouchMotionGestureFactory* this) {
    TouchMotionGestureFactory_register();
    TouchMotionGestureFactory_initFields(this);
        int32_t MAX = InputFactory_getInstance()->MAX;
        this->LEFT = MotionGestureInput_new(MAX - 3, "Left Touch");
        this->RIGHT = MotionGestureInput_new(MAX - 4, "Right Touch");
        this->UP = MotionGestureInput_new(MAX - 5, "Up Touch");
        this->DOWN = MotionGestureInput_new(MAX - 6, "Down Touch");
        this->PRESSED = MotionGestureInput_new(MAX - 7, "Screen Press");
        this->RELEASED = MotionGestureInput_new(MAX - 8, "Released");
        this->DIAGONAL_DOWN_RIGHT = MotionGestureInput_new(MAX - 9, "Diagonal Dn R");
        this->DIAGONAL_DOWN_LEFT = MotionGestureInput_new(MAX - 10, "Diagonal Dn L");
        this->DIAGONAL_UP_RIGHT = MotionGestureInput_new(MAX - 11, "Diagonal Up R");
        this->DIAGONAL_UP_LEFT = MotionGestureInput_new(MAX - 12, "Diagonal Up L");
        this->SCROLL_UP = MotionGestureInput_new(MAX - 13, "Scroll Up");
        this->SCROLL_DOWN = MotionGestureInput_new(MAX - 14, "Scroll Down");
        this->NO_MOTION = MotionGestureInput_new(MAX - 2, "No Motion");
        this->LAST_MOTION = MotionGestureInput_new(MAX - 19, "Last Motion");
}

TouchMotionGestureFactory* TouchMotionGestureFactory_new(void) {
    TouchMotionGestureFactory* this = java_object_alloc(sizeof(TouchMotionGestureFactory), "TouchMotionGestureFactory");
    TouchMotionGestureFactory_init(this);
    return this;
}

