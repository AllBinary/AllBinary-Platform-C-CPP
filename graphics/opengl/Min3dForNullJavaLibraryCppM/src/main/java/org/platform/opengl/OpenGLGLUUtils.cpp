
        /* Generated Code Do Not Modify */
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/RuntimeException.h"
        
#include <java/nio/ByteBuffer.h>

      
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/graphics/OpenGLBitmap.h>

      
#include <org/allbinary/image/opengles/OpenGLESImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLGLUUtils
            : public Object
         {

    private: static OpenGLGLUUtils instance() { return OpenGLGLUUtils(); }

    public: static OpenGLGLUUtils getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLGLUUtils::instance();
    
}


    public: ByteBuffer makeByteBuffer(OpenGLBitmap bmp, bool flip){



                            throw RuntimeException();
                    
}


    public: void texImage2D(GL10 gl, std::string glVersion, int32_t target, int32_t level, bool generateMipMap, OpenGLESImage openGLESImage, int32_t border, bool flip){



                            throw RuntimeException();
                    
}


    public: void texImage2D(GL10 gl, std::string glVersion, int32_t target, int32_t level, bool generateMipMap, OpenGLBitmap bitmap, int32_t border, bool flip){



                            throw RuntimeException();
                    
}


};

            

