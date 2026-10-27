
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_SCREENCAPTURENONEFACTORY_CPP
        #define ORG_ALLBINARY_GRAPHICS_SCREENCAPTURENONEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/ScreenCaptureNoneFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/ScreenCapture.h"


ScreenCaptureNoneFactory::ScreenCaptureNoneFactory() {
        }
        auto ScreenCaptureNoneFactory::instance_owner() -> ScreenCapture* { static std::unique_ptr<ScreenCapture> value(new ScreenCapture()); return value.get(); }
ScreenCapture* ScreenCaptureNoneFactory::instance = ScreenCaptureNoneFactory::instance_owner();

    auto ScreenCaptureNoneFactory::getInstance() -> ScreenCapture*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ScreenCaptureNoneFactory::instance;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_SCREENCAPTURENONEFACTORY_CPP
