
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_OPENGLES_NULLOPENGLPROCESSORFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_OPENGLES_NULLOPENGLPROCESSORFACTORY_H

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

    public: static OpenGLProcessor* getInstance();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_OPENGLES_NULLOPENGLPROCESSORFACTORY_H
