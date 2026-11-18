// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/shader/CompositeShaderUpdater.h"
#include "javax/microedition/khronos/egl/EGLConfig.h"
#include "javax/microedition/khronos/opengles/GL10.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/graphics/opengles/shader/ShaderUpdater.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif


static CompositeShaderUpdater* CompositeShaderUpdater_instanceC;





void CompositeShaderUpdater_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CompositeShaderUpdater_instanceC = CompositeShaderUpdater_new(StringUtil_getArrayInstance(StringUtil_getInstance()), StringUtil_getArrayInstance(StringUtil_getInstance()), StringUtil_getArrayInstance(StringUtil_getInstance()), NullUtil_getInstance()->NULL_INT_ARRAY);
}

void CompositeShaderUpdater_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CompositeShaderUpdater", "ShaderUpdater");
    java_register_method("CompositeShaderUpdater", "onSurfaceCreated", (void*) CompositeShaderUpdater_onSurfaceCreated);
    java_register_method("CompositeShaderUpdater", "onSurfaceDestroyed", (void*) CompositeShaderUpdater_onSurfaceDestroyed);
}

static void CompositeShaderUpdater_initFields(CompositeShaderUpdater* this) {
    this->commonSeps = CommonSeps_getInstance();
}


CompositeShaderUpdater* CompositeShaderUpdater_getInstance(void) {
        return (CompositeShaderUpdater_staticInit(), CompositeShaderUpdater_instanceC);
}


void CompositeShaderUpdater_init(CompositeShaderUpdater* this, const char** uniformBlockArray, const char** uniformArray, const char** attributeArray, int32_t* attributeHandleArray) {
    CompositeShaderUpdater_register();
    ShaderUpdater_init(&this->base);
    CompositeShaderUpdater_initFields(this);
}

CompositeShaderUpdater* CompositeShaderUpdater_new(const char** uniformBlockArray, const char** uniformArray, const char** attributeArray, int32_t* attributeHandleArray) {
    CompositeShaderUpdater* this = java_object_alloc(sizeof(CompositeShaderUpdater), "CompositeShaderUpdater");
    CompositeShaderUpdater_init(this, uniformBlockArray, uniformArray, attributeArray, attributeHandleArray);
    return this;
}


void CompositeShaderUpdater_onSurfaceCreated(CompositeShaderUpdater* this, GL10* gl, EGLConfig* eglConfig, int32_t programHandle) {
}


void CompositeShaderUpdater_onSurfaceDestroyed(CompositeShaderUpdater* this, GL10* gl) {
}

