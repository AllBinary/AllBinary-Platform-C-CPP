
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLLOGUTIL_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLLOGUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class GL10;
class Image;
class OpenGLStrings;
class StringMaker;
class ForcedLogUtil;
class PreLogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OpenGLLogUtil
            : public virtual Object
         {

    private: static OpenGLLogUtil* instance_owner();
    private: static OpenGLLogUtil* instance;

    public: static OpenGLLogUtil* getInstance();


            
    public: OpenGLLogUtil();
        
    private: const std::string MAX_TEXTURE = " Max Texture Size: ";

    public: void logError(GL10* gl);

    private: const std::string LOG_ERROR = "logError";

    private: const std::string IMAGE = " Image: ";

    public: void logError(GL10* gl, Image* image);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLLOGUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLLOGUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLLOGUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/image/opengles/OpenGLStrings.h>)
#include <org/allbinary/image/opengles/OpenGLStrings.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif

        #endif
    
