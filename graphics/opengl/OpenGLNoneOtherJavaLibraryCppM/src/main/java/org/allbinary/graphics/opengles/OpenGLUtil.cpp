
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLUTIL_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/OpenGLUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Runnable.h"
        
#include <javax/microedition/lcdui/Image.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

OpenGLUtil::OpenGLUtil() {
        }
        auto OpenGLUtil::instance_owner() -> OpenGLUtil* { static std::unique_ptr<OpenGLUtil> value(new OpenGLUtil()); return value.get(); }
OpenGLUtil* OpenGLUtil::instance = OpenGLUtil::instance_owner();

    auto OpenGLUtil::getInstance() -> OpenGLUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return OpenGLUtil::instance;
    
}


    auto OpenGLUtil::addImage(Image* image) -> Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return image;
    
}


    auto OpenGLUtil::clear() -> void{
}


    auto OpenGLUtil::addRunnable(Runnable* runnable) -> void{
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLUTIL_CPP
