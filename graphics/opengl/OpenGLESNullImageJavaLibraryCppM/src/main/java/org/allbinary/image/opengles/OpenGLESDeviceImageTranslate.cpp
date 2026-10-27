
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/khronos/opengles/GL10.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/opengles/OpenGLESImageTranslate.h"
#include "org/allbinary/image/opengles/OpenGLESImage.h"

class OpenGLESDeviceImageTranslate: public OpenGLESImageTranslate {

    public: float translateX = 0.0;

    public: float translateY = 0.0;

    public: float translateX2 = 0.0;

    public: float translateY2 = 0.0;

    public: void translate(GL10* gl, OpenGLESImage* openGLESImage, float x, float y){
openGLESImage->imageProcessor.translate(gl, translateX +(openGLESImage->openGLESImageProperties.scaleX *x), translateY +(openGLESImage->openGLESImageProperties.scaleY *y));
    
}


    public: void translate2(GL10* gl, OpenGLESImage* openGLESImage){
openGLESImage->imageProcessor.translate(gl, translateX2, translateY2);
    
}


};

            

