
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCAPABILITIES_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCAPABILITIES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/OpenGLCapabilities.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto OpenGLCapabilities::instance_owner() -> OpenGLCapabilities* { static std::unique_ptr<OpenGLCapabilities> value(new OpenGLCapabilities()); return value.get(); }
OpenGLCapabilities* OpenGLCapabilities::instance = OpenGLCapabilities::instance_owner();

    auto OpenGLCapabilities::getInstance() -> OpenGLCapabilities*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return OpenGLCapabilities::instance;
    
}


OpenGLCapabilities::OpenGLCapabilities() : glVersion(StringUtil::getInstance()->EMPTY_STRING), glInstanceVersion(StringUtil::getInstance()->EMPTY_STRING){
}


    auto OpenGLCapabilities::isInitialized() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


    auto OpenGLCapabilities::initCapabilities(Object* gl) -> void{
}


    auto OpenGLCapabilities::isGlExtensionDrawTexture() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto OpenGLCapabilities::getGlVersion() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->glVersion;
    
}


    auto OpenGLCapabilities::isVertexBufferObjectSupport() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto OpenGLCapabilities::isTextureSizeValid(int32_t widthAndHeight) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLCAPABILITIES_CPP
