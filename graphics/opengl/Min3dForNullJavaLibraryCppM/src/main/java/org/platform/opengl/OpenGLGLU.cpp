
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_PLATFORM_OPENGL_OPENGLGLU_CPP
        #define ORG_PLATFORM_OPENGL_OPENGLGLU_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/platform/opengl/OpenGLGLU.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

OpenGLGLU::OpenGLGLU() {
        }
        auto OpenGLGLU::instance_owner() -> OpenGLGLU* { static std::unique_ptr<OpenGLGLU> value(new OpenGLGLU()); return value.get(); }
OpenGLGLU* OpenGLGLU::instance = OpenGLGLU::instance_owner();

    auto OpenGLGLU::getInstance() -> OpenGLGLU*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return OpenGLGLU::instance;
    
}


    auto OpenGLGLU::gluLookAt(GL10* gl, float eyeX, float eyeY, float eyeZ, float centerX, float centerY, float centerZ, float upX, float upY, float upZ) -> void{



                            throw RuntimeException();
                    
}


    auto OpenGLGLU::gluProject(GL10* gl, float objX, float objY, float objZ, std::vector<float> model, int32_t modelOffset, std::vector<float> project, int32_t projectOffset, std::vector<int32_t> view, int32_t viewOffset, std::vector<float> win, int32_t winOffset) -> int32_t{



                            throw RuntimeException();
                    
}


    auto OpenGLGLU::gluUnProject(GL10* gl, float winX, float winY, float winZ, std::vector<float> model, int32_t modelOffset, std::vector<float> project, int32_t projectOffset, std::vector<int32_t> view, int32_t viewOffset, std::vector<float> obj, int32_t objOffset) -> int32_t{



                            throw RuntimeException();
                    
}


    auto OpenGLGLU::glFrustumf(GL10* gl, float lt, float rt, float btm, float top, float zNear, float zFar) -> void{



                            throw RuntimeException();
                    
}




        #endif //ORG_PLATFORM_OPENGL_OPENGLGLU_CPP
