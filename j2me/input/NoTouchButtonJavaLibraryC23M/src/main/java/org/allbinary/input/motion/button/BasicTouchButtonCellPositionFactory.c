// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/BasicTouchButtonCellPositionFactory.h"





void BasicTouchButtonCellPositionFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicTouchButtonCellPositionFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicTouchButtonCellPositionFactory", nullptr);
}


void BasicTouchButtonCellPositionFactory_init(BasicTouchButtonCellPositionFactory* this) {
    BasicTouchButtonCellPositionFactory_register();
}

BasicTouchButtonCellPositionFactory* BasicTouchButtonCellPositionFactory_new(void) {
    BasicTouchButtonCellPositionFactory* this = java_object_alloc(sizeof(BasicTouchButtonCellPositionFactory), "BasicTouchButtonCellPositionFactory");
    BasicTouchButtonCellPositionFactory_init(this);
    return this;
}


void BasicTouchButtonCellPositionFactory_initMethod(void) {
}

