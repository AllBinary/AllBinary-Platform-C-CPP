
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_PLATFORM_OPENGL_OPENGLTEXTUREFACTORY_CPP
        #define ORG_PLATFORM_OPENGL_OPENGLTEXTUREFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/platform/opengl/OpenGLTextureFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/platform/opengles/PlatformTextureBaseFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/platform/opengl/OpenGLGLUUtils.h"

auto OpenGLTextureFactory::instance_owner() -> OpenGLTextureFactory* { static std::unique_ptr<OpenGLTextureFactory> value(new OpenGLTextureFactory()); return value.get(); }
OpenGLTextureFactory* OpenGLTextureFactory::instance = OpenGLTextureFactory::instance_owner();

    auto OpenGLTextureFactory::getInstance() -> OpenGLTextureFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLTextureFactory::instance;
    
}


OpenGLTextureFactory::OpenGLTextureFactory() : gluUtils(OpenGLGLUUtils::getInstance()){
}


    auto OpenGLTextureFactory::load(GL10* gl, int32_t target, int32_t level, Image* image, int32_t border, bool flip) -> void{



                            throw RuntimeException();
                    
}




        #endif //ORG_PLATFORM_OPENGL_OPENGLTEXTUREFACTORY_CPP
