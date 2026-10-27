
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
        



        #ifndef ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICSCOMPOSITEFACTORY_CPP
        #define ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICSCOMPOSITEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/device/OpenGLESGraphicsCompositeFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/device/OpenGLESGraphicsFactory.h"


OpenGLESGraphicsCompositeFactory::OpenGLESGraphicsCompositeFactory() : openGLESGraphicsFactory(new OpenGLESGraphicsFactory()) {
        }
        auto OpenGLESGraphicsCompositeFactory::instance_owner() -> OpenGLESGraphicsCompositeFactory* { static std::unique_ptr<OpenGLESGraphicsCompositeFactory> value(new OpenGLESGraphicsCompositeFactory()); return value.get(); }
OpenGLESGraphicsCompositeFactory* OpenGLESGraphicsCompositeFactory::instance = OpenGLESGraphicsCompositeFactory::instance_owner();

    auto OpenGLESGraphicsCompositeFactory::getInstance() -> OpenGLESGraphicsCompositeFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return OpenGLESGraphicsCompositeFactory::instance;
    
}


    auto OpenGLESGraphicsCompositeFactory::set(OpenGLESGraphicsFactory* openGLESGraphicsFactory) -> void{
this->openGLESGraphicsFactory= openGLESGraphicsFactory;
    
}


    auto OpenGLESGraphicsCompositeFactory::get() -> OpenGLESGraphicsFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->openGLESGraphicsFactory;
    
}




        #endif //ORG_ALLBINARY_DEVICE_OPENGLESGRAPHICSCOMPOSITEFACTORY_CPP
