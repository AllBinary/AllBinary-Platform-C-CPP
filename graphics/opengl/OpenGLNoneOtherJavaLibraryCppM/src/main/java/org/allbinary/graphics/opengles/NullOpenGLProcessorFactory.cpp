
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_NULLOPENGLPROCESSORFACTORY_CPP
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_NULLOPENGLPROCESSORFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/opengles/NullOpenGLProcessorFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/opengles/OpenGLProcessor.h"


NullOpenGLProcessorFactory::NullOpenGLProcessorFactory() {
        }
        auto NullOpenGLProcessorFactory::instance_owner() -> OpenGLProcessor* { static std::unique_ptr<OpenGLProcessor> value(new OpenGLProcessor()); return value.get(); }
OpenGLProcessor* NullOpenGLProcessorFactory::instance = NullOpenGLProcessorFactory::instance_owner();

    auto NullOpenGLProcessorFactory::getInstance() -> OpenGLProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NullOpenGLProcessorFactory::instance;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_NULLOPENGLPROCESSORFACTORY_CPP
