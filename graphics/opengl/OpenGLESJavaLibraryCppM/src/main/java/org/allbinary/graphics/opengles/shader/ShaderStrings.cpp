
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERSTRINGS_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERSTRINGS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/shader/ShaderStrings.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ShaderStrings::ShaderStrings() {
        }
        auto ShaderStrings::instance_owner() -> ShaderStrings* { static std::unique_ptr<ShaderStrings> value(new ShaderStrings()); return value.get(); }
ShaderStrings* ShaderStrings::instance = ShaderStrings::instance_owner();

    auto ShaderStrings::getInstance() -> ShaderStrings*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ShaderStrings::instance;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SHADERSTRINGS_CPP
