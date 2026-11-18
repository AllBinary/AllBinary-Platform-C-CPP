// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/renderer/RendererStrings.h"


static RendererStrings* RendererStrings_instance;


void RendererStrings_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    RendererStrings_instance = RendererStrings_new();
}

void RendererStrings_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RendererStrings", nullptr);
}

static void RendererStrings_initFields(RendererStrings* this) {
    this->ON_SURFACE_CREATED = "onSurfaceCreated";
    this->ON_SURFACE_CHANGED = "onSurfaceChanged";
    this->ON_DRAW_FRAME = "onDrawFrame";
    this->ON_DRAW_FRAME_THREED = "onDrawFrameThreed";
    this->ON_DRAW_FRAME_2D = "onDrawFrame2d";
}

void RendererStrings_init(RendererStrings* this) {
    RendererStrings_register();
    RendererStrings_initFields(this);
}

RendererStrings* RendererStrings_new(void) {
    RendererStrings* this = java_object_alloc(sizeof(RendererStrings), "RendererStrings");
    RendererStrings_init(this);
    return this;
}


RendererStrings* RendererStrings_getInstance(void) {
        return (RendererStrings_staticInit(), RendererStrings_instance);
}

