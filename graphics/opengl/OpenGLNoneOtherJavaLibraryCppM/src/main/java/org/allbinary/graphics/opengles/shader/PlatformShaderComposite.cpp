
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_PLATFORMSHADERCOMPOSITE_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_PLATFORMSHADERCOMPOSITE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/shader/PlatformShaderComposite.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/graphics/opengles/NullOpenGLProcessorFactory.h>

      
#include <org/allbinary/graphics/opengles/OpenGLProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/opengles/shader/ShaderComposite.h"
#include "org/allbinary/graphics/opengles/shader/Shader.h"
#include "org/allbinary/graphics/opengles/shader/CompositeShaderUpdater.h"
#include "org/allbinary/graphics/opengles/shader/ShaderInitializer.h"
#include "org/allbinary/graphics/opengles/shader/ModelViewProjection.h"


PlatformShaderComposite::PlatformShaderComposite(std::string requiresOpenGLVersion, std::vector<Shader*> shaderArray, CompositeShaderUpdater* compositeShaderUpdater, ShaderInitializer* shaderInitializer, ModelViewProjection* modelViewProjection, OpenGLProcessor* colorOpenGLProcessor, OpenGLProcessor* vertexOpenGLProcessor) : ShaderComposite(requiresOpenGLVersion, shaderArray, compositeShaderUpdater, shaderInitializer, modelViewProjection, colorOpenGLProcessor, vertexOpenGLProcessor, NullOpenGLProcessorFactory::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_PLATFORMSHADERCOMPOSITE_CPP
