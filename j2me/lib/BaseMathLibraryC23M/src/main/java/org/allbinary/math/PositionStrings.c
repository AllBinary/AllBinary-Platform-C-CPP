// Generated Code Do Not Modify
#include "org/allbinary/math/PositionStrings.h"


static PositionStrings* PositionStrings_instance;


void PositionStrings_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PositionStrings_instance = PositionStrings_new();
}

void PositionStrings_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PositionStrings", nullptr);
}

static void PositionStrings_initFields(PositionStrings* this) {
    this->X = "x";
    this->Y = "y";
    this->X_LABEL = "x: ";
    this->Y_LABEL = "y: ";
    this->Z_LABEL = "z: ";
    this->DX_LABEL = "dx: ";
    this->DY_LABEL = "dy: ";
    this->DZ_LABEL = "dz: ";
}

void PositionStrings_init(PositionStrings* this) {
    PositionStrings_register();
    PositionStrings_initFields(this);
}

PositionStrings* PositionStrings_new(void) {
    PositionStrings* this = java_object_alloc(sizeof(PositionStrings), "PositionStrings");
    PositionStrings_init(this);
    return this;
}


PositionStrings* PositionStrings_getInstance(void) {
        return (PositionStrings_staticInit(), PositionStrings_instance);
}

