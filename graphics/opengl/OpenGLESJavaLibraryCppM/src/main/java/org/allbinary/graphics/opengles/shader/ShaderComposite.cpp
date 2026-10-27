
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *   
                *  Created By: Travis Berthelot    
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERCOMPOSITE_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERCOMPOSITE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/shader/ShaderComposite.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/graphics/opengles/OpenGLProcessor.h>

      
#include <org/allbinary/graphics/opengles/NullOpenGLProcessorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/opengles/shader/Shader.h"
#include "org/allbinary/graphics/opengles/shader/ShaderInitializer.h"
#include "org/allbinary/graphics/opengles/shader/CompositeShaderUpdater.h"
#include "org/allbinary/graphics/opengles/shader/ModelViewProjection.h"
#include "org/allbinary/graphics/opengles/shader/NullOpenGLTextureProcessor.h"
#include "org/allbinary/graphics/opengles/shader/OpenGLObject3dProcessor.h"


ShaderComposite::ShaderComposite(std::string requiresOpenGLVersion, std::vector<Shader*> shaderArray, CompositeShaderUpdater* compositeShaderUpdater, ShaderInitializer* shaderInitializer, ModelViewProjection* modelViewProjection, OpenGLProcessor* colorOpenGLProcessor, OpenGLProcessor* vertexOpenGLProcessor, OpenGLProcessor* disableProgramShaderOpenGLProcessor) : useProgramShaderOpenGLProcessor(NullOpenGLProcessorFactory::getInstance()), shaderMatrixOpenGLProcessor(NullOpenGLProcessorFactory::getInstance()), colorEnableVertexAttribArrayOpenGLProcessor(NullOpenGLProcessorFactory::getInstance()), normalEnableVertexAttribArrayOpenGLProcessor(NullOpenGLProcessorFactory::getInstance()), vertexEnableVertexAttribArrayOpenGLProcessor(NullOpenGLProcessorFactory::getInstance()), textureEnableVertexAttribArrayOpenGLProcessor(NullOpenGLProcessorFactory::getInstance()), colorDisableVertexAttribArrayOpenGLProcessor(NullOpenGLProcessorFactory::getInstance()), normalDisableVertexAttribArrayOpenGLProcessor(NullOpenGLProcessorFactory::getInstance()), vertexDisableVertexAttribArrayOpenGLProcessor(NullOpenGLProcessorFactory::getInstance()), textureDisableVertexAttribArrayOpenGLProcessor(NullOpenGLProcessorFactory::getInstance()), uniformLightPositionOpenGLProcessor(NullOpenGLTextureProcessor::getInstance()), uniformLightColorOpenGLProcessor(NullOpenGLTextureProcessor::getInstance()), uniformCameraPositionOpenGLProcessor(NullOpenGLTextureProcessor::getInstance()), uniformTextureUnitOpenGLProcessor(NullOpenGLTextureProcessor::getInstance()){
this->requiresOpenGLVersion= requiresOpenGLVersion;
    
this->shaderArray= shaderArray;
    
this->shaderInitializer= shaderInitializer;
    
this->compositeShaderUpdater= compositeShaderUpdater;
    
this->modelViewProjection= modelViewProjection;
    
this->colorOpenGLProcessor= colorOpenGLProcessor;
    
this->vertexOpenGLProcessor= vertexOpenGLProcessor;
    
this->disableProgramShaderOpenGLProcessor= disableProgramShaderOpenGLProcessor;
    
}


    auto ShaderComposite::init(GL10* gl) -> void{
this->programHandle= this->shaderInitializer->init(gl, this->shaderArray, this->compositeShaderUpdater->attributeArray);
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERCOMPOSITE_CPP
