// Generated Code Do Not Modify
#include "org/allbinary/view/StaticViewPosition.h"
#include "org/allbinary/view/ViewPosition.h"







void StaticViewPosition_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void StaticViewPosition_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("StaticViewPosition", "ViewPosition");
    java_register_method("StaticViewPosition", "getX", (void*) StaticViewPosition_getX);
    java_register_method("StaticViewPosition", "getY", (void*) StaticViewPosition_getY);
    java_register_method("StaticViewPosition", "getZ", (void*) StaticViewPosition_getZ);
}


void StaticViewPosition_init(StaticViewPosition* this, int32_t x, int32_t y, int32_t z) {
    StaticViewPosition_register();
        ViewPosition_init(&this->base, x, y, z);
}

StaticViewPosition* StaticViewPosition_new(int32_t x, int32_t y, int32_t z) {
    StaticViewPosition* this = java_object_alloc(sizeof(StaticViewPosition), "StaticViewPosition");
    StaticViewPosition_init(this, x, y, z);
    return this;
}


int32_t StaticViewPosition_getX(StaticViewPosition* this) {
        return GPoint_getRawX(this);
}


int32_t StaticViewPosition_getY(StaticViewPosition* this) {
        return GPoint_getRawY(this);
}


int32_t StaticViewPosition_getZ(StaticViewPosition* this) {
        return GPoint_getRawZ(this);
}

