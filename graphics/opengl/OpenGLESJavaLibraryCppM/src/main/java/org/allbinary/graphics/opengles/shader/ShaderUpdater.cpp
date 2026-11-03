
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERUPDATER_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERUPDATER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/shader/ShaderUpdater.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/khronos/egl/EGLConfig.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/graphics/opengles/renderer/RendererStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ShaderUpdater::ShaderUpdater() : commonStrings(CommonStrings::getInstance()), rendererStrings(RendererStrings::getInstance()) {
        }
        auto ShaderUpdater::instance_owner() -> ShaderUpdater* { static std::unique_ptr<ShaderUpdater> value(new ShaderUpdater()); return value.get(); }
ShaderUpdater* ShaderUpdater::instance = ShaderUpdater::instance_owner();

    auto ShaderUpdater::getInstance() -> ShaderUpdater*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ShaderUpdater::instance;
    
}


    auto ShaderUpdater::onSurfaceCreated(GL10* gl, EGLConfig* eglConfig) -> void{
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERUPDATER_CPP
