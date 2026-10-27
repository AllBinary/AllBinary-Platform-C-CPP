
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *   
                *  Created By: Travis Berthelot    
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICSCOMPOSITEFACTORY_H
        #define ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICSCOMPOSITEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class OpenGLESGraphicsFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OpenGLESGraphicsCompositeFactory
            : public virtual Object
         {

    private: static OpenGLESGraphicsCompositeFactory* instance_owner();
    private: static OpenGLESGraphicsCompositeFactory* instance;

    public: static OpenGLESGraphicsCompositeFactory* getInstance();


            
    public: OpenGLESGraphicsCompositeFactory();
        
    private: OpenGLESGraphicsFactory* openGLESGraphicsFactory;

    public: void set(OpenGLESGraphicsFactory* openGLESGraphicsFactory);

    public: OpenGLESGraphicsFactory* get();

};

            


        #endif //ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICSCOMPOSITEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICSCOMPOSITEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICSCOMPOSITEFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/device/OpenGLESGraphicsFactory.h")
#include "org/allbinary/device/OpenGLESGraphicsFactory.h"
#endif

        #endif
    
