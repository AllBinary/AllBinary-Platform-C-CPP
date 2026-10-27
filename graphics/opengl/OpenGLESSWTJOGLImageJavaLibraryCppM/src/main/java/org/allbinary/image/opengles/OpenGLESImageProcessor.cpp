
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLESImageProcessor
            : public Object
         {

    private: static OpenGLESImageProcessor* instance() { static std::unique_ptr<OpenGLESImageProcessor> value(new OpenGLESImageProcessor()); return value.get(); }

    public: static OpenGLESImageProcessor* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLESImageProcessor::instance();
    
}


    public: void translate(GL10* gl, float translateX, float translateY){
gl->glTranslatef(translateX, translateY, 0);
    
}


    public: void rotate(GL10* gl, float angle){
gl->glRotatef( -angle, 0, 0, 1);
    
}


    public: void scale(GL10* gl, float scaleX, float scaleY){
gl->glScalef(scaleX, scaleY, 1);
    
}


    public: void colorMask(GL10* gl, float red, float green, float blue, float alpha){
}


};

            

