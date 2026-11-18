// Generated Code Do Not Modify
#include "org/allbinary/logic/system/security/licensing/LockableFeatureFactory.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"


static LockableFeatureFactory* LockableFeatureFactory_instance;



void LockableFeatureFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LockableFeatureFactory_instance = LockableFeatureFactory_new();
}

void LockableFeatureFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LockableFeatureFactory", nullptr);
    java_register_method("LockableFeatureFactory", "getList", (void*) LockableFeatureFactory_getList);
}

static void LockableFeatureFactory_initFields(LockableFeatureFactory* this) {
    this->list = BasicArrayListD_new();
}

void LockableFeatureFactory_init(LockableFeatureFactory* this) {
    LockableFeatureFactory_register();
    LockableFeatureFactory_initFields(this);
}

LockableFeatureFactory* LockableFeatureFactory_new(void) {
    LockableFeatureFactory* this = java_object_alloc(sizeof(LockableFeatureFactory), "LockableFeatureFactory");
    LockableFeatureFactory_init(this);
    return this;
}


LockableFeatureFactory* LockableFeatureFactory_getInstance(void) {
        return (LockableFeatureFactory_staticInit(), LockableFeatureFactory_instance);
}


BasicArrayList* LockableFeatureFactory_getList(LockableFeatureFactory* this) {
        return this->list;
}

