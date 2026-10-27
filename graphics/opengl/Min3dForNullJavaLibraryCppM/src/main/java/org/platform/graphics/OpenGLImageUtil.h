
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_PLATFORM_GRAPHICS_OPENGLIMAGEUTIL_H
        #define ORG_PLATFORM_GRAPHICS_OPENGLIMAGEUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/image/opengles/OpenGLImageUtilBase.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OpenGLImageUtil: public OpenGLImageUtilBase {

    private: static OpenGLImageUtil* instance_owner();
    private: static OpenGLImageUtil* instance;

    public: static OpenGLImageUtil* getInstance();


            
    public: OpenGLImageUtil();
        
};

            


        #endif //ORG_PLATFORM_GRAPHICS_OPENGLIMAGEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_PLATFORM_GRAPHICS_OPENGLIMAGEUTIL_H_COMPLETE)
        #define ORG_PLATFORM_GRAPHICS_OPENGLIMAGEUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/image/opengles/OpenGLImageUtilBase.h>)
#include <org/allbinary/image/opengles/OpenGLImageUtilBase.h>
#endif

        #endif
    
