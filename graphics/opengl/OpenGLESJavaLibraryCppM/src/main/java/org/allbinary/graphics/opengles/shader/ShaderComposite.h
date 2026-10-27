
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class GL10;
class OpenGLProcessor;
class NullOpenGLProcessorFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Shader;
class ShaderInitializer;
class CompositeShaderUpdater;
class ModelViewProjection;
class NullOpenGLTextureProcessor;
class OpenGLObject3dProcessor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ShaderComposite
            : public virtual Object
         {

    public: OpenGLProcessor* disableProgramShaderOpenGLProcessor;

    public: std::string requiresOpenGLVersion;

    public: std::vector<Shader*> shaderArray;

    public: ShaderInitializer* shaderInitializer;

    public: CompositeShaderUpdater* compositeShaderUpdater;

    public: ModelViewProjection* modelViewProjection;

    public: OpenGLProcessor* colorOpenGLProcessor;

    public: OpenGLProcessor* vertexOpenGLProcessor;

    public: OpenGLProcessor* useProgramShaderOpenGLProcessor;

    public: OpenGLProcessor* shaderMatrixOpenGLProcessor;

    public: OpenGLProcessor* colorEnableVertexAttribArrayOpenGLProcessor;

    public: OpenGLProcessor* normalEnableVertexAttribArrayOpenGLProcessor;

    public: OpenGLProcessor* vertexEnableVertexAttribArrayOpenGLProcessor;

    public: OpenGLProcessor* textureEnableVertexAttribArrayOpenGLProcessor;

    public: OpenGLProcessor* colorDisableVertexAttribArrayOpenGLProcessor;

    public: OpenGLProcessor* normalDisableVertexAttribArrayOpenGLProcessor;

    public: OpenGLProcessor* vertexDisableVertexAttribArrayOpenGLProcessor;

    public: OpenGLProcessor* textureDisableVertexAttribArrayOpenGLProcessor;

    public: OpenGLObject3dProcessor* uniformLightPositionOpenGLProcessor;

    public: OpenGLObject3dProcessor* uniformLightColorOpenGLProcessor;

    public: OpenGLObject3dProcessor* uniformCameraPositionOpenGLProcessor;

    public: OpenGLObject3dProcessor* uniformTextureUnitOpenGLProcessor;

    public: int32_t programHandle= 0;

public: ShaderComposite(std::string requiresOpenGLVersion, std::vector<Shader*> shaderArray, CompositeShaderUpdater* compositeShaderUpdater, ShaderInitializer* shaderInitializer, ModelViewProjection* modelViewProjection, OpenGLProcessor* colorOpenGLProcessor, OpenGLProcessor* vertexOpenGLProcessor, OpenGLProcessor* disableProgramShaderOpenGLProcessor);

    public: void init(GL10* gl);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERCOMPOSITE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERCOMPOSITE_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERCOMPOSITE_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/OpenGLProcessor.h>)
#include <org/allbinary/graphics/opengles/OpenGLProcessor.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/NullOpenGLProcessorFactory.h>)
#include <org/allbinary/graphics/opengles/NullOpenGLProcessorFactory.h>
#endif
#if __has_include("org/allbinary/graphics/opengles/shader/Shader.h")
#include "org/allbinary/graphics/opengles/shader/Shader.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/shader/ShaderInitializer.h")
#include "org/allbinary/graphics/opengles/shader/ShaderInitializer.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/shader/CompositeShaderUpdater.h")
#include "org/allbinary/graphics/opengles/shader/CompositeShaderUpdater.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/shader/ModelViewProjection.h")
#include "org/allbinary/graphics/opengles/shader/ModelViewProjection.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/shader/NullOpenGLTextureProcessor.h")
#include "org/allbinary/graphics/opengles/shader/NullOpenGLTextureProcessor.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/shader/OpenGLObject3dProcessor.h")
#include "org/allbinary/graphics/opengles/shader/OpenGLObject3dProcessor.h"
#endif

        #endif
    
