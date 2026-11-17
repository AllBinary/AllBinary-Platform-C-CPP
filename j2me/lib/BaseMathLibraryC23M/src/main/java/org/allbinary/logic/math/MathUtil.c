// Generated Code Do Not Modify
#include "org/allbinary/logic/math/MathUtil.h"


static MathUtil* MathUtil_instance;









void MathUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    MathUtil_instance = MathUtil_new();
}

void MathUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MathUtil", nullptr);
    java_register_method("MathUtil", "getTotalDigits", (void*) MathUtil_getTotalDigits);
    java_register_method("MathUtil", "sqrt", (void*) MathUtil_sqrt);
    java_register_method("MathUtil", "sqrtd", (void*) MathUtil_sqrtd);
    java_register_method("MathUtil", "abs", (void*) MathUtil_abs);
    java_register_method("MathUtil", "abslong", (void*) MathUtil_abslong);
    java_register_method("MathUtil", "min", (void*) MathUtil_min);
    java_register_method("MathUtil", "max", (void*) MathUtil_max);
}

static void MathUtil_initFields(MathUtil* this) {
    this->ACCURACY = 100;
}

void MathUtil_init(MathUtil* this) {
    MathUtil_register();
    MathUtil_initFields(this);
}

MathUtil* MathUtil_new(void) {
    MathUtil* this = java_object_alloc(sizeof(MathUtil), "MathUtil");
    MathUtil_init(this);
    return this;
}


MathUtil* MathUtil_getInstance(void) {
        return (MathUtil_staticInit(), MathUtil_instance);
}


int32_t MathUtil_getTotalDigits(MathUtil* this, int32_t digits) {
        int32_t total = 0;
        while (digits > 0) {
            digits = digits / 10;
            total++;
        }
        return total;
}


int32_t MathUtil_sqrt(MathUtil* this, int32_t value) {
        if (value <= 1) {
            return value;
        }
        int32_t accumulated = value >> 1;
        int32_t result = (accumulated + (value / accumulated)) >> 1;
        do {
            accumulated = result;
            result = (accumulated + (value / accumulated)) >> 1;
        } while (accumulated > result);
        return accumulated;
}


double MathUtil_sqrtd(MathUtil* this, int32_t x) {
        if (x == 0) {
            return ((double) 0.0f);
        }
        if (x < 0) {
            return ((double) (-1.0f));
        }
        double result = ((double) x);
        for (int32_t index = 0; index < this->ACCURACY; index++) {
            result = (result + (((double) x) / result)) / 2.0;
        }
        return result;
}


int32_t MathUtil_abs(MathUtil* this, int32_t value) {
        return ((value < 0) ? -value : value);
}


int64_t MathUtil_abslong(MathUtil* this, int64_t value) {
        return ((value < 0LL) ? -value : value);
}


int32_t MathUtil_min(MathUtil* this, int32_t value, int32_t value2) {
        return ((value <= value2) ? value : value2);
}


int32_t MathUtil_max(MathUtil* this, int32_t value, int32_t value2) {
        return ((value >= value2) ? value : value2);
}

