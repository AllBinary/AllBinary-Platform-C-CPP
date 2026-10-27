
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_PLATFORM_OPENGL_OPENGLGLU_H
        #define ORG_PLATFORM_OPENGL_OPENGLGLU_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
class GL10;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OpenGLGLU
            : public virtual Object
         {

    private: static OpenGLGLU* instance_owner();
    private: static OpenGLGLU* instance;

    public: static OpenGLGLU* getInstance();


            
    public: OpenGLGLU();
        
    public: void gluLookAt(GL10* gl, float eyeX, float eyeY, float eyeZ, float centerX, float centerY, float centerZ, float upX, float upY, float upZ);

    public: int32_t gluProject(GL10* gl, float objX, float objY, float objZ, std::vector<float> model, int32_t modelOffset, std::vector<float> project, int32_t projectOffset, std::vector<int32_t> view, int32_t viewOffset, std::vector<float> win, int32_t winOffset);

    public: int32_t gluUnProject(GL10* gl, float winX, float winY, float winZ, std::vector<float> model, int32_t modelOffset, std::vector<float> project, int32_t projectOffset, std::vector<int32_t> view, int32_t viewOffset, std::vector<float> obj, int32_t objOffset);

    public: void glFrustumf(GL10* gl, float lt, float rt, float btm, float top, float zNear, float zFar);

};

            


        #endif //ORG_PLATFORM_OPENGL_OPENGLGLU_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_PLATFORM_OPENGL_OPENGLGLU_H_COMPLETE)
        #define ORG_PLATFORM_OPENGL_OPENGLGLU_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif

        #endif
    
