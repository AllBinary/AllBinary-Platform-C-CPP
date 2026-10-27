
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/device/OpenGLESGraphics.h"

class OpenGLESNullGraphicsFactory
            : public Object
         {

    private: static OpenGLESGraphics* instance() { static std::unique_ptr<OpenGLESGraphics> value(new OpenGLESGraphics()); return value.get(); }

    public: static OpenGLESGraphics* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLESNullGraphicsFactory::instance();
    
}


};

            

