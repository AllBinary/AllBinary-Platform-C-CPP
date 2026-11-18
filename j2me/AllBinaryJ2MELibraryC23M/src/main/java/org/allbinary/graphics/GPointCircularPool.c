// Generated Code Do Not Modify
#include "org/allbinary/graphics/GPointCircularPool.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/graphics/CustomGPoint.h"




void GPointCircularPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GPointCircularPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GPointCircularPool", "BaseCircularPool");
}


void GPointCircularPool_init(GPointCircularPool* this, int32_t size) {
    GPointCircularPool_register();
    BaseCircularPool_init(&this->base);
        this->base.circularIndexUtil = CircularIndexUtil_createInstance(size);
        this->base.OBJECT_ARRAY = ((void**) java_array_new(sizeof(void*), size));
        for (int32_t index = size - 1; index >= 0; index--) {
            this->base.OBJECT_ARRAY[index] = CustomGPoint_getInstance3(0, 0);
        }
}

GPointCircularPool* GPointCircularPool_new(int32_t size) {
    GPointCircularPool* this = java_object_alloc(sizeof(GPointCircularPool), "GPointCircularPool");
    GPointCircularPool_init(this, size);
    return this;
}

