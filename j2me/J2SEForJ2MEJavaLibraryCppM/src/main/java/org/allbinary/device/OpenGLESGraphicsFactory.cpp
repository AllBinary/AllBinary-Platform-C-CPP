
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/device/OpenGLESNullGraphicsFactory.h"
#include "org/allbinary/device/OpenGLESGraphics.h"

class OpenGLESGraphicsFactory
            : public Object
         {

    public: OpenGLESGraphics* getOpenGLESGraphicsInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLESNullGraphicsFactory::getInstance();;
    
}


};

            

