
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_PLATFORM_OPENGL_OPENGLTEXTUREFACTORY_H
        #define ORG_PLATFORM_OPENGL_OPENGLTEXTUREFACTORY_H

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

class OpenGLTextureFactory: public PlatformTextureBaseFactory {

    private: static OpenGLTextureFactory* instance() { static std::unique_ptr<OpenGLTextureFactory> value(new OpenGLTextureFactory()); return value.get(); }

    public: static OpenGLTextureFactory* getInstance();

    private: OpenGLGLUUtils* gluUtils = OpenGLGLUUtils::getInstance();

private: OpenGLTextureFactory();

    public: void load(GL10* gl, int32_t target, int32_t level, Image* image, int32_t border, bool flip);

};

            


        #endif //ORG_PLATFORM_OPENGL_OPENGLTEXTUREFACTORY_H
