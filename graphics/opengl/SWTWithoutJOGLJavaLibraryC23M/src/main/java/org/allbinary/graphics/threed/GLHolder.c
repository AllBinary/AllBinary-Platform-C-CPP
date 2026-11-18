// Generated Code Do Not Modify
#include "org/allbinary/graphics/threed/GLHolder.h"







void GLHolder_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GLHolder_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GLHolder", nullptr);
    java_register_method("GLHolder", "runOnSurfaceCreated", (void*) GLHolder_runOnSurfaceCreated);
    java_register_method("GLHolder", "runOnSurfaceChanged", (void*) GLHolder_runOnSurfaceChanged);
    java_register_method("GLHolder", "run", (void*) GLHolder_run);
}

static void GLHolder_initFields(GLHolder* this) {
    this->isCreated = true;
}


void GLHolder_init(GLHolder* this) {
    GLHolder_register();
    GLHolder_initFields(this);
}

GLHolder* GLHolder_new(void) {
    GLHolder* this = java_object_alloc(sizeof(GLHolder), "GLHolder");
    GLHolder_init(this);
    return this;
}


void GLHolder_runOnSurfaceCreated(GLHolder* this, void* renderer) {
}


void GLHolder_runOnSurfaceChanged(GLHolder* this, void* renderer, int32_t width, int32_t height) {
}


void GLHolder_run(GLHolder* this, void* renderer) {
}

