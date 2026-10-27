
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class GL10;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/opengles/OpenGLESImageTranslate.h"
class OpenGLESImage;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OpenGLESDeviceImageTranslate: public OpenGLESImageTranslate {


            
    public: OpenGLESDeviceImageTranslate();
        
    public: float translateX = 0.0;

    public: float translateY = 0.0;

    public: float translateX2 = 0.0;

    public: float translateY2 = 0.0;

    public: void translate(GL10* gl, OpenGLESImage* openGLESImage, float x, float y);

    public: void translate2(GL10* gl, OpenGLESImage* openGLESImage);

};

            


        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESDEVICEIMAGETRANSLATE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESDEVICEIMAGETRANSLATE_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESDEVICEIMAGETRANSLATE_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include("org/allbinary/image/opengles/OpenGLESImageTranslate.h")
#include "org/allbinary/image/opengles/OpenGLESImageTranslate.h"
#endif
#if __has_include("org/allbinary/image/opengles/OpenGLESImage.h")
#include "org/allbinary/image/opengles/OpenGLESImage.h"
#endif

        #endif
    
