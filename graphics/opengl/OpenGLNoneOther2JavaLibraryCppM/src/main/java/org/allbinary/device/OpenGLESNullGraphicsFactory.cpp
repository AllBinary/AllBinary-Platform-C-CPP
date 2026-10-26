
        /* Generated Code Do Not Modify */
        



            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OpenGLESGraphics.h"

class OpenGLESNullGraphicsFactory
            : public Object
         {

    private: static OpenGLESGraphics instance() { return OpenGLESGraphics(); }

    public: static OpenGLESGraphics getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLESNullGraphicsFactory::instance();
    
}


};

            

