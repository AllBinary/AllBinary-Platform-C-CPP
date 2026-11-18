// Generated Code Do Not Modify
#include "org/allbinary/direction/DirectionUtil.h"
#include "org/allbinary/math/Angle.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/direction/DirectionFactory.h"
#include "org/allbinary/direction/Direction.h"


static DirectionUtil* DirectionUtil_instance;





void DirectionUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DirectionUtil_instance = DirectionUtil_new();
}

void DirectionUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DirectionUtil", nullptr);
    java_register_method("DirectionUtil", "getAngle", (void*) DirectionUtil_getAngle);
    java_register_method("DirectionUtil", "getFrameAngle", (void*) DirectionUtil_getFrameAngle);
}

static void DirectionUtil_initFields(DirectionUtil* this) {
    this->directionArray = ((Angle**) java_array_new(sizeof(Angle*), 10));
    this->directionArray2 = ((Angle**) java_array_new(sizeof(Angle*), 10));
}


DirectionUtil* DirectionUtil_getInstance(void) {
        return (DirectionUtil_staticInit(), DirectionUtil_instance);
}


void DirectionUtil_init(DirectionUtil* this) {
    DirectionUtil_register();
    DirectionUtil_initFields(this);
        AngleFactory* angleFactory = AngleFactory_getInstance();
        DirectionFactory* directionFactory = DirectionFactory_getInstance();
        this->directionArray[Direction_getValue(directionFactory->LEFT)] = angleFactory->LEFT;
        this->directionArray[Direction_getValue(directionFactory->RIGHT)] = angleFactory->RIGHT;
        this->directionArray[Direction_getValue(directionFactory->UP)] = angleFactory->UP;
        this->directionArray[Direction_getValue(directionFactory->DOWN)] = angleFactory->DOWN;
        this->directionArray2[Direction_getValue(directionFactory->LEFT)] = angleFactory->LEFT;
        this->directionArray2[Direction_getValue(directionFactory->RIGHT)] = angleFactory->RIGHT;
        this->directionArray2[Direction_getValue(directionFactory->UP)] = angleFactory->UP;
        this->directionArray2[Direction_getValue(directionFactory->DOWN)] = angleFactory->DOWN;
}

DirectionUtil* DirectionUtil_new(void) {
    DirectionUtil* this = java_object_alloc(sizeof(DirectionUtil), "DirectionUtil");
    DirectionUtil_init(this);
    return this;
}


Angle* DirectionUtil_getAngle(DirectionUtil* this, Direction* direction) {
        return this->directionArray2[Direction_getValue(direction)];
}


Angle* DirectionUtil_getFrameAngle(DirectionUtil* this, Direction* direction) {
        return this->directionArray[Direction_getValue(direction)];
}

