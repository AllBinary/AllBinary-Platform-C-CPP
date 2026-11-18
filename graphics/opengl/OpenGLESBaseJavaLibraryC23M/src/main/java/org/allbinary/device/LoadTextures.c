// Generated Code Do Not Modify
#include "org/allbinary/device/LoadTextures.h"
#include "javax/microedition/khronos/opengles/GL10.h"




void LoadTextures_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LoadTextures_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LoadTextures", nullptr);
    java_register_method("LoadTextures", "load", (void*) LoadTextures_load);
}

void LoadTextures_init(LoadTextures* this) {
    LoadTextures_register();
}

LoadTextures* LoadTextures_new(void) {
    LoadTextures* this = java_object_alloc(sizeof(LoadTextures), "LoadTextures");
    LoadTextures_init(this);
    return this;
}


// throws Exception
void LoadTextures_load(LoadTextures* this, GL10* gl) {
}

