
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_NULLSHADERCOMPOSITE_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_NULLSHADERCOMPOSITE_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/graphics/opengles/NullOpenGLProcessorFactory.h>

      
#include <org/allbinary/graphics/opengles/OpenGLCapabilities.h>

      
#include <org/allbinary/graphics/opengles/OpenGLProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/opengles/shader/ShaderComposite.h"
#include "org/allbinary/graphics/opengles/shader/Shader.h"
#include "org/allbinary/graphics/opengles/shader/CompositeShaderUpdater.h"
#include "org/allbinary/graphics/opengles/shader/ShaderInitializer.h"
#include "org/allbinary/graphics/opengles/shader/ModelViewProjection.h"

class NullShaderComposite: public ShaderComposite {

    private: static inline NullShaderComposite* instance = class extends NullShaderComposite
                                {
                                
    public: void init(GL10* gl);
                                }
                            ;

    public: static ShaderComposite* getInstance();

public: NullShaderComposite(std::string requiresOpenGLVersion, std::vector<Shader*> shaderArray, CompositeShaderUpdater* compositeShaderUpdater, ShaderInitializer* shaderInitializer, ModelViewProjection* modelViewProjection, OpenGLProcessor* colorOpenGLProcessor, OpenGLProcessor* vertexOpenGLProcessor, OpenGLProcessor* disableProgramShaderOpenGLProcessor);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_NULLSHADERCOMPOSITE_H
