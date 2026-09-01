
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_PLATFORM_OPENGL_OPENGLGLU_H
        #define ORG_PLATFORM_OPENGL_OPENGLGLU_H

            #include <vector>
        
            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/RuntimeException.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OpenGLGLU
            : public Object
         {

    private: static OpenGLGLU instance() { return OpenGLGLU(); }

    public: static OpenGLGLU getInstance();

    public: void gluLookAt(GL10 gl, float eyeX, float eyeY, float eyeZ, float centerX, float centerY, float centerZ, float upX, float upY, float upZ);

    public: int32_t gluProject(GL10 gl, float objX, float objY, float objZ, std::vector<float> model, int32_t modelOffset, std::vector<float> project, int32_t projectOffset, std::vector<int32_t> view, int32_t viewOffset, std::vector<float> win, int32_t winOffset);

    public: int32_t gluUnProject(GL10 gl, float winX, float winY, float winZ, std::vector<float> model, int32_t modelOffset, std::vector<float> project, int32_t projectOffset, std::vector<int32_t> view, int32_t viewOffset, std::vector<float> obj, int32_t objOffset);

    public: void glFrustumf(GL10 gl, float lt, float rt, float btm, float top, float zNear, float zFar);

};

            


        #endif //ORG_PLATFORM_OPENGL_OPENGLGLU_H
