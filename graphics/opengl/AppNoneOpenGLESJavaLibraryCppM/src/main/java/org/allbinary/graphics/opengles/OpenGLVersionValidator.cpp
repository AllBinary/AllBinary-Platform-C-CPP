
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLVERSIONVALIDATOR_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLVERSIONVALIDATOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/OpenGLVersionValidator.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/opengles/shader/ShaderComposite.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

OpenGLVersionValidator::OpenGLVersionValidator() {
        }
        auto OpenGLVersionValidator::instance_owner() -> OpenGLVersionValidator* { static std::unique_ptr<OpenGLVersionValidator> value(new OpenGLVersionValidator()); return value.get(); }
OpenGLVersionValidator* OpenGLVersionValidator::instance = OpenGLVersionValidator::instance_owner();

    auto OpenGLVersionValidator::getInstance() -> OpenGLVersionValidator*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return OpenGLVersionValidator::instance;
    
}


    auto OpenGLVersionValidator::isGL31OrHigher() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto OpenGLVersionValidator::isAvailable(std::string glVersionRequired) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto OpenGLVersionValidator::setShaderComposite(ShaderComposite* shaderComposite, Object* anyType) -> void{
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLVERSIONVALIDATOR_CPP
