// Generated Code Do Not Modify
#include "org/allbinary/media/AllBinaryVibration.h"
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#include "org/allbinary/media/AllBinaryVibrationME.h"
#include "org/allbinary/media/AllBinaryNoVibration.h"
#if __has_include("org/allbinary/game/configuration/GameConfigurationCentral.h")
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#endif


static AllBinaryVibrationME* AllBinaryVibration_VIBRATION;





void AllBinaryVibration_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AllBinaryVibration_VIBRATION = (AllBinaryNoVibration_staticInit(), AllBinaryNoVibration_NO_VIBRATION);
}

void AllBinaryVibration_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinaryVibration", "AllBinaryVibrationME");
    java_register_method("AllBinaryVibration", "vibrate", (void*) AllBinaryVibration_vibrate);
}


void AllBinaryVibration_init(AllBinaryVibration* this) {
    AllBinaryVibration_register();
    AllBinaryVibrationME_init(&this->base);
}

AllBinaryVibration* AllBinaryVibration_new(void) {
    AllBinaryVibration* this = java_object_alloc(sizeof(AllBinaryVibration), "AllBinaryVibration");
    AllBinaryVibration_init(this);
    return this;
}


AllBinaryVibrationME* AllBinaryVibration_getInstance(void) {
        return (AllBinaryVibration_staticInit(), AllBinaryVibration_VIBRATION);
}


void AllBinaryVibration_initMethod(void) {
        if (Integer_intValue(GameConfiguration_getValue(GameConfigurationCentral_getInstance()->VIBRATION)) == 0) {
            AllBinaryVibration_VIBRATION = (AllBinaryNoVibration_staticInit(), AllBinaryNoVibration_NO_VIBRATION);
        } else {
            AllBinaryVibration_VIBRATION = AllBinaryVibration_new();
        }
}


void AllBinaryVibration_vibrate(AllBinaryVibration* this, int32_t duration, int32_t type, int32_t volume) {
}

