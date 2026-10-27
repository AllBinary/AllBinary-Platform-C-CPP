
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_PLATFORM_OPENGL_OPENGLGLUUTILS_CPP
        #define ORG_PLATFORM_OPENGL_OPENGLGLUUTILS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/platform/opengl/OpenGLGLUUtils.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <java/nio/ByteBuffer.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/graphics/OpenGLBitmap.h>

      
#include <org/allbinary/image/opengles/OpenGLESImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

OpenGLGLUUtils::OpenGLGLUUtils() {
        }
        auto OpenGLGLUUtils::instance_owner() -> OpenGLGLUUtils* { static std::unique_ptr<OpenGLGLUUtils> value(new OpenGLGLUUtils()); return value.get(); }
OpenGLGLUUtils* OpenGLGLUUtils::instance = OpenGLGLUUtils::instance_owner();

    auto OpenGLGLUUtils::getInstance() -> OpenGLGLUUtils*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLGLUUtils::instance;
    
}


    auto OpenGLGLUUtils::makeByteBuffer(OpenGLBitmap* bmp, bool flip) -> ByteBuffer*{



                            throw RuntimeException();
                    
}


    auto OpenGLGLUUtils::texImage2D(GL10* gl, std::string glVersion, int32_t target, int32_t level, bool generateMipMap, OpenGLESImage* openGLESImage, int32_t border, bool flip) -> void{



                            throw RuntimeException();
                    
}


    auto OpenGLGLUUtils::texImage2D(GL10* gl, std::string glVersion, int32_t target, int32_t level, bool generateMipMap, OpenGLBitmap* bitmap, int32_t border, bool flip) -> void{



                            throw RuntimeException();
                    
}




        #endif //ORG_PLATFORM_OPENGL_OPENGLGLUUTILS_CPP
