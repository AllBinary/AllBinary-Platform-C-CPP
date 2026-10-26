
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_DEVICE_OPENGLESNULLGRAPHICSFACTORY_H
        #define ORG_ALLBINARY_DEVICE_OPENGLESNULLGRAPHICSFACTORY_H

            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OpenGLESGraphics.h"

class OpenGLESNullGraphicsFactory
            : public Object
         {

    private: static OpenGLESGraphics instance() { return OpenGLESGraphics(); }

    public: static OpenGLESGraphics getInstance();

};

            


        #endif //ORG_ALLBINARY_DEVICE_OPENGLESNULLGRAPHICSFACTORY_H
