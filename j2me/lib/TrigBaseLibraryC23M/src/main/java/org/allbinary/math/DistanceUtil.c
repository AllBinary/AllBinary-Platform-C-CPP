// Generated Code Do Not Modify
#include "org/allbinary/math/DistanceUtil.h"
#include "org/allbinary/logic/math/MathUtil.h"


static DistanceUtil* DistanceUtil_instance;



void DistanceUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DistanceUtil_instance = DistanceUtil_new();
}

void DistanceUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DistanceUtil", nullptr);
    java_register_method("DistanceUtil", "getDistance", (void*) DistanceUtil_getDistance);
}

static void DistanceUtil_initFields(DistanceUtil* this) {
    this->mathUtil = MathUtil_getInstance();
}

void DistanceUtil_init(DistanceUtil* this) {
    DistanceUtil_register();
    DistanceUtil_initFields(this);
}

DistanceUtil* DistanceUtil_new(void) {
    DistanceUtil* this = java_object_alloc(sizeof(DistanceUtil), "DistanceUtil");
    DistanceUtil_init(this);
    return this;
}


DistanceUtil* DistanceUtil_getInstance(void) {
        return (DistanceUtil_staticInit(), DistanceUtil_instance);
}


int32_t DistanceUtil_getDistance(DistanceUtil* this, int32_t x1, int32_t y1, int32_t x2, int32_t y2) {
        int32_t dx = x1 - x2;
        int32_t dy = y1 - y2;
        return MathUtil_sqrt(this->mathUtil, (dx * dx) + (dy * dy));
}

