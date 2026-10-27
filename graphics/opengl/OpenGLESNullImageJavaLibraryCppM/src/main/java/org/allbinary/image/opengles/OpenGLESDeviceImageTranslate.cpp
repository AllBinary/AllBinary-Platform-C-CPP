
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESDEVICEIMAGETRANSLATE_CPP
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESDEVICEIMAGETRANSLATE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/opengles/OpenGLESDeviceImageTranslate.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/khronos/opengles/GL10.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/opengles/OpenGLESImageTranslate.h"
#include "org/allbinary/image/opengles/OpenGLESImage.h"


OpenGLESDeviceImageTranslate::OpenGLESDeviceImageTranslate() {
        }
        
    auto OpenGLESDeviceImageTranslate::translate(GL10* gl, OpenGLESImage* openGLESImage, float x, float y) -> void{
openGLESImage->imageProcessor->translate(gl, translateX +(openGLESImage->openGLESImageProperties->scaleX *x), translateY +(openGLESImage->openGLESImageProperties->scaleY *y));
    
}


    auto OpenGLESDeviceImageTranslate::translate2(GL10* gl, OpenGLESImage* openGLESImage) -> void{
openGLESImage->imageProcessor->translate(gl, translateX2, translateY2);
    
}




        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESDEVICEIMAGETRANSLATE_CPP
