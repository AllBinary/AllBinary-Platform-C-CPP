
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_DEVICE_OPENGLESNULLGRAPHICSFACTORY_CPP
        #define ORG_ALLBINARY_DEVICE_OPENGLESNULLGRAPHICSFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/device/OpenGLESNullGraphicsFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/device/OpenGLESGraphics.h"


OpenGLESNullGraphicsFactory::OpenGLESNullGraphicsFactory() {
        }
        auto OpenGLESNullGraphicsFactory::instance_owner() -> OpenGLESGraphics* { static std::unique_ptr<OpenGLESGraphics> value(new OpenGLESGraphics()); return value.get(); }
OpenGLESGraphics* OpenGLESNullGraphicsFactory::instance = OpenGLESNullGraphicsFactory::instance_owner();

    auto OpenGLESNullGraphicsFactory::getInstance() -> OpenGLESGraphics*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLESNullGraphicsFactory::instance;
    
}




        #endif //ORG_ALLBINARY_DEVICE_OPENGLESNULLGRAPHICSFACTORY_CPP
