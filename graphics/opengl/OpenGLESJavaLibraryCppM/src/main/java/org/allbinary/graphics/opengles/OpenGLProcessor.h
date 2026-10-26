
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLPROCESSOR_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLPROCESSOR_H

            #include "java/lang/Object.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLProcessor
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    public: void process(GL10 gl);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLPROCESSOR_H
