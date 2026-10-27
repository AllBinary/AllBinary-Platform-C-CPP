
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_NULLOPENGLTEXTUREPROCESSOR_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_NULLOPENGLTEXTUREPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/shader/NullOpenGLTextureProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/opengles/shader/OpenGLObject3dProcessor.h"


NullOpenGLTextureProcessor::NullOpenGLTextureProcessor() {
        }
        auto NullOpenGLTextureProcessor::instance_owner() -> OpenGLObject3dProcessor* { static std::unique_ptr<OpenGLObject3dProcessor> value(new OpenGLObject3dProcessor()); return value.get(); }
OpenGLObject3dProcessor* NullOpenGLTextureProcessor::instance = NullOpenGLTextureProcessor::instance_owner();

    auto NullOpenGLTextureProcessor::getInstance() -> OpenGLObject3dProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullOpenGLTextureProcessor::instance;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_SHADER_NULLOPENGLTEXTUREPROCESSOR_CPP
