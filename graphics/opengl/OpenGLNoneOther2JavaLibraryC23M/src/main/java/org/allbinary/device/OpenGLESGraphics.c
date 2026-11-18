// Generated Code Do Not Modify
#include "org/allbinary/device/OpenGLESGraphics.h"
#include "javax/microedition/khronos/opengles/GL.h"
#include "javax/microedition/khronos/opengles/GL10.h"
#include "javax/microedition/lcdui/Font.h"
#include "org/allbinary/graphics/font/FontDebugBase.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/device/GraphicsInterface.h"
#include "org/allbinary/device/NullGL10.h"












void OpenGLESGraphics_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OpenGLESGraphics_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLESGraphics", "Graphics");
    java_register_method("OpenGLESGraphics", "updateGL", (void*) OpenGLESGraphics_updateGL);
    java_register_method("OpenGLESGraphics", "set", (void*) OpenGLESGraphics_set);
    java_register_method("OpenGLESGraphics", "init", (void*) OpenGLESGraphics_initMethod);
    java_register_method("OpenGLESGraphics", "update", (void*) OpenGLESGraphics_update);
    java_register_method("OpenGLESGraphics", "setOrthoginalMode", (void*) OpenGLESGraphics_setOrthoginalMode);
    java_register_method("OpenGLESGraphics", "setCameraMode", (void*) OpenGLESGraphics_setCameraMode);
    java_register_method("OpenGLESGraphics", "getGl10", (void*) OpenGLESGraphics_getGl10);
    java_register_method("OpenGLESGraphics", "setFontDebug", (void*) OpenGLESGraphics_setFontDebug);
}

static void OpenGLESGraphics_initFields(OpenGLESGraphics* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->gl = (NullGL10_staticInit(), NullGL10_NULL_GL10);
}


void OpenGLESGraphics_init(OpenGLESGraphics* this) {
    OpenGLESGraphics_register();
    Graphics_init(&this->base);
    OpenGLESGraphics_initFields(this);
}

OpenGLESGraphics* OpenGLESGraphics_new(void) {
    OpenGLESGraphics* this = java_object_alloc(sizeof(OpenGLESGraphics), "OpenGLESGraphics");
    OpenGLESGraphics_init(this);
    return this;
}


void OpenGLESGraphics_updateGL(OpenGLESGraphics* this, GL* gl) {
}


void OpenGLESGraphics_set(OpenGLESGraphics* this, GL* gl) {
}


// throws Exception
void OpenGLESGraphics_initMethod(OpenGLESGraphics* this) {
}


// throws Exception
void OpenGLESGraphics_update(OpenGLESGraphics* this) {
}


void OpenGLESGraphics_setOrthoginalMode(OpenGLESGraphics* this) {
}


void OpenGLESGraphics_setCameraMode(OpenGLESGraphics* this) {
}


GL10* OpenGLESGraphics_getGl10(OpenGLESGraphics* this) {
        return this->gl;
}


void OpenGLESGraphics_setFontDebug(OpenGLESGraphics* this, Font* font, FontDebugBase* fontDebug) {
        java_throw(java_exception_new("RuntimeException", ""));
}

