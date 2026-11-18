// Generated Code Do Not Modify
#include "org/allbinary/logic/math/J2SEMath.h"


static J2SEMath* J2SEMath_instance;





void J2SEMath_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    J2SEMath_instance = J2SEMath_new();
}

void J2SEMath_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("J2SEMath", nullptr);
    java_register_method("J2SEMath", "round", (void*) J2SEMath_round);
    java_register_method("J2SEMath", "abs", (void*) J2SEMath_abs);
    java_register_method("J2SEMath", "absdouble", (void*) J2SEMath_absdouble);
}

void J2SEMath_init(J2SEMath* this) {
    J2SEMath_register();
}

J2SEMath* J2SEMath_new(void) {
    J2SEMath* this = java_object_alloc(sizeof(J2SEMath), "J2SEMath");
    J2SEMath_init(this);
    return this;
}


J2SEMath* J2SEMath_getInstance(void) {
        return (J2SEMath_staticInit(), J2SEMath_instance);
}


int32_t J2SEMath_round(J2SEMath* this, float value) {
        return ((int64_t) llround(value));
}


float J2SEMath_abs(J2SEMath* this, float value) {
        return ((value < 0.0f) ? -value : value);
}


double J2SEMath_absdouble(J2SEMath* this, double value) {
        return ((value < 0.0) ? -value : value);
}

