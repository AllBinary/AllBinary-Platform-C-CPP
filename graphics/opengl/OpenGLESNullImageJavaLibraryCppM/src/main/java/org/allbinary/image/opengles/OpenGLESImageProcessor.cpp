
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGEPROCESSOR_CPP
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGEPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/opengles/OpenGLESImageProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

OpenGLESImageProcessor::OpenGLESImageProcessor() {
        }
        auto OpenGLESImageProcessor::instance_owner() -> OpenGLESImageProcessor* { static std::unique_ptr<OpenGLESImageProcessor> value(new OpenGLESImageProcessor()); return value.get(); }
OpenGLESImageProcessor* OpenGLESImageProcessor::instance = OpenGLESImageProcessor::instance_owner();

    auto OpenGLESImageProcessor::getInstance() -> OpenGLESImageProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLESImageProcessor::instance;
    
}


    auto OpenGLESImageProcessor::translate(GL10* gl, float translateX, float translateY) -> void{
}


    auto OpenGLESImageProcessor::rotate(GL10* gl, float angle) -> void{
}


    auto OpenGLESImageProcessor::scale(GL10* gl, float scaleX, float scaleY) -> void{
}


    auto OpenGLESImageProcessor::colorMask(GL10* gl, float red, float green, float blue, float alpha) -> void{
}




        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGEPROCESSOR_CPP
