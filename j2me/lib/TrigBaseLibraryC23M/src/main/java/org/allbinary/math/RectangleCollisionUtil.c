// Generated Code Do Not Modify
#include "org/allbinary/math/RectangleCollisionUtil.h"


static RectangleCollisionUtil* RectangleCollisionUtil_instance;





void RectangleCollisionUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    RectangleCollisionUtil_instance = RectangleCollisionUtil_new();
}

void RectangleCollisionUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RectangleCollisionUtil", nullptr);
    java_register_method("RectangleCollisionUtil", "isCollision", (void*) RectangleCollisionUtil_isCollision);
    java_register_method("RectangleCollisionUtil", "isInside", (void*) RectangleCollisionUtil_isInside);
}


RectangleCollisionUtil* RectangleCollisionUtil_getInstance(void) {
        return (RectangleCollisionUtil_staticInit(), RectangleCollisionUtil_instance);
}


void RectangleCollisionUtil_init(RectangleCollisionUtil* this) {
    RectangleCollisionUtil_register();
}

RectangleCollisionUtil* RectangleCollisionUtil_new(void) {
    RectangleCollisionUtil* this = java_object_alloc(sizeof(RectangleCollisionUtil), "RectangleCollisionUtil");
    RectangleCollisionUtil_init(this);
    return this;
}


bool RectangleCollisionUtil_isCollision(RectangleCollisionUtil* this, int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, int32_t rect2X1, int32_t rect2Y1, int32_t rect2X2, int32_t rect2Y2) {
        if (rect2X1 >= rectX2 || rect2Y1 >= rectY2 || rect2X2 <= rectX1 || rect2Y2 <= rectY1) {
            return false;
        } else {
            return true;
        }
}


bool RectangleCollisionUtil_isInside(RectangleCollisionUtil* this, int32_t rectX1, int32_t rectY1, int32_t rectX2, int32_t rectY2, int32_t x, int32_t y) {
        if (x >= rectX2 || y >= rectY2 || x <= rectX1 || y <= rectY1) {
            return false;
        } else {
            return true;
        }
}

