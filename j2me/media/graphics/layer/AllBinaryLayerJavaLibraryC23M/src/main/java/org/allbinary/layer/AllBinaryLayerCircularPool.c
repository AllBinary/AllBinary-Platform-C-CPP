// Generated Code Do Not Modify
#include "org/allbinary/layer/AllBinaryLayerCircularPool.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/layer/AllBinaryLayerFactoryInterface.h"





void AllBinaryLayerCircularPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AllBinaryLayerCircularPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinaryLayerCircularPool", "BaseCircularPool");
    java_register_method("AllBinaryLayerCircularPool", "initAllBinaryLayerCircularPool", (void*) AllBinaryLayerCircularPool_initAllBinaryLayerCircularPool);
}


void AllBinaryLayerCircularPool_init(AllBinaryLayerCircularPool* this) {
    AllBinaryLayerCircularPool_register();
    BaseCircularPool_init(&this->base);
}

AllBinaryLayerCircularPool* AllBinaryLayerCircularPool_new(void) {
    AllBinaryLayerCircularPool* this = java_object_alloc(sizeof(AllBinaryLayerCircularPool), "AllBinaryLayerCircularPool");
    AllBinaryLayerCircularPool_init(this);
    return this;
}


// throws Exception
void AllBinaryLayerCircularPool_initAllBinaryLayerCircularPool(AllBinaryLayerCircularPool* this, AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total) {
        this->base.circularIndexUtil = CircularIndexUtil_createInstance(total);
        this->base.OBJECT_ARRAY = ((void**) java_array_new(sizeof(void*), total));
        for (int32_t localIndex = 0; localIndex < total; localIndex++) {
            this->base.OBJECT_ARRAY[localIndex] = AllBinaryLayerFactoryInterface_getInstance(allbinaryLayerFactoryInterface);
        }
}

