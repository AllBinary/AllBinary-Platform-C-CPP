// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/shader/PlatformShaderComposite.h"
#include "org/allbinary/graphics/opengles/NullOpenGLProcessorFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLProcessor.h"
#include "org/allbinary/graphics/opengles/shader/ShaderComposite.h"
#include "org/allbinary/graphics/opengles/shader/Shader.h"
#include "org/allbinary/graphics/opengles/shader/CompositeShaderUpdater.h"
#include "org/allbinary/graphics/opengles/shader/ShaderInitializer.h"
#include "org/allbinary/graphics/opengles/shader/ModelViewProjection.h"




void PlatformShaderComposite_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PlatformShaderComposite_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PlatformShaderComposite", "ShaderComposite");
}


void PlatformShaderComposite_init(PlatformShaderComposite* this, const char* requiresOpenGLVersion, Shader** shaderArray, CompositeShaderUpdater* compositeShaderUpdater, ShaderInitializer* shaderInitializer, ModelViewProjection* modelViewProjection, OpenGLProcessor* colorOpenGLProcessor, OpenGLProcessor* vertexOpenGLProcessor) {
    PlatformShaderComposite_register();
        ShaderComposite_init(&this->base, requiresOpenGLVersion, shaderArray, compositeShaderUpdater, shaderInitializer, modelViewProjection, colorOpenGLProcessor, vertexOpenGLProcessor, NullOpenGLProcessorFactory_getInstance());
}

PlatformShaderComposite* PlatformShaderComposite_new(const char* requiresOpenGLVersion, Shader** shaderArray, CompositeShaderUpdater* compositeShaderUpdater, ShaderInitializer* shaderInitializer, ModelViewProjection* modelViewProjection, OpenGLProcessor* colorOpenGLProcessor, OpenGLProcessor* vertexOpenGLProcessor) {
    PlatformShaderComposite* this = java_object_alloc(sizeof(PlatformShaderComposite), "PlatformShaderComposite");
    PlatformShaderComposite_init(this, requiresOpenGLVersion, shaderArray, compositeShaderUpdater, shaderInitializer, modelViewProjection, colorOpenGLProcessor, vertexOpenGLProcessor);
    return this;
}

