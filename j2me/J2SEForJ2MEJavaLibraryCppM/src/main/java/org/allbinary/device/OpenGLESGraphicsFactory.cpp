
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICSFACTORY_CPP
        #define ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICSFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/device/OpenGLESGraphicsFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/device/OpenGLESNullGraphicsFactory.h"
#include "org/allbinary/device/OpenGLESGraphics.h"


OpenGLESGraphicsFactory::OpenGLESGraphicsFactory() {
        }
        
    auto OpenGLESGraphicsFactory::getOpenGLESGraphicsInstance() -> OpenGLESGraphics*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLESNullGraphicsFactory::getInstance();;
    
}




        #endif //ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICSFACTORY_CPP
