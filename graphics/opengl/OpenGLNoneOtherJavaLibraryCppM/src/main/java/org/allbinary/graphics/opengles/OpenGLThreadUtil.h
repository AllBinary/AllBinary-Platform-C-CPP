
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLTHREADUTIL_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLTHREADUTIL_H

            #include "../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLThreadUtil
            : public Object
         {

    private: static OpenGLThreadUtil instance() { return OpenGLThreadUtil(); }

    public: static OpenGLThreadUtil getInstance();

    public: void set(Object* glSurfaceView);

    public: void onPause();

    public: void onResume();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLTHREADUTIL_H
