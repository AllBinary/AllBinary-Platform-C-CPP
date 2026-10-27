
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_PLATFORM_OPENGL_OPENGLTEXTUREFACTORY_H
        #define ORG_PLATFORM_OPENGL_OPENGLTEXTUREFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/RuntimeException.h"
        
class GL10;
class Image;
#include <org/allbinary/platform/opengles/PlatformTextureBaseFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class OpenGLGLUUtils;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OpenGLTextureFactory: public PlatformTextureBaseFactory {

    private: static OpenGLTextureFactory* instance_owner();
    private: static OpenGLTextureFactory* instance;

    public: static OpenGLTextureFactory* getInstance();

    private: OpenGLGLUUtils* gluUtils;

private: OpenGLTextureFactory();

    public: void load(GL10* gl, int32_t target, int32_t level, Image* image, int32_t border, bool flip);

};

            


        #endif //ORG_PLATFORM_OPENGL_OPENGLTEXTUREFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_PLATFORM_OPENGL_OPENGLTEXTUREFACTORY_H_COMPLETE)
        #define ORG_PLATFORM_OPENGL_OPENGLTEXTUREFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/platform/opengles/PlatformTextureBaseFactory.h>)
#include <org/allbinary/platform/opengles/PlatformTextureBaseFactory.h>
#endif
#if __has_include("org/platform/opengl/OpenGLGLUUtils.h")
#include "org/platform/opengl/OpenGLGLUUtils.h"
#endif

        #endif
    
