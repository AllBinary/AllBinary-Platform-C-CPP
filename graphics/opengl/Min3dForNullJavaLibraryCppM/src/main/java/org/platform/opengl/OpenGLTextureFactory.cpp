
        /* Generated Code Do Not Modify */
        



            #include "../../../java/lang/RuntimeException.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/platform/opengles/PlatformTextureBaseFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OpenGLGLUUtils.h"

class OpenGLTextureFactory: public PlatformTextureBaseFactory {
        

    private: static const instance: OpenGLTextureFactory = new OpenGLTextureFactory();

    public static OpenGLTextureFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLTextureFactory.instance;
    
}


    private: const gluUtils: OpenGLGLUUtils = OpenGLGLUUtils.getInstance()!;

private constructor (){

            super();
        }


    public load(GL10 gl, int32_t target, int32_t level, Image image, int32_t border, bool flip){



                            throw new RuntimeException();
                    
}


};

            

