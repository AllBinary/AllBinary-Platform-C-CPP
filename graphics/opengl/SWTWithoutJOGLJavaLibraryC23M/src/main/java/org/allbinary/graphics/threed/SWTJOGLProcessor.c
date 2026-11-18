// Generated Code Do Not Modify
#include "org/allbinary/graphics/threed/SWTJOGLProcessor.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/midlet/MIDlet.h"
#include "org/allbinary/graphics/threed/GLHolder.h"
#include "org/allbinary/graphics/threed/RatioProcessor.h"


static SWTJOGLProcessor* SWTJOGLProcessor_instance;





















void SWTJOGLProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    SWTJOGLProcessor_instance = SWTJOGLProcessor_new();
}

void SWTJOGLProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SWTJOGLProcessor", nullptr);
    java_register_method("SWTJOGLProcessor", "init", (void*) SWTJOGLProcessor_initMethod);
    java_register_method("SWTJOGLProcessor", "isHolderCreated", (void*) SWTJOGLProcessor_isHolderCreated);
    java_register_method("SWTJOGLProcessor", "setRenderer", (void*) SWTJOGLProcessor_setRenderer);
    java_register_method("SWTJOGLProcessor", "isJOGL", (void*) SWTJOGLProcessor_isJOGL);
    java_register_method("SWTJOGLProcessor", "createSurface", (void*) SWTJOGLProcessor_createSurface);
    java_register_method("SWTJOGLProcessor", "onSurfaceCreated", (void*) SWTJOGLProcessor_onSurfaceCreated);
    java_register_method("SWTJOGLProcessor", "onSurfaceChangedForEvent", (void*) SWTJOGLProcessor_onSurfaceChangedForEvent);
    java_register_method("SWTJOGLProcessor", "onSurfaceChanged", (void*) SWTJOGLProcessor_onSurfaceChanged);
    java_register_method("SWTJOGLProcessor", "onSurfaceChangedWH", (void*) SWTJOGLProcessor_onSurfaceChangedWH);
    java_register_method("SWTJOGLProcessor", "addListener", (void*) SWTJOGLProcessor_addListener);
    java_register_method("SWTJOGLProcessor", "addListeners", (void*) SWTJOGLProcessor_addListeners);
    java_register_method("SWTJOGLProcessor", "run", (void*) SWTJOGLProcessor_run);
    java_register_method("SWTJOGLProcessor", "clear", (void*) SWTJOGLProcessor_clear);
    java_register_method("SWTJOGLProcessor", "setCustom", (void*) SWTJOGLProcessor_setCustom);
    java_register_method("SWTJOGLProcessor", "setRatioProcessor", (void*) SWTJOGLProcessor_setRatioProcessor);
    java_register_method("SWTJOGLProcessor", "charWidth", (void*) SWTJOGLProcessor_charWidth);
    java_register_method("SWTJOGLProcessor", "charsWidth", (void*) SWTJOGLProcessor_charsWidth);
    java_register_method("SWTJOGLProcessor", "stringWidth", (void*) SWTJOGLProcessor_stringWidth);
    java_register_method("SWTJOGLProcessor", "substringWidth", (void*) SWTJOGLProcessor_substringWidth);
}

static void SWTJOGLProcessor_initFields(SWTJOGLProcessor* this) {
    this->glHolder = GLHolder_new()
#if 0 /* Java anonymous class body: implement it as a named struct */
        

    void SWTJOGLProcessor_run(SWTJOGLProcessor* this, void* renderer) {
    }
#endif
;
}

void SWTJOGLProcessor_init(SWTJOGLProcessor* this) {
    SWTJOGLProcessor_register();
    SWTJOGLProcessor_initFields(this);
}

SWTJOGLProcessor* SWTJOGLProcessor_new(void) {
    SWTJOGLProcessor* this = java_object_alloc(sizeof(SWTJOGLProcessor), "SWTJOGLProcessor");
    SWTJOGLProcessor_init(this);
    return this;
}


SWTJOGLProcessor* SWTJOGLProcessor_getInstance(void) {
        return (SWTJOGLProcessor_staticInit(), SWTJOGLProcessor_instance);
}


void SWTJOGLProcessor_initMethod(SWTJOGLProcessor* this, void* display, void* comp) {
}


bool SWTJOGLProcessor_isHolderCreated(SWTJOGLProcessor* this) {
        return this->glHolder->isCreated;
}


void SWTJOGLProcessor_setRenderer(SWTJOGLProcessor* this, void* renderer) {
}


bool SWTJOGLProcessor_isJOGL(SWTJOGLProcessor* this) {
        return false;
}


void SWTJOGLProcessor_createSurface(SWTJOGLProcessor* this) {
}


void SWTJOGLProcessor_onSurfaceCreated(SWTJOGLProcessor* this) {
}


void SWTJOGLProcessor_onSurfaceChangedForEvent(SWTJOGLProcessor* this, void* event) {
}


void SWTJOGLProcessor_onSurfaceChanged(SWTJOGLProcessor* this) {
}


void SWTJOGLProcessor_onSurfaceChangedWH(SWTJOGLProcessor* this, int32_t width, int32_t height) {
}


void SWTJOGLProcessor_addListener(SWTJOGLProcessor* this) {
}


void SWTJOGLProcessor_addListeners(SWTJOGLProcessor* this, MIDlet* midlet) {
}


void SWTJOGLProcessor_run(SWTJOGLProcessor* this) {
}


void SWTJOGLProcessor_clear(SWTJOGLProcessor* this) {
}


void SWTJOGLProcessor_setCustom(SWTJOGLProcessor* this, int32_t width, int32_t height, float ratio) {
}


void SWTJOGLProcessor_setRatioProcessor(SWTJOGLProcessor* this, RatioProcessor* ratioProcessor) {
}


int32_t SWTJOGLProcessor_charWidth(SWTJOGLProcessor* this, Font* font, uint16_t ch) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t SWTJOGLProcessor_charsWidth(SWTJOGLProcessor* this, Font* font, uint16_t* ch, int32_t offset, int32_t length) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t SWTJOGLProcessor_stringWidth(SWTJOGLProcessor* this, Font* font, const char* str) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t SWTJOGLProcessor_substringWidth(SWTJOGLProcessor* this, Font* font, const char* str, int32_t offset, int32_t len) {
        java_throw(java_exception_new("RuntimeException", ""));
}

