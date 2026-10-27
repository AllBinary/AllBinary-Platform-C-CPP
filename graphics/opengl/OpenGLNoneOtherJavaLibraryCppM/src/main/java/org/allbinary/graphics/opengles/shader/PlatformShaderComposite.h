
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_PLATFORMSHADERCOMPOSITE_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_PLATFORMSHADERCOMPOSITE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class NullOpenGLProcessorFactory;
class OpenGLProcessor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/opengles/shader/ShaderComposite.h"
class Shader;
class CompositeShaderUpdater;
class ShaderInitializer;
class ModelViewProjection;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PlatformShaderComposite: public ShaderComposite {

public: PlatformShaderComposite(std::string requiresOpenGLVersion, std::vector<Shader*> shaderArray, CompositeShaderUpdater* compositeShaderUpdater, ShaderInitializer* shaderInitializer, ModelViewProjection* modelViewProjection, OpenGLProcessor* colorOpenGLProcessor, OpenGLProcessor* vertexOpenGLProcessor);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_PLATFORMSHADERCOMPOSITE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_PLATFORMSHADERCOMPOSITE_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_PLATFORMSHADERCOMPOSITE_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/opengles/NullOpenGLProcessorFactory.h>)
#include <org/allbinary/graphics/opengles/NullOpenGLProcessorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/OpenGLProcessor.h>)
#include <org/allbinary/graphics/opengles/OpenGLProcessor.h>
#endif
#if __has_include("org/allbinary/graphics/opengles/shader/ShaderComposite.h")
#include "org/allbinary/graphics/opengles/shader/ShaderComposite.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/shader/Shader.h")
#include "org/allbinary/graphics/opengles/shader/Shader.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/shader/CompositeShaderUpdater.h")
#include "org/allbinary/graphics/opengles/shader/CompositeShaderUpdater.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/shader/ShaderInitializer.h")
#include "org/allbinary/graphics/opengles/shader/ShaderInitializer.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/shader/ModelViewProjection.h")
#include "org/allbinary/graphics/opengles/shader/ModelViewProjection.h"
#endif

        #endif
    
