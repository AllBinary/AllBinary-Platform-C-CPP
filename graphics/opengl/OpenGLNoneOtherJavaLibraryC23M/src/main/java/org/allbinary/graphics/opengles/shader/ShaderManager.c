// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/shader/ShaderManager.h"
#include "javax/microedition/khronos/opengles/GL10.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"


static ShaderManager* ShaderManager_instance;





void ShaderManager_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ShaderManager_instance = ShaderManager_new(-1, -1);
}

void ShaderManager_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ShaderManager", nullptr);
    java_register_method("ShaderManager", "load", (void*) ShaderManager_load);
    java_register_method("ShaderManager", "loadShader", (void*) ShaderManager_loadShader);
}

static void ShaderManager_initFields(ShaderManager* this) {
    this->LOAD_SHADER = "loadShader";
    this->commonStrings = CommonStrings_getInstance();
    
    
}


ShaderManager* ShaderManager_getInstance(void) {
        return (ShaderManager_staticInit(), ShaderManager_instance);
}


void ShaderManager_init(ShaderManager* this, int32_t GL_VERTEX_SHADER, int32_t GL_FRAGMENT_SHADER) {
    ShaderManager_register();
    ShaderManager_initFields(this);
        this->GL_VERTEX_SHADER = GL_VERTEX_SHADER;
        this->GL_FRAGMENT_SHADER = GL_FRAGMENT_SHADER;
}

ShaderManager* ShaderManager_new(int32_t GL_VERTEX_SHADER, int32_t GL_FRAGMENT_SHADER) {
    ShaderManager* this = java_object_alloc(sizeof(ShaderManager), "ShaderManager");
    ShaderManager_init(this, GL_VERTEX_SHADER, GL_FRAGMENT_SHADER);
    return this;
}


int32_t ShaderManager_load(ShaderManager* this, GL10* gl, const char* resource, const char** shaderAsStringArray, int32_t shaderType) {
        return -1;
}


int32_t ShaderManager_loadShader(ShaderManager* this, GL10* gl, const char* resource, BasicArrayList* stringList, int32_t shaderType) {
        return -1;
}

