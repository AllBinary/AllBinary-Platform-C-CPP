
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLLOGUTIL_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLLOGUTIL_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/image/opengles/OpenGLStrings.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLLogUtil
            : public Object
         {

    private: static OpenGLLogUtil* instance() { static std::unique_ptr<OpenGLLogUtil> value(new OpenGLLogUtil()); return value.get(); }

    public: static OpenGLLogUtil* getInstance();

    private: const std::string MAX_TEXTURE = " Max Texture Size: ";

    public: void logError(GL10* gl);

    private: const std::string LOG_ERROR = "logError";

    private: const std::string IMAGE = " Image: ";

    public: void logError(GL10* gl, Image* image);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLLOGUTIL_H
