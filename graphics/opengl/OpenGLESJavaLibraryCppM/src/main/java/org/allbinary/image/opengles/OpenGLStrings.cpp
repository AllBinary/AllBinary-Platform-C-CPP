
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLSTRINGS_CPP
        #define ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLSTRINGS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/image/opengles/OpenGLStrings.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

OpenGLStrings::OpenGLStrings() {
        }
        auto OpenGLStrings::instance_owner() -> OpenGLStrings* { static std::unique_ptr<OpenGLStrings> value(new OpenGLStrings()); return value.get(); }
OpenGLStrings* OpenGLStrings::instance = OpenGLStrings::instance_owner();

    auto OpenGLStrings::getInstance() -> OpenGLStrings*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLStrings::instance;
    
}




        #endif //ORG_ALLBINARY_IMAGE_OPENGLES_OPENGLSTRINGS_CPP
