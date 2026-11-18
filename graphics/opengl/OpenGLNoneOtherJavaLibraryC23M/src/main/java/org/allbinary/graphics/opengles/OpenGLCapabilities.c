// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/OpenGLCapabilities.h"
#include "org/allbinary/logic/string/StringUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static OpenGLCapabilities* OpenGLCapabilities_instance;









void OpenGLCapabilities_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    OpenGLCapabilities_instance = OpenGLCapabilities_new();
}

void OpenGLCapabilities_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLCapabilities", nullptr);
    java_register_method("OpenGLCapabilities", "isInitialized", (void*) OpenGLCapabilities_isInitialized);
    java_register_method("OpenGLCapabilities", "initCapabilities", (void*) OpenGLCapabilities_initCapabilities);
    java_register_method("OpenGLCapabilities", "isGlExtensionDrawTexture", (void*) OpenGLCapabilities_isGlExtensionDrawTexture);
    java_register_method("OpenGLCapabilities", "getGlVersion", (void*) OpenGLCapabilities_getGlVersion);
    java_register_method("OpenGLCapabilities", "isVertexBufferObjectSupport", (void*) OpenGLCapabilities_isVertexBufferObjectSupport);
    java_register_method("OpenGLCapabilities", "isTextureSizeValid", (void*) OpenGLCapabilities_isTextureSizeValid);
}

static void OpenGLCapabilities_initFields(OpenGLCapabilities* this) {
    this->CUSTOM_GL_SURFACE_VIEW = true;
    this->VERSION_1_0 = "1.0";
    this->VERSION_1_1 = "1.1";
    this->VERSION_2_0 = "2.0";
    this->VERSION_3_0 = "3.0";
    this->VERSION_3_1 = "3.1";
    this->VERSION_3_2 = "3.2";
    this->VERSION_HIGHER_THAN_EXISTS = "999.999";
    this->glVersion = StringUtil_getInstance()->EMPTY_STRING;
    this->shaderVersion = 0;
    this->glInstanceVersion = StringUtil_getInstance()->EMPTY_STRING;
    this->maxTextureSize = 64;
}


OpenGLCapabilities* OpenGLCapabilities_getInstance(void) {
        return (OpenGLCapabilities_staticInit(), OpenGLCapabilities_instance);
}


void OpenGLCapabilities_init(OpenGLCapabilities* this) {
    OpenGLCapabilities_register();
    OpenGLCapabilities_initFields(this);
}

OpenGLCapabilities* OpenGLCapabilities_new(void) {
    OpenGLCapabilities* this = java_object_alloc(sizeof(OpenGLCapabilities), "OpenGLCapabilities");
    OpenGLCapabilities_init(this);
    return this;
}


bool OpenGLCapabilities_isInitialized(OpenGLCapabilities* this) {
        return true;
}


void OpenGLCapabilities_initCapabilities(OpenGLCapabilities* this, void* gl) {
}


bool OpenGLCapabilities_isGlExtensionDrawTexture(OpenGLCapabilities* this) {
        return false;
}


const char* OpenGLCapabilities_getGlVersion(OpenGLCapabilities* this) {
        return this->glVersion;
}


bool OpenGLCapabilities_isVertexBufferObjectSupport(OpenGLCapabilities* this) {
        return false;
}


bool OpenGLCapabilities_isTextureSizeValid(OpenGLCapabilities* this, int32_t widthAndHeight) {
        return true;
}

