
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERINITIALIZER_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERINITIALIZER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/shader/ShaderInitializer.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/opengles/shader/Shader.h"


ShaderInitializer::ShaderInitializer() : commonStrings(CommonStrings::getInstance()) {
        }
        auto ShaderInitializer::instance_owner() -> ShaderInitializer* { static std::unique_ptr<ShaderInitializer> value(new ShaderInitializer()); return value.get(); }
ShaderInitializer* ShaderInitializer::instance = ShaderInitializer::instance_owner();

    auto ShaderInitializer::getInstance() -> ShaderInitializer*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ShaderInitializer::instance;
    
}


    auto ShaderInitializer::init(GL10* gl, std::vector<Shader*> shader, std::vector<std::string> attributeArray) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERINITIALIZER_CPP
