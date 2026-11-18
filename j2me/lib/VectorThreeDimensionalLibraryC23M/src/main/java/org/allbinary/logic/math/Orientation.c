// Generated Code Do Not Modify
#include "org/allbinary/logic/math/Orientation.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/math/BasicDecimal.h"


Orientation* Orientation_NONE;
static Orientation* Orientation_SINGLETON;




void Orientation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    Orientation_NONE = Orientation_new(0, 0, 0);
    Orientation_SINGLETON = Orientation_new(0, 0, 0);
}

void Orientation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Orientation", nullptr);
    java_register_method("Orientation", "toString", (void*) Orientation_toString);
}

static void Orientation_initFields(Orientation* this) {
    this->yaw = BasicDecimal_new(0);
    this->pitch = BasicDecimal_new(0);
    this->roll = BasicDecimal_new(0);
}


Orientation* Orientation_getInstance(int32_t yaw, int32_t pitch, int32_t roll) {
        BasicDecimal_setint((Orientation_staticInit(), Orientation_SINGLETON)->yaw, yaw);
        BasicDecimal_setint((Orientation_staticInit(), Orientation_SINGLETON)->pitch, pitch);
        BasicDecimal_setint((Orientation_staticInit(), Orientation_SINGLETON)->roll, roll);
        return (Orientation_staticInit(), Orientation_SINGLETON);
}


void Orientation_init(Orientation* this, int32_t yaw, int32_t pitch, int32_t roll) {
    Orientation_register();
    Orientation_initFields(this);
        BasicDecimal_setint(this->yaw, yaw);
        BasicDecimal_setint(this->pitch, pitch);
        BasicDecimal_setint(this->roll, roll);
}

Orientation* Orientation_new(int32_t yaw, int32_t pitch, int32_t roll) {
    Orientation* this = java_object_alloc(sizeof(Orientation), "Orientation");
    Orientation_init(this, yaw, pitch, roll);
    return this;
}


const char* Orientation_toString(Orientation* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Y: ");
        StringMaker_append(stringBuffer, java_string_of(this->yaw));
        StringMaker_append(stringBuffer, " P: ");
        StringMaker_append(stringBuffer, java_string_of(this->pitch));
        StringMaker_append(stringBuffer, " R: ");
        StringMaker_append(stringBuffer, java_string_of(this->roll));
        return java_string_of(stringBuffer);
}

