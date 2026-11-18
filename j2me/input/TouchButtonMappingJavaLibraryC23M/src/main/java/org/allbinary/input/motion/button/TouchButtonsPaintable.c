// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchButtonsPaintable.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/input/motion/button/TouchButtonFactory.h"
#include "org/allbinary/input/motion/button/TouchButton.h"





void TouchButtonsPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TouchButtonsPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchButtonsPaintable", "Paintable");
    java_register_method("TouchButtonsPaintable", "paint", (void*) TouchButtonsPaintable_paint);
}

static void TouchButtonsPaintable_initFields(TouchButtonsPaintable* this) {
    
    
    this->basicSetColorUtil = BasicColorSetUtil_getInstance();
    this->touchButtonFactory = TouchButtonFactory_getInstance();
}


void TouchButtonsPaintable_init(TouchButtonsPaintable* this, BasicColor* basicColor) {
    TouchButtonsPaintable_register();
    Paintable_init(&this->base);
    TouchButtonsPaintable_initFields(this);
        this->foregroundBasicColor = basicColor;
        this->foregroundColor = BasicColor_intValue(basicColor);
}

TouchButtonsPaintable* TouchButtonsPaintable_new(BasicColor* basicColor) {
    TouchButtonsPaintable* this = java_object_alloc(sizeof(TouchButtonsPaintable), "TouchButtonsPaintable");
    TouchButtonsPaintable_init(this, basicColor);
    return this;
}


void TouchButtonsPaintable_paint(TouchButtonsPaintable* this, Graphics* graphics) {
        BasicArrayList* list = TouchButtonFactory_getList(this->touchButtonFactory);
        BasicColorSetUtil_setBasicColorP3(this->basicSetColorUtil, graphics, this->foregroundBasicColor, this->foregroundColor);
        TouchButton* touchButton = nullptr;
        for (int32_t index = BasicArrayList_size(list); --index >= 0; ) {
            touchButton = ((TouchButton*) list->objectArray[index]);
            TouchButton_paint(touchButton, graphics);
        }
        for (int32_t index = BasicArrayList_size(list); --index >= 0; ) {
            touchButton = ((TouchButton*) list->objectArray[index]);
            TouchButton_paintHint(touchButton, graphics);
        }
}

