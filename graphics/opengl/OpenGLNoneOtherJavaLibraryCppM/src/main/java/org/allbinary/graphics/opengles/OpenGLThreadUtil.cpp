
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLTHREADUTIL_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLTHREADUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/OpenGLThreadUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

OpenGLThreadUtil::OpenGLThreadUtil() {
        }
        auto OpenGLThreadUtil::instance_owner() -> OpenGLThreadUtil* { static std::unique_ptr<OpenGLThreadUtil> value(new OpenGLThreadUtil()); return value.get(); }
OpenGLThreadUtil* OpenGLThreadUtil::instance = OpenGLThreadUtil::instance_owner();

    auto OpenGLThreadUtil::getInstance() -> OpenGLThreadUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return OpenGLThreadUtil::instance;
    
}


    auto OpenGLThreadUtil::set(Object* glSurfaceView) -> void{
}


    auto OpenGLThreadUtil::onPause() -> void{
}


    auto OpenGLThreadUtil::onResume() -> void{
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_OPENGLTHREADUTIL_CPP
