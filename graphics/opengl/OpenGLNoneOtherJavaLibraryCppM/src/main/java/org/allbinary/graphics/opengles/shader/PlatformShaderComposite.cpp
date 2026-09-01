
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
        



            #include <vector>
        
#include <org/allbinary/graphics/opengles/NullOpenGLProcessorFactory.h>

      
#include <org/allbinary/graphics/opengles/OpenGLProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ShaderComposite.h"
#include "Shader.h"
#include "CompositeShaderUpdater.h"
#include "ShaderInitializer.h"
#include "ModelViewProjection.h"

class PlatformShaderComposite: public ShaderComposite {

public: PlatformShaderComposite(std::string requiresOpenGLVersion, std::vector<Shader> shaderArray, CompositeShaderUpdater compositeShaderUpdater, ShaderInitializer shaderInitializer, ModelViewProjection modelViewProjection, OpenGLProcessor colorOpenGLProcessor, OpenGLProcessor vertexOpenGLProcessor){
            super(requiresOpenGLVersion, shaderArray, compositeShaderUpdater, shaderInitializer, modelViewProjection, colorOpenGLProcessor, vertexOpenGLProcessor, NullOpenGLProcessorFactory::getInstance());
                    

                            //For kotlin this is before the body of the constructor.
                    
}


};

            

