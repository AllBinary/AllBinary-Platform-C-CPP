// Generated Code Do Not Modify
#include "org/allbinary/image/opengles/OpenGLImageSpecificFactory.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/image/opengles/OpenGLImageFactory.h"
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static OpenGLImageSpecificFactory* OpenGLImageSpecificFactory_instance;




void OpenGLImageSpecificFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    OpenGLImageSpecificFactory_instance = OpenGLImageSpecificFactory_new();
}

void OpenGLImageSpecificFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLImageSpecificFactory", nullptr);
    java_register_method("OpenGLImageSpecificFactory", "setImageFactory", (void*) OpenGLImageSpecificFactory_setImageFactory);
    java_register_method("OpenGLImageSpecificFactory", "getImageFactory", (void*) OpenGLImageSpecificFactory_getImageFactory);
}

static void OpenGLImageSpecificFactory_initFields(OpenGLImageSpecificFactory* this) {
    this->imageFactory = (OpenGLImageFactory_staticInit(), OpenGLImageFactory_NULL_OPENGL_IMAGE_FACTORY);
    this->updating = false;
}

void OpenGLImageSpecificFactory_init(OpenGLImageSpecificFactory* this) {
    OpenGLImageSpecificFactory_register();
    OpenGLImageSpecificFactory_initFields(this);
}

OpenGLImageSpecificFactory* OpenGLImageSpecificFactory_new(void) {
    OpenGLImageSpecificFactory* this = java_object_alloc(sizeof(OpenGLImageSpecificFactory), "OpenGLImageSpecificFactory");
    OpenGLImageSpecificFactory_init(this);
    return this;
}


OpenGLImageSpecificFactory* OpenGLImageSpecificFactory_getInstance(void) {
        return (OpenGLImageSpecificFactory_staticInit(), OpenGLImageSpecificFactory_instance);
}


void OpenGLImageSpecificFactory_setImageFactory(OpenGLImageSpecificFactory* this, OpenGLImageFactory* imageFactory) {
        this->imageFactory = imageFactory;
        PreLogUtil_put(java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), "Selected Image Factory: "), StringUtil_toString(StringUtil_getInstance(), this->imageFactory))), this, "setImageFactory");
}


OpenGLImageFactory* OpenGLImageSpecificFactory_getImageFactory(OpenGLImageSpecificFactory* this) {
        return this->imageFactory;
}

