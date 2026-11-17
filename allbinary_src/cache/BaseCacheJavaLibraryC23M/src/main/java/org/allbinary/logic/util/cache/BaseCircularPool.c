// Generated Code Do Not Modify
#include "org/allbinary/logic/util/cache/BaseCircularPool.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/logic/util/cache/AllBinaryObjectFactoryInterface.h"






void BaseCircularPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BaseCircularPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BaseCircularPool", nullptr);
    java_register_method("BaseCircularPool", "getNextInstance", (void*) BaseCircularPool_getNextInstance);
    java_register_method("BaseCircularPool", "init", (void*) BaseCircularPool_initMethod);
    java_register_method("BaseCircularPool", "getInstance", (void*) BaseCircularPool_getInstance);
}

static void BaseCircularPool_initFields(BaseCircularPool* this) {
    this->circularIndexUtil = (CircularIndexUtil_staticInit(), CircularIndexUtil_NULL_CIRCULAR_INDEX_UTIL);
    this->OBJECT_ARRAY = NullUtil_getInstance()->NULL_OBJECT_ARRAY;
}

void BaseCircularPool_init(BaseCircularPool* this) {
    BaseCircularPool_register();
    BaseCircularPool_initFields(this);
}

BaseCircularPool* BaseCircularPool_new(void) {
    BaseCircularPool* this = java_object_alloc(sizeof(BaseCircularPool), "BaseCircularPool");
    BaseCircularPool_init(this);
    return this;
}


// throws Exception
// synchronized
void* BaseCircularPool_getNextInstance(BaseCircularPool* this) {
        void* anyType = this->OBJECT_ARRAY[CircularIndexUtil_getIndex(this->circularIndexUtil)];
        CircularIndexUtil_next(this->circularIndexUtil);
        return anyType;
}


void BaseCircularPool_initMethod(BaseCircularPool* this, AllBinaryObjectFactoryInterface* allBinaryObjectFactoryInterface) {
        CircularIndexUtil_setIndex(this->circularIndexUtil, 0);
        int32_t size = CircularIndexUtil_getSize(this->circularIndexUtil);
        for (int32_t index = 0; index < size; index++) {
            this->OBJECT_ARRAY[index] = AllBinaryObjectFactoryInterface_getInstance(allBinaryObjectFactoryInterface);
        }
}


// throws Exception
void* BaseCircularPool_getInstance(BaseCircularPool* this, int32_t index) {
        return this->OBJECT_ARRAY[index];
}

