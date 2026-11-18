// Generated Code Do Not Modify
#include "org/allbinary/logic/math/vector/AxisMathVectorUtil.h"
#include "org/allbinary/math/NoDecimalTrigTable.h"


static AxisMathVectorUtil* AxisMathVectorUtil_instance;





void AxisMathVectorUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AxisMathVectorUtil_instance = AxisMathVectorUtil_new();
}

void AxisMathVectorUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AxisMathVectorUtil", nullptr);
    java_register_method("AxisMathVectorUtil", "calculateX", (void*) AxisMathVectorUtil_calculateX);
    java_register_method("AxisMathVectorUtil", "calculateY", (void*) AxisMathVectorUtil_calculateY);
    java_register_method("AxisMathVectorUtil", "calculateZ", (void*) AxisMathVectorUtil_calculateZ);
}

static void AxisMathVectorUtil_initFields(AxisMathVectorUtil* this) {
    this->noDecimalTrigTable = NoDecimalTrigTable_getInstance();
}

void AxisMathVectorUtil_init(AxisMathVectorUtil* this) {
    AxisMathVectorUtil_register();
    AxisMathVectorUtil_initFields(this);
}

AxisMathVectorUtil* AxisMathVectorUtil_new(void) {
    AxisMathVectorUtil* this = java_object_alloc(sizeof(AxisMathVectorUtil), "AxisMathVectorUtil");
    AxisMathVectorUtil_init(this);
    return this;
}


AxisMathVectorUtil* AxisMathVectorUtil_getInstance(void) {
        return (AxisMathVectorUtil_staticInit(), AxisMathVectorUtil_instance);
}


int64_t AxisMathVectorUtil_calculateX(AxisMathVectorUtil* this, int64_t magnitude, int32_t angle) {
        return magnitude * NoDecimalTrigTable_cos(this->noDecimalTrigTable, angle) / 10LL;
}


int64_t AxisMathVectorUtil_calculateY(AxisMathVectorUtil* this, int64_t magnitude, int32_t angle) {
        return magnitude * NoDecimalTrigTable_sin(this->noDecimalTrigTable, angle) / 10LL;
}


int64_t AxisMathVectorUtil_calculateZ(AxisMathVectorUtil* this, int64_t magnitude, int32_t otherAngle) {
        return magnitude * NoDecimalTrigTable_sin(this->noDecimalTrigTable, otherAngle) / 10LL;
}

