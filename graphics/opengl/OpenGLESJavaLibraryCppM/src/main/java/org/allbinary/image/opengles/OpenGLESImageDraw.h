
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGEDRAW_H
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGEDRAW_H

            #include "../../../../java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLESImageDraw
            : public Object
         {
        

    private: static const instance: OpenGLESImageDraw = new OpenGLESImageDraw();

    public static OpenGLESImageDraw getInstance();

    public drawRegion(GL10 gl, int32_t viewHeight, float x_src, float y_src, float width, float height, int32_t x, int32_t y, int32_t z);

    public draw(GL10 gl, int32_t x, int32_t y, int32_t z);

};

            


        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGEDRAW_H
