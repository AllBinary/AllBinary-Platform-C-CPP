// Generated Code Do Not Modify
#include "org/allbinary/media/AllBinaryNoVibration.h"
#include "org/allbinary/media/AllBinaryVibrationME.h"


AllBinaryVibrationME* AllBinaryNoVibration_NO_VIBRATION;


void AllBinaryNoVibration_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AllBinaryNoVibration_NO_VIBRATION = AllBinaryNoVibration_new();
}

void AllBinaryNoVibration_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinaryNoVibration", "AllBinaryVibrationME");
    java_register_method("AllBinaryNoVibration", "vibrate", (void*) AllBinaryNoVibration_vibrate);
}

void AllBinaryNoVibration_init(AllBinaryNoVibration* this) {
    AllBinaryNoVibration_register();
    AllBinaryVibrationME_init(&this->base);
}

AllBinaryNoVibration* AllBinaryNoVibration_new(void) {
    AllBinaryNoVibration* this = java_object_alloc(sizeof(AllBinaryNoVibration), "AllBinaryNoVibration");
    AllBinaryNoVibration_init(this);
    return this;
}


void AllBinaryNoVibration_vibrate(AllBinaryNoVibration* this, int32_t duration, int32_t type, int32_t volume) {
}

