
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLSURFACECHANGEDINTERFACE_H
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLSURFACECHANGEDINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class GL;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OpenGLSurfaceChangedInterface
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: virtual void set(GL* gl) = 0;

};

            


        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLSURFACECHANGEDINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLSURFACECHANGEDINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLSURFACECHANGEDINTERFACE_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL.h>)
#include <javax/microedition/khronos/opengles/GL.h>
#endif

        #endif
    
