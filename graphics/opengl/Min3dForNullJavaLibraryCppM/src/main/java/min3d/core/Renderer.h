
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class EGLConfig;
class GL10;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Renderer
            : public virtual Object
         {

    public: virtual void onSurfaceCreated(GL10* gl, EGLConfig* config) = 0;

    public: virtual void onSurfaceChanged(GL10* gl, int32_t width, int32_t height) = 0;

    public: virtual void onDrawFrame(GL10* gl) = 0;

};

            


        #endif //MIN3D_CORE_RENDERER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(MIN3D_CORE_RENDERER_H_COMPLETE)
        #define MIN3D_CORE_RENDERER_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/egl/EGLConfig.h>)
#include <javax/microedition/khronos/egl/EGLConfig.h>
#endif
#if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif

        #endif
    
