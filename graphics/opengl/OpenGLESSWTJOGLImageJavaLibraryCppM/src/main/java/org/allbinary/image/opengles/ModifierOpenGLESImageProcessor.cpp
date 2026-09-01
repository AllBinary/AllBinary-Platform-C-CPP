
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
        



#include <javax/microedition/khronos/opengles/GL10.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OpenGLESImageProcessor.h"

class ModifierOpenGLESImageProcessor: public OpenGLESImageProcessor {

    private: static const ModifierOpenGLESImageProcessor instanceC = ModifierOpenGLESImageProcessor();

    public: static ModifierOpenGLESImageProcessor getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModifierOpenGLESImageProcessor::instanceC;
    
}


    public: void colorMask(GL10 gl, float red, float green, float blue, float alpha){
gl.glColor4f(red, green, blue, alpha);
    
}


};

            

