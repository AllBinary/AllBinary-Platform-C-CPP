
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_NULLOPENGLPROCESSORFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_NULLOPENGLPROCESSORFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class OpenGLProcessor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullOpenGLProcessorFactory
            : public virtual Object
         {

    private: static OpenGLProcessor* instance_owner();
    private: static OpenGLProcessor* instance;

    public: static OpenGLProcessor* getInstance();


            
    public: NullOpenGLProcessorFactory();
        
};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_NULLOPENGLPROCESSORFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_OPENGLES_NULLOPENGLPROCESSORFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_NULLOPENGLPROCESSORFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/graphics/opengles/OpenGLProcessor.h")
#include "org/allbinary/graphics/opengles/OpenGLProcessor.h"
#endif

        #endif
    
