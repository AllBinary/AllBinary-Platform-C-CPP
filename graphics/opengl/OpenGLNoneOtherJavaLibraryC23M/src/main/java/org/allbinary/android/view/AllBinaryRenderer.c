// Generated Code Do Not Modify
#include "org/allbinary/android/view/AllBinaryRenderer.h"


static AllBinaryRenderer* AllBinaryRenderer_instance;




void AllBinaryRenderer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AllBinaryRenderer_instance = AllBinaryRenderer_new();
}

void AllBinaryRenderer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinaryRenderer", nullptr);
    java_register_method("AllBinaryRenderer", "setRunnable", (void*) AllBinaryRenderer_setRunnable);
    java_register_method("AllBinaryRenderer", "clearRunnable", (void*) AllBinaryRenderer_clearRunnable);
}

void AllBinaryRenderer_init(AllBinaryRenderer* this) {
    AllBinaryRenderer_register();
}

AllBinaryRenderer* AllBinaryRenderer_new(void) {
    AllBinaryRenderer* this = java_object_alloc(sizeof(AllBinaryRenderer), "AllBinaryRenderer");
    AllBinaryRenderer_init(this);
    return this;
}


AllBinaryRenderer* AllBinaryRenderer_getInstance(void) {
        return (AllBinaryRenderer_staticInit(), AllBinaryRenderer_instance);
}


void AllBinaryRenderer_setRunnable(AllBinaryRenderer* this, Runnable* runnable) {
}


void AllBinaryRenderer_clearRunnable(AllBinaryRenderer* this) {
}

