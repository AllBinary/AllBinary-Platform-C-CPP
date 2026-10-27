
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERMANAGER_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERMANAGER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/shader/ShaderManager.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto ShaderManager::instance_owner() -> ShaderManager* { static std::unique_ptr<ShaderManager> value(new ShaderManager( -1,  -1)); return value.get(); }
ShaderManager* ShaderManager::instance = ShaderManager::instance_owner();

    auto ShaderManager::getInstance() -> ShaderManager*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ShaderManager::instance;
    
}


ShaderManager::ShaderManager(int32_t GL_VERTEX_SHADER, int32_t GL_FRAGMENT_SHADER) : commonStrings(CommonStrings::getInstance()){
this->GL_VERTEX_SHADER= GL_VERTEX_SHADER;
    
this->GL_FRAGMENT_SHADER= GL_FRAGMENT_SHADER;
    
}


    auto ShaderManager::load(GL10* gl, std::string resource, std::vector<std::string> shaderAsStringArray, int32_t shaderType) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    auto ShaderManager::loadShader(GL10* gl, std::string resource, BasicArrayList* stringList, int32_t shaderType) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERMANAGER_CPP
