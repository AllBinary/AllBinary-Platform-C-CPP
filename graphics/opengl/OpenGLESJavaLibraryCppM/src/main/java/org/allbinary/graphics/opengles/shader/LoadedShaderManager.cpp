
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_LOADEDSHADERMANAGER_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_LOADEDSHADERMANAGER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/shader/LoadedShaderManager.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/opengles/shader/ShaderManager.h"


LoadedShaderManager::LoadedShaderManager() {
        }
        auto LoadedShaderManager::instance_owner() -> ShaderManager* { static std::unique_ptr<ShaderManager> value(new ShaderManager( -1,  -1)); return value.get(); }
ShaderManager* LoadedShaderManager::instance = LoadedShaderManager::instance_owner();

    auto LoadedShaderManager::getInstance() -> ShaderManager*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return LoadedShaderManager::instance;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_LOADEDSHADERMANAGER_CPP
