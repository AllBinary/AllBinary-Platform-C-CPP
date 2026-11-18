// Generated Code Do Not Modify
#include "org/allbinary/graphics/RendererStateFactory.h"


static RendererStateFactory* RendererStateFactory_instance;






void RendererStateFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    RendererStateFactory_instance = RendererStateFactory_new();
}

void RendererStateFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RendererStateFactory", nullptr);
    java_register_method("RendererStateFactory", "setLoaded", (void*) RendererStateFactory_setLoaded);
    java_register_method("RendererStateFactory", "isLoaded", (void*) RendererStateFactory_isLoaded);
    java_register_method("RendererStateFactory", "setSurfaceChanged", (void*) RendererStateFactory_setSurfaceChanged);
    java_register_method("RendererStateFactory", "isSurfaceChanged", (void*) RendererStateFactory_isSurfaceChanged);
}

static void RendererStateFactory_initFields(RendererStateFactory* this) {
    this->loaded = false;
    this->surfaceChanged = false;
}

void RendererStateFactory_init(RendererStateFactory* this) {
    RendererStateFactory_register();
    RendererStateFactory_initFields(this);
}

RendererStateFactory* RendererStateFactory_new(void) {
    RendererStateFactory* this = java_object_alloc(sizeof(RendererStateFactory), "RendererStateFactory");
    RendererStateFactory_init(this);
    return this;
}


RendererStateFactory* RendererStateFactory_getInstance(void) {
        return (RendererStateFactory_staticInit(), RendererStateFactory_instance);
}


void RendererStateFactory_setLoaded(RendererStateFactory* this, bool loaded) {
        this->loaded = loaded;
}


bool RendererStateFactory_isLoaded(RendererStateFactory* this) {
        return this->loaded;
}


void RendererStateFactory_setSurfaceChanged(RendererStateFactory* this, bool initialized) {
        this->surfaceChanged = initialized;
}


bool RendererStateFactory_isSurfaceChanged(RendererStateFactory* this) {
        return this->surfaceChanged;
}

