
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
        



        #ifndef MIN3D_CORE_RENDERER_H
        #define MIN3D_CORE_RENDERER_H

#include <javax/microedition/khronos/egl/EGLConfig.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Renderer {
        

    onSurfaceCreated(GL10 gl, EGLConfig config);

    onSurfaceChanged(GL10 gl, int32_t width, int32_t height);

    onDrawFrame(GL10 gl);

};

            


        #endif //MIN3D_CORE_RENDERER_H
