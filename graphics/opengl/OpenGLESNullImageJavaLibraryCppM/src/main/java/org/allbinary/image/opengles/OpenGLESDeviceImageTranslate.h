
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESDEVICEIMAGETRANSLATE_H
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESDEVICEIMAGETRANSLATE_H

#include <javax/microedition/khronos/opengles/GL10.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OpenGLESImageTranslate.h"
#include "OpenGLESImage.h"

class OpenGLESDeviceImageTranslate: public OpenGLESImageTranslate {

    public: float translateX = 0.0;

    public: float translateY = 0.0;

    public: float translateX2 = 0.0;

    public: float translateY2 = 0.0;

    public: void translate(GL10 gl, OpenGLESImage openGLESImage, float x, float y);

    public: void translate2(GL10 gl, OpenGLESImage openGLESImage);

};

            


        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESDEVICEIMAGETRANSLATE_H
