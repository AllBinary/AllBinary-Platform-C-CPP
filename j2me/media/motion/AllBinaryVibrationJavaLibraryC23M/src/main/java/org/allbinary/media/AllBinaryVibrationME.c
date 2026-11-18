// Generated Code Do Not Modify
#include "org/allbinary/media/AllBinaryVibrationME.h"




void AllBinaryVibrationME_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AllBinaryVibrationME_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinaryVibrationME", nullptr);
    java_register_method("AllBinaryVibrationME", "vibrate", (void*) AllBinaryVibrationME_vibrate);
}

void AllBinaryVibrationME_init(AllBinaryVibrationME* this) {
    AllBinaryVibrationME_register();
}

AllBinaryVibrationME* AllBinaryVibrationME_new(void) {
    AllBinaryVibrationME* this = java_object_alloc(sizeof(AllBinaryVibrationME), "AllBinaryVibrationME");
    AllBinaryVibrationME_init(this);
    return this;
}


void AllBinaryVibrationME_vibrate(AllBinaryVibrationME* this, int32_t duration, int32_t type, int32_t volume) {
}

