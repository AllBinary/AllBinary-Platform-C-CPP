
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLUTIL_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Runnable.h"
        
class Image;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OpenGLUtil
            : public virtual Object
         {

    private: static OpenGLUtil* instance_owner();
    private: static OpenGLUtil* instance;

    public: static OpenGLUtil* getInstance();


            
    public: OpenGLUtil();
        
    public: Image* addImage(Image* image);

    public: void clear();

    public: void addRunnable(Runnable* runnable);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif

        #endif
    
