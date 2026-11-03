
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_PLATFORM_GRAPHICS_OPENGLIMAGEUTIL_CPP
        #define ORG_PLATFORM_GRAPHICS_OPENGLIMAGEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/platform/graphics/OpenGLImageUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/image/opengles/OpenGLImageUtilBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

OpenGLImageUtil::OpenGLImageUtil() {
        }
        auto OpenGLImageUtil::instance_owner() -> OpenGLImageUtil* { static std::unique_ptr<OpenGLImageUtil> value(new OpenGLImageUtil()); return value.get(); }
OpenGLImageUtil* OpenGLImageUtil::instance = OpenGLImageUtil::instance_owner();

    auto OpenGLImageUtil::getInstance() -> OpenGLImageUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return OpenGLImageUtil::instance;
    
}




        #endif //ORG_PLATFORM_GRAPHICS_OPENGLIMAGEUTIL_CPP
