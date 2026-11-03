
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SIMPLESHADERINITIALIZER_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SIMPLESHADERINITIALIZER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/shader/SimpleShaderInitializer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/opengles/shader/ShaderInitializer.h"


SimpleShaderInitializer::SimpleShaderInitializer() {
        }
        auto SimpleShaderInitializer::instanceC_owner() -> SimpleShaderInitializer* { static std::unique_ptr<SimpleShaderInitializer> value(new SimpleShaderInitializer()); return value.get(); }
SimpleShaderInitializer* SimpleShaderInitializer::instanceC = SimpleShaderInitializer::instanceC_owner();

    auto SimpleShaderInitializer::getInstance() -> SimpleShaderInitializer*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SimpleShaderInitializer::instanceC;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_SIMPLESHADERINITIALIZER_CPP
