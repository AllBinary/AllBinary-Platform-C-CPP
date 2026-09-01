
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERCOMPOSITE_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERCOMPOSITE_H

            #include <vector>
        
            #include "../../../../../java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/graphics/opengles/NullOpenGLProcessorFactory.h>

      
#include <org/allbinary/graphics/opengles/OpenGLProcessor.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Shader.h"
#include "ShaderInitializer.h"
#include "CompositeShaderUpdater.h"
#include "ModelViewProjection.h"
#include "NullOpenGLTextureProcessor.h"
#include "OpenGLObject3dProcessor.h"

class ShaderComposite
            : public Object
         {

    public: OpenGLProcessor disableProgramShaderOpenGLProcessor;

    public: std::string requiresOpenGLVersion;

    public: std::vector<Shader> shaderArray;

    public: ShaderInitializer shaderInitializer;

    public: CompositeShaderUpdater compositeShaderUpdater;

    public: ModelViewProjection modelViewProjection;

    public: OpenGLProcessor colorOpenGLProcessor;

    public: OpenGLProcessor vertexOpenGLProcessor;

    public: OpenGLProcessor useProgramShaderOpenGLProcessor = NullOpenGLProcessorFactory::getInstance();

    public: OpenGLProcessor shaderMatrixOpenGLProcessor = NullOpenGLProcessorFactory::getInstance();

    public: OpenGLProcessor colorEnableVertexAttribArrayOpenGLProcessor = NullOpenGLProcessorFactory::getInstance();

    public: OpenGLProcessor normalEnableVertexAttribArrayOpenGLProcessor = NullOpenGLProcessorFactory::getInstance();

    public: OpenGLProcessor vertexEnableVertexAttribArrayOpenGLProcessor = NullOpenGLProcessorFactory::getInstance();

    public: OpenGLProcessor textureEnableVertexAttribArrayOpenGLProcessor = NullOpenGLProcessorFactory::getInstance();

    public: OpenGLProcessor colorDisableVertexAttribArrayOpenGLProcessor = NullOpenGLProcessorFactory::getInstance();

    public: OpenGLProcessor normalDisableVertexAttribArrayOpenGLProcessor = NullOpenGLProcessorFactory::getInstance();

    public: OpenGLProcessor vertexDisableVertexAttribArrayOpenGLProcessor = NullOpenGLProcessorFactory::getInstance();

    public: OpenGLProcessor textureDisableVertexAttribArrayOpenGLProcessor = NullOpenGLProcessorFactory::getInstance();

    public: OpenGLObject3dProcessor uniformLightPositionOpenGLProcessor = NullOpenGLTextureProcessor::getInstance();

    public: OpenGLObject3dProcessor uniformLightColorOpenGLProcessor = NullOpenGLTextureProcessor::getInstance();

    public: OpenGLObject3dProcessor uniformCameraPositionOpenGLProcessor = NullOpenGLTextureProcessor::getInstance();

    public: OpenGLObject3dProcessor uniformTextureUnitOpenGLProcessor = NullOpenGLTextureProcessor::getInstance();

    public: int32_t programHandle= 0;

public: ShaderComposite(std::string requiresOpenGLVersion, std::vector<Shader> shaderArray, CompositeShaderUpdater compositeShaderUpdater, ShaderInitializer shaderInitializer, ModelViewProjection modelViewProjection, OpenGLProcessor colorOpenGLProcessor, OpenGLProcessor vertexOpenGLProcessor, OpenGLProcessor disableProgramShaderOpenGLProcessor);

    public: void init(GL10 gl);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERCOMPOSITE_H
