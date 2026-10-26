
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
        



            #include "java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OpenGLESImage.h"

class OpenGLESImageTranslate
            : public Object
         {

    private: static OpenGLESImageTranslate instance() { return OpenGLESImageTranslate(); }

    public: static OpenGLESImageTranslate getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLESImageTranslate::instance();
    
}


    public: void translate(GL10 gl, OpenGLESImage openGLESImage, float x, float y){
openGLESImage.imageProcessor.translate(gl, x, y);
    
}


    public: void translate2(GL10 gl, OpenGLESImage openGLESImage){
}


};

            

