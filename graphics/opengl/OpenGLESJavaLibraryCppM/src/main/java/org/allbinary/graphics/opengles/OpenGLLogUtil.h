
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLLOGUTIL_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLLOGUTIL_H

            #include "../../../../java/lang/Object.h"
        
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
        

    private: static const instance: OpenGLLogUtil = new OpenGLLogUtil();

    public static OpenGLLogUtil getInstance();

    private: const MAX_TEXTURE: string = " Max Texture Size: ";

    public logError(GL10 gl);

    private: const LOG_ERROR: string = "logError";

    private: const IMAGE: string = " Image: ";

    public logError(GL10 gl, Image image);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLLOGUTIL_H
