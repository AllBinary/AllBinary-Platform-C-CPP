
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_PLATFORM_OPENGL_OPENGLGLUUTILS_H
        #define ORG_PLATFORM_OPENGL_OPENGLGLUUTILS_H

            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <java/nio/ByteBuffer.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/graphics/OpenGLBitmap.h>

      
#include <org/allbinary/image/opengles/OpenGLESImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLGLUUtils
            : public Object
         {

    private: static OpenGLGLUUtils instance() { return OpenGLGLUUtils(); }

    public: static OpenGLGLUUtils getInstance();

    public: ByteBuffer makeByteBuffer(OpenGLBitmap bmp, bool flip);

    public: void texImage2D(GL10 gl, std::string glVersion, int32_t target, int32_t level, bool generateMipMap, OpenGLESImage openGLESImage, int32_t border, bool flip);

    public: void texImage2D(GL10 gl, std::string glVersion, int32_t target, int32_t level, bool generateMipMap, OpenGLBitmap bitmap, int32_t border, bool flip);

};

            


        #endif //ORG_PLATFORM_OPENGL_OPENGLGLUUTILS_H
