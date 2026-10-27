
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/opengles/OpenGLESImage.h"

class OpenGLESImageTranslate
            : public Object
         {

    private: static OpenGLESImageTranslate* instance() { static std::unique_ptr<OpenGLESImageTranslate> value(new OpenGLESImageTranslate()); return value.get(); }

    public: static OpenGLESImageTranslate* getInstance();

    public: void translate(GL10* gl, OpenGLESImage* openGLESImage, float x, float y);

    public: void translate2(GL10* gl, OpenGLESImage* openGLESImage);

};

            


        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLESIMAGETRANSLATE_H
