// Generated Code Do Not Modify
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/logic/math/ScaleFactorFactory.h"


BasicDecimal* BasicDecimal_ZERO_BIGDECIMAL;



















static void BasicDecimal_updateScaled(BasicDecimal* this);





void BasicDecimal_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BasicDecimal_ZERO_BIGDECIMAL = BasicDecimal_new(0);
}

void BasicDecimal_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicDecimal", nullptr);
    java_register_method("BasicDecimal", "setint", (void*) BasicDecimal_setint);
    java_register_method("BasicDecimal", "setlong", (void*) BasicDecimal_setlong);
    java_register_method("BasicDecimal", "set", (void*) BasicDecimal_set);
    java_register_method("BasicDecimal", "addint", (void*) BasicDecimal_addint);
    java_register_method("BasicDecimal", "addlong", (void*) BasicDecimal_addlong);
    java_register_method("BasicDecimal", "add", (void*) BasicDecimal_add);
    java_register_method("BasicDecimal", "subtractint", (void*) BasicDecimal_subtractint);
    java_register_method("BasicDecimal", "subtractlong", (void*) BasicDecimal_subtractlong);
    java_register_method("BasicDecimal", "subtract", (void*) BasicDecimal_subtract);
    java_register_method("BasicDecimal", "multiplyint", (void*) BasicDecimal_multiplyint);
    java_register_method("BasicDecimal", "multiplylong", (void*) BasicDecimal_multiplylong);
    java_register_method("BasicDecimal", "multiply", (void*) BasicDecimal_multiply);
    java_register_method("BasicDecimal", "divideint", (void*) BasicDecimal_divideint);
    java_register_method("BasicDecimal", "dividelong", (void*) BasicDecimal_dividelong);
    java_register_method("BasicDecimal", "divide", (void*) BasicDecimal_divide);
    java_register_method("BasicDecimal", "getUnscaled", (void*) BasicDecimal_getUnscaled);
    java_register_method("BasicDecimal", "updateScaled", (void*) BasicDecimal_updateScaled);
    java_register_method("BasicDecimal", "getScaled", (void*) BasicDecimal_getScaled);
    java_register_method("BasicDecimal", "toString", (void*) BasicDecimal_toString);
    java_register_method("BasicDecimal", "getScaledFactor", (void*) BasicDecimal_getScaledFactor);
    java_register_method("BasicDecimal", "getScaledFactorValue", (void*) BasicDecimal_getScaledFactorValue);
}

static void BasicDecimal_initFields(BasicDecimal* this) {
    
    this->scaled = 0;
    this->factor = ScaleFactorFactory_getInstance()->DEFAULT_SCALE_FACTOR;
    this->factorValue = ScaleFactorFactory_getInstance()->DEFAULT_SCALE_VALUE;
}


BasicDecimal* BasicDecimal_createBigDecimal(BasicDecimal* bigDecimal) {
        return BasicDecimal_new(BasicDecimal_getUnscaled(bigDecimal));
}


void BasicDecimal_init(BasicDecimal* this, int64_t units) {
    BasicDecimal_register();
    BasicDecimal_initFields(this);
        this->units = units;
        BasicDecimal_updateScaled(this);
}

BasicDecimal* BasicDecimal_new(int64_t units) {
    BasicDecimal* this = java_object_alloc(sizeof(BasicDecimal), "BasicDecimal");
    BasicDecimal_init(this, units);
    return this;
}


void BasicDecimal_setint(BasicDecimal* this, int32_t value) {
        this->units = ((int64_t) value);
        BasicDecimal_updateScaled(this);
}


void BasicDecimal_setlong(BasicDecimal* this, int64_t value) {
        this->units = value;
        BasicDecimal_updateScaled(this);
}


void BasicDecimal_set(BasicDecimal* this, BasicDecimal* bigDecimal) {
        this->units = BasicDecimal_getUnscaled(bigDecimal);
        BasicDecimal_updateScaled(this);
}


void BasicDecimal_addint(BasicDecimal* this, int32_t value) {
        this->units = this->units + ((int64_t) value);
        BasicDecimal_updateScaled(this);
}


void BasicDecimal_addlong(BasicDecimal* this, int64_t value) {
        this->units = this->units + value;
        BasicDecimal_updateScaled(this);
}


void BasicDecimal_add(BasicDecimal* this, BasicDecimal* bigDecimal) {
        this->units = this->units + BasicDecimal_getUnscaled(bigDecimal);
        BasicDecimal_updateScaled(this);
}


void BasicDecimal_subtractint(BasicDecimal* this, int32_t value) {
        this->units = this->units - ((int64_t) value);
        BasicDecimal_updateScaled(this);
}


void BasicDecimal_subtractlong(BasicDecimal* this, int64_t value) {
        this->units = this->units - value;
        BasicDecimal_updateScaled(this);
}


void BasicDecimal_subtract(BasicDecimal* this, BasicDecimal* bigDecimal) {
        this->units = this->units - BasicDecimal_getUnscaled(bigDecimal);
        BasicDecimal_updateScaled(this);
}


void BasicDecimal_multiplyint(BasicDecimal* this, int32_t value) {
        this->units = this->units * ((int64_t) value);
        BasicDecimal_updateScaled(this);
}


void BasicDecimal_multiplylong(BasicDecimal* this, int64_t value) {
        this->units = this->units * value;
        BasicDecimal_updateScaled(this);
}


void BasicDecimal_multiply(BasicDecimal* this, BasicDecimal* bigDecimal) {
        this->units = this->units * BasicDecimal_getUnscaled(bigDecimal);
        BasicDecimal_updateScaled(this);
}


void BasicDecimal_divideint(BasicDecimal* this, int32_t value) {
        this->units = this->units / ((int64_t) value);
        BasicDecimal_updateScaled(this);
}


void BasicDecimal_dividelong(BasicDecimal* this, int64_t value) {
        this->units = this->units / value;
        BasicDecimal_updateScaled(this);
}


void BasicDecimal_divide(BasicDecimal* this, BasicDecimal* bigDecimal) {
        this->units = this->units / BasicDecimal_getUnscaled(bigDecimal);
        BasicDecimal_updateScaled(this);
}


int64_t BasicDecimal_getUnscaled(BasicDecimal* this) {
        return this->units;
}


static void BasicDecimal_updateScaled(BasicDecimal* this) {
        this->scaled = ((int32_t) (this->units / ((int64_t) this->factorValue)));
}


int32_t BasicDecimal_getScaled(BasicDecimal* this) {
        return this->scaled;
}


const char* BasicDecimal_toString(BasicDecimal* this) {
        return java_string_of(this->units);
}


int32_t BasicDecimal_getScaledFactor(BasicDecimal* this) {
        return this->factor;
}


int32_t BasicDecimal_getScaledFactorValue(BasicDecimal* this) {
        return this->factorValue;
}

