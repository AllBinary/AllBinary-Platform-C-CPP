// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/shader/Shader.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif



void Shader_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Shader_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Shader", nullptr);
}

static void Shader_initFields(Shader* this) {
    this->shaderName = StringUtil_getInstance()->EMPTY_STRING;
    this->shaderStringList = BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
    this->shaderAsString = StringUtil_getInstance()->EMPTY_STRING;
    this->shaderHandle = 0;
}

void Shader_init(Shader* this) {
    Shader_register();
    Shader_initFields(this);
}

Shader* Shader_new(void) {
    Shader* this = java_object_alloc(sizeof(Shader), "Shader");
    Shader_init(this);
    return this;
}

