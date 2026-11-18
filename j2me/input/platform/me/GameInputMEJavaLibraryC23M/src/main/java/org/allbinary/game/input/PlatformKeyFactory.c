// Generated Code Do Not Modify
#include "org/allbinary/game/input/PlatformKeyFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/game/input/J2MEGameKey.h"
#include "org/allbinary/game/input/J2MEKeyFactory.h"
#include "org/allbinary/game/input/Input.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif


static void* PlatformKeyFactory_instance;











void PlatformKeyFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PlatformKeyFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void PlatformKeyFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PlatformKeyFactory", nullptr);
    java_register_method("PlatformKeyFactory", "getString", (void*) PlatformKeyFactory_getString);
    java_register_method("PlatformKeyFactory", "isSubmission", (void*) PlatformKeyFactory_isSubmission);
    java_register_method("PlatformKeyFactory", "isDelete", (void*) PlatformKeyFactory_isDelete);
    java_register_method("PlatformKeyFactory", "isBackSpace", (void*) PlatformKeyFactory_isBackSpace);
    java_register_method("PlatformKeyFactory", "isLeft", (void*) PlatformKeyFactory_isLeft);
    java_register_method("PlatformKeyFactory", "isRight", (void*) PlatformKeyFactory_isRight);
    java_register_method("PlatformKeyFactory", "isUp", (void*) PlatformKeyFactory_isUp);
    java_register_method("PlatformKeyFactory", "isDown", (void*) PlatformKeyFactory_isDown);
    java_register_method("PlatformKeyFactory", "isEnter", (void*) PlatformKeyFactory_isEnter);
}

void PlatformKeyFactory_init(PlatformKeyFactory* this) {
    PlatformKeyFactory_register();
}

PlatformKeyFactory* PlatformKeyFactory_new(void) {
    PlatformKeyFactory* this = java_object_alloc(sizeof(PlatformKeyFactory), "PlatformKeyFactory");
    PlatformKeyFactory_init(this);
    return this;
}


PlatformKeyFactory* PlatformKeyFactory_getInstance(void) {
        if ((PlatformKeyFactory_staticInit(), PlatformKeyFactory_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            PlatformKeyFactory_instance = PlatformKeyFactory_new();
        }
        return ((PlatformKeyFactory*) (PlatformKeyFactory_staticInit(), PlatformKeyFactory_instance));
}


const char* PlatformKeyFactory_getString(PlatformKeyFactory* this, int32_t keyCode) {
        return J2MEGameKey_getString(keyCode);
}


bool PlatformKeyFactory_isSubmission(PlatformKeyFactory* this, Input* input) {
        return J2MEKeyFactory_isSubmission(J2MEKeyFactory_getInstance(), input);
}


bool PlatformKeyFactory_isDelete(PlatformKeyFactory* this, Input* input) {
        return J2MEKeyFactory_isDelete(J2MEKeyFactory_getInstance(), input);
}


bool PlatformKeyFactory_isBackSpace(PlatformKeyFactory* this, Input* input) {
        return J2MEKeyFactory_isBackSpace(J2MEKeyFactory_getInstance(), input);
}


bool PlatformKeyFactory_isLeft(PlatformKeyFactory* this, Input* input) {
        return J2MEKeyFactory_isLeft(J2MEKeyFactory_getInstance(), input);
}


bool PlatformKeyFactory_isRight(PlatformKeyFactory* this, Input* input) {
        return J2MEKeyFactory_isRight(J2MEKeyFactory_getInstance(), input);
}


bool PlatformKeyFactory_isUp(PlatformKeyFactory* this, Input* input) {
        return J2MEKeyFactory_isUp(J2MEKeyFactory_getInstance(), input);
}


bool PlatformKeyFactory_isDown(PlatformKeyFactory* this, Input* input) {
        return J2MEKeyFactory_isDown(J2MEKeyFactory_getInstance(), input);
}


bool PlatformKeyFactory_isEnter(PlatformKeyFactory* this, Input* input) {
        return J2MEKeyFactory_isEnter(J2MEKeyFactory_getInstance(), input);
}

