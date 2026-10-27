
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLTHREADUTIL_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLTHREADUTIL_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLThreadUtil
            : public Object
         {

    private: static OpenGLThreadUtil* instance() { static std::unique_ptr<OpenGLThreadUtil> value(new OpenGLThreadUtil()); return value.get(); }

    public: static OpenGLThreadUtil* getInstance();

    public: void set(Object* glSurfaceView);

    public: void onPause();

    public: void onResume();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLTHREADUTIL_H
