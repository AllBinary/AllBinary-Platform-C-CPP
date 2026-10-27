
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/opengles/OpenGLProcessor.h"

class NullOpenGLProcessorFactory
            : public Object
         {

    private: static OpenGLProcessor* instance() { static std::unique_ptr<OpenGLProcessor> value(new OpenGLProcessor()); return value.get(); }

    public: static OpenGLProcessor* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullOpenGLProcessorFactory::instance();
    
}


};

            

