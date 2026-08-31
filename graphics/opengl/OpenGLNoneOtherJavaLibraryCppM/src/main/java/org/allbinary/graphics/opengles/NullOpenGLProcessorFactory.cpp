
        /* Generated Code Do Not Modify */
        



            #include "../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "OpenGLProcessor.h"

class NullOpenGLProcessorFactory
            : public Object
         {
        

    private: static const instance: OpenGLProcessor = new OpenGLProcessor();

    public static OpenGLProcessor getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullOpenGLProcessorFactory.instance;
    
}


};

            

