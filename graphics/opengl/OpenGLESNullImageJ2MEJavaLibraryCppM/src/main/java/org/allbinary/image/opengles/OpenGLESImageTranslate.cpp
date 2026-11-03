
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGETRANSLATE_CPP
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGETRANSLATE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/opengles/OpenGLESImageTranslate.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/opengles/OpenGLESImage.h"


OpenGLESImageTranslate::OpenGLESImageTranslate() {
        }
        auto OpenGLESImageTranslate::instance_owner() -> OpenGLESImageTranslate* { static std::unique_ptr<OpenGLESImageTranslate> value(new OpenGLESImageTranslate()); return value.get(); }
OpenGLESImageTranslate* OpenGLESImageTranslate::instance = OpenGLESImageTranslate::instance_owner();

    auto OpenGLESImageTranslate::getInstance() -> OpenGLESImageTranslate*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return OpenGLESImageTranslate::instance;
    
}


    auto OpenGLESImageTranslate::translate(GL10* gl, OpenGLESImage* openGLESImage, float x, float y) -> void{
}


    auto OpenGLESImageTranslate::translate2(GL10* gl, OpenGLESImage* openGLESImage) -> void{
}




        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGETRANSLATE_CPP
