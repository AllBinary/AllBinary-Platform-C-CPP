
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_COMPOSITESHADERUPDATER_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_COMPOSITESHADERUPDATER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/shader/CompositeShaderUpdater.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/khronos/egl/EGLConfig.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/opengles/shader/ShaderUpdater.h"

auto CompositeShaderUpdater::instanceC_owner() -> CompositeShaderUpdater* { static std::unique_ptr<CompositeShaderUpdater> value(new CompositeShaderUpdater(StringUtil::getInstance()->getArrayInstance(), StringUtil::getInstance()->getArrayInstance(), StringUtil::getInstance()->getArrayInstance(), NullUtil::getInstance()->NULL_INT_ARRAY)); return value.get(); }
CompositeShaderUpdater* CompositeShaderUpdater::instanceC = CompositeShaderUpdater::instanceC_owner();

    auto CompositeShaderUpdater::getInstance() -> CompositeShaderUpdater*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CompositeShaderUpdater::instanceC;
    
}


CompositeShaderUpdater::CompositeShaderUpdater(std::vector<std::string> uniformBlockArray, std::vector<std::string> uniformArray, std::vector<std::string> attributeArray, std::vector<int32_t> attributeHandleArray) : commonSeps(CommonSeps::getInstance()){
}


    auto CompositeShaderUpdater::onSurfaceCreated(GL10* gl, EGLConfig* eglConfig, int32_t programHandle) -> void{
}


    auto CompositeShaderUpdater::onSurfaceDestroyed(GL10* gl) -> void{
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_COMPOSITESHADERUPDATER_CPP
