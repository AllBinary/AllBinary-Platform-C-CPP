// Generated Code Do Not Modify
#include "org/allbinary/logic/system/security/licensing/LockedUtil.h"
#include "org/allbinary/logic/system/security/licensing/LockedUtilInterface.h"
#include "org/allbinary/logic/system/security/licensing/LockableFeature.h"


static LockedUtil* LockedUtil_instance;




void LockedUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LockedUtil_instance = LockedUtil_new();
}

void LockedUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LockedUtil", nullptr);
    java_register_method("LockedUtil", "isLocked", (void*) LockedUtil_isLocked);
    java_register_method("LockedUtil", "isLockedFeature", (void*) LockedUtil_isLockedFeature);
}

void LockedUtil_init(LockedUtil* this) {
    LockedUtil_register();
}

LockedUtil* LockedUtil_new(void) {
    LockedUtil* this = java_object_alloc(sizeof(LockedUtil), "LockedUtil");
    LockedUtil_init(this);
    return this;
}


LockedUtil* LockedUtil_getInstance(void) {
        return (LockedUtil_staticInit(), LockedUtil_instance);
}


bool LockedUtil_isLocked(LockedUtil* this) {
        return true;
}


bool LockedUtil_isLockedFeature(LockedUtil* this, LockableFeature* lockableFeatrue) {
        return true;
}

