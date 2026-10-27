
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_PLATFORM_GRAPHICS_OPENGLIMAGEUTIL_H
        #define ORG_PLATFORM_GRAPHICS_OPENGLIMAGEUTIL_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/image/opengles/OpenGLImageUtilBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLImageUtil: public OpenGLImageUtilBase {

    private: static OpenGLImageUtil* instance() { static std::unique_ptr<OpenGLImageUtil> value(new OpenGLImageUtil()); return value.get(); }

    public: static OpenGLImageUtil* getInstance();

};

            


        #endif //ORG_PLATFORM_GRAPHICS_OPENGLIMAGEUTIL_H
