
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
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGETRANSLATE_H
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGETRANSLATE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class GL10;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class OpenGLESImage;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OpenGLESImageTranslate
            : public virtual Object
         {

    private: static OpenGLESImageTranslate* instance_owner();
    private: static OpenGLESImageTranslate* instance;

    public: static OpenGLESImageTranslate* getInstance();


            
    public: OpenGLESImageTranslate();
        
    public: void translate(GL10* gl, OpenGLESImage* openGLESImage, float x, float y);

    public: void translate2(GL10* gl, OpenGLESImage* openGLESImage);

};

            


        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGETRANSLATE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGETRANSLATE_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGETRANSLATE_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include("org/allbinary/image/opengles/OpenGLESImage.h")
#include "org/allbinary/image/opengles/OpenGLESImage.h"
#endif

        #endif
    
