// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/shader/ShaderUpdater.h"
#include "javax/microedition/khronos/egl/EGLConfig.h"
#include "javax/microedition/khronos/opengles/GL10.h"
#include "org/allbinary/graphics/opengles/renderer/RendererStrings.h"
#include "org/allbinary/string/CommonStrings.h"


static ShaderUpdater* ShaderUpdater_instance;



void ShaderUpdater_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ShaderUpdater_instance = ShaderUpdater_new();
}

void ShaderUpdater_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ShaderUpdater", nullptr);
    java_register_method("ShaderUpdater", "onSurfaceCreated", (void*) ShaderUpdater_onSurfaceCreated);
}

static void ShaderUpdater_initFields(ShaderUpdater* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->rendererStrings = RendererStrings_getInstance();
}

void ShaderUpdater_init(ShaderUpdater* this) {
    ShaderUpdater_register();
    ShaderUpdater_initFields(this);
}

ShaderUpdater* ShaderUpdater_new(void) {
    ShaderUpdater* this = java_object_alloc(sizeof(ShaderUpdater), "ShaderUpdater");
    ShaderUpdater_init(this);
    return this;
}


ShaderUpdater* ShaderUpdater_getInstance(void) {
        return (ShaderUpdater_staticInit(), ShaderUpdater_instance);
}


void ShaderUpdater_onSurfaceCreated(ShaderUpdater* this, GL10* gl, EGLConfig* eglConfig) {
}

