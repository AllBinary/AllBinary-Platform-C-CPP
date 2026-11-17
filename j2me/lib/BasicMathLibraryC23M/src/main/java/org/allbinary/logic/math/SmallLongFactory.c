// Generated Code Do Not Modify
#include "org/allbinary/logic/math/SmallLongFactory.h"


static SmallLongFactory* SmallLongFactory_instance;







void SmallLongFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    SmallLongFactory_instance = SmallLongFactory_new();
}

void SmallLongFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SmallLongFactory", nullptr);
    java_register_method("SmallLongFactory", "initWithRange", (void*) SmallLongFactory_initWithRange);
    java_register_method("SmallLongFactory", "init", (void*) SmallLongFactory_initMethod);
    java_register_method("SmallLongFactory", "getInstanceNoThrow", (void*) SmallLongFactory_getInstanceNoThrow);
    java_register_method("SmallLongFactory", "getString", (void*) SmallLongFactory_getString);
}

static void SmallLongFactory_initFields(SmallLongFactory* this) {
    this->NEGATIVE_MAX = 500;
    this->POSITIVE_MAX = 0x2D1;
    this->INTEGER_ARRAY = ((int64_t*) java_array_new(sizeof(int64_t), this->NEGATIVE_MAX + this->POSITIVE_MAX));
    this->STRING_ARRAY = ((const char**) java_array_new(sizeof(const char*), this->NEGATIVE_MAX + this->POSITIVE_MAX));
    this->MIN = 0;
    this->lastMin = 0;
    this->lastNegativeMin = 0;
}


SmallLongFactory* SmallLongFactory_getInstance(void) {
        return (SmallLongFactory_staticInit(), SmallLongFactory_instance);
}


void SmallLongFactory_initWithRange(SmallLongFactory* this, int32_t value, int32_t negativeValue) {
        for (int32_t index = value - 1; index >= this->lastMin; index--) {
            this->INTEGER_ARRAY[index + this->NEGATIVE_MAX] = index;
        }
        for (int32_t index = negativeValue - 1; index >= this->lastNegativeMin; index--) {
            this->INTEGER_ARRAY[index] = -index;
        }
        if (this->lastMin < value) {
            this->lastMin = value;
            this->MIN = value;
        }
        if (this->lastNegativeMin < negativeValue) {
            this->lastNegativeMin = negativeValue;
        }
}


void SmallLongFactory_initMethod(SmallLongFactory* this) {
        if (this->INTEGER_ARRAY[0] == 0) {
            if (this->lastMin < this->POSITIVE_MAX || this->lastNegativeMin < this->NEGATIVE_MAX) {
                for (int32_t index = this->POSITIVE_MAX - 1; index >= this->lastMin; index--) {
                    this->INTEGER_ARRAY[index + this->NEGATIVE_MAX] = index;
                }
                for (int32_t index = this->NEGATIVE_MAX - 1; index >= this->lastNegativeMin; index--) {
                    this->INTEGER_ARRAY[index] = -index;
                }
                this->lastMin = this->POSITIVE_MAX;
                this->lastNegativeMin = this->NEGATIVE_MAX;
            }
        }
}


void SmallLongFactory_init(SmallLongFactory* this) {
    SmallLongFactory_register();
    SmallLongFactory_initFields(this);
}

SmallLongFactory* SmallLongFactory_new(void) {
    SmallLongFactory* this = java_object_alloc(sizeof(SmallLongFactory), "SmallLongFactory");
    SmallLongFactory_init(this);
    return this;
}


int64_t SmallLongFactory_getInstanceNoThrow(SmallLongFactory* this, int64_t index) {
        if (index + ((int64_t) this->NEGATIVE_MAX) > ((int64_t) (java_array_length(this->INTEGER_ARRAY) - 1))) {
            return this->INTEGER_ARRAY[-1 + this->NEGATIVE_MAX];
        }
        return this->INTEGER_ARRAY[(((int32_t) index)) + this->NEGATIVE_MAX];
}


const char* SmallLongFactory_getString(SmallLongFactory* this, int32_t index) {
        int32_t i = index + this->NEGATIVE_MAX;
        if (this->STRING_ARRAY[i] == nullptr) {
            this->STRING_ARRAY[i] = java_string_of(this->INTEGER_ARRAY[i]);
        }
        return this->STRING_ARRAY[i];
}

