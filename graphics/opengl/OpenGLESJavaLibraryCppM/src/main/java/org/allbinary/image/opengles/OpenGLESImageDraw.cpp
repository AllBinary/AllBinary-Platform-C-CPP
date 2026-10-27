
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGEDRAW_CPP
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGEDRAW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/opengles/OpenGLESImageDraw.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

OpenGLESImageDraw::OpenGLESImageDraw() {
        }
        auto OpenGLESImageDraw::instance_owner() -> OpenGLESImageDraw* { static std::unique_ptr<OpenGLESImageDraw> value(new OpenGLESImageDraw()); return value.get(); }
OpenGLESImageDraw* OpenGLESImageDraw::instance = OpenGLESImageDraw::instance_owner();

    auto OpenGLESImageDraw::getInstance() -> OpenGLESImageDraw*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLESImageDraw::instance;
    
}


    auto OpenGLESImageDraw::drawRegion(GL10* gl, int32_t viewHeight, float x_src, float y_src, float width, float height, int32_t x, int32_t y, int32_t z) -> void{
}


    auto OpenGLESImageDraw::draw(GL10* gl, int32_t x, int32_t y, int32_t z) -> void{
}




        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGEDRAW_CPP
