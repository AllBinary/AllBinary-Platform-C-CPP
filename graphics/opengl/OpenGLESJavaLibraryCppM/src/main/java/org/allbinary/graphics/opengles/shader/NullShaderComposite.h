
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
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/graphics/opengles/NullOpenGLProcessorFactory.h>

      
#include <org/allbinary/graphics/opengles/OpenGLCapabilities.h>

      
#include <org/allbinary/graphics/opengles/OpenGLProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ShaderComposite.h"
#include "Shader.h"
#include "CompositeShaderUpdater.h"
#include "ShaderInitializer.h"
#include "ModelViewProjection.h"

class NullShaderComposite: public ShaderComposite {

    private: static NullShaderComposite instance() { return NullShaderComposite(); }

    public: static ShaderComposite getInstance();

public: NullShaderComposite(std::string requiresOpenGLVersion, std::vector<Shader> shaderArray, CompositeShaderUpdater compositeShaderUpdater, ShaderInitializer shaderInitializer, ModelViewProjection modelViewProjection, OpenGLProcessor colorOpenGLProcessor, OpenGLProcessor vertexOpenGLProcessor, OpenGLProcessor disableProgramShaderOpenGLProcessor);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_NULLSHADERCOMPOSITE_H
