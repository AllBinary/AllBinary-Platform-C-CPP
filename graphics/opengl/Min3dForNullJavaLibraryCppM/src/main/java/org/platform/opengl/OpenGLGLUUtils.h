
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_PLATFORM_OPENGL_OPENGLGLUUTILS_H
        #define ORG_PLATFORM_OPENGL_OPENGLGLUUTILS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <java/nio/ByteBuffer.h>
class GL10;
class OpenGLBitmap;
class OpenGLESImage;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OpenGLGLUUtils
            : public virtual Object
         {

    private: static OpenGLGLUUtils* instance_owner();
    private: static OpenGLGLUUtils* instance;

    public: static OpenGLGLUUtils* getInstance();


            
    public: OpenGLGLUUtils();
        
    public: ByteBuffer* makeByteBuffer(OpenGLBitmap* bmp, bool flip);

    public: void texImage2D(GL10* gl, std::string glVersion, int32_t target, int32_t level, bool generateMipMap, OpenGLESImage* openGLESImage, int32_t border, bool flip);

    public: void texImage2D(GL10* gl, std::string glVersion, int32_t target, int32_t level, bool generateMipMap, OpenGLBitmap* bitmap, int32_t border, bool flip);

};

            


        #endif //ORG_PLATFORM_OPENGL_OPENGLGLUUTILS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_PLATFORM_OPENGL_OPENGLGLUUTILS_H_COMPLETE)
        #define ORG_PLATFORM_OPENGL_OPENGLGLUUTILS_H_COMPLETE
        #if __has_include(<java/nio/ByteBuffer.h>)
#include <java/nio/ByteBuffer.h>
#endif
#if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include(<org/allbinary/graphics/OpenGLBitmap.h>)
#include <org/allbinary/graphics/OpenGLBitmap.h>
#endif
#if __has_include(<org/allbinary/image/opengles/OpenGLESImage.h>)
#include <org/allbinary/image/opengles/OpenGLESImage.h>
#endif

        #endif
    
