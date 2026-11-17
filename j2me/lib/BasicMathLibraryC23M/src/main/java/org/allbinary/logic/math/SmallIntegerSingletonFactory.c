// Generated Code Do Not Modify
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/AndroidUtil.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"


static SmallIntegerSingletonFactory* SmallIntegerSingletonFactory_instance;



static int32_t SmallIntegerSingletonFactory_getMinAllowed(SmallIntegerSingletonFactory* this);








void SmallIntegerSingletonFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    SmallIntegerSingletonFactory_instance = SmallIntegerSingletonFactory_new();
}

void SmallIntegerSingletonFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SmallIntegerSingletonFactory", nullptr);
    java_register_method("SmallIntegerSingletonFactory", "getMin", (void*) SmallIntegerSingletonFactory_getMin);
    java_register_method("SmallIntegerSingletonFactory", "getMinAllowed", (void*) SmallIntegerSingletonFactory_getMinAllowed);
    java_register_method("SmallIntegerSingletonFactory", "initWithRange", (void*) SmallIntegerSingletonFactory_initWithRange);
    java_register_method("SmallIntegerSingletonFactory", "init", (void*) SmallIntegerSingletonFactory_initMethod);
    java_register_method("SmallIntegerSingletonFactory", "getAt", (void*) SmallIntegerSingletonFactory_getAt);
    java_register_method("SmallIntegerSingletonFactory", "getAtNoThrow", (void*) SmallIntegerSingletonFactory_getAtNoThrow);
    java_register_method("SmallIntegerSingletonFactory", "createInstance", (void*) SmallIntegerSingletonFactory_createInstance);
    java_register_method("SmallIntegerSingletonFactory", "getString", (void*) SmallIntegerSingletonFactory_getString);
}

static void SmallIntegerSingletonFactory_initFields(SmallIntegerSingletonFactory* this) {
    this->NEGATIVE_MAX = 500;
    this->POSITIVE_MAX = 0x2D1;
    this->INTEGER_ARRAY = ((int32_t*) java_array_new(sizeof(int32_t), this->NEGATIVE_MAX + this->POSITIVE_MAX));
    this->STRING_ARRAY = ((const char**) java_array_new(sizeof(const char*), this->NEGATIVE_MAX + this->POSITIVE_MAX));
    this->MIN = 0;
    this->lastMin = 0;
    this->lastNegativeMin = 0;
}


SmallIntegerSingletonFactory* SmallIntegerSingletonFactory_getInstance(void) {
        return (SmallIntegerSingletonFactory_staticInit(), SmallIntegerSingletonFactory_instance);
}


int32_t SmallIntegerSingletonFactory_getMin(SmallIntegerSingletonFactory* this) {
        int32_t minAllowed = SmallIntegerSingletonFactory_getMinAllowed(this);
        if (this->MIN <= minAllowed) {
            if (J2MEUtil_isJ2ME()) {
            } else if (AndroidUtil_isAndroid()) {
                LogUtil* logUtil = LogUtil_getInstance();
                LogUtil_putF(logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), "Android InputFactory was initialized before GameMidlet: "), this->MIN)), this, "getMin");
                SmallIntegerSingletonFactory_initWithRange(this, 0x291, 6);
            } else {
                LogUtil* logUtil = LogUtil_getInstance();
                LogUtil_putF(logUtil, java_string_of(StringMaker_appendint(StringMaker_append(StringMaker_new(), "InputFactory was initialized before GameMidlet or KeyFactoryInitializer - Currently this is occurs on JS build by TouchMotionGestureFactory constructor: "), this->MIN)), this, "getMin");
                SmallIntegerSingletonFactory_initWithRange(this, 0x2D0, 6);
            }
        }
        if (this->MIN <= minAllowed) {
            LogUtil* logUtil = LogUtil_getInstance();
            LogUtil_put(logUtil, "This means you loaded the InputFactory before determining the platform input size requirements.", this, "getMin", java_exception_new("Exception", ""));
        }
        return this->MIN;
}


static int32_t SmallIntegerSingletonFactory_getMinAllowed(SmallIntegerSingletonFactory* this) {
        if (J2MEUtil_isJ2ME()) {
            return 0;
        } else {
            if (AndroidUtil_isAndroid()) {
                return 0x101;
            } else {
                return 23;
            }
        }
}


void SmallIntegerSingletonFactory_initWithRange(SmallIntegerSingletonFactory* this, int32_t value, int32_t negativeValue) {
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


void SmallIntegerSingletonFactory_initMethod(SmallIntegerSingletonFactory* this) {
        if (this->lastMin < this->POSITIVE_MAX || this->lastNegativeMin < this->NEGATIVE_MAX) {
            for (int32_t index = this->POSITIVE_MAX - 1; index >= this->lastMin; index--) {
                this->INTEGER_ARRAY[index + this->NEGATIVE_MAX] = index;
            }
            for (int32_t index = this->NEGATIVE_MAX - 1; index >= this->lastNegativeMin; index--) {
                this->INTEGER_ARRAY[index] = -index;
            }
            this->lastMin = this->POSITIVE_MAX;
            this->MIN = this->lastMin;
            this->lastNegativeMin = this->NEGATIVE_MAX;
        }
}


void SmallIntegerSingletonFactory_init(SmallIntegerSingletonFactory* this) {
    SmallIntegerSingletonFactory_register();
    SmallIntegerSingletonFactory_initFields(this);
        SmallIntegerSingletonFactory_initWithRange(this, 23, 0);
}

SmallIntegerSingletonFactory* SmallIntegerSingletonFactory_new(void) {
    SmallIntegerSingletonFactory* this = java_object_alloc(sizeof(SmallIntegerSingletonFactory), "SmallIntegerSingletonFactory");
    SmallIntegerSingletonFactory_init(this);
    return this;
}


int32_t SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory* this, int32_t index) {
        return this->INTEGER_ARRAY[index + this->NEGATIVE_MAX];
}


int32_t SmallIntegerSingletonFactory_getAtNoThrow(SmallIntegerSingletonFactory* this, int32_t index) {
        if (index + this->NEGATIVE_MAX > java_array_length(this->INTEGER_ARRAY) - 1) {
            return this->INTEGER_ARRAY[-1 + this->NEGATIVE_MAX];
        }
        return this->INTEGER_ARRAY[index + this->NEGATIVE_MAX];
}


int32_t SmallIntegerSingletonFactory_createInstance(SmallIntegerSingletonFactory* this, int32_t index) {
        int32_t integer = SmallIntegerSingletonFactory_getAt(this, index);
        if (integer == 0) {
            integer = index;
        }
        return integer;
}


const char* SmallIntegerSingletonFactory_getString(SmallIntegerSingletonFactory* this, int32_t index) {
        int32_t i = index + this->NEGATIVE_MAX;
        if (this->STRING_ARRAY[i] == nullptr) {
            this->STRING_ARRAY[i] = java_string_of(this->INTEGER_ARRAY[i]);
        }
        return this->STRING_ARRAY[i];
}

