
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICSFACTORY_H
        #define ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICSFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class OpenGLESNullGraphicsFactory;
class OpenGLESGraphics;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OpenGLESGraphicsFactory
            : public virtual Object
         {


            
    public: OpenGLESGraphicsFactory();
        
    public: OpenGLESGraphics* getOpenGLESGraphicsInstance();

};

            


        #endif //ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICSFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICSFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICSFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/device/OpenGLESNullGraphicsFactory.h")
#include "org/allbinary/device/OpenGLESNullGraphicsFactory.h"
#endif
#if __has_include("org/allbinary/device/OpenGLESGraphics.h")
#include "org/allbinary/device/OpenGLESGraphics.h"
#endif

        #endif
    
