// Generated Code Do Not Modify
#include "org/allbinary/logic/system/security/licensing/LockableFeature.h"





void LockableFeature_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LockableFeature_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LockableFeature", nullptr);
    java_register_method("LockableFeature", "getName", (void*) LockableFeature_getName);
}

static void LockableFeature_initFields(LockableFeature* this) {
    
}


void LockableFeature_init(LockableFeature* this, const char* name) {
    LockableFeature_register();
    LockableFeature_initFields(this);
        this->name = name;
}

LockableFeature* LockableFeature_new(const char* name) {
    LockableFeature* this = java_object_alloc(sizeof(LockableFeature), "LockableFeature");
    LockableFeature_init(this, name);
    return this;
}


const char* LockableFeature_getName(LockableFeature* this) {
        return this->name;
}

