// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/shader/ShaderComposite.h"
#include "javax/microedition/khronos/opengles/GL10.h"
#include "org/allbinary/graphics/opengles/NullOpenGLProcessorFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLProcessor.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/graphics/opengles/shader/Shader.h"
#include "org/allbinary/graphics/opengles/shader/ShaderInitializer.h"
#include "org/allbinary/graphics/opengles/shader/CompositeShaderUpdater.h"
#include "org/allbinary/graphics/opengles/shader/ModelViewProjection.h"
#include "org/allbinary/graphics/opengles/shader/NullOpenGLTextureProcessor.h"
#include "org/allbinary/graphics/opengles/shader/OpenGLObject3dProcessor.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif





void ShaderComposite_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ShaderComposite_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ShaderComposite", nullptr);
    java_register_method("ShaderComposite", "init", (void*) ShaderComposite_initMethod);
}

static void ShaderComposite_initFields(ShaderComposite* this) {
    
    
    
    
    
    
    
    
    this->useProgramShaderOpenGLProcessor = NullOpenGLProcessorFactory_getInstance();
    this->shaderMatrixOpenGLProcessor = NullOpenGLProcessorFactory_getInstance();
    this->colorEnableVertexAttribArrayOpenGLProcessor = NullOpenGLProcessorFactory_getInstance();
    this->normalEnableVertexAttribArrayOpenGLProcessor = NullOpenGLProcessorFactory_getInstance();
    this->vertexEnableVertexAttribArrayOpenGLProcessor = NullOpenGLProcessorFactory_getInstance();
    this->textureEnableVertexAttribArrayOpenGLProcessor = NullOpenGLProcessorFactory_getInstance();
    this->colorDisableVertexAttribArrayOpenGLProcessor = NullOpenGLProcessorFactory_getInstance();
    this->normalDisableVertexAttribArrayOpenGLProcessor = NullOpenGLProcessorFactory_getInstance();
    this->vertexDisableVertexAttribArrayOpenGLProcessor = NullOpenGLProcessorFactory_getInstance();
    this->textureDisableVertexAttribArrayOpenGLProcessor = NullOpenGLProcessorFactory_getInstance();
    this->uniformLightPositionOpenGLProcessor = NullOpenGLTextureProcessor_getInstance();
    this->uniformLightColorOpenGLProcessor = NullOpenGLTextureProcessor_getInstance();
    this->uniformCameraPositionOpenGLProcessor = NullOpenGLTextureProcessor_getInstance();
    this->uniformTextureUnitOpenGLProcessor = NullOpenGLTextureProcessor_getInstance();
    this->programHandle = 0;
}


void ShaderComposite_init(ShaderComposite* this, const char* requiresOpenGLVersion, Shader** shaderArray, CompositeShaderUpdater* compositeShaderUpdater, ShaderInitializer* shaderInitializer, ModelViewProjection* modelViewProjection, OpenGLProcessor* colorOpenGLProcessor, OpenGLProcessor* vertexOpenGLProcessor, OpenGLProcessor* disableProgramShaderOpenGLProcessor) {
    ShaderComposite_register();
    ShaderComposite_initFields(this);
        this->requiresOpenGLVersion = requiresOpenGLVersion;
        this->shaderArray = shaderArray;
        this->shaderInitializer = shaderInitializer;
        this->compositeShaderUpdater = compositeShaderUpdater;
        this->modelViewProjection = modelViewProjection;
        this->colorOpenGLProcessor = colorOpenGLProcessor;
        this->vertexOpenGLProcessor = vertexOpenGLProcessor;
        this->disableProgramShaderOpenGLProcessor = disableProgramShaderOpenGLProcessor;
}

ShaderComposite* ShaderComposite_new(const char* requiresOpenGLVersion, Shader** shaderArray, CompositeShaderUpdater* compositeShaderUpdater, ShaderInitializer* shaderInitializer, ModelViewProjection* modelViewProjection, OpenGLProcessor* colorOpenGLProcessor, OpenGLProcessor* vertexOpenGLProcessor, OpenGLProcessor* disableProgramShaderOpenGLProcessor) {
    ShaderComposite* this = java_object_alloc(sizeof(ShaderComposite), "ShaderComposite");
    ShaderComposite_init(this, requiresOpenGLVersion, shaderArray, compositeShaderUpdater, shaderInitializer, modelViewProjection, colorOpenGLProcessor, vertexOpenGLProcessor, disableProgramShaderOpenGLProcessor);
    return this;
}


void ShaderComposite_initMethod(ShaderComposite* this, GL10* gl) {
        this->programHandle = ShaderInitializer_initMethod(this->shaderInitializer, gl, this->shaderArray, StringUtil_getArrayInstance(StringUtil_getInstance()));
}

