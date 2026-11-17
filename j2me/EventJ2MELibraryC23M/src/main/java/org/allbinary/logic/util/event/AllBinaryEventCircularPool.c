// Generated Code Do Not Modify
#include "org/allbinary/logic/util/event/AllBinaryEventCircularPool.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObjectFactoryInterface.h"





void AllBinaryEventCircularPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AllBinaryEventCircularPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinaryEventCircularPool", "BaseCircularPool");
    java_register_method("AllBinaryEventCircularPool", "initAllBinaryEventCircularPool", (void*) AllBinaryEventCircularPool_initAllBinaryEventCircularPool);
}


void AllBinaryEventCircularPool_init(AllBinaryEventCircularPool* this, int32_t max) {
    AllBinaryEventCircularPool_register();
    BaseCircularPool_init(&this->base);
        this->base.OBJECT_ARRAY = ((void**) java_array_new(sizeof(void*), max));
        this->base.circularIndexUtil = CircularIndexUtil_createInstance(max);
}

AllBinaryEventCircularPool* AllBinaryEventCircularPool_new(int32_t max) {
    AllBinaryEventCircularPool* this = java_object_alloc(sizeof(AllBinaryEventCircularPool), "AllBinaryEventCircularPool");
    AllBinaryEventCircularPool_init(this, max);
    return this;
}


void AllBinaryEventCircularPool_initAllBinaryEventCircularPool(AllBinaryEventCircularPool* this, AllBinaryEventObjectFactoryInterface* allBinaryEventObjectFactoryInterface) {
        CircularIndexUtil_setIndex(this->base.circularIndexUtil, 0);
        int32_t size = CircularIndexUtil_getSize(this->base.circularIndexUtil);
        for (int32_t index = 0; index < size; index++) {
            this->base.OBJECT_ARRAY[index] = AllBinaryEventObjectFactoryInterface_getInstance(allBinaryEventObjectFactoryInterface);
        }
}

