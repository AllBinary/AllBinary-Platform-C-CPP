
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
        



        #ifndef JAVAX_MICROEDITION_LCDUI_PRELOADPLATFORMIMAGE_CPP
        #define JAVAX_MICROEDITION_LCDUI_PRELOADPLATFORMIMAGE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "javax/microedition/lcdui/PreLoadPlatformImage.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "javax/microedition/lcdui/PlatformImage.h"
//PlatformNullImageJavaLibrary

PreLoadPlatformImage::PreLoadPlatformImage() {
        }
        auto PreLoadPlatformImage::instance_owner() -> PreLoadPlatformImage* { static std::unique_ptr<PreLoadPlatformImage> value(new PreLoadPlatformImage()); return value.get(); }
PreLoadPlatformImage* PreLoadPlatformImage::instance = PreLoadPlatformImage::instance_owner();

    auto PreLoadPlatformImage::getInstance() -> PreLoadPlatformImage*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PreLoadPlatformImage::instance;
    
}




        #endif //JAVAX_MICROEDITION_LCDUI_PRELOADPLATFORMIMAGE_CPP
