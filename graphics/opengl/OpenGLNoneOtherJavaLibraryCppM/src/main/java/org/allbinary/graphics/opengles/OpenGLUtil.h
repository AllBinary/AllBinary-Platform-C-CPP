
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLUTIL_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLUTIL_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Runnable.h"
        
#include <javax/microedition/lcdui/Image.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLUtil
            : public Object
         {

    private: static OpenGLUtil* instance() { static std::unique_ptr<OpenGLUtil> value(new OpenGLUtil()); return value.get(); }

    public: static OpenGLUtil* getInstance();

    public: Image* addImage(Image* image);

    public: void clear();

    public: void addRunnable(Runnable* runnable);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLUTIL_H
