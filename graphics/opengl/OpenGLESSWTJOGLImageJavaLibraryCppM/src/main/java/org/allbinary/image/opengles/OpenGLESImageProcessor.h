
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGEPROCESSOR_H
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGEPROCESSOR_H

            #include "../../../../java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLESImageProcessor
            : public Object
         {
        

    private: static const instance: OpenGLESImageProcessor = new OpenGLESImageProcessor();

    public static OpenGLESImageProcessor getInstance();

    public translate(GL10 gl, float translateX, float translateY);

    public rotate(GL10 gl, float angle);

    public scale(GL10 gl, float scaleX, float scaleY);

    public colorMask(GL10 gl, float red, float green, float blue, float alpha);

};

            


        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGEPROCESSOR_H
